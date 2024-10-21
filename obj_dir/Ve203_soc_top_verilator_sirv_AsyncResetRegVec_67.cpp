// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Ve203_soc_top_verilator.h for the primary calling header

#include "Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67.h"
#include "Ve203_soc_top_verilator__Syms.h"

//==========

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__u_oeReg__4(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__u_oeReg__4\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_0_q = (1U & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU]);
        }
    } else {
        this->__PVT__reg_0_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_1_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 1U));
        }
    } else {
        this->__PVT__reg_1_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_2_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 2U));
        }
    } else {
        this->__PVT__reg_2_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_3_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 3U));
        }
    } else {
        this->__PVT__reg_3_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_4_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 4U));
        }
    } else {
        this->__PVT__reg_4_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_5_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 5U));
        }
    } else {
        this->__PVT__reg_5_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_6_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 6U));
        }
    } else {
        this->__PVT__reg_6_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_7_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 7U));
        }
    } else {
        this->__PVT__reg_7_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_8_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 8U));
        }
    } else {
        this->__PVT__reg_8_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_9_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 9U));
        }
    } else {
        this->__PVT__reg_9_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_10_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xaU));
        }
    } else {
        this->__PVT__reg_10_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_11_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xbU));
        }
    } else {
        this->__PVT__reg_11_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_12_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xcU));
        }
    } else {
        this->__PVT__reg_12_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_13_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xdU));
        }
    } else {
        this->__PVT__reg_13_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_14_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xeU));
        }
    } else {
        this->__PVT__reg_14_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_15_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xfU));
        }
    } else {
        this->__PVT__reg_15_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_16_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x10U));
        }
    } else {
        this->__PVT__reg_16_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_17_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x11U));
        }
    } else {
        this->__PVT__reg_17_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_18_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x12U));
        }
    } else {
        this->__PVT__reg_18_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_19_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x13U));
        }
    } else {
        this->__PVT__reg_19_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_20_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x14U));
        }
    } else {
        this->__PVT__reg_20_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_21_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x15U));
        }
    } else {
        this->__PVT__reg_21_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_22_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x16U));
        }
    } else {
        this->__PVT__reg_22_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_23_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x17U));
        }
    } else {
        this->__PVT__reg_23_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_24_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x18U));
        }
    } else {
        this->__PVT__reg_24_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_25_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x19U));
        }
    } else {
        this->__PVT__reg_25_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_26_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1aU));
        }
    } else {
        this->__PVT__reg_26_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_27_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1bU));
        }
    } else {
        this->__PVT__reg_27_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_28_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1cU));
        }
    } else {
        this->__PVT__reg_28_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_29_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1dU));
        }
    } else {
        this->__PVT__reg_29_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_30_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1eU));
        }
    } else {
        this->__PVT__reg_30_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5453) {
            this->__PVT__reg_31_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1fU));
        }
    } else {
        this->__PVT__reg_31_q = 0U;
    }
}

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__u_pueReg__5(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__u_pueReg__5\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_0_q = (1U & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU]);
        }
    } else {
        this->__PVT__reg_0_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_1_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 1U));
        }
    } else {
        this->__PVT__reg_1_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_2_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 2U));
        }
    } else {
        this->__PVT__reg_2_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_3_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 3U));
        }
    } else {
        this->__PVT__reg_3_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_4_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 4U));
        }
    } else {
        this->__PVT__reg_4_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_5_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 5U));
        }
    } else {
        this->__PVT__reg_5_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_6_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 6U));
        }
    } else {
        this->__PVT__reg_6_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_7_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 7U));
        }
    } else {
        this->__PVT__reg_7_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_8_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 8U));
        }
    } else {
        this->__PVT__reg_8_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_9_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 9U));
        }
    } else {
        this->__PVT__reg_9_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_10_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xaU));
        }
    } else {
        this->__PVT__reg_10_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_11_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xbU));
        }
    } else {
        this->__PVT__reg_11_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_12_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xcU));
        }
    } else {
        this->__PVT__reg_12_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_13_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xdU));
        }
    } else {
        this->__PVT__reg_13_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_14_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xeU));
        }
    } else {
        this->__PVT__reg_14_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_15_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xfU));
        }
    } else {
        this->__PVT__reg_15_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_16_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x10U));
        }
    } else {
        this->__PVT__reg_16_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_17_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x11U));
        }
    } else {
        this->__PVT__reg_17_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_18_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x12U));
        }
    } else {
        this->__PVT__reg_18_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_19_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x13U));
        }
    } else {
        this->__PVT__reg_19_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_20_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x14U));
        }
    } else {
        this->__PVT__reg_20_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_21_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x15U));
        }
    } else {
        this->__PVT__reg_21_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_22_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x16U));
        }
    } else {
        this->__PVT__reg_22_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_23_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x17U));
        }
    } else {
        this->__PVT__reg_23_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_24_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x18U));
        }
    } else {
        this->__PVT__reg_24_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_25_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x19U));
        }
    } else {
        this->__PVT__reg_25_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_26_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1aU));
        }
    } else {
        this->__PVT__reg_26_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_27_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1bU));
        }
    } else {
        this->__PVT__reg_27_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_28_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1cU));
        }
    } else {
        this->__PVT__reg_28_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_29_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1dU));
        }
    } else {
        this->__PVT__reg_29_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_30_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1eU));
        }
    } else {
        this->__PVT__reg_30_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5493) {
            this->__PVT__reg_31_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1fU));
        }
    } else {
        this->__PVT__reg_31_q = 0U;
    }
}

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__u_ieReg__6(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__u_ieReg__6\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_0_q = (1U & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU]);
        }
    } else {
        this->__PVT__reg_0_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_1_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 1U));
        }
    } else {
        this->__PVT__reg_1_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_2_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 2U));
        }
    } else {
        this->__PVT__reg_2_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_3_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 3U));
        }
    } else {
        this->__PVT__reg_3_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_4_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 4U));
        }
    } else {
        this->__PVT__reg_4_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_5_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 5U));
        }
    } else {
        this->__PVT__reg_5_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_6_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 6U));
        }
    } else {
        this->__PVT__reg_6_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_7_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 7U));
        }
    } else {
        this->__PVT__reg_7_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_8_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 8U));
        }
    } else {
        this->__PVT__reg_8_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_9_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 9U));
        }
    } else {
        this->__PVT__reg_9_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_10_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xaU));
        }
    } else {
        this->__PVT__reg_10_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_11_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xbU));
        }
    } else {
        this->__PVT__reg_11_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_12_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xcU));
        }
    } else {
        this->__PVT__reg_12_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_13_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xdU));
        }
    } else {
        this->__PVT__reg_13_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_14_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xeU));
        }
    } else {
        this->__PVT__reg_14_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_15_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xfU));
        }
    } else {
        this->__PVT__reg_15_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_16_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x10U));
        }
    } else {
        this->__PVT__reg_16_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_17_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x11U));
        }
    } else {
        this->__PVT__reg_17_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_18_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x12U));
        }
    } else {
        this->__PVT__reg_18_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_19_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x13U));
        }
    } else {
        this->__PVT__reg_19_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_20_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x14U));
        }
    } else {
        this->__PVT__reg_20_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_21_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x15U));
        }
    } else {
        this->__PVT__reg_21_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_22_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x16U));
        }
    } else {
        this->__PVT__reg_22_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_23_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x17U));
        }
    } else {
        this->__PVT__reg_23_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_24_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x18U));
        }
    } else {
        this->__PVT__reg_24_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_25_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x19U));
        }
    } else {
        this->__PVT__reg_25_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_26_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1aU));
        }
    } else {
        this->__PVT__reg_26_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_27_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1bU));
        }
    } else {
        this->__PVT__reg_27_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_28_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1cU));
        }
    } else {
        this->__PVT__reg_28_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_29_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1dU));
        }
    } else {
        this->__PVT__reg_29_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_30_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1eU));
        }
    } else {
        this->__PVT__reg_30_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5433) {
            this->__PVT__reg_31_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1fU));
        }
    } else {
        this->__PVT__reg_31_q = 0U;
    }
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

