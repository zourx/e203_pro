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
                                                                         
                                                                         
                                                                         
module sirv_LevelGateway(
  input   clock,
  input   reset,
  input   io_interrupt,
  output  io_plic_valid,
  input   io_plic_ready,
  input   io_plic_complete
);

// 定義了一個暫存器 inFlight，表示當前是否有中斷正在處理中

  reg  inFlight;
  reg [31:0] GEN_2;
  wire  T_12;
  wire  GEN_0;
  wire  GEN_1;
  wire  T_16;
  wire  T_17;
  assign io_plic_valid = T_17;

// 當有新的中斷請求到達且控制器可以接受新的中斷請求（io_interrupt & io_plic_ready 為真），控制器將 inFlight 置為 1，表示有中斷正在處理中。此時，GEN_0 的值為 1
  assign T_12 = io_interrupt & io_plic_ready;
  assign GEN_0 = T_12 ? 1'h1 : inFlight;

// 當被選中的中斷處理完成後（io_plic_complete 為真），控制器將 inFlight 置為 0，表示當前沒有中斷正在處理中。 GEN_1 的值等於 GEN_0 的值，如果被選中的中斷已經被處理完成（io_plic_complete 為真）
  assign GEN_1 = io_plic_complete ? 1'h0 : GEN_0;

// T_16 的值等於 inFlight 為假，表示當前沒有中斷正在處理中
  assign T_16 = inFlight == 1'h0;

// T_17 的值等於 io_interrupt 為真，且當前沒有中斷正在處理中（T_16 為真），表示控制器選中了新的中斷請求，io_plic_valid 置為 1
  assign T_17 = io_interrupt & T_16;

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      inFlight <= 1'h0;
    end else begin
      if (io_plic_complete) begin
        inFlight <= 1'h0;
      end else begin
        if (T_12) begin
          inFlight <= 1'h1;
        end
      end
    end
  end
endmodule

