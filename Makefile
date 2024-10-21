# Makefile for Verilator compilation and execution

# Verilator configuration file
VERILATOR_VC = verilator/e203_soc_top_verilator.vc

# Verilator flags
VERILATOR_FLAGS = -exe -trace -trace-structs -trace-params -trace-max-array 1024 \
                  -CFLAGS " -DVL_DEBUG -Wall -DTOPLEVEL_NAME=e203_soc_top_verilator -g -O0" \
                  -LDFLAGS "-pthread -lutil -lelf" \
                  -Wno-PINCONNECTEMPTY -Wno-fatal -Wno-WIDTH -Wno-CASEINCOMPLETE -Wno-UNOPTFLAT

# Output directory for Verilator
OBJ_DIR = obj_dir

# Verilator-generated Makefile
VERILATOR_MAKEFILE = $(OBJ_DIR)/Ve203_soc_top_verilator.mk

# Test directory for storing ITCM.verilog and DTCM.verilog
TEST_DIR = test

# Main target: Compile Verilog using Verilator and generate ITCM.verilog and DTCM.verilog
all: verilator_compile dc_os_compile

# Compile Verilog using Verilator
verilator_compile:
	@echo "Compiling Verilog using Verilator..."
	@mkdir -p $(OBJ_DIR)
	@verilator -f $(VERILATOR_VC) $(VERILATOR_FLAGS) -Mdir $(OBJ_DIR)

# Compile and generate ITCM.verilog and DTCM.verilog in dc-os directory
dc_os_compile:
	@echo "Compiling and generating ITCM.verilog and DTCM.verilog in dc-os directory..."
	@$(MAKE) -C dc-os

# Run target: Execute simulation
run: verilator_compile
	@$(MAKE) -C $(OBJ_DIR) -f Ve203_soc_top_verilator.mk

# Go target: Move files and execute Ve203_soc_top_verilator with verilog files
go: run
	@echo "Preparing files for execution..."
	# Use cp --remove-destination to avoid 'Text file busy' error
	@cp --remove-destination $(OBJ_DIR)/Ve203_soc_top_verilator $(TEST_DIR)/
	@echo "Executing Ve203_soc_top_verilator with ITCM.verilog and DTCM.verilog..."
	@cd $(TEST_DIR) && ./Ve203_soc_top_verilator -t +itcm_init=ITCM.verilog +dtcm_init=DTCM.verilog

# Wave target: Convert sim.vcd to sim.lxt2 and open with gtkwave
wave: $(TEST_DIR)/sim.vcd
	@echo "Converting sim.vcd to sim.lxt2..."
	@vcd2lxt $(TEST_DIR)/sim.vcd $(TEST_DIR)/sim.lxt2

# Clean target: Remove all generated files and clean dc-os directory
clean:
	@rm -rf $(OBJ_DIR)/*
	@$(MAKE) -C dc-os clean

.PHONY: all verilator_compile dc_os_compile run go wave clean
