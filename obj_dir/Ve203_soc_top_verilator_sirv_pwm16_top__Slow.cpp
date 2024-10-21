// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Ve203_soc_top_verilator.h for the primary calling header

#include "Ve203_soc_top_verilator_sirv_pwm16_top.h"
#include "Ve203_soc_top_verilator__Syms.h"

//==========

VL_CTOR_IMP(Ve203_soc_top_verilator_sirv_pwm16_top) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Ve203_soc_top_verilator_sirv_pwm16_top::__Vconfigure(Ve203_soc_top_verilator__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Ve203_soc_top_verilator_sirv_pwm16_top::~Ve203_soc_top_verilator_sirv_pwm16_top() {
}

void Ve203_soc_top_verilator_sirv_pwm16_top::_settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm1_top__1(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Ve203_soc_top_verilator_sirv_pwm16_top::_settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm1_top__1\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_197 
        = (0x3fU & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_196) 
                    + ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countAlways) 
                       | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__oneShot))));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_203 
        = ((this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_199 
            << 5U) | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_196));
    this->__PVT__u_sirv_pwm16__DOT__T_2150 = (1U & 
                                              ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_valid 
                                                & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_rsp_ready) 
                                               >> 7U));
    this->__PVT__u_sirv_pwm16__DOT__T_2160 = (1U & 
                                              ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_valid 
                                                & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_rsp_ready) 
                                               >> 7U));
    this->__PVT__u_sirv_pwm16__DOT__T_2130 = (0xf022U 
                                              | (((((0U 
                                                     == 
                                                     (0x3f0U 
                                                      & (0xbU 
                                                         ^ 
                                                         ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                             >> 2U))))) 
                                                    << 0xbU) 
                                                   | ((0U 
                                                       == 
                                                       (0x3f0U 
                                                        & (0xaU 
                                                           ^ 
                                                           ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                             << 0x1eU) 
                                                            | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                               >> 2U))))) 
                                                      << 0xaU)) 
                                                  | (((0U 
                                                       == 
                                                       (0x3f0U 
                                                        & (9U 
                                                           ^ 
                                                           ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                             << 0x1eU) 
                                                            | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                               >> 2U))))) 
                                                      << 9U) 
                                                     | ((0U 
                                                         == 
                                                         (0x3f0U 
                                                          & (8U 
                                                             ^ 
                                                             ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                               << 0x1eU) 
                                                              | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                 >> 2U))))) 
                                                        << 8U))) 
                                                 | (((((0U 
                                                        == 
                                                        (0x3f0U 
                                                         & (7U 
                                                            ^ 
                                                            ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                              << 0x1eU) 
                                                             | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                >> 2U))))) 
                                                       << 7U) 
                                                      | ((0U 
                                                          == 
                                                          (0x3f0U 
                                                           & (6U 
                                                              ^ 
                                                              ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                                << 0x1eU) 
                                                               | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                  >> 2U))))) 
                                                         << 6U)) 
                                                     | ((0U 
                                                         == 
                                                         (0x3f0U 
                                                          & (4U 
                                                             ^ 
                                                             ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                               << 0x1eU) 
                                                              | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                 >> 2U))))) 
                                                        << 4U)) 
                                                    | ((((0U 
                                                          == 
                                                          (0x3f0U 
                                                           & (3U 
                                                              ^ 
                                                              ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                                << 0x1eU) 
                                                               | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                  >> 2U))))) 
                                                         << 3U) 
                                                        | ((0U 
                                                            == 
                                                            (0x3f0U 
                                                             & (2U 
                                                                ^ 
                                                                ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                                  << 0x1eU) 
                                                                 | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                    >> 2U))))) 
                                                           << 2U)) 
                                                       | (0U 
                                                          == 
                                                          (0x3f0U 
                                                           & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                               << 0x1eU) 
                                                              | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                 >> 2U))))))));
    this->__PVT__u_sirv_pwm16__DOT__GEN_72 = ((7U == 
                                               (0xfU 
                                                & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                      >> 2U))))
                                               ? (0U 
                                                  == 
                                                  (0x3f0U 
                                                   & (7U 
                                                      ^ 
                                                      ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                          >> 2U)))))
                                               : ((6U 
                                                   == 
                                                   (0xfU 
                                                    & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                          >> 2U))))
                                                   ? 
                                                  (0U 
                                                   == 
                                                   (0x3f0U 
                                                    & (6U 
                                                       ^ 
                                                       ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                           >> 2U)))))
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (0xfU 
                                                     & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                           >> 2U)))) 
                                                   | ((4U 
                                                       == 
                                                       (0xfU 
                                                        & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                            << 0x1eU) 
                                                           | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                              >> 2U))))
                                                       ? 
                                                      (0U 
                                                       == 
                                                       (0x3f0U 
                                                        & (4U 
                                                           ^ 
                                                           ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                             << 0x1eU) 
                                                            | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                               >> 2U)))))
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0xfU 
                                                         & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                             << 0x1eU) 
                                                            | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                               >> 2U))))
                                                        ? 
                                                       (0U 
                                                        == 
                                                        (0x3f0U 
                                                         & (3U 
                                                            ^ 
                                                            ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                              << 0x1eU) 
                                                             | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                >> 2U)))))
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (0xfU 
                                                          & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                              << 0x1eU) 
                                                             | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                >> 2U))))
                                                         ? 
                                                        (0U 
                                                         == 
                                                         (0x3f0U 
                                                          & (2U 
                                                             ^ 
                                                             ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                               << 0x1eU) 
                                                              | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                 >> 2U)))))
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (0xfU 
                                                           & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                               << 0x1eU) 
                                                              | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                 >> 2U)))) 
                                                         | (0U 
                                                            == 
                                                            (0x3f0U 
                                                             & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                                 << 0x1eU) 
                                                                | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                   >> 2U)))))))))));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209 
        = (0x7fffffffU & (this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_203 
                          >> (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__scale)));
    this->__PVT__u_sirv_pwm16__DOT__T_2151 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2150) 
                                              & (4U 
                                                 == 
                                                 ((0x80U 
                                                   & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read)
                                                   ? 4U
                                                   : 0U)));
    this->__PVT__u_sirv_pwm16__DOT__T_2157 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2150) 
                                              & (4U 
                                                 != 
                                                 ((0x80U 
                                                   & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read)
                                                   ? 4U
                                                   : 0U)));
    this->__PVT__u_sirv_pwm16__DOT__T_2161 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2160) 
                                              & (4U 
                                                 == 
                                                 ((0x80U 
                                                   & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read)
                                                   ? 4U
                                                   : 0U)));
    this->__PVT__u_sirv_pwm16__DOT__T_2167 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2160) 
                                              & (4U 
                                                 != 
                                                 ((0x80U 
                                                   & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read)
                                                   ? 4U
                                                   : 0U)));
    this->__PVT__u_sirv_pwm16__DOT__T_2131 = (((IData)(1U) 
                                               << (0xfU 
                                                   & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                         >> 2U)))) 
                                              & (IData)(this->__PVT__u_sirv_pwm16__DOT__T_2130));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_221 
        = (1U & ((this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209 
                  >> 0xfU) & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__center) 
                              >> 1U)));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_226 
        = (1U & ((this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209 
                  >> 0xfU) & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__center) 
                              >> 2U)));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_231 
        = (1U & ((this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209 
                  >> 0xfU) & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__center) 
                              >> 3U)));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_216 
        = (1U & ((this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209 
                  >> 0xfU) & (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__center)));
    this->__PVT__u_sirv_pwm16__DOT__GEN_92 = ((0xcU 
                                               == (0xfU 
                                                   & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                         >> 2U))))
                                               ? 0U
                                               : ((0xbU 
                                                   == 
                                                   (0xfU 
                                                    & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                          >> 2U))))
                                                   ? (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_3)
                                                   : 
                                                  ((0xaU 
                                                    == 
                                                    (0xfU 
                                                     & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                           >> 2U))))
                                                    ? (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_2)
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0xfU 
                                                      & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                          << 0x1eU) 
                                                         | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                            >> 2U))))
                                                     ? (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_1)
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfU 
                                                       & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                             >> 2U))))
                                                      ? (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_0)
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0xfU 
                                                        & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                            << 0x1eU) 
                                                           | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                              >> 2U))))
                                                       ? 1U
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0xfU 
                                                         & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                             << 0x1eU) 
                                                            | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                               >> 2U))))
                                                        ? 0U
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0xfU 
                                                          & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                              << 0x1eU) 
                                                             | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                >> 2U))))
                                                         ? 0U
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0xfU 
                                                           & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                               << 0x1eU) 
                                                              | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                 >> 2U))))
                                                          ? 
                                                         (0xffffU 
                                                          & this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209)
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0xfU 
                                                            & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                                << 0x1eU) 
                                                               | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                  >> 2U))))
                                                           ? 0U
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0xfU 
                                                             & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                                 << 0x1eU) 
                                                                | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                   >> 2U))))
                                                            ? this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_203
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0xfU 
                                                              & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                                  << 0x1eU) 
                                                                 | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                    >> 2U))))
                                                             ? 0U
                                                             : 
                                                            (((((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__ip) 
                                                                << 0x1cU) 
                                                               | (((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__gang) 
                                                                   << 0x18U) 
                                                                  | ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__center) 
                                                                     << 0x10U))) 
                                                              | (((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__oneShot) 
                                                                  << 0xdU) 
                                                                 | ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countAlways) 
                                                                    << 0xcU))) 
                                                             | ((((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_259) 
                                                                  << 0xaU) 
                                                                 | ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__zerocmp) 
                                                                    << 9U)) 
                                                                | (((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_267) 
                                                                    << 8U) 
                                                                   | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__scale))))))))))))))));
    this->__PVT__u_sirv_pwm16__DOT__T_2329 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 8U));
    this->__PVT__u_sirv_pwm16__DOT__T_2349 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 9U));
    this->__PVT__u_sirv_pwm16__DOT__T_2369 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 0xaU));
    this->__PVT__u_sirv_pwm16__DOT__T_2389 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 0xbU));
    this->__PVT__u_sirv_pwm16__DOT__T_2169 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & (IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131));
    this->__PVT__u_sirv_pwm16__DOT__T_2209 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 2U));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_284 
        = ((((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_231) 
             << 3U) | ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_226) 
                       << 2U)) | (((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_221) 
                                   << 1U) | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_216)));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__elapsed_0 
        = ((0xffffU & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_216)
                        ? (~ this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209)
                        : this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209)) 
           >= (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_0));
    this->__PVT__u_sirv_pwm16__DOT__T_2589 = (((0xfU 
                                                == 
                                                (0xfU 
                                                 & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                     << 0x1eU) 
                                                    | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                       >> 2U)))) 
                                               | ((0xeU 
                                                   == 
                                                   (0xfU 
                                                    & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                          >> 2U)))) 
                                                  | ((0xdU 
                                                      == 
                                                      (0xfU 
                                                       & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                             >> 2U)))) 
                                                     | ((0xcU 
                                                         == 
                                                         (0xfU 
                                                          & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                              << 0x1eU) 
                                                             | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                >> 2U)))) 
                                                        | ((0xbU 
                                                            == 
                                                            (0xfU 
                                                             & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                                 << 0x1eU) 
                                                                | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                   >> 2U))))
                                                            ? 
                                                           (0U 
                                                            == 
                                                            (0x3f0U 
                                                             & (0xbU 
                                                                ^ 
                                                                ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                                  << 0x1eU) 
                                                                 | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                    >> 2U)))))
                                                            : 
                                                           ((0xaU 
                                                             == 
                                                             (0xfU 
                                                              & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                                  << 0x1eU) 
                                                                 | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                    >> 2U))))
                                                             ? 
                                                            (0U 
                                                             == 
                                                             (0x3f0U 
                                                              & (0xaU 
                                                                 ^ 
                                                                 ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                                   << 0x1eU) 
                                                                  | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                     >> 2U)))))
                                                             : 
                                                            ((9U 
                                                              == 
                                                              (0xfU 
                                                               & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                                   << 0x1eU) 
                                                                  | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                     >> 2U))))
                                                              ? 
                                                             (0U 
                                                              == 
                                                              (0x3f0U 
                                                               & (9U 
                                                                  ^ 
                                                                  ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                                    << 0x1eU) 
                                                                   | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                      >> 2U)))))
                                                              : 
                                                             ((8U 
                                                               == 
                                                               (0xfU 
                                                                & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                                    << 0x1eU) 
                                                                   | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                      >> 2U))))
                                                               ? 
                                                              (0U 
                                                               == 
                                                               (0x3f0U 
                                                                & (8U 
                                                                   ^ 
                                                                   ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                                     << 0x1eU) 
                                                                    | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                                       >> 2U)))))
                                                               : (IData)(this->__PVT__u_sirv_pwm16__DOT__GEN_72)))))))))
                                               ? ((0xfU 
                                                   == 
                                                   (0xfU 
                                                    & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                          >> 2U))))
                                                   ? 0U
                                                   : 
                                                  ((0xeU 
                                                    == 
                                                    (0xfU 
                                                     & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                           >> 2U))))
                                                    ? 0U
                                                    : 
                                                   ((0xdU 
                                                     == 
                                                     (0xfU 
                                                      & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[8U] 
                                                          << 0x1eU) 
                                                         | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[7U] 
                                                            >> 2U))))
                                                     ? 0U
                                                     : this->__PVT__u_sirv_pwm16__DOT__GEN_92)))
                                               : 0U);
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_288 
        = (((((0xffffU & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_231)
                           ? (~ this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209)
                           : this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209)) 
              >= (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_3)) 
             << 3U) | (((0xffffU & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_226)
                                     ? (~ this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209)
                                     : this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209)) 
                        >= (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_2)) 
                       << 2U)) | ((((0xffffU & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_221)
                                                 ? 
                                                (~ this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209)
                                                 : this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209)) 
                                    >= (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_1)) 
                                   << 1U) | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__elapsed_0)));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countReset 
        = (1U & ((0x7fffffffU & (((0x7fffffe0U & ((
                                                   (0x20U 
                                                    & (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_197))
                                                    ? 
                                                   (0x7ffffffU 
                                                    & (this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_199 
                                                       ^ 
                                                       ((IData)(1U) 
                                                        + this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_199)))
                                                    : 0U) 
                                                  << 4U)) 
                                  | (0x1fU & (((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_196) 
                                               ^ (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_197)) 
                                              >> 1U))) 
                                 >> (0x1fU & ((IData)(0x10U) 
                                              + (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__scale))))) 
                 | ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__zerocmp) 
                    & (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__elapsed_0))));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_301 
        = (((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_284) 
            & (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_288)) 
           | ((~ (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_284)) 
              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_288) 
                 | (((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_269)
                      ? 0xfU : 0U) & (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__ip)))));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_319 
        = (1U & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[7U] 
                  >> 0xdU) & (~ (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countReset))));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_323 
        = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2169) 
           | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countReset));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_11 
        = ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countReset)
            ? 0U : (0xfffffffU & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2209)
                                   ? (IData)(((QData)((IData)(
                                                              vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[7U])) 
                                              >> 5U))
                                   : (0x7ffffffU & 
                                      ((0x20U & (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_197))
                                        ? ((IData)(1U) 
                                           + this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_199)
                                        : this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_199)))));
}

