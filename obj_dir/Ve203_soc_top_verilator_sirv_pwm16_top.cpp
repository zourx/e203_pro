// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Ve203_soc_top_verilator.h for the primary calling header

#include "Ve203_soc_top_verilator_sirv_pwm16_top.h"
#include "Ve203_soc_top_verilator__Syms.h"

//==========

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_pwm16_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm1_top__3(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Ve203_soc_top_verilator_sirv_pwm16_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm1_top__3\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_323) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__oneShot 
                = this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_319;
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__oneShot = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2169) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__gang 
                = (0xfU & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[8U] 
                            << 8U) | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[7U] 
                                      >> 0x18U)));
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__gang = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2349) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_1 
                = (0xffffU & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[7U]);
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_1 = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2369) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_2 
                = (0xffffU & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[7U]);
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_2 = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2389) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_3 
                = (0xffffU & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[7U]);
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_3 = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2169) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__zerocmp 
                = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[7U] 
                         >> 9U));
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__zerocmp = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2169) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countAlways 
                = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[7U] 
                         >> 0xcU));
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countAlways = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2329) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_0 
                = (0xffffU & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[7U]);
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_0 = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2169) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__center 
                = (0xfU & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[8U] 
                            << 0x10U) | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[7U] 
                                         >> 0x10U)));
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__center = 0U;
    }
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_269 
        = ((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) 
           & (((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_259) 
               & (~ (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countReset))) 
              | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_267)));
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2169) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__scale 
                = (0xfU & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[7U]);
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__scale = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_199 
            = (0x3ffffffU & this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_11);
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_196 
            = (0x1fU & (IData)(((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countReset)
                                 ? 0ULL : ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2209)
                                            ? (QData)((IData)(
                                                              vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[7U]))
                                            : (QData)((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_197))))));
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__ip 
            = (0xfU & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2169)
                        ? ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[8U] 
                            << 4U) | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[7U] 
                                      >> 0x1cU)) : (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_301)));
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_199 = 0U;
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_196 = 0U;
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__ip = 0U;
    }
    this->__PVT__u_sirv_pwm16__DOT__T_2349 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 9U));
    this->__PVT__u_sirv_pwm16__DOT__T_2369 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 0xaU));
    this->__PVT__u_sirv_pwm16__DOT__T_2389 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 0xbU));
    this->__PVT__u_sirv_pwm16__DOT__T_2329 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 8U));
    this->__PVT__u_sirv_pwm16__DOT__T_2209 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 2U));
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2169) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_259 
                = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[7U] 
                         >> 0xaU));
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_259 = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2169) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_267 
                = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[7U] 
                         >> 8U));
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_267 = 0U;
    }
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_197 
        = (0x3fU & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_196) 
                    + ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countAlways) 
                       | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__oneShot))));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_203 
        = ((this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_199 
            << 5U) | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_196));
    this->__PVT__u_sirv_pwm16__DOT__T_2169 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & (IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209 
        = (0x7fffffffU & (this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_203 
                          >> (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__scale)));
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
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_323 
        = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2169) 
           | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countReset));
}

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_pwm16_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm1_top__5(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Ve203_soc_top_verilator_sirv_pwm16_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm1_top__5\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_319 
        = (1U & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[7U] 
                  >> 0xdU) & (~ (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countReset))));
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

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_pwm16_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm2_top__4(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Ve203_soc_top_verilator_sirv_pwm16_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm2_top__4\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_323) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__oneShot 
                = this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_319;
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__oneShot = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2169) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__gang 
                = (0xfU & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[6U] 
                            << 8U) | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[5U] 
                                      >> 0x18U)));
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__gang = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2349) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_1 
                = (0xffffU & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[5U]);
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_1 = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2369) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_2 
                = (0xffffU & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[5U]);
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_2 = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2389) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_3 
                = (0xffffU & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[5U]);
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_3 = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2169) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__zerocmp 
                = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[5U] 
                         >> 9U));
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__zerocmp = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2169) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countAlways 
                = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[5U] 
                         >> 0xcU));
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countAlways = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2329) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_0 
                = (0xffffU & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[5U]);
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__cmp_0 = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2169) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__center 
                = (0xfU & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[6U] 
                            << 0x10U) | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[5U] 
                                         >> 0x10U)));
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__center = 0U;
    }
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_269 
        = ((IData)(vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) 
           & (((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_259) 
               & (~ (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countReset))) 
              | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_267)));
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2169) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__scale 
                = (0xfU & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[5U]);
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__scale = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_199 
            = (0x3ffffffU & this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__GEN_11);
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_196 
            = (0x1fU & (IData)(((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countReset)
                                 ? 0ULL : ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2209)
                                            ? (QData)((IData)(
                                                              vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[5U]))
                                            : (QData)((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_197))))));
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__ip 
            = (0xfU & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2169)
                        ? ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[6U] 
                            << 4U) | (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[5U] 
                                      >> 0x1cU)) : (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_301)));
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_199 = 0U;
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_196 = 0U;
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__ip = 0U;
    }
    this->__PVT__u_sirv_pwm16__DOT__T_2349 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 9U));
    this->__PVT__u_sirv_pwm16__DOT__T_2369 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 0xaU));
    this->__PVT__u_sirv_pwm16__DOT__T_2389 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 0xbU));
    this->__PVT__u_sirv_pwm16__DOT__T_2329 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 8U));
    this->__PVT__u_sirv_pwm16__DOT__T_2209 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131) 
                                                 >> 2U));
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2169) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_259 
                = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[5U] 
                         >> 0xaU));
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_259 = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (this->__PVT__u_sirv_pwm16__DOT__T_2169) {
            this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_267 
                = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[5U] 
                         >> 8U));
        }
    } else {
        this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_267 = 0U;
    }
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_197 
        = (0x3fU & ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_196) 
                    + ((IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countAlways) 
                       | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__oneShot))));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_203 
        = ((this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_199 
            << 5U) | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_196));
    this->__PVT__u_sirv_pwm16__DOT__T_2169 = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2167) 
                                              & (IData)(this->__PVT__u_sirv_pwm16__DOT__T_2131));
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_209 
        = (0x7fffffffU & (this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_203 
                          >> (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__scale)));
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
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_323 
        = ((IData)(this->__PVT__u_sirv_pwm16__DOT__T_2169) 
           | (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countReset));
}

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_pwm16_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm2_top__6(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Ve203_soc_top_verilator_sirv_pwm16_top::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_pwm2_top__6\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__T_319 
        = (1U & ((vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[5U] 
                  >> 0xdU) & (~ (IData)(this->__PVT__u_sirv_pwm16__DOT__pwm__DOT__countReset))));
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
