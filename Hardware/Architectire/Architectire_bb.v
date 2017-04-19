
module Architectire (
	clk_clk,
	clockbridge_out_clk,
	controlsignal_export,
	dcfifo_csr_address,
	dcfifo_csr_read,
	dcfifo_csr_write,
	dcfifo_csr_readdata,
	dcfifo_csr_writedata,
	dcfifo_out_data,
	dcfifo_out_valid,
	dcfifo_out_ready,
	dcfifo_out_startofpacket,
	dcfifo_out_endofpacket,
	pciexpress_clocks_sim_clk250_export,
	pciexpress_clocks_sim_clk500_export,
	pciexpress_clocks_sim_clk125_export,
	pciexpress_pipe_ext_pipe_mode,
	pciexpress_pipe_ext_phystatus_ext,
	pciexpress_pipe_ext_rate_ext,
	pciexpress_pipe_ext_powerdown_ext,
	pciexpress_pipe_ext_txdetectrx_ext,
	pciexpress_pipe_ext_rxelecidle0_ext,
	pciexpress_pipe_ext_rxdata0_ext,
	pciexpress_pipe_ext_rxstatus0_ext,
	pciexpress_pipe_ext_rxvalid0_ext,
	pciexpress_pipe_ext_rxdatak0_ext,
	pciexpress_pipe_ext_txdata0_ext,
	pciexpress_pipe_ext_txdatak0_ext,
	pciexpress_pipe_ext_rxpolarity0_ext,
	pciexpress_pipe_ext_txcompl0_ext,
	pciexpress_pipe_ext_txelecidle0_ext,
	pciexpress_powerdown_pll_powerdown,
	pciexpress_powerdown_gxb_powerdown,
	pciexpress_reconfig_busy_busy_altgxb_reconfig,
	pciexpress_reconfig_fromgxb_0_data,
	pciexpress_reconfig_togxb_data,
	pciexpress_refclk_export,
	pciexpress_rstn_export,
	pciexpress_rx_in_rx_datain_0,
	pciexpress_test_in_test_in,
	pciexpress_tx_out_tx_dataout_0,
	reset_reset_n,
	response_export);	

	input		clk_clk;
	output		clockbridge_out_clk;
	output		controlsignal_export;
	input		dcfifo_csr_address;
	input		dcfifo_csr_read;
	input		dcfifo_csr_write;
	output	[31:0]	dcfifo_csr_readdata;
	input	[31:0]	dcfifo_csr_writedata;
	output	[31:0]	dcfifo_out_data;
	output		dcfifo_out_valid;
	input		dcfifo_out_ready;
	output		dcfifo_out_startofpacket;
	output		dcfifo_out_endofpacket;
	output		pciexpress_clocks_sim_clk250_export;
	output		pciexpress_clocks_sim_clk500_export;
	output		pciexpress_clocks_sim_clk125_export;
	input		pciexpress_pipe_ext_pipe_mode;
	input		pciexpress_pipe_ext_phystatus_ext;
	output		pciexpress_pipe_ext_rate_ext;
	output	[1:0]	pciexpress_pipe_ext_powerdown_ext;
	output		pciexpress_pipe_ext_txdetectrx_ext;
	input		pciexpress_pipe_ext_rxelecidle0_ext;
	input	[7:0]	pciexpress_pipe_ext_rxdata0_ext;
	input	[2:0]	pciexpress_pipe_ext_rxstatus0_ext;
	input		pciexpress_pipe_ext_rxvalid0_ext;
	input		pciexpress_pipe_ext_rxdatak0_ext;
	output	[7:0]	pciexpress_pipe_ext_txdata0_ext;
	output		pciexpress_pipe_ext_txdatak0_ext;
	output		pciexpress_pipe_ext_rxpolarity0_ext;
	output		pciexpress_pipe_ext_txcompl0_ext;
	output		pciexpress_pipe_ext_txelecidle0_ext;
	input		pciexpress_powerdown_pll_powerdown;
	input		pciexpress_powerdown_gxb_powerdown;
	input		pciexpress_reconfig_busy_busy_altgxb_reconfig;
	output	[4:0]	pciexpress_reconfig_fromgxb_0_data;
	input	[3:0]	pciexpress_reconfig_togxb_data;
	input		pciexpress_refclk_export;
	input		pciexpress_rstn_export;
	input		pciexpress_rx_in_rx_datain_0;
	input	[39:0]	pciexpress_test_in_test_in;
	output		pciexpress_tx_out_tx_dataout_0;
	input		reset_reset_n;
	input	[10:0]	response_export;
endmodule
