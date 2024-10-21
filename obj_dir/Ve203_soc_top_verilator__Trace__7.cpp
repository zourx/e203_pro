// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Ve203_soc_top_verilator__Syms.h"


void Ve203_soc_top_verilator::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Ve203_soc_top_verilator__Syms* __restrict vlSymsp = static_cast<Ve203_soc_top_verilator__Syms*>(userp);
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vilp = 0U;
        while ((__Vilp <= 0x48U)) {
            vlTOPp->__Vm_traceActivity[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
}
