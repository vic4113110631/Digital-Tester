	component Architectire is
		port (
			clk_clk                                       : in  std_logic                     := 'X';             -- clk
			clockbridge_out_clk                           : out std_logic;                                        -- clk
			controlsignal_export                          : out std_logic;                                        -- export
			dcfifo_csr_address                            : in  std_logic                     := 'X';             -- address
			dcfifo_csr_read                               : in  std_logic                     := 'X';             -- read
			dcfifo_csr_write                              : in  std_logic                     := 'X';             -- write
			dcfifo_csr_readdata                           : out std_logic_vector(31 downto 0);                    -- readdata
			dcfifo_csr_writedata                          : in  std_logic_vector(31 downto 0) := (others => 'X'); -- writedata
			dcfifo_out_data                               : out std_logic_vector(31 downto 0);                    -- data
			dcfifo_out_valid                              : out std_logic;                                        -- valid
			dcfifo_out_ready                              : in  std_logic                     := 'X';             -- ready
			dcfifo_out_startofpacket                      : out std_logic;                                        -- startofpacket
			dcfifo_out_endofpacket                        : out std_logic;                                        -- endofpacket
			pciexpress_clocks_sim_clk250_export           : out std_logic;                                        -- clk250_export
			pciexpress_clocks_sim_clk500_export           : out std_logic;                                        -- clk500_export
			pciexpress_clocks_sim_clk125_export           : out std_logic;                                        -- clk125_export
			pciexpress_pipe_ext_pipe_mode                 : in  std_logic                     := 'X';             -- pipe_mode
			pciexpress_pipe_ext_phystatus_ext             : in  std_logic                     := 'X';             -- phystatus_ext
			pciexpress_pipe_ext_rate_ext                  : out std_logic;                                        -- rate_ext
			pciexpress_pipe_ext_powerdown_ext             : out std_logic_vector(1 downto 0);                     -- powerdown_ext
			pciexpress_pipe_ext_txdetectrx_ext            : out std_logic;                                        -- txdetectrx_ext
			pciexpress_pipe_ext_rxelecidle0_ext           : in  std_logic                     := 'X';             -- rxelecidle0_ext
			pciexpress_pipe_ext_rxdata0_ext               : in  std_logic_vector(7 downto 0)  := (others => 'X'); -- rxdata0_ext
			pciexpress_pipe_ext_rxstatus0_ext             : in  std_logic_vector(2 downto 0)  := (others => 'X'); -- rxstatus0_ext
			pciexpress_pipe_ext_rxvalid0_ext              : in  std_logic                     := 'X';             -- rxvalid0_ext
			pciexpress_pipe_ext_rxdatak0_ext              : in  std_logic                     := 'X';             -- rxdatak0_ext
			pciexpress_pipe_ext_txdata0_ext               : out std_logic_vector(7 downto 0);                     -- txdata0_ext
			pciexpress_pipe_ext_txdatak0_ext              : out std_logic;                                        -- txdatak0_ext
			pciexpress_pipe_ext_rxpolarity0_ext           : out std_logic;                                        -- rxpolarity0_ext
			pciexpress_pipe_ext_txcompl0_ext              : out std_logic;                                        -- txcompl0_ext
			pciexpress_pipe_ext_txelecidle0_ext           : out std_logic;                                        -- txelecidle0_ext
			pciexpress_powerdown_pll_powerdown            : in  std_logic                     := 'X';             -- pll_powerdown
			pciexpress_powerdown_gxb_powerdown            : in  std_logic                     := 'X';             -- gxb_powerdown
			pciexpress_reconfig_busy_busy_altgxb_reconfig : in  std_logic                     := 'X';             -- busy_altgxb_reconfig
			pciexpress_reconfig_fromgxb_0_data            : out std_logic_vector(4 downto 0);                     -- data
			pciexpress_reconfig_togxb_data                : in  std_logic_vector(3 downto 0)  := (others => 'X'); -- data
			pciexpress_refclk_export                      : in  std_logic                     := 'X';             -- export
			pciexpress_rstn_export                        : in  std_logic                     := 'X';             -- export
			pciexpress_rx_in_rx_datain_0                  : in  std_logic                     := 'X';             -- rx_datain_0
			pciexpress_test_in_test_in                    : in  std_logic_vector(39 downto 0) := (others => 'X'); -- test_in
			pciexpress_tx_out_tx_dataout_0                : out std_logic;                                        -- tx_dataout_0
			reset_reset_n                                 : in  std_logic                     := 'X';             -- reset_n
			response_export                               : in  std_logic_vector(10 downto 0) := (others => 'X')  -- export
		);
	end component Architectire;

	u0 : component Architectire
		port map (
			clk_clk                                       => CONNECTED_TO_clk_clk,                                       --                           clk.clk
			clockbridge_out_clk                           => CONNECTED_TO_clockbridge_out_clk,                           --               clockbridge_out.clk
			controlsignal_export                          => CONNECTED_TO_controlsignal_export,                          --                 controlsignal.export
			dcfifo_csr_address                            => CONNECTED_TO_dcfifo_csr_address,                            --                    dcfifo_csr.address
			dcfifo_csr_read                               => CONNECTED_TO_dcfifo_csr_read,                               --                              .read
			dcfifo_csr_write                              => CONNECTED_TO_dcfifo_csr_write,                              --                              .write
			dcfifo_csr_readdata                           => CONNECTED_TO_dcfifo_csr_readdata,                           --                              .readdata
			dcfifo_csr_writedata                          => CONNECTED_TO_dcfifo_csr_writedata,                          --                              .writedata
			dcfifo_out_data                               => CONNECTED_TO_dcfifo_out_data,                               --                    dcfifo_out.data
			dcfifo_out_valid                              => CONNECTED_TO_dcfifo_out_valid,                              --                              .valid
			dcfifo_out_ready                              => CONNECTED_TO_dcfifo_out_ready,                              --                              .ready
			dcfifo_out_startofpacket                      => CONNECTED_TO_dcfifo_out_startofpacket,                      --                              .startofpacket
			dcfifo_out_endofpacket                        => CONNECTED_TO_dcfifo_out_endofpacket,                        --                              .endofpacket
			pciexpress_clocks_sim_clk250_export           => CONNECTED_TO_pciexpress_clocks_sim_clk250_export,           --         pciexpress_clocks_sim.clk250_export
			pciexpress_clocks_sim_clk500_export           => CONNECTED_TO_pciexpress_clocks_sim_clk500_export,           --                              .clk500_export
			pciexpress_clocks_sim_clk125_export           => CONNECTED_TO_pciexpress_clocks_sim_clk125_export,           --                              .clk125_export
			pciexpress_pipe_ext_pipe_mode                 => CONNECTED_TO_pciexpress_pipe_ext_pipe_mode,                 --           pciexpress_pipe_ext.pipe_mode
			pciexpress_pipe_ext_phystatus_ext             => CONNECTED_TO_pciexpress_pipe_ext_phystatus_ext,             --                              .phystatus_ext
			pciexpress_pipe_ext_rate_ext                  => CONNECTED_TO_pciexpress_pipe_ext_rate_ext,                  --                              .rate_ext
			pciexpress_pipe_ext_powerdown_ext             => CONNECTED_TO_pciexpress_pipe_ext_powerdown_ext,             --                              .powerdown_ext
			pciexpress_pipe_ext_txdetectrx_ext            => CONNECTED_TO_pciexpress_pipe_ext_txdetectrx_ext,            --                              .txdetectrx_ext
			pciexpress_pipe_ext_rxelecidle0_ext           => CONNECTED_TO_pciexpress_pipe_ext_rxelecidle0_ext,           --                              .rxelecidle0_ext
			pciexpress_pipe_ext_rxdata0_ext               => CONNECTED_TO_pciexpress_pipe_ext_rxdata0_ext,               --                              .rxdata0_ext
			pciexpress_pipe_ext_rxstatus0_ext             => CONNECTED_TO_pciexpress_pipe_ext_rxstatus0_ext,             --                              .rxstatus0_ext
			pciexpress_pipe_ext_rxvalid0_ext              => CONNECTED_TO_pciexpress_pipe_ext_rxvalid0_ext,              --                              .rxvalid0_ext
			pciexpress_pipe_ext_rxdatak0_ext              => CONNECTED_TO_pciexpress_pipe_ext_rxdatak0_ext,              --                              .rxdatak0_ext
			pciexpress_pipe_ext_txdata0_ext               => CONNECTED_TO_pciexpress_pipe_ext_txdata0_ext,               --                              .txdata0_ext
			pciexpress_pipe_ext_txdatak0_ext              => CONNECTED_TO_pciexpress_pipe_ext_txdatak0_ext,              --                              .txdatak0_ext
			pciexpress_pipe_ext_rxpolarity0_ext           => CONNECTED_TO_pciexpress_pipe_ext_rxpolarity0_ext,           --                              .rxpolarity0_ext
			pciexpress_pipe_ext_txcompl0_ext              => CONNECTED_TO_pciexpress_pipe_ext_txcompl0_ext,              --                              .txcompl0_ext
			pciexpress_pipe_ext_txelecidle0_ext           => CONNECTED_TO_pciexpress_pipe_ext_txelecidle0_ext,           --                              .txelecidle0_ext
			pciexpress_powerdown_pll_powerdown            => CONNECTED_TO_pciexpress_powerdown_pll_powerdown,            --          pciexpress_powerdown.pll_powerdown
			pciexpress_powerdown_gxb_powerdown            => CONNECTED_TO_pciexpress_powerdown_gxb_powerdown,            --                              .gxb_powerdown
			pciexpress_reconfig_busy_busy_altgxb_reconfig => CONNECTED_TO_pciexpress_reconfig_busy_busy_altgxb_reconfig, --      pciexpress_reconfig_busy.busy_altgxb_reconfig
			pciexpress_reconfig_fromgxb_0_data            => CONNECTED_TO_pciexpress_reconfig_fromgxb_0_data,            -- pciexpress_reconfig_fromgxb_0.data
			pciexpress_reconfig_togxb_data                => CONNECTED_TO_pciexpress_reconfig_togxb_data,                --     pciexpress_reconfig_togxb.data
			pciexpress_refclk_export                      => CONNECTED_TO_pciexpress_refclk_export,                      --             pciexpress_refclk.export
			pciexpress_rstn_export                        => CONNECTED_TO_pciexpress_rstn_export,                        --               pciexpress_rstn.export
			pciexpress_rx_in_rx_datain_0                  => CONNECTED_TO_pciexpress_rx_in_rx_datain_0,                  --              pciexpress_rx_in.rx_datain_0
			pciexpress_test_in_test_in                    => CONNECTED_TO_pciexpress_test_in_test_in,                    --            pciexpress_test_in.test_in
			pciexpress_tx_out_tx_dataout_0                => CONNECTED_TO_pciexpress_tx_out_tx_dataout_0,                --             pciexpress_tx_out.tx_dataout_0
			reset_reset_n                                 => CONNECTED_TO_reset_reset_n,                                 --                         reset.reset_n
			response_export                               => CONNECTED_TO_response_export                                --                      response.export
		);