void Ve203_soc_top_verilator_sirv_pwm16_top::_settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm2_top__2(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Ve203_soc_top_verilator_sirv_pwm16_top::_settle__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm2_top__2\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_197 
        = (0x3fU & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_196) 
                    + ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countAlways) 
                       | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__oneShot))));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_203 
        = ((this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_199 
            << 5U) | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_196));
    this->__PVT__u_sirv_pwm16__DOT__T_2150 = (1U & 
                                              ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_valid 
                                                & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_rsp_ready) 
                                               >> 5U));
    this->__PVT__u_sirv_pwm16__DOT__T_2160 = (1U & 
                                              ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_valid 
                                                & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_rsp_ready) 
                                               >> 5U));
    this->__PVT__u_sirv_pwm16__DOT__T_2130 = (0xf022U 
                                              | (((((0U 
                                                     == 
                                                     (0x3f0U 
                                                      & (0xbU 
                                                         ^ 
                                                         ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                             >> 2U))))) 
                                                    << 0xbU) 
                                                   | ((0U 
                                                       == 
                                                       (0x3f0U 
                                                        & (0xaU 
                                                           ^ 
                                                           ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                             << 0x1eU) 
                                                            | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                               >> 2U))))) 
                                                      << 0xaU)) 
                                                  | (((0U 
                                                       == 
                                                       (0x3f0U 
                                                        & (9U 
                                                           ^ 
                                                           ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                             << 0x1eU) 
                                                            | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                               >> 2U))))) 
                                                      << 9U) 
                                                     | ((0U 
                                                         == 
                                                         (0x3f0U 
                                                          & (8U 
                                                             ^ 
                                                             ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                               << 0x1eU) 
                                                              | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                 >> 2U))))) 
                                                        << 8U))) 
                                                 | (((((0U 
                                                        == 
                                                        (0x3f0U 
                                                         & (7U 
                                                            ^ 
                                                            ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                              << 0x1eU) 
                                                             | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                >> 2U))))) 
                                                       << 7U) 
                                                      | ((0U 
                                                          == 
                                                          (0x3f0U 
                                                           & (6U 
                                                              ^ 
                                                              ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                                << 0x1eU) 
                                                               | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                  >> 2U))))) 
                                                         << 6U)) 
                                                     | ((0U 
                                                         == 
                                                         (0x3f0U 
                                                          & (4U 
                                                             ^ 
                                                             ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                               << 0x1eU) 
                                                              | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                 >> 2U))))) 
                                                        << 4U)) 
                                                    | ((((0U 
                                                          == 
                                                          (0x3f0U 
                                                           & (3U 
                                                              ^ 
                                                              ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                                << 0x1eU) 
                                                               | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                  >> 2U))))) 
                                                         << 3U) 
                                                        | ((0U 
                                                            == 
                                                            (0x3f0U 
                                                             & (2U 
                                                                ^ 
                                                                ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                                  << 0x1eU) 
                                                                 | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                    >> 2U))))) 
                                                           << 2U)) 
                                                       | (0U 
                                                          == 
                                                          (0x3f0U 
                                                           & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                               << 0x1eU) 
                                                              | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                 >> 2U))))))));
    this->__PVT__u_sirv_pwm16__DOT__GEN_72 = ((7U == 
                                               (0xfU 
                                                & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                      >> 2U))))
                                               ? (0U 
                                                  == 
                                                  (0x3f0U 
                                                   & (7U 
                                                      ^ 
                                                      ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                          >> 2U)))))
                                               : ((6U 
                                                   == 
                                                   (0xfU 
                                                    & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                          >> 2U))))
                                                   ? 
                                                  (0U 
                                                   == 
                                                   (0x3f0U 
                                                    & (6U 
                                                       ^ 
                                                       ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                           >> 2U)))))
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (0xfU 
                                                     & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                           >> 2U)))) 
                                                   | ((4U 
                                                       == 
                                                       (0xfU 
                                                        & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                            << 0x1eU) 
                                                           | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                              >> 2U))))
                                                       ? 
                                                      (0U 
                                                       == 
                                                       (0x3f0U 
                                                        & (4U 
                                                           ^ 
                                                           ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                             << 0x1eU) 
                                                            | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                               >> 2U)))))
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0xfU 
                                                         & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                             << 0x1eU) 
                                                            | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                               >> 2U))))
                                                        ? 
                                                       (0U 
                                                        == 
                                                        (0x3f0U 
                                                         & (3U 
                                                            ^ 
                                                            ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                              << 0x1eU) 
                                                             | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                >> 2U)))))
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (0xfU 
                                                          & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                              << 0x1eU) 
                                                             | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                >> 2U))))
                                                         ? 
                                                        (0U 
                                                         == 
                                                         (0x3f0U 
                                                          & (2U 
                                                             ^ 
                                                             ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                               << 0x1eU) 
                                                              | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                 >> 2U)))))
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (0xfU 
                                                           & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                               << 0x1eU) 
                                                              | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                 >> 2U)))) 
                                                         | (0U 
                                                            == 
                                                            (0x3f0U 
                                                             & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                                 << 0x1eU) 
                                                                | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                   >> 2U)))))))))));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209 
        = (0x7fffffffU & (this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_203 
                          >> (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__scale)));
    this->__PVT__u_sirv_pwm16__DOT__T_2151 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2150) 
                                              & (4U 
                                                 == 
                                                 ((0x20U 
                                                   & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read)
                                                   ? 4U
                                                   : 0U)));
    this->__PVT__u_sirv_pwm16__DOT__T_2157 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2150) 
                                              & (4U 
                                                 != 
                                                 ((0x20U 
                                                   & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read)
                                                   ? 4U
                                                   : 0U)));
    this->__PVT__u_sirv_pwm16__DOT__T_2161 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2160) 
                                              & (4U 
                                                 == 
                                                 ((0x20U 
                                                   & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read)
                                                   ? 4U
                                                   : 0U)));
    this->__PVT__u_sirv_pwm16__DOT__T_2167 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2160) 
                                              & (4U 
                                                 != 
                                                 ((0x20U 
                                                   & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_read)
                                                   ? 4U
                                                   : 0U)));
    this->__PVT__u_sirv_pwm16__DOT__T_2131 = (((IData)(1U) 
                                               << (0xfU 
                                                   & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                         >> 2U)))) 
                                              & (IData)(this->__PVT__u_sirv_pwm16__DOT__T_2130));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_221 
        = (1U & ((this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209 
                  >> 0xfU) & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__center) 
                              >> 1U)));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_226 
        = (1U & ((this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209 
                  >> 0xfU) & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__center) 
                              >> 2U)));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_231 
        = (1U & ((this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209 
                  >> 0xfU) & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__center) 
                              >> 3U)));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_216 
        = (1U & ((this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209 
                  >> 0xfU) & (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__center)));
    this->__PVT__u_sirv_pwm16__DOT__GEN_92 = ((0xcU 
                                               == (0xfU 
                                                   & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                         >> 2U))))
                                               ? 0U
                                               : ((0xbU 
                                                   == 
                                                   (0xfU 
                                                    & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                          >> 2U))))
                                                   ? (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_3)
                                                   : 
                                                  ((0xaU 
                                                    == 
                                                    (0xfU 
                                                     & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                           >> 2U))))
                                                    ? (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_2)
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0xfU 
                                                      & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                          << 0x1eU) 
                                                         | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                            >> 2U))))
                                                     ? (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_1)
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfU 
                                                       & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                             >> 2U))))
                                                      ? (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_0)
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0xfU 
                                                        & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                            << 0x1eU) 
                                                           | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                              >> 2U))))
                                                       ? 1U
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0xfU 
                                                         & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                             << 0x1eU) 
                                                            | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                               >> 2U))))
                                                        ? 0U
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0xfU 
                                                          & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                              << 0x1eU) 
                                                             | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                >> 2U))))
                                                         ? 0U
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0xfU 
                                                           & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                               << 0x1eU) 
                                                              | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                 >> 2U))))
                                                          ? 
                                                         (0xffffU 
                                                          & this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209)
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0xfU 
                                                            & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                                << 0x1eU) 
                                                               | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                  >> 2U))))
                                                           ? 0U
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0xfU 
                                                             & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                                 << 0x1eU) 
                                                                | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                   >> 2U))))
                                                            ? this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_203
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0xfU 
                                                              & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                                  << 0x1eU) 
                                                                 | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                    >> 2U))))
                                                             ? 0U
                                                             : 
                                                            (((((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__ip) 
                                                                << 0x1cU) 
                                                               | (((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__gang) 
                                                                   << 0x18U) 
                                                                  | ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__center) 
                                                                     << 0x10U))) 
                                                              | (((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__oneShot) 
                                                                  << 0xdU) 
                                                                 | ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countAlways) 
                                                                    << 0xcU))) 
                                                             | ((((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_259) 
                                                                  << 0xaU) 
                                                                 | ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__zerocmp) 
                                                                    << 9U)) 
                                                                | (((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_267) 
                                                                    << 8U) 
                                                                   | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__scale))))))))))))))));
    this->__PVT__u_sirv_pwm16__DOT__T_2329 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 8U));
    this->__PVT__u_sirv_pwm16__DOT__T_2349 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 9U));
    this->__PVT__u_sirv_pwm16__DOT__T_2369 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 0xaU));
    this->__PVT__u_sirv_pwm16__DOT__T_2389 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 0xbU));
    this->__PVT__u_sirv_pwm16__DOT__T_2169 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & (IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131));
    this->__PVT__u_sirv_pwm16__DOT__T_2209 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 2U));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_284 
        = ((((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_231) 
             << 3U) | ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_226) 
                       << 2U)) | (((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_221) 
                                   << 1U) | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_216)));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__elapsed_0 
        = ((0xffffU & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_216)
                        ? (~ this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209)
                        : this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209)) 
           >= (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_0));
    this->__PVT__u_sirv_pwm16__DOT__T_2589 = (((0xfU 
                                                == 
                                                (0xfU 
                                                 & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                     << 0x1eU) 
                                                    | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                       >> 2U)))) 
                                               | ((0xeU 
                                                   == 
                                                   (0xfU 
                                                    & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                          >> 2U)))) 
                                                  | ((0xdU 
                                                      == 
                                                      (0xfU 
                                                       & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                             >> 2U)))) 
                                                     | ((0xcU 
                                                         == 
                                                         (0xfU 
                                                          & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                              << 0x1eU) 
                                                             | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                >> 2U)))) 
                                                        | ((0xbU 
                                                            == 
                                                            (0xfU 
                                                             & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                                 << 0x1eU) 
                                                                | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                   >> 2U))))
                                                            ? 
                                                           (0U 
                                                            == 
                                                            (0x3f0U 
                                                             & (0xbU 
                                                                ^ 
                                                                ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                                  << 0x1eU) 
                                                                 | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                    >> 2U)))))
                                                            : 
                                                           ((0xaU 
                                                             == 
                                                             (0xfU 
                                                              & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                                  << 0x1eU) 
                                                                 | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                    >> 2U))))
                                                             ? 
                                                            (0U 
                                                             == 
                                                             (0x3f0U 
                                                              & (0xaU 
                                                                 ^ 
                                                                 ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                                   << 0x1eU) 
                                                                  | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                     >> 2U)))))
                                                             : 
                                                            ((9U 
                                                              == 
                                                              (0xfU 
                                                               & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                                   << 0x1eU) 
                                                                  | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                     >> 2U))))
                                                              ? 
                                                             (0U 
                                                              == 
                                                              (0x3f0U 
                                                               & (9U 
                                                                  ^ 
                                                                  ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                                    << 0x1eU) 
                                                                   | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                      >> 2U)))))
                                                              : 
                                                             ((8U 
                                                               == 
                                                               (0xfU 
                                                                & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                                    << 0x1eU) 
                                                                   | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                      >> 2U))))
                                                               ? 
                                                              (0U 
                                                               == 
                                                               (0x3f0U 
                                                                & (8U 
                                                                   ^ 
                                                                   ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                                     << 0x1eU) 
                                                                    | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                                       >> 2U)))))
                                                               : (IData)(this->__PVT__u_sirv_pwm16__DOT__GEN_72)))))))))
                                               ? ((0xfU 
                                                   == 
                                                   (0xfU 
                                                    & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                          >> 2U))))
                                                   ? 0U
                                                   : 
                                                  ((0xeU 
                                                    == 
                                                    (0xfU 
                                                     & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                           >> 2U))))
                                                    ? 0U
                                                    : 
                                                   ((0xdU 
                                                     == 
                                                     (0xfU 
                                                      & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[6U] 
                                                          << 0x1eU) 
                                                         | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_addr[5U] 
                                                            >> 2U))))
                                                     ? 0U
                                                     : this->__PVT__u_sirv_pwm16__DOT__GEN_92)))
                                               : 0U);
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_288 
        = (((((0xffffU & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_231)
                           ? (~ this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209)
                           : this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209)) 
              >= (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_3)) 
             << 3U) | (((0xffffU & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_226)
                                     ? (~ this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209)
                                     : this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209)) 
                        >= (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_2)) 
                       << 2U)) | ((((0xffffU & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_221)
                                                 ? 
                                                (~ this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209)
                                                 : this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209)) 
                                    >= (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_1)) 
                                   << 1U) | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__elapsed_0)));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countReset 
        = (1U & ((0x7fffffffU & (((0x7fffffe0U & ((
                                                   (0x20U 
                                                    & (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_197))
                                                    ? 
                                                   (0x7ffffffU 
                                                    & (this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_199 
                                                       ^ 
                                                       ((IData)(1U) 
                                                        + this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_199)))
                                                    : 0U) 
                                                  << 4U)) 
                                  | (0x1fU & (((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_196) 
                                               ^ (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_197)) 
                                              >> 1U))) 
                                 >> (0x1fU & ((IData)(0x10U) 
                                              + (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__scale))))) 
                 | ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__zerocmp) 
                    & (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__elapsed_0))));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_301 
        = (((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_284) 
            & (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_288)) 
           | ((~ (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_284)) 
              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_288) 
                 | (((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_269)
                      ? 0xfU : 0U) & (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__ip)))));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_319 
        = (1U & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[5U] 
                  >> 0xdU) & (~ (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countReset))));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_323 
        = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2169) 
           | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countReset));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_11 
        = ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countReset)
            ? 0U : (0xfffffffU & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2209)
                                   ? (IData)(((QData)((IData)(
                                                              vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[5U])) 
                                              >> 5U))
                                   : (0x7ffffffU & 
                                      ((0x20U & (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_197))
                                        ? ((IData)(1U) 
                                           + this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_199)
                                        : this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_199)))));
}

