module e203_subsys_console #(
  parameter string LogName = "./log/console.log",
  parameter bit    FlushOnChar = 1
) (
  input              clk_i,
  input              rst_i,

  input              console_icb_cmd_valid,
  output             console_icb_cmd_ready,
  input[31:0]        console_icb_cmd_addr,
  input              console_icb_cmd_read,
  input[31:0]        console_icb_cmd_wdata,
  input[3:0]         console_icb_cmd_wmask,

  output             console_icb_rsp_valid,
  input              console_icb_rsp_ready,
  output reg             console_icb_rsp_err,
  output reg             console_icb_rsp_excl_ok,
  output reg[31:0]       console_icb_rsp_rdata
  //output              halt_o  // halt signal move here because halt_addr is a register in console
);

  localparam reg[7:0] CHAR_OUT_ADDR = 8'h4;
  localparam reg[7:0] SIM_CTRL_ADDR = 8'h8;   //halt register

  reg [7:0] ctrl_addr;
  reg [2:0] sim_finish = 3'b000;

  integer log_fd;

  initial begin
    log_fd = $fopen(LogName, "w");
  end

  final begin
    $fclose(log_fd);
  end

  assign ctrl_addr = (console_icb_cmd_valid && console_icb_cmd_ready) ? console_icb_cmd_addr[7:0] : 'h0;

  always @(posedge clk_i) begin
    if (~rst_i) begin
      sim_finish <= 'b0;
    end else begin
      if (console_icb_cmd_valid && console_icb_cmd_ready) begin
        //ctrl_addr <= console_icb_cmd_addr[7:0];
        if (console_icb_cmd_read) begin
          // 讀操作邏輯
          case (ctrl_addr)
            CHAR_OUT_ADDR: begin
              console_icb_rsp_rdata <= 32'h0;
              console_icb_rsp_err <= 1'b0;
            end
            SIM_CTRL_ADDR: begin
              console_icb_rsp_rdata <= 32'h0;
              console_icb_rsp_err <= 1'b0;
            end
            default: begin
              console_icb_rsp_rdata <= 32'h0;
              console_icb_rsp_err <= 1'b1;  // 無效地址
            end
          endcase
        end else begin
          // 寫操作邏輯
          case (ctrl_addr)
            CHAR_OUT_ADDR: begin
              $fwrite(log_fd, "%c", console_icb_cmd_wdata[7:0]);  // 記錄日誌
              $write("%c", console_icb_cmd_wdata[7:0]);           // 顯示在監視器上
              if (FlushOnChar) begin
                $fflush(log_fd);
              end
            end
            SIM_CTRL_ADDR: begin
              if (console_icb_cmd_wdata[0] && (sim_finish == 'b0)) begin
                sim_finish <= 3'b001;
              end
            end
            default: begin
              // 無效地址
            end
          endcase
        end
      end

      if (sim_finish != 'b0) begin
        sim_finish <= sim_finish + 1;
      end
      // if (sim_finish >= 3'b010)  //halt after 3 cycles 
      //   //halt_o <= 1'b1;     
      // else 
      //   //halt_o <= 1'b0;
    end
  end

  // 控制命令的準備信號
  assign console_icb_cmd_ready = 1'b1;

  // 回應有效信號
  assign console_icb_rsp_valid = console_icb_cmd_valid;
  assign console_icb_rsp_excl_ok = 1'b0;  // 默認為0，不使用排他訪問
endmodule