 /*                                                                      
 Copyright 2018 Nuclei System Technology, Inc.                
                                                                         
 Licensed under the Apache License, Version 2.0 (the "License");         
 you may not use this file except in compliance with the License.        
 You may obtain a copy of the License at                                 
                                                                         
     http://www.apache.org/licenses/LICENSE-2.0                          
                                                                         
  Unless required by applicable law or agreed to in writing, software    
 distributed under the License is distributed on an "AS IS" BASIS,       
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and     
 limitations under the License.                                          
 */                                                                      
                                                                         
                                                                         
                                                                         
//=====================================================================
// Designer   : Bob Hu
//
// Description:
//  The ITCM-SRAM module to implement ITCM SRAM
//
// ====================================================================

`include "e203_defines.v"

  `ifdef E203_HAS_ITCM //{
module e203_itcm_ram(

  input                              sd,
  input                              ds,
  input                              ls,

  input                              cs,  
  input                              we,  
  input  [`E203_ITCM_RAM_AW-1:0]     addr, 
  input  [`E203_ITCM_RAM_MW-1:0]     wem,
  input  [`E203_ITCM_RAM_DW-1:0]     din,          
  output [`E203_ITCM_RAM_DW-1:0]     dout,

  input                              rst_n,
  input                              clk,

  output [`E203_XLEN-1:0] mtvec_trap_data,
  input [`E203_XLEN-1:0] mtvec_trap_addr,

  input [`E203_XLEN-1:0] mtvec_trap_addr_af,
  input [`E203_XLEN-1:0] mtvec_trap_addr_bf,
  input                  bftail_trap,
  input                  aftail_trap,
  output [64-1:0]        ir_bf,
  output [`E203_XLEN-1:0] mtvec_trap_data_bf,
  output [`E203_XLEN-1:0] mtvec_trap_data_af

);


wire irq_regsave;
wire irq_i;
wire irq_ra_i;

wire clk_nts;
wire cs_nts;  
wire we_nts;

wire   [`E203_NTS_RAM_AW-1:0] addr_nts; 
wire   [`E203_NTS_RAM_MW-1:0] wem_nts;
wire   [`E203_NTS_RAM_DW-1:0] din_nts;       
wire   [`E203_NTS_RAM_DW-1:0] dout_nts;
wire                          test_clk;
wire                          mret2ram;

assign test_clk    = 'h0;
assign irq_regsave = 'h0;
assign irq_i       = 'h0;
assign irq_ra_i    = 'h0;

assign clk_nts     = 'h0;
assign cs_nts      = 'h0;
assign we_nts      = 'h0;

assign addr_nts    = 'h0;
assign wem_nts     = 'h0;
assign din_nts     = 'h0;
assign dout_nts    = 'h0;
assign mret2ram    = 'h0;

  sirv_gnrl_ram #(
    .FORCE_X2ZERO(0),
    .DP(`E203_ITCM_RAM_DP),
    .DW(`E203_ITCM_RAM_DW),
    .MW(`E203_ITCM_RAM_MW),
    .AW(`E203_ITCM_RAM_AW), 

    .AWnts(`E203_NTS_RAM_AW),
    .DWnts(`E203_NTS_RAM_DW),
    .MWnts(`E203_NTS_RAM_MW)

  ) u_e203_itcm_gnrl_ram(
  .sd  (sd  ),
  .ds  (ds  ),
  .ls  (ls  ),

  .rst_n (rst_n ),
  .clk (clk     ),
  .cs  (cs      ),
  .we  (we      ),
  .addr(addr    ),
  .din (din     ),
  .wem (wem     ),
  .dout(dout    ),
  
  .mret2ram        (mret2ram   ),

  .irq_i           (irq_i      ),
  .irq_ra_i        (irq_ra_i   ),
  .irq_s_reg_done  (irq_regsave),

  .clk_nts         (clk_nts  ),
  .cs_nts          (cs_nts   ),  
  .we_nts          (we_nts   ),  
  .addr_nts        (addr_nts ), 
  .wem_nts         (wem_nts  ),
  .din_nts         (din_nts  ),          
  .dout_nts        (dout_nts ),

  .mtvec_trap_data      (mtvec_trap_data    ),
  .mtvec_trap_addr      (mtvec_trap_addr    ),
  .mtvec_trap_addr_bf   (mtvec_trap_addr_bf ),
  .mtvec_trap_addr_af   (mtvec_trap_addr_af ),
  .bftail_trap          (bftail_trap        ),
  .aftail_trap          (aftail_trap        ),
  .mtvec_trap_data_bf   (mtvec_trap_data_bf ),
  .mtvec_trap_data_af   (mtvec_trap_data_af ),
  .ir_bf                (ir_bf              ),
  .test_clk             (test_clk           )
  
  );

                                                      
endmodule
  `endif//}