void Ve203_soc_top_verilator_sirv_pwm16_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Ve203_soc_top_verilator_sirv_pwm16_top::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    i_icb_cmd_valid = VL_RAND_RESET_I(1);
    i_icb_cmd_ready = VL_RAND_RESET_I(1);
    i_icb_cmd_addr = VL_RAND_RESET_I(32);
    i_icb_cmd_read = VL_RAND_RESET_I(1);
    i_icb_cmd_wdata = VL_RAND_RESET_I(32);
    i_icb_rsp_valid = VL_RAND_RESET_I(1);
    i_icb_rsp_ready = VL_RAND_RESET_I(1);
    i_icb_rsp_rdata = VL_RAND_RESET_I(32);
    io_interrupts_0_0 = VL_RAND_RESET_I(1);
    io_interrupts_0_1 = VL_RAND_RESET_I(1);
    io_interrupts_0_2 = VL_RAND_RESET_I(1);
    io_interrupts_0_3 = VL_RAND_RESET_I(1);
    io_gpio_0 = VL_RAND_RESET_I(1);
    io_gpio_1 = VL_RAND_RESET_I(1);
    io_gpio_2 = VL_RAND_RESET_I(1);
    io_gpio_3 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__T_2130 = VL_RAND_RESET_I(16);
    __PVT__u_sirv_pwm16__DOT__T_2131 = VL_RAND_RESET_I(16);
    __PVT__u_sirv_pwm16__DOT__T_2150 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__T_2151 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__T_2157 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__T_2160 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__T_2161 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__T_2167 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__T_2169 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__T_2209 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__T_2329 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__T_2349 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__T_2369 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__T_2389 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__GEN_72 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__GEN_92 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__T_2589 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__GEN_103 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__GEN_104 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__GEN_105 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__GEN_106 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__GEN_107 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__GEN_108 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__GEN_109 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__scale = VL_RAND_RESET_I(4);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_22 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_0 = VL_RAND_RESET_I(16);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_23 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_1 = VL_RAND_RESET_I(16);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_24 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_2 = VL_RAND_RESET_I(16);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_25 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_3 = VL_RAND_RESET_I(16);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_26 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_196 = VL_RAND_RESET_I(5);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_27 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_197 = VL_RAND_RESET_I(6);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_199 = VL_RAND_RESET_I(26);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_28 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_203 = VL_RAND_RESET_I(31);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209 = VL_RAND_RESET_I(31);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__center = VL_RAND_RESET_I(4);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_29 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_216 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__elapsed_0 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_221 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_226 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_231 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__zerocmp = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_30 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__countReset = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_11 = VL_RAND_RESET_I(28);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_259 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_31 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_267 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_32 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_269 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_33 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_284 = VL_RAND_RESET_I(4);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__ip = VL_RAND_RESET_I(4);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_34 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_288 = VL_RAND_RESET_I(4);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_301 = VL_RAND_RESET_I(4);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__gang = VL_RAND_RESET_I(4);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_35 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_319 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__T_323 = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__oneShot = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_36 = VL_RAND_RESET_I(32);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__countAlways = VL_RAND_RESET_I(1);
    __PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_37 = VL_RAND_RESET_I(32);
}