VL_INLINE_OPT void Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__u_iofEnReg__3(Ve203_soc_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Ve203_soc_top_verilator_sirv_AsyncResetRegVec_67::_sequent__TOP__e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__u_iofEnReg__3\n"); );
    Ve203_soc_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_0_q = (1U & vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU]);
        }
    } else {
        this->__PVT__reg_0_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_1_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 1U));
        }
    } else {
        this->__PVT__reg_1_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_2_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 2U));
        }
    } else {
        this->__PVT__reg_2_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_3_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 3U));
        }
    } else {
        this->__PVT__reg_3_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_4_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 4U));
        }
    } else {
        this->__PVT__reg_4_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_5_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 5U));
        }
    } else {
        this->__PVT__reg_5_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_6_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 6U));
        }
    } else {
        this->__PVT__reg_6_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_7_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 7U));
        }
    } else {
        this->__PVT__reg_7_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_8_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 8U));
        }
    } else {
        this->__PVT__reg_8_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_9_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                          >> 9U));
        }
    } else {
        this->__PVT__reg_9_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_10_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xaU));
        }
    } else {
        this->__PVT__reg_10_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_11_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xbU));
        }
    } else {
        this->__PVT__reg_11_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_12_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xcU));
        }
    } else {
        this->__PVT__reg_12_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_13_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xdU));
        }
    } else {
        this->__PVT__reg_13_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_14_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xeU));
        }
    } else {
        this->__PVT__reg_14_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_15_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0xfU));
        }
    } else {
        this->__PVT__reg_15_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_16_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x10U));
        }
    } else {
        this->__PVT__reg_16_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_17_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x11U));
        }
    } else {
        this->__PVT__reg_17_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_18_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x12U));
        }
    } else {
        this->__PVT__reg_18_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_19_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x13U));
        }
    } else {
        this->__PVT__reg_19_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_20_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x14U));
        }
    } else {
        this->__PVT__reg_20_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_21_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x15U));
        }
    } else {
        this->__PVT__reg_21_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_22_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x16U));
        }
    } else {
        this->__PVT__reg_22_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_23_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x17U));
        }
    } else {
        this->__PVT__reg_23_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_24_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x18U));
        }
    } else {
        this->__PVT__reg_24_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_25_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x19U));
        }
    } else {
        this->__PVT__reg_25_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_26_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1aU));
        }
    } else {
        this->__PVT__reg_26_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_27_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1bU));
        }
    } else {
        this->__PVT__reg_27_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_28_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1cU));
        }
    } else {
        this->__PVT__reg_28_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_29_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1dU));
        }
    } else {
        this->__PVT__reg_29_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_30_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1eU));
        }
    } else {
        this->__PVT__reg_30_q = 0U;
    }
    if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__core_rst_n) {
        if (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_gpio_top__DOT__u_sirv_gpio__DOT__T_5693) {
            this->__PVT__reg_31_q = (1U & (vlTOPp->e203_soc_top_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_sirv_ppi_fab__DOT__splt_bus_icb_cmd_wdata[0xdU] 
                                           >> 0x1fU));
        }
    } else {
        this->__PVT__reg_31_q = 0U;
    }
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
