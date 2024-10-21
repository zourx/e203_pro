# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Ve203_soc_top_verilator.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (from --threads, --trace-threads or use of classes)
VM_C11 = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Ve203_soc_top_verilator \
	Ve203_soc_top_verilator__1 \
	Ve203_soc_top_verilator__2 \
	Ve203_soc_top_verilator__3 \
	Ve203_soc_top_verilator__4 \
	Ve203_soc_top_verilator__5 \
	Ve203_soc_top_verilator__6 \
	Ve203_soc_top_verilator__7 \
	Ve203_soc_top_verilator_sirv_pwm16_top \
	Ve203_soc_top_verilator_sirv_uart_top \
	Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1 \
	Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Ve203_soc_top_verilator__Slow \
	Ve203_soc_top_verilator__1__Slow \
	Ve203_soc_top_verilator__2__Slow \
	Ve203_soc_top_verilator__3__Slow \
	Ve203_soc_top_verilator__4__Slow \
	Ve203_soc_top_verilator__5__Slow \
	Ve203_soc_top_verilator__6__Slow \
	Ve203_soc_top_verilator_sirv_pwm16_top__Slow \
	Ve203_soc_top_verilator_sirv_uart_top__Slow \
	Ve203_soc_top_verilator_sirv_gnrl_axi_buffer__CB1__Slow \
	Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Ve203_soc_top_verilator__Trace \
	Ve203_soc_top_verilator__Trace__1 \
	Ve203_soc_top_verilator__Trace__2 \
	Ve203_soc_top_verilator__Trace__3 \
	Ve203_soc_top_verilator__Trace__4 \
	Ve203_soc_top_verilator__Trace__5 \
	Ve203_soc_top_verilator__Trace__6 \
	Ve203_soc_top_verilator__Trace__7 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Ve203_soc_top_verilator__Syms \
	Ve203_soc_top_verilator__Trace__Slow \
	Ve203_soc_top_verilator__Trace__1__Slow \
	Ve203_soc_top_verilator__Trace__2__Slow \
	Ve203_soc_top_verilator__Trace__3__Slow \
	Ve203_soc_top_verilator__Trace__4__Slow \
	Ve203_soc_top_verilator__Trace__5__Slow \
	Ve203_soc_top_verilator__Trace__6__Slow \
	Ve203_soc_top_verilator__Trace__7__Slow \
	Ve203_soc_top_verilator__Trace__8__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
