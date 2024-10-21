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
//  The top level RAM module
//
// ====================================================================

module sirv_gnrl_ram
#(parameter DP = 32,
  parameter DW = 32,
  parameter FORCE_X2ZERO = 1,
  parameter MW = 4,
  parameter AW = 15,

  parameter AWnts = 15,
  parameter DWnts = 32,
  parameter MWnts = 4
  ) (
  input            sd,
  input            ds,
  input            ls,

  input            rst_n,
  input            clk,
  input            cs,
  input            we,
  input [AW-1:0]   addr,
  input [DW-1:0]   din,
  input [MW-1:0]   wem,
  output[DW-1:0]   dout,

  input             irq_i,
  input             irq_ra_i,
  output            irq_s_reg_done,
  input             mret2ram,

  input                                clk_nts,
  input                                cs_nts,  
  input                                we_nts,  
  input  [AWnts-1:0]                   addr_nts, 
  input  [MWnts-1:0]                   wem_nts,
  input  [DWnts-1:0]                   din_nts,          
  output [DWnts-1:0]                   dout_nts,

  output [`E203_XLEN-1:0]              mtvec_trap_data,
  input  [`E203_XLEN-1:0]              mtvec_trap_addr,

  output [`E203_XLEN-1:0]              mtvec_trap_data_af,
  output [`E203_XLEN-1:0]              mtvec_trap_data_bf,
  input  [`E203_XLEN-1:0]              mtvec_trap_addr_bf,
  input  [`E203_XLEN-1:0]              mtvec_trap_addr_af,
  output [64-1:0]                      ir_bf,
  input                                bftail_trap,
  input                                aftail_trap,
  input                                test_clk

);

//To add the ASIC or FPGA or Sim-model control here
// This is the Sim-model
//
`ifdef FPGA_SOURCE
sirv_sim_ram #(
    .FORCE_X2ZERO (1'b0),
    .DP     (DP),
    .AW     (AW),
    .MW     (MW),
    .DW     (DW),

    .AWnts  (AWnts),
    .DWnts  (DWnts),
    .MWnts  (MWnts)

)u_sirv_sim_ram (
    .clk       (clk     ),
    .din       (din     ),
    .addr      (addr    ),
    .cs        (cs      ),
    .we        (we      ),
    .wem       (wem     ),
    .dout      (dout    ),
    
    .mret2ram       (mret2ram       ),
    .irq_i          (irq_i          ),
    .irq_ra_i       (irq_ra_i       ),
    .irq_s_reg_done (irq_s_reg_done ),

    .clk_nts        (clk_nts        ),
    .cs_nts         (cs_nts         ),  
    .we_nts         (we_nts         ),  
    .addr_nts       (addr_nts       ), 
    .wem_nts        (wem_nts        ),
    .din_nts        (din_nts        ),          
    .dout_nts       (dout_nts       ),

    .mtvec_trap_data        (mtvec_trap_data    ),
    .mtvec_trap_addr        (mtvec_trap_addr    ),
    .mtvec_trap_addr_bf     (mtvec_trap_addr_bf ),
    .mtvec_trap_addr_af     (mtvec_trap_addr_af ),
    .bftail_trap            (bftail_trap        ),
    .aftail_trap            (aftail_trap        ),
    .mtvec_trap_data_bf     (mtvec_trap_data_bf ),
    .mtvec_trap_data_af     (mtvec_trap_data_af ),
    .ir_bf                  (ir_bf              ),
    .test_clk               (test_clk           )

);
`else

sirv_sim_ram #(
    .FORCE_X2ZERO (FORCE_X2ZERO),
    .DP     (DP),
    .AW     (AW),
    .MW     (MW),
    .DW     (DW),

    .AWnts  (AWnts),
    .DWnts  (DWnts),
    .MWnts  (MWnts)

)u_sirv_sim_ram (
    .clk   (clk     ),
    .din   (din     ),
    .addr  (addr    ),
    .cs    (cs      ),
    .we    (we      ),
    .wem   (wem     ),
    .dout  (dout    ),

    .mret2ram       (mret2ram       ),
    .irq_i          (irq_i          ),
    .irq_ra_i       (irq_ra_i       ),
    .irq_s_reg_done (irq_s_reg_done ),

    .clk_nts        (clk_nts        ),
    .cs_nts         (cs_nts         ),  
    .we_nts         (we_nts         ),  
    .addr_nts       (addr_nts       ), 
    .wem_nts        (wem_nts        ),
    .din_nts        (din_nts        ),          
    .dout_nts       (dout_nts       ),

    .mtvec_trap_data        (mtvec_trap_data    ),
    .mtvec_trap_addr        (mtvec_trap_addr    ),
    .mtvec_trap_addr_bf     (mtvec_trap_addr_bf ),
    .mtvec_trap_addr_af     (mtvec_trap_addr_af ),
    .bftail_trap            (bftail_trap        ),
    .aftail_trap            (aftail_trap        ),
    .mtvec_trap_data_bf     (mtvec_trap_data_bf ),
    .mtvec_trap_data_af     (mtvec_trap_data_af ),
    .ir_bf                  (ir_bf              ),
    .test_clk               (test_clk           )
);
`endif

endmodule
