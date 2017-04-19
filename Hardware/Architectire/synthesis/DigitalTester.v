 module DigitalTester(
	/////////CLOCK/////////
	CLOCK_50,
	
	/////////GPIO/////////
	GPIO,
	
	/////////PCIE/////////
	PCIE_PERST_N,
	PCIE_REFCLK_P,
	PCIE_RX_P,
	PCIE_TX_P,
	PCIE_WAKE_N,
);
//=======================================================
//  PORT declarations
//=======================================================

///////// CLOCK /////////
input	CLOCK_50;

///////// GPIO /////////
output reg	[35:0]	GPIO;

///////// PCIE /////////
input				PCIE_PERST_N;
input				PCIE_REFCLK_P;
input		[0:0]	PCIE_RX_P;
output	[0:0]	PCIE_TX_P;
output			PCIE_WAKE_N;

//=======================================================
//  REG/WIRE declarations
//=======================================================

wire reset_n;

wire			FIFO_csr_read;
wire [31:0]	FIFO_csr_readdata;
wire [31:0]	FIFO_out_data;
wire			FIFO_out_valid;
reg			FIFO_out_ready;

wire			ControlSignal_out;
wire			Response_in;
wire			ClockBridge_clk;
		  
//=======================================================
//  Structural coding
//=======================================================

    Architectire Unit(
        .clk_clk                                (CLOCK_50),
        .reset_reset_n                          (reset_n),
        .pciexpress_refclk_export               (PCIE_REFCLK_P),
        .pciexpress_rstn_export                 (PCIE_PERST_N),
        .pciexpress_rx_in_rx_datain_0				(PCIE_RX_P[0]),
        .pciexpress_tx_out_tx_dataout_0			(PCIE_TX_P[0]),
		  
		  .dcfifo_csr_read								(FIFO_csr_read),
		  .dcfifo_csr_readdata							(FIFO_csr_readdata[31:0]),
		  .dcfifo_out_data								(FIFO_out_data[31:0]),
		  .dcfifo_out_valid								(FIFO_out_valid),
		  .dcfifo_out_ready								(FIFO_out_ready),
		  .controlsignal_export							(ControlSignal_out),
		  .response_export								(Response_in),
		  .clockbridge_out_clk							(ClockBridge_clk)
    );
	 
	assign reset_n = 1'b1;
	assign PCIE_WAKE_N = 1'b1;	 // 07/30/2013, pull-high to avoid system reboot after power off
	assign FIFO_csr_read = 1'b1;
	
	assign Response_in = FIFO_csr_readdata ? 1'b1 : 1'b0;
	
	always@(posedge ClockBridge_clk)
	begin
		//FIFO is empty
		if(FIFO_csr_readdata == 0)
		begin
			GPIO[0] <= 1'b0;
			FIFO_out_ready <= 1'b0;
		end
		//Ready to pop out data
		else if(ControlSignal_out)
		begin
			GPIO[0] <= 1'b1;
			FIFO_out_ready <= 1'b1;
			if(FIFO_out_valid)begin GPIO[31:1] <= FIFO_out_data; end
		end
	end
	
endmodule
