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
//
// Designer   : Bob Hu
//
// Description:
//  The DTCM-SRAM module to implement DTCM SRAM
//
// ====================================================================
`include "e203_defines.v"

  `ifdef E203_HAS_DTCM //{


module e203_dtcm_ram(

  input                              sd,
  input                              ds,
  input                              ls,

  input                              cs,  
  input                              we,  
  input  [`E203_DTCM_RAM_AW-1:0]     addr, 
  input  [`E203_DTCM_RAM_MW-1:0]     wem,
  input  [`E203_DTCM_RAM_DW-1:0]     din,          
  output [`E203_DTCM_RAM_DW-1:0]     dout,
  
  input                              rst_n,
  input                              clk,

  input                              irq_i,
  input                              irq_ra_i,
  output                             irq_regsave,

  input                              clk_nts,
  input                              cs_nts,  
  input                              we_nts,  
  input  [`E203_NTS_RAM_AW-1:0]      addr_nts, 
  input  [`E203_NTS_RAM_MW-1:0]      wem_nts,
  input  [`E203_NTS_RAM_DW-1:0]      din_nts,          
  output [`E203_NTS_RAM_DW-1:0]      dout_nts,
  input                              mret2ram,
  input                              test_clk

);
wire [`E203_XLEN-1:0] mtvec_trap_data;
wire [`E203_XLEN-1:0] mtvec_trap_addr;
assign mtvec_trap_addr = 'h0;

wire  [`E203_XLEN-1:0] mtvec_trap_addr_af;
wire  [`E203_XLEN-1:0] mtvec_trap_addr_bf;
wire bftail_trap;
wire aftail_trap;
wire ir_bf;
wire [`E203_XLEN-1:0] mtvec_trap_data_bf;
wire [`E203_XLEN-1:0] mtvec_trap_data_af;
assign mtvec_trap_addr_bf = 'b0;
assign mtvec_trap_addr_af = 'b0;
assign bftail_trap = 'b0;
assign aftail_trap = 'b0;

  sirv_gnrl_ram #(
    .FORCE_X2ZERO(1),//Always force X to zeros
    .DP(`E203_DTCM_RAM_DP),
    .DW(`E203_DTCM_RAM_DW),
    .MW(`E203_DTCM_RAM_MW),
    .AW(`E203_DTCM_RAM_AW),

    .AWnts(`E203_NTS_RAM_AW),
    .DWnts(`E203_NTS_RAM_DW),
    .MWnts(`E203_NTS_RAM_MW)

  ) u_e203_dtcm_gnrl_ram(
  .sd  (sd  ),
  .ds  (ds  ),
  .ls  (ls  ),

  .rst_n (rst_n ),
  .clk (clk ),
  .cs  (cs  ),
  .we  (we  ),
  .addr(addr),
  .din (din ),
  .wem (wem ),
  .dout(dout),

  .mret2ram       (mret2ram   ),

  .irq_i          (irq_i      ),
  .irq_ra_i       (irq_ra_i   ),
  .irq_s_reg_done (irq_regsave),

  .clk_nts        (clk_nts    ),
  .cs_nts         (cs_nts     ),  
  .we_nts         (we_nts     ),  
  .addr_nts       (addr_nts   ), 
  .wem_nts        (wem_nts    ),
  .din_nts        (din_nts    ),          
  .dout_nts       (dout_nts   ),

  .mtvec_trap_data    (mtvec_trap_data   ),
  .mtvec_trap_addr    (mtvec_trap_addr   ),
  .mtvec_trap_addr_bf (mtvec_trap_addr_bf),
  .mtvec_trap_addr_af (mtvec_trap_addr_af),
  .bftail_trap        (bftail_trap       ),
  .aftail_trap        (aftail_trap       ),
  .mtvec_trap_data_bf (mtvec_trap_data_bf),
  .mtvec_trap_data_af (mtvec_trap_data_af),
  .ir_bf              (ir_bf              ),
  .test_clk           (test_clk          )

  );
                                                      
endmodule
  `endif//}
