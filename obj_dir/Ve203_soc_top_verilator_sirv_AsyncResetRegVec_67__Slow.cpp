// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Ve203_soc_top_verilator.h for the primary calling header

#include "Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67.h"
#include "Ve203_soc_top_verilator__Syms.h"

//==========

VL_CTOR_IMP(Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67::__Vconfigure(Ve203_soc_top_verilator__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67::~Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67() {
}

void Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67::_settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__u_ieReg__2(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67::_settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__u_ieReg__2\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__T_70 = (((((((IData)(this->__PVT__reg_31_q) 
                              << 0x1fU) | ((IData)(this->__PVT__reg_30_q) 
                                           << 0x1eU)) 
                            | (((IData)(this->__PVT__reg_29_q) 
                                << 0x1dU) | ((IData)(this->__PVT__reg_28_q) 
                                             << 0x1cU))) 
                           | ((((IData)(this->__PVT__reg_27_q) 
                                << 0x1bU) | ((IData)(this->__PVT__reg_26_q) 
                                             << 0x1aU)) 
                              | (((IData)(this->__PVT__reg_25_q) 
                                  << 0x19U) | ((IData)(this->__PVT__reg_24_q) 
                                               << 0x18U)))) 
                          | (((((IData)(this->__PVT__reg_23_q) 
                                << 0x17U) | ((IData)(this->__PVT__reg_22_q) 
                                             << 0x16U)) 
                              | (((IData)(this->__PVT__reg_21_q) 
                                  << 0x15U) | ((IData)(this->__PVT__reg_20_q) 
                                               << 0x14U))) 
                             | ((((IData)(this->__PVT__reg_19_q) 
                                  << 0x13U) | ((IData)(this->__PVT__reg_18_q) 
                                               << 0x12U)) 
                                | (((IData)(this->__PVT__reg_17_q) 
                                    << 0x11U) | ((IData)(this->__PVT__reg_16_q) 
                                                 << 0x10U))))) 
                         | ((((((IData)(this->__PVT__reg_15_q) 
                                << 0xfU) | ((IData)(this->__PVT__reg_14_q) 
                                            << 0xeU)) 
                              | (((IData)(this->__PVT__reg_13_q) 
                                  << 0xdU) | ((IData)(this->__PVT__reg_12_q) 
                                              << 0xcU))) 
                             | ((((IData)(this->__PVT__reg_11_q) 
                                  << 0xbU) | ((IData)(this->__PVT__reg_10_q) 
                                              << 0xaU)) 
                                | (((IData)(this->__PVT__reg_9_q) 
                                    << 9U) | ((IData)(this->__PVT__reg_8_q) 
                                              << 8U)))) 
                            | (((((IData)(this->__PVT__reg_7_q) 
                                  << 7U) | ((IData)(this->__PVT__reg_6_q) 
                                            << 6U)) 
                                | (((IData)(this->__PVT__reg_5_q) 
                                    << 5U) | ((IData)(this->__PVT__reg_4_q) 
                                              << 4U))) 
                               | ((((IData)(this->__PVT__reg_3_q) 
                                    << 3U) | ((IData)(this->__PVT__reg_2_q) 
                                              << 2U)) 
                                  | (((IData)(this->__PVT__reg_1_q) 
                                      << 1U) | (IData)(this->__PVT__reg_0_q))))));
}

void Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_d = VL_RAND_RESET_I(32);
    io_q = VL_RAND_RESET_I(32);
    io_en = VL_RAND_RESET_I(1);
    __PVT__reg_0_q = VL_RAND_RESET_I(1);
    __PVT__reg_1_q = VL_RAND_RESET_I(1);
    __PVT__reg_2_q = VL_RAND_RESET_I(1);
    __PVT__reg_3_q = VL_RAND_RESET_I(1);
    __PVT__reg_4_q = VL_RAND_RESET_I(1);
    __PVT__reg_5_q = VL_RAND_RESET_I(1);
    __PVT__reg_6_q = VL_RAND_RESET_I(1);
    __PVT__reg_7_q = VL_RAND_RESET_I(1);
    __PVT__reg_8_q = VL_RAND_RESET_I(1);
    __PVT__reg_9_q = VL_RAND_RESET_I(1);
    __PVT__reg_10_q = VL_RAND_RESET_I(1);
    __PVT__reg_11_q = VL_RAND_RESET_I(1);
    __PVT__reg_12_q = VL_RAND_RESET_I(1);
    __PVT__reg_13_q = VL_RAND_RESET_I(1);
    __PVT__reg_14_q = VL_RAND_RESET_I(1);
    __PVT__reg_15_q = VL_RAND_RESET_I(1);
    __PVT__reg_16_q = VL_RAND_RESET_I(1);
    __PVT__reg_17_q = VL_RAND_RESET_I(1);
    __PVT__reg_18_q = VL_RAND_RESET_I(1);
    __PVT__reg_19_q = VL_RAND_RESET_I(1);
    __PVT__reg_20_q = VL_RAND_RESET_I(1);
    __PVT__reg_21_q = VL_RAND_RESET_I(1);
    __PVT__reg_22_q = VL_RAND_RESET_I(1);
    __PVT__reg_23_q = VL_RAND_RESET_I(1);
    __PVT__reg_24_q = VL_RAND_RESET_I(1);
    __PVT__reg_25_q = VL_RAND_RESET_I(1);
    __PVT__reg_26_q = VL_RAND_RESET_I(1);
    __PVT__reg_27_q = VL_RAND_RESET_I(1);
    __PVT__reg_28_q = VL_RAND_RESET_I(1);
    __PVT__reg_29_q = VL_RAND_RESET_I(1);
    __PVT__reg_30_q = VL_RAND_RESET_I(1);
    __PVT__reg_31_q = VL_RAND_RESET_I(1);
    __PVT__T_70 = VL_RAND_RESET_I(32);
}
