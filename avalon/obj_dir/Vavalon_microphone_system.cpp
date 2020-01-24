// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vavalon_microphone_system.h for the primary calling header

#include "Vavalon_microphone_system.h"
#include "Vavalon_microphone_system__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vavalon_microphone_system), __Vm_mt_100(1), 
  __Vm_mt_101(1), __Vm_mt_102(1), __Vm_mt_135(6), __Vm_mt_138(1), 
  __Vm_mt_142(1), __Vm_mt_143(1), __Vm_mt_180(1), __Vm_mt_182(13), 
  __Vm_mt_183(1), __Vm_mt_184(5), __Vm_mt_185(1), __Vm_mt_186(1), 
  __Vm_mt_188(1), __Vm_mt_190(1), __Vm_mt_192(1), __Vm_mt_194(1), 
  __Vm_mt_238(5), __Vm_mt_239(5), __Vm_mt_240(5), __Vm_mt_241(4), 
  __Vm_mt_242(1), __Vm_mt_243(1), __Vm_mt_244(1), __Vm_mt_245(1), 
  __Vm_mt_246(11), __Vm_mt_252(4), __Vm_mt_253(6), 
  __Vm_mt_254(5), __Vm_mt_255(1), __Vm_mt_256(1), __Vm_mt_257(1), 
  __Vm_mt_258(1), __Vm_mt_259(6), __Vm_mt_final(32), 
  __Vm_threadPoolp(NULL), __Vm_even_cycle(false) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = __VlSymsp = new Vavalon_microphone_system__Syms(this, name());
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
    __Vm_threadPoolp = new VlThreadPool(31, 0);
}

void Vavalon_microphone_system::__Vconfigure(Vavalon_microphone_system__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vavalon_microphone_system::~Vavalon_microphone_system() {
    delete __Vm_threadPoolp; __Vm_threadPoolp = NULL;
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vavalon_microphone_system::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vavalon_microphone_system::eval\n"); );
    Vavalon_microphone_system__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("avalon_microphone_system.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vavalon_microphone_system::_eval_initial_loop(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("avalon_microphone_system.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void Vavalon_microphone_system::_initial__TOP__1(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_initial__TOP__1\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AVL_READDATA = 0U;
    vlTOPp->avalon_microphone_system__DOT__restart_sig = 0U;
    vlTOPp->avalon_microphone_system__DOT__start = 0U;
    vlTOPp->avalon_microphone_system__DOT__counter = 0U;
    vlTOPp->vol_1 = 0x14U;
    vlTOPp->vol_2 = 0x14U;
    vlTOPp->vol_3 = 0x14U;
    vlTOPp->vol_4 = 0x14U;
    vlTOPp->vol_5 = 0x14U;
    vlTOPp->vol_6 = 0x14U;
    vlTOPp->vol_7 = 0x14U;
    vlTOPp->vol_8 = 0x14U;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__finish_signal = 0U;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter = 0U;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_counter = 0U;
    vlTOPp->avalon_microphone_system__DOT__half_way_latch = 0U;
    vlTOPp->avalon_microphone_system__DOT__end_latch = 0U;
    vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsd = 0U;
    vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsd = 0U;
    vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsd = 0U;
    vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsd = 0U;
}

void Vavalon_microphone_system::_settle__TOP__2(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_settle__TOP__2\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sample_ready = vlTOPp->avalon_microphone_system__DOT__ready_read_now;
    if ((1U & (~ ((IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))) {
            if ((1U & (~ (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state)))) {
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk5__DOT__i = 5U;
            }
        }
    }
    vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET 
        = ((IData)(vlTOPp->RESET) | (IData)(vlTOPp->avalon_microphone_system__DOT__restart_sig));
    if ((1U & (~ ((IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state)))) {
                if ((1U & (~ (IData)(vlTOPp->avalon_microphone_system__DOT__start)))) {
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk4__DOT__i = 5U;
                }
            }
        }
    }
    vlTOPp->codec_stream = ((IData)(vlTOPp->avalon_microphone_system__DOT__start)
                             ? 0U : ((((vlTOPp->avalon_microphone_system__DOT__ready_data_1 
                                        + vlTOPp->avalon_microphone_system__DOT__ready_data_2) 
                                       + vlTOPp->avalon_microphone_system__DOT__ready_data_3) 
                                      + vlTOPp->avalon_microphone_system__DOT__ready_data_4) 
                                     + vlTOPp->adc_data));
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__finish_signal 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_finish_signal;
    if ((4U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))) {
        if ((1U & (~ ((IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))) {
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__finish_signal = 1U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))) {
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__finish_signal = 0U;
            }
        }
    }
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__next_state 
        = ((4U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))
            ? ((2U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))
                ? 0U : ((1U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))
                         ? ((IData)(vlTOPp->avalon_microphone_system__DOT__start)
                             ? 5U : 0U) : ((IData)(vlTOPp->AM_WAITREQUEST)
                                            ? 4U : 
                                           ((4U == vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter)
                                             ? ((IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__done)
                                                 ? 5U
                                                 : 3U)
                                             : 3U))))
            : ((2U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))
                ? ((1U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))
                    ? ((IData)(vlTOPp->AM_WAITREQUEST)
                        ? 3U : ((0U == vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter)
                                 ? ((vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
                                     [4U] == ((IData)(0x249f000U) 
                                              + vlTOPp->avalon_microphone_system__DOT__start_addr))
                                     ? 2U : ((IData)(vlTOPp->avalon_microphone_system__DOT__ready_read_now)
                                              ? 4U : 3U))
                                 : 4U)) : 3U) : ((1U 
                                                  & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlTOPp->avalon_microphone_system__DOT__start)
                                                   ? 1U
                                                   : 0U))));
    vlTOPp->AM_WRITE = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_WRITE;
    vlTOPp->AM_ADDR = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_ADDR;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address
        [0U];
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[0U] 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address
        [1U];
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[1U] 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address
        [2U];
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[2U] 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address
        [3U];
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[3U] 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address
        [4U];
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[4U] 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_num_samples;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__done 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_done;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_counter;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_mic_count;
    vlTOPp->AM_BURSTCOUNT = 1U;
    vlTOPp->AM_BYTEENABLE = 0xfU;
    if ((4U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))) {
        if ((1U & (~ ((IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))) {
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples 
                    = vlTOPp->avalon_microphone_system__DOT__num_samps;
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter = 0U;
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__done = 0U;
                vlTOPp->AM_WRITE = 0U;
                vlTOPp->AM_ADDR = vlTOPp->avalon_microphone_system__DOT__start_addr;
            } else {
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count 
                    = (7U & ((IData)(1U) + vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter));
                if ((1U & (~ (IData)(vlTOPp->AM_WAITREQUEST)))) {
                    if ((0U < vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples)) {
                        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound6 
                            = ((IData)(4U) + ((4U >= 
                                               (7U 
                                                & vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter))
                                               ? vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
                                              [(7U 
                                                & vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter)]
                                               : 0U));
                        vlTOPp->AM_BYTEENABLE = 0xfU;
                        if ((4U >= (7U & vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter))) {
                            vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[(7U 
                                                                                & vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter)] 
                                = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound6;
                        }
                        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples 
                            = ((4U == vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter)
                                ? (vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples 
                                   - (IData)(1U)) : vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_num_samples);
                    } else {
                        if ((0U == vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples)) {
                            vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__done = 1U;
                            vlTOPp->AM_WRITE = 0U;
                            vlTOPp->AM_ADDR = 0U;
                            vlTOPp->AM_BYTEENABLE = 0xfU;
                            vlTOPp->AM_BURSTCOUNT = 0U;
                        }
                    }
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter 
                        = ((4U == vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter)
                            ? 0U : ((IData)(1U) + vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter));
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))) {
            if ((1U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))) {
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count 
                    = (7U & ((IData)(1U) + vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter));
                if ((0U == vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter)) {
                    if (vlTOPp->avalon_microphone_system__DOT__ready_read_now) {
                        if (vlTOPp->AM_WAITREQUEST) {
                            vlTOPp->AM_WRITE = 0U;
                            vlTOPp->AM_ADDR = 0U;
                            vlTOPp->AM_BYTEENABLE = 0xfU;
                            vlTOPp->AM_BURSTCOUNT = 0U;
                        } else {
                            vlTOPp->AM_WRITE = 1U;
                            vlTOPp->AM_ADDR = ((4U 
                                                >= 
                                                (7U 
                                                 & vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter))
                                                ? vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
                                               [(7U 
                                                 & vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter)]
                                                : 0U);
                            vlTOPp->AM_BYTEENABLE = 0xfU;
                            vlTOPp->AM_BURSTCOUNT = 1U;
                        }
                    } else {
                        vlTOPp->AM_WRITE = 0U;
                        vlTOPp->AM_ADDR = 0U;
                        vlTOPp->AM_BYTEENABLE = 0xfU;
                        vlTOPp->AM_BURSTCOUNT = 0U;
                    }
                } else {
                    if (vlTOPp->AM_WAITREQUEST) {
                        vlTOPp->AM_WRITE = 0U;
                        vlTOPp->AM_ADDR = 0U;
                        vlTOPp->AM_BYTEENABLE = 0xfU;
                        vlTOPp->AM_BURSTCOUNT = 0U;
                    } else {
                        vlTOPp->AM_WRITE = 1U;
                        vlTOPp->AM_ADDR = ((4U >= (7U 
                                                   & vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter))
                                            ? vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
                                           [(7U & vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter)]
                                            : 0U);
                        vlTOPp->AM_BYTEENABLE = 0xfU;
                        vlTOPp->AM_BURSTCOUNT = 1U;
                    }
                }
            } else {
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5 
                    = vlTOPp->avalon_microphone_system__DOT__start_addr;
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[0U] 
                    = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5;
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5 
                    = ((IData)(0x753000U) + vlTOPp->avalon_microphone_system__DOT__start_addr);
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[1U] 
                    = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5;
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5 
                    = ((IData)(0xea6000U) + vlTOPp->avalon_microphone_system__DOT__start_addr);
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[2U] 
                    = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5;
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5 
                    = ((IData)(0x15f9000U) + vlTOPp->avalon_microphone_system__DOT__start_addr);
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[3U] 
                    = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5;
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5 
                    = ((IData)(0x1d4c000U) + vlTOPp->avalon_microphone_system__DOT__start_addr);
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[4U] 
                    = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5;
            }
        } else {
            if ((1U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))) {
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter = 0U;
            } else {
                if (vlTOPp->avalon_microphone_system__DOT__start) {
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples 
                        = vlTOPp->avalon_microphone_system__DOT__num_samps;
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count = 2U;
                } else {
                    vlTOPp->AM_ADDR = 0U;
                    vlTOPp->AM_WRITE = 0U;
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples = 0U;
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[0U] = 0U;
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[1U] = 0U;
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[2U] = 0U;
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[3U] = 0U;
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[4U] = 0U;
                }
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__done = 0U;
            }
        }
    }
    vlTOPp->avalon_microphone_system__DOT__detect__DOT__found_edge 
        = ((IData)(vlTOPp->avalon_microphone_system__DOT__detect__DOT__last_test_clk) 
           ^ (IData)(vlTOPp->avalon_microphone_system__DOT__detect__DOT__cur_test_clk));
    vlTOPp->AM_WRITEDATA = ((1U == (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count))
                             ? vlTOPp->avalon_microphone_system__DOT__ready_data_1
                             : ((2U == (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count))
                                 ? vlTOPp->avalon_microphone_system__DOT__ready_data_2
                                 : ((3U == (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count))
                                     ? vlTOPp->avalon_microphone_system__DOT__ready_data_3
                                     : ((4U == (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count))
                                         ? vlTOPp->avalon_microphone_system__DOT__ready_data_4
                                         : ((5U == (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count))
                                             ? vlTOPp->adc_data
                                             : 0U)))));
    vlTOPp->avalon_microphone_system__DOT__saw_rise 
        = ((IData)(vlTOPp->avalon_microphone_system__DOT__detect__DOT__found_edge) 
           & (IData)(vlTOPp->avalon_microphone_system__DOT__detect__DOT__cur_test_clk));
    vlTOPp->avalon_microphone_system__DOT__saw_fall 
        = ((IData)(vlTOPp->avalon_microphone_system__DOT__detect__DOT__found_edge) 
           & (IData)(vlTOPp->avalon_microphone_system__DOT__detect__DOT__last_test_clk));
    vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsp 
        = ((IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsd) 
           ^ (IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsdd));
    vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsp 
        = ((IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsd) 
           ^ (IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsdd));
    vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsp 
        = ((IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsd) 
           ^ (IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsdd));
    vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsp 
        = ((IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsd) 
           ^ (IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsdd));
    vlTOPp->AVL_READDATA = (((IData)(vlTOPp->AVL_CS) 
                             & (IData)(vlTOPp->AVL_READ))
                             ? ((0U == (IData)(vlTOPp->AVL_ADDR))
                                 ? (((IData)(vlTOPp->avalon_microphone_system__DOT__saw_rise) 
                                     << 1U) | (IData)(vlTOPp->avalon_microphone_system__DOT__saw_fall))
                                 : ((1U == (IData)(vlTOPp->AVL_ADDR))
                                     ? (((IData)(vlTOPp->avalon_microphone_system__DOT__mic_l) 
                                         << 0x10U) 
                                        | (IData)(vlTOPp->avalon_microphone_system__DOT__mic_r))
                                     : ((2U == (IData)(vlTOPp->AVL_ADDR))
                                         ? (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__finish_signal)
                                         : ((3U == (IData)(vlTOPp->AVL_ADDR))
                                             ? (IData)(vlTOPp->avalon_microphone_system__DOT__half_way_latch)
                                             : ((4U 
                                                 == (IData)(vlTOPp->AVL_ADDR))
                                                 ? (IData)(vlTOPp->avalon_microphone_system__DOT__end_latch)
                                                 : 0U)))))
                             : 0U);
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__62(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__62\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET)))) {
        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk2__DOT__i = 5U;
    }
    if (vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET) {
        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk1__DOT__i = 5U;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__63(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__63\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__m4__DOT__counter 
        = vlTOPp->avalon_microphone_system__DOT__m4__DOT__counter;
    vlTOPp->__Vdly__avalon_microphone_system__DOT__m3__DOT__counter 
        = vlTOPp->avalon_microphone_system__DOT__m3__DOT__counter;
    vlTOPp->__Vdly__avalon_microphone_system__DOT__m2__DOT__counter 
        = vlTOPp->avalon_microphone_system__DOT__m2__DOT__counter;
    vlTOPp->__Vdly__avalon_microphone_system__DOT__m1__DOT__counter 
        = vlTOPp->avalon_microphone_system__DOT__m1__DOT__counter;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__67(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__67\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__p_coef_data 
        = vlTOPp->avalon_microphone_system__DOT__p_coef_data;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__68(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__68\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_8 
        = vlTOPp->avalon_microphone_system__DOT__p_vol_8;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__69(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__69\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_7 
        = vlTOPp->avalon_microphone_system__DOT__p_vol_7;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__70(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__70\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_6 
        = vlTOPp->avalon_microphone_system__DOT__p_vol_6;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__71(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__71\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_5 
        = vlTOPp->avalon_microphone_system__DOT__p_vol_5;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__72(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__72\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_1 
        = vlTOPp->avalon_microphone_system__DOT__p_vol_1;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__73(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__73\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_2 
        = vlTOPp->avalon_microphone_system__DOT__p_vol_2;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__74(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__74\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_3 
        = vlTOPp->avalon_microphone_system__DOT__p_vol_3;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__75(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__75\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_4 
        = vlTOPp->avalon_microphone_system__DOT__p_vol_4;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__76(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__76\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__counter 
        = vlTOPp->avalon_microphone_system__DOT__counter;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__88(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__88\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_3 
        = vlTOPp->avalon_microphone_system__DOT__ready_data_3;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__89(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__89\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_2 
        = vlTOPp->avalon_microphone_system__DOT__ready_data_2;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__90(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__90\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_4 
        = vlTOPp->avalon_microphone_system__DOT__ready_data_4;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__91(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__91\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_1 
        = vlTOPp->avalon_microphone_system__DOT__ready_data_1;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__95(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__95\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v0 = 0U;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__96(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__96\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v5 = 0U;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__97(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__97\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v6 = 0U;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__98(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__98\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v7 = 0U;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__99(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__99\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v8 = 0U;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__100(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__100\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v9 = 0U;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__101(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__101\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsp) {
        vlTOPp->__Vdly__avalon_microphone_system__DOT__m1__DOT__counter = 0U;
    } else {
        if ((0x10U > (IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__counter))) {
            vlTOPp->__Vdly__avalon_microphone_system__DOT__m1__DOT__counter 
                = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__counter)));
        }
    }
    vlTOPp->avalon_microphone_system__DOT__m1__DOT__counter 
        = vlTOPp->__Vdly__avalon_microphone_system__DOT__m1__DOT__counter;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__102(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__102\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsp) {
        vlTOPp->__Vdly__avalon_microphone_system__DOT__m2__DOT__counter = 0U;
    } else {
        if ((0x10U > (IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__counter))) {
            vlTOPp->__Vdly__avalon_microphone_system__DOT__m2__DOT__counter 
                = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__counter)));
        }
    }
    vlTOPp->avalon_microphone_system__DOT__m2__DOT__counter 
        = vlTOPp->__Vdly__avalon_microphone_system__DOT__m2__DOT__counter;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__103(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__103\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsp) {
        vlTOPp->__Vdly__avalon_microphone_system__DOT__m3__DOT__counter = 0U;
    } else {
        if ((0x10U > (IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__counter))) {
            vlTOPp->__Vdly__avalon_microphone_system__DOT__m3__DOT__counter 
                = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__counter)));
        }
    }
    vlTOPp->avalon_microphone_system__DOT__m3__DOT__counter 
        = vlTOPp->__Vdly__avalon_microphone_system__DOT__m3__DOT__counter;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__104(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__104\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsp) {
        vlTOPp->__Vdly__avalon_microphone_system__DOT__m4__DOT__counter = 0U;
    } else {
        if ((0x10U > (IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__counter))) {
            vlTOPp->__Vdly__avalon_microphone_system__DOT__m4__DOT__counter 
                = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__counter)));
        }
    }
    vlTOPp->avalon_microphone_system__DOT__m4__DOT__counter 
        = vlTOPp->__Vdly__avalon_microphone_system__DOT__m4__DOT__counter;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__105(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__105\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsdd 
        = vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsd;
    vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsdd 
        = vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsd;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__106(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__106\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsdd 
        = vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsd;
    vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsdd 
        = vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsd;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__107(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__107\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlTOPp->change_filter = 0U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U != (IData)(vlTOPp->AVL_ADDR))) {
                                if ((5U != (IData)(vlTOPp->AVL_ADDR))) {
                                    if ((6U == (IData)(vlTOPp->AVL_ADDR))) {
                                        vlTOPp->change_filter = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            vlTOPp->change_filter = 0U;
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__108(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__108\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlTOPp->load_coef = 0U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U != (IData)(vlTOPp->AVL_ADDR))) {
                                if ((5U == (IData)(vlTOPp->AVL_ADDR))) {
                                    vlTOPp->load_coef = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            vlTOPp->load_coef = 0U;
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__109(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__109\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlTOPp->avalon_microphone_system__DOT__restart_sig = 0U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U == (IData)(vlTOPp->AVL_ADDR))) {
                            vlTOPp->avalon_microphone_system__DOT__restart_sig 
                                = (1U & vlTOPp->AVL_WRITEDATA);
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__110(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__110\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__p_coef_data 
        = ((IData)(vlTOPp->RESET) ? 0U : (IData)(vlTOPp->coef_data));
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__111(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__111\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_4 
        = ((IData)(vlTOPp->RESET) ? 0x14U : vlTOPp->vol_4);
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__112(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__112\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_3 
        = ((IData)(vlTOPp->RESET) ? 0x14U : vlTOPp->vol_3);
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__113(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__113\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_2 
        = ((IData)(vlTOPp->RESET) ? 0x14U : vlTOPp->vol_2);
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__114(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__114\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_1 
        = ((IData)(vlTOPp->RESET) ? 0x14U : vlTOPp->vol_1);
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__115(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__115\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_5 
        = ((IData)(vlTOPp->RESET) ? 0x14U : vlTOPp->vol_5);
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__116(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__116\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_6 
        = ((IData)(vlTOPp->RESET) ? 0x14U : vlTOPp->vol_6);
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__117(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__117\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_7 
        = ((IData)(vlTOPp->RESET) ? 0x14U : vlTOPp->vol_7);
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__118(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__118\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_8 
        = ((IData)(vlTOPp->RESET) ? 0x14U : vlTOPp->vol_8);
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__119(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__119\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_ADDR 
        = ((IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET)
            ? 0U : vlTOPp->AM_ADDR);
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__120(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__120\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_done 
        = ((~ (IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET)) 
           & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__done));
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__121(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__121\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_WRITE 
        = ((~ (IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET)) 
           & (IData)(vlTOPp->AM_WRITE));
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__122(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__122\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_mic_count 
        = ((IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET)
            ? 0U : (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count));
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__123(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__123\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_num_samples 
        = ((IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET)
            ? 0U : vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples);
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__124(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__124\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->avalon_microphone_system__DOT__saw_rise) {
        vlTOPp->__Vdly__avalon_microphone_system__DOT__counter 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->avalon_microphone_system__DOT__counter)));
    } else {
        if (vlTOPp->avalon_microphone_system__DOT__saw_fall) {
            vlTOPp->__Vdly__avalon_microphone_system__DOT__counter 
                = (7U & ((IData)(1U) + (IData)(vlTOPp->avalon_microphone_system__DOT__counter)));
        }
    }
    if ((3U == (IData)(vlTOPp->avalon_microphone_system__DOT__counter))) {
        vlTOPp->__Vdly__avalon_microphone_system__DOT__counter = 1U;
        vlTOPp->avalon_microphone_system__DOT__ready_read_now = 1U;
    } else {
        vlTOPp->avalon_microphone_system__DOT__ready_read_now = 0U;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__125(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__125\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlTOPp->avalon_microphone_system__DOT__start_addr = 0U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U == (IData)(vlTOPp->AVL_ADDR))) {
                    vlTOPp->avalon_microphone_system__DOT__start_addr 
                        = vlTOPp->AVL_WRITEDATA;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__126(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__126\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlTOPp->avalon_microphone_system__DOT__start = 0U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U == (IData)(vlTOPp->AVL_ADDR))) {
                vlTOPp->avalon_microphone_system__DOT__start 
                    = (1U & vlTOPp->AVL_WRITEDATA);
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__127(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__127\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state 
        = ((IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET)
            ? 0U : (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__next_state));
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__128(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__128\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->avalon_microphone_system__DOT__end_ack) 
         | (IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET))) {
        vlTOPp->avalon_microphone_system__DOT__end_latch = 0U;
    } else {
        if ((0U == vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples)) {
            vlTOPp->avalon_microphone_system__DOT__end_latch = 1U;
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__129(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__129\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_finish_signal 
        = ((~ (IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET)) 
           & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__finish_signal));
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__130(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__130\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->avalon_microphone_system__DOT__saw_fall) {
        vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_4 
            = (((IData)(vlTOPp->avalon_microphone_system__DOT__mic_l4) 
                << 0x10U) | (0xffffU & vlTOPp->avalon_microphone_system__DOT__ready_data_4));
    } else {
        if (vlTOPp->avalon_microphone_system__DOT__saw_rise) {
            vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_4 
                = ((0xffff0000U & vlTOPp->avalon_microphone_system__DOT__ready_data_4) 
                   | (IData)(vlTOPp->avalon_microphone_system__DOT__mic_r4));
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__131(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__131\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->avalon_microphone_system__DOT__saw_fall) {
        vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_2 
            = (((IData)(vlTOPp->avalon_microphone_system__DOT__mic_l2) 
                << 0x10U) | (0xffffU & vlTOPp->avalon_microphone_system__DOT__ready_data_2));
    } else {
        if (vlTOPp->avalon_microphone_system__DOT__saw_rise) {
            vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_2 
                = ((0xffff0000U & vlTOPp->avalon_microphone_system__DOT__ready_data_2) 
                   | (IData)(vlTOPp->avalon_microphone_system__DOT__mic_r2));
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__132(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__132\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->avalon_microphone_system__DOT__saw_fall) {
        vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_3 
            = (((IData)(vlTOPp->avalon_microphone_system__DOT__mic_l3) 
                << 0x10U) | (0xffffU & vlTOPp->avalon_microphone_system__DOT__ready_data_3));
    } else {
        if (vlTOPp->avalon_microphone_system__DOT__saw_rise) {
            vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_3 
                = ((0xffff0000U & vlTOPp->avalon_microphone_system__DOT__ready_data_3) 
                   | (IData)(vlTOPp->avalon_microphone_system__DOT__mic_r3));
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__133(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__133\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_counter 
        = ((IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET)
            ? 0U : vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter);
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__134(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__134\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->avalon_microphone_system__DOT__saw_fall) {
        vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_1 
            = (((IData)(vlTOPp->avalon_microphone_system__DOT__mic_l) 
                << 0x10U) | (0xffffU & vlTOPp->avalon_microphone_system__DOT__ready_data_1));
    } else {
        if (vlTOPp->avalon_microphone_system__DOT__saw_rise) {
            vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_1 
                = ((0xffff0000U & vlTOPp->avalon_microphone_system__DOT__ready_data_1) 
                   | (IData)(vlTOPp->avalon_microphone_system__DOT__mic_r));
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__135(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__135\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->avalon_microphone_system__DOT__half_way_ack) 
         | (IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET))) {
        vlTOPp->avalon_microphone_system__DOT__half_way_latch = 0U;
    } else {
        if ((vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples 
             <= (vlTOPp->avalon_microphone_system__DOT__num_samps 
                 >> 1U))) {
            vlTOPp->avalon_microphone_system__DOT__half_way_latch = 1U;
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__136(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__136\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__detect__DOT__last_test_clk 
        = vlTOPp->avalon_microphone_system__DOT__detect__DOT__cur_test_clk;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__137(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__137\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET) {
        vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v0 = 1U;
    } else {
        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound2 
            = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
            [0U];
        vlTOPp->__Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v5 
            = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound2;
        vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v5 = 1U;
        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound2 
            = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
            [1U];
        vlTOPp->__Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v6 
            = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound2;
        vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v6 = 1U;
        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound2 
            = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
            [2U];
        vlTOPp->__Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v7 
            = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound2;
        vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v7 = 1U;
        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound2 
            = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
            [3U];
        vlTOPp->__Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v8 
            = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound2;
        vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v8 = 1U;
        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound2 
            = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
            [4U];
        vlTOPp->__Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v9 
            = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound2;
        vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v9 = 1U;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__138(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__138\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__counter 
        = vlTOPp->__Vdly__avalon_microphone_system__DOT__counter;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__144(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__144\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__ready_data_1 
        = vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_1;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__145(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__145\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__ready_data_3 
        = vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_3;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__146(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__146\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__ready_data_2 
        = vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_2;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__147(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__147\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__ready_data_4 
        = vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_4;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__157(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__157\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v0) {
        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[0U] = 0U;
        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[1U] = 0U;
        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[2U] = 0U;
        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[3U] = 0U;
        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[4U] = 0U;
    }
    if (vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v5) {
        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[0U] 
            = vlTOPp->__Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v5;
    }
    if (vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v6) {
        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[1U] 
            = vlTOPp->__Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v6;
    }
    if (vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v7) {
        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[2U] 
            = vlTOPp->__Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v7;
    }
    if (vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v8) {
        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[3U] 
            = vlTOPp->__Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v8;
    }
    if (vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v9) {
        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[4U] 
            = vlTOPp->__Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v9;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__182(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__182\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sample_ready = vlTOPp->avalon_microphone_system__DOT__ready_read_now;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__183(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__183\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ ((IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))) {
            if ((1U & (~ (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state)))) {
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk5__DOT__i = 5U;
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_combo__TOP__184(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_combo__TOP__184\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET 
        = ((IData)(vlTOPp->RESET) | (IData)(vlTOPp->avalon_microphone_system__DOT__restart_sig));
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__185(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__185\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ ((IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state)))) {
                if ((1U & (~ (IData)(vlTOPp->avalon_microphone_system__DOT__start)))) {
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk4__DOT__i = 5U;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_combo__TOP__186(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_combo__TOP__186\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->codec_stream = ((IData)(vlTOPp->avalon_microphone_system__DOT__start)
                             ? 0U : ((((vlTOPp->avalon_microphone_system__DOT__ready_data_1 
                                        + vlTOPp->avalon_microphone_system__DOT__ready_data_2) 
                                       + vlTOPp->avalon_microphone_system__DOT__ready_data_3) 
                                      + vlTOPp->avalon_microphone_system__DOT__ready_data_4) 
                                     + vlTOPp->adc_data));
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__187(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__187\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__finish_signal 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_finish_signal;
    if ((4U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))) {
        if ((1U & (~ ((IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))) {
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__finish_signal = 1U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))) {
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__finish_signal = 0U;
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__188(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__188\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsd) 
         & (IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsp))) {
        vlTOPp->avalon_microphone_system__DOT__mic_l2 
            = vlTOPp->avalon_microphone_system__DOT__m2__DOT__shift;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__189(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__189\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsd)) 
         & (IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsp))) {
        vlTOPp->avalon_microphone_system__DOT__mic_r2 
            = vlTOPp->avalon_microphone_system__DOT__m2__DOT__shift;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__190(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__190\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsd) 
         & (IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsp))) {
        vlTOPp->avalon_microphone_system__DOT__mic_l3 
            = vlTOPp->avalon_microphone_system__DOT__m3__DOT__shift;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__191(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__191\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsd)) 
         & (IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsp))) {
        vlTOPp->avalon_microphone_system__DOT__mic_r3 
            = vlTOPp->avalon_microphone_system__DOT__m3__DOT__shift;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__192(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__192\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsd) 
         & (IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsp))) {
        vlTOPp->avalon_microphone_system__DOT__mic_l4 
            = vlTOPp->avalon_microphone_system__DOT__m4__DOT__shift;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__193(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__193\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsd)) 
         & (IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsp))) {
        vlTOPp->avalon_microphone_system__DOT__mic_r4 
            = vlTOPp->avalon_microphone_system__DOT__m4__DOT__shift;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__194(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__194\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsd) 
         & (IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsp))) {
        vlTOPp->avalon_microphone_system__DOT__mic_l 
            = vlTOPp->avalon_microphone_system__DOT__m1__DOT__shift;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__195(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__195\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsd)) 
         & (IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsp))) {
        vlTOPp->avalon_microphone_system__DOT__mic_r 
            = vlTOPp->avalon_microphone_system__DOT__m1__DOT__shift;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__196(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__196\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->RESET)))) {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U != (IData)(vlTOPp->AVL_ADDR))) {
                                if ((5U != (IData)(vlTOPp->AVL_ADDR))) {
                                    if ((6U != (IData)(vlTOPp->AVL_ADDR))) {
                                        if ((7U == (IData)(vlTOPp->AVL_ADDR))) {
                                            if ((1U 
                                                 & (~ vlTOPp->AVL_WRITEDATA))) {
                                                vlTOPp->avalon_microphone_system__DOT__half_way_ack = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            vlTOPp->avalon_microphone_system__DOT__half_way_ack = 0U;
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__197(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__197\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->RESET)))) {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U != (IData)(vlTOPp->AVL_ADDR))) {
                                if ((5U != (IData)(vlTOPp->AVL_ADDR))) {
                                    if ((6U != (IData)(vlTOPp->AVL_ADDR))) {
                                        if ((7U == (IData)(vlTOPp->AVL_ADDR))) {
                                            if ((1U 
                                                 & vlTOPp->AVL_WRITEDATA)) {
                                                if (
                                                    (1U 
                                                     & vlTOPp->AVL_WRITEDATA)) {
                                                    vlTOPp->avalon_microphone_system__DOT__end_ack = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            vlTOPp->avalon_microphone_system__DOT__end_ack = 0U;
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__198(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__198\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlTOPp->coef_data = 0U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U != (IData)(vlTOPp->AVL_ADDR))) {
                                if ((5U == (IData)(vlTOPp->AVL_ADDR))) {
                                    vlTOPp->coef_data 
                                        = (0xffffU 
                                           & vlTOPp->AVL_WRITEDATA);
                                }
                            }
                        }
                    }
                }
            }
        } else {
            vlTOPp->coef_data = vlTOPp->avalon_microphone_system__DOT__p_coef_data;
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__199(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__199\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlTOPp->vol_8 = 0x14U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U == (IData)(vlTOPp->AVL_ADDR))) {
                                vlTOPp->vol_8 = ((7U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->AVL_WRITEDATA 
                                                      >> 8U)))
                                                  ? vlTOPp->AVL_WRITEDATA
                                                  : vlTOPp->avalon_microphone_system__DOT__p_vol_8);
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__200(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__200\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlTOPp->vol_7 = 0x14U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U == (IData)(vlTOPp->AVL_ADDR))) {
                                vlTOPp->vol_7 = ((6U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->AVL_WRITEDATA 
                                                      >> 8U)))
                                                  ? vlTOPp->AVL_WRITEDATA
                                                  : vlTOPp->avalon_microphone_system__DOT__p_vol_7);
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__201(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__201\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlTOPp->vol_1 = 0x14U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U == (IData)(vlTOPp->AVL_ADDR))) {
                                vlTOPp->vol_1 = ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->AVL_WRITEDATA 
                                                      >> 8U)))
                                                  ? vlTOPp->AVL_WRITEDATA
                                                  : vlTOPp->avalon_microphone_system__DOT__p_vol_1);
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__202(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__202\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlTOPp->vol_2 = 0x14U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U == (IData)(vlTOPp->AVL_ADDR))) {
                                vlTOPp->vol_2 = ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->AVL_WRITEDATA 
                                                      >> 8U)))
                                                  ? vlTOPp->AVL_WRITEDATA
                                                  : vlTOPp->avalon_microphone_system__DOT__p_vol_2);
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__203(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__203\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlTOPp->vol_3 = 0x14U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U == (IData)(vlTOPp->AVL_ADDR))) {
                                vlTOPp->vol_3 = ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->AVL_WRITEDATA 
                                                      >> 8U)))
                                                  ? vlTOPp->AVL_WRITEDATA
                                                  : vlTOPp->avalon_microphone_system__DOT__p_vol_3);
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__204(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__204\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlTOPp->vol_4 = 0x14U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U == (IData)(vlTOPp->AVL_ADDR))) {
                                vlTOPp->vol_4 = ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->AVL_WRITEDATA 
                                                      >> 8U)))
                                                  ? vlTOPp->AVL_WRITEDATA
                                                  : vlTOPp->avalon_microphone_system__DOT__p_vol_4);
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__205(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__205\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlTOPp->vol_5 = 0x14U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U == (IData)(vlTOPp->AVL_ADDR))) {
                                vlTOPp->vol_5 = ((4U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->AVL_WRITEDATA 
                                                      >> 8U)))
                                                  ? vlTOPp->AVL_WRITEDATA
                                                  : vlTOPp->avalon_microphone_system__DOT__p_vol_5);
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__206(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__206\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlTOPp->vol_6 = 0x14U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U != (IData)(vlTOPp->AVL_ADDR))) {
                        if ((3U != (IData)(vlTOPp->AVL_ADDR))) {
                            if ((4U == (IData)(vlTOPp->AVL_ADDR))) {
                                vlTOPp->vol_6 = ((5U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->AVL_WRITEDATA 
                                                      >> 8U)))
                                                  ? vlTOPp->AVL_WRITEDATA
                                                  : vlTOPp->avalon_microphone_system__DOT__p_vol_6);
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__207(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__207\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RESET) {
        vlTOPp->avalon_microphone_system__DOT__num_samps = 0U;
    } else {
        if (((IData)(vlTOPp->AVL_CS) & (IData)(vlTOPp->AVL_WRITE))) {
            if ((0U != (IData)(vlTOPp->AVL_ADDR))) {
                if ((1U != (IData)(vlTOPp->AVL_ADDR))) {
                    if ((2U == (IData)(vlTOPp->AVL_ADDR))) {
                        vlTOPp->avalon_microphone_system__DOT__num_samps 
                            = vlTOPp->AVL_WRITEDATA;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__208(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__208\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__detect__DOT__cur_test_clk 
        = vlTOPp->AUD_ADCLRCK;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__217(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__217\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__p_coef_data 
        = vlTOPp->__Vdly__avalon_microphone_system__DOT__p_coef_data;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__218(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__218\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__p_vol_8 
        = vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_8;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__219(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__219\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__p_vol_7 
        = vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_7;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__220(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__220\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__p_vol_6 
        = vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_6;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__221(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__221\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__p_vol_5 
        = vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_5;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__222(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__222\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__p_vol_1 
        = vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_1;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__223(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__223\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__p_vol_2 
        = vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_2;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__224(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__224\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__p_vol_3 
        = vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_3;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__225(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__225\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__p_vol_4 
        = vlTOPp->__Vdly__avalon_microphone_system__DOT__p_vol_4;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__242(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__242\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsd 
        = vlTOPp->AUD_ADCLRCK;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__243(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__243\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsd 
        = vlTOPp->AUD_ADCLRCK;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__244(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__244\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsd 
        = vlTOPp->AUD_ADCLRCK;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__245(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__245\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsd 
        = vlTOPp->AUD_ADCLRCK;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__246(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__246\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsp) {
        vlTOPp->avalon_microphone_system__DOT__m1__DOT__shift = 0U;
    }
    if ((0x10U > (IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__counter))) {
        vlTOPp->avalon_microphone_system__DOT__m1__DOT__shift 
            = (((~ ((IData)(1U) << (0xfU & ((IData)(0xfU) 
                                            - (IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__counter))))) 
                & (IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__shift)) 
               | ((IData)(vlTOPp->GPIO_DIN1) << (0xfU 
                                                 & ((IData)(0xfU) 
                                                    - (IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__counter)))));
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__247(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__247\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsp) {
        vlTOPp->avalon_microphone_system__DOT__m2__DOT__shift = 0U;
    }
    if ((0x10U > (IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__counter))) {
        vlTOPp->avalon_microphone_system__DOT__m2__DOT__shift 
            = (((~ ((IData)(1U) << (0xfU & ((IData)(0xfU) 
                                            - (IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__counter))))) 
                & (IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__shift)) 
               | ((IData)(vlTOPp->GPIO_DIN2) << (0xfU 
                                                 & ((IData)(0xfU) 
                                                    - (IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__counter)))));
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__248(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__248\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsp) {
        vlTOPp->avalon_microphone_system__DOT__m3__DOT__shift = 0U;
    }
    if ((0x10U > (IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__counter))) {
        vlTOPp->avalon_microphone_system__DOT__m3__DOT__shift 
            = (((~ ((IData)(1U) << (0xfU & ((IData)(0xfU) 
                                            - (IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__counter))))) 
                & (IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__shift)) 
               | ((IData)(vlTOPp->GPIO_DIN3) << (0xfU 
                                                 & ((IData)(0xfU) 
                                                    - (IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__counter)))));
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__249(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__249\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsp) {
        vlTOPp->avalon_microphone_system__DOT__m4__DOT__shift = 0U;
    }
    if ((0x10U > (IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__counter))) {
        vlTOPp->avalon_microphone_system__DOT__m4__DOT__shift 
            = (((~ ((IData)(1U) << (0xfU & ((IData)(0xfU) 
                                            - (IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__counter))))) 
                & (IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__shift)) 
               | ((IData)(vlTOPp->GPIO_DIN4) << (0xfU 
                                                 & ((IData)(0xfU) 
                                                    - (IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__counter)))));
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_combo__TOP__250(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_combo__TOP__250\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__next_state 
        = ((4U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))
            ? ((2U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))
                ? 0U : ((1U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))
                         ? ((IData)(vlTOPp->avalon_microphone_system__DOT__start)
                             ? 5U : 0U) : ((IData)(vlTOPp->AM_WAITREQUEST)
                                            ? 4U : 
                                           ((4U == vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter)
                                             ? ((IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__done)
                                                 ? 5U
                                                 : 3U)
                                             : 3U))))
            : ((2U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))
                ? ((1U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))
                    ? ((IData)(vlTOPp->AM_WAITREQUEST)
                        ? 3U : ((0U == vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter)
                                 ? ((vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
                                     [4U] == ((IData)(0x249f000U) 
                                              + vlTOPp->avalon_microphone_system__DOT__start_addr))
                                     ? 2U : ((IData)(vlTOPp->avalon_microphone_system__DOT__ready_read_now)
                                              ? 4U : 3U))
                                 : 4U)) : 3U) : ((1U 
                                                  & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlTOPp->avalon_microphone_system__DOT__start)
                                                   ? 1U
                                                   : 0U))));
    vlTOPp->AM_WRITE = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_WRITE;
    vlTOPp->AM_ADDR = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_ADDR;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address
        [0U];
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[0U] 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address
        [1U];
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[1U] 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address
        [2U];
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[2U] 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address
        [3U];
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[3U] 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address
        [4U];
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[4U] 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_num_samples;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__done 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_done;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_counter;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_mic_count;
    vlTOPp->AM_BURSTCOUNT = 1U;
    vlTOPp->AM_BYTEENABLE = 0xfU;
    if ((4U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))) {
        if ((1U & (~ ((IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))) {
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples 
                    = vlTOPp->avalon_microphone_system__DOT__num_samps;
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter = 0U;
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__done = 0U;
                vlTOPp->AM_WRITE = 0U;
                vlTOPp->AM_ADDR = vlTOPp->avalon_microphone_system__DOT__start_addr;
            } else {
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count 
                    = (7U & ((IData)(1U) + vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter));
                if ((1U & (~ (IData)(vlTOPp->AM_WAITREQUEST)))) {
                    if ((0U < vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples)) {
                        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound6 
                            = ((IData)(4U) + ((4U >= 
                                               (7U 
                                                & vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter))
                                               ? vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
                                              [(7U 
                                                & vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter)]
                                               : 0U));
                        vlTOPp->AM_BYTEENABLE = 0xfU;
                        if ((4U >= (7U & vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter))) {
                            vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[(7U 
                                                                                & vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter)] 
                                = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound6;
                        }
                        vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples 
                            = ((4U == vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter)
                                ? (vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples 
                                   - (IData)(1U)) : vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_num_samples);
                    } else {
                        if ((0U == vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples)) {
                            vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__done = 1U;
                            vlTOPp->AM_WRITE = 0U;
                            vlTOPp->AM_ADDR = 0U;
                            vlTOPp->AM_BYTEENABLE = 0xfU;
                            vlTOPp->AM_BURSTCOUNT = 0U;
                        }
                    }
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter 
                        = ((4U == vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter)
                            ? 0U : ((IData)(1U) + vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter));
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))) {
            if ((1U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))) {
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count 
                    = (7U & ((IData)(1U) + vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter));
                if ((0U == vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter)) {
                    if (vlTOPp->avalon_microphone_system__DOT__ready_read_now) {
                        if (vlTOPp->AM_WAITREQUEST) {
                            vlTOPp->AM_WRITE = 0U;
                            vlTOPp->AM_ADDR = 0U;
                            vlTOPp->AM_BYTEENABLE = 0xfU;
                            vlTOPp->AM_BURSTCOUNT = 0U;
                        } else {
                            vlTOPp->AM_WRITE = 1U;
                            vlTOPp->AM_ADDR = ((4U 
                                                >= 
                                                (7U 
                                                 & vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter))
                                                ? vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
                                               [(7U 
                                                 & vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter)]
                                                : 0U);
                            vlTOPp->AM_BYTEENABLE = 0xfU;
                            vlTOPp->AM_BURSTCOUNT = 1U;
                        }
                    } else {
                        vlTOPp->AM_WRITE = 0U;
                        vlTOPp->AM_ADDR = 0U;
                        vlTOPp->AM_BYTEENABLE = 0xfU;
                        vlTOPp->AM_BURSTCOUNT = 0U;
                    }
                } else {
                    if (vlTOPp->AM_WAITREQUEST) {
                        vlTOPp->AM_WRITE = 0U;
                        vlTOPp->AM_ADDR = 0U;
                        vlTOPp->AM_BYTEENABLE = 0xfU;
                        vlTOPp->AM_BURSTCOUNT = 0U;
                    } else {
                        vlTOPp->AM_WRITE = 1U;
                        vlTOPp->AM_ADDR = ((4U >= (7U 
                                                   & vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter))
                                            ? vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
                                           [(7U & vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter)]
                                            : 0U);
                        vlTOPp->AM_BYTEENABLE = 0xfU;
                        vlTOPp->AM_BURSTCOUNT = 1U;
                    }
                }
            } else {
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5 
                    = vlTOPp->avalon_microphone_system__DOT__start_addr;
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[0U] 
                    = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5;
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5 
                    = ((IData)(0x753000U) + vlTOPp->avalon_microphone_system__DOT__start_addr);
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[1U] 
                    = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5;
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5 
                    = ((IData)(0xea6000U) + vlTOPp->avalon_microphone_system__DOT__start_addr);
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[2U] 
                    = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5;
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5 
                    = ((IData)(0x15f9000U) + vlTOPp->avalon_microphone_system__DOT__start_addr);
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[3U] 
                    = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5;
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5 
                    = ((IData)(0x1d4c000U) + vlTOPp->avalon_microphone_system__DOT__start_addr);
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[4U] 
                    = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5;
            }
        } else {
            if ((1U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))) {
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter = 0U;
            } else {
                if (vlTOPp->avalon_microphone_system__DOT__start) {
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples 
                        = vlTOPp->avalon_microphone_system__DOT__num_samps;
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count = 2U;
                } else {
                    vlTOPp->AM_ADDR = 0U;
                    vlTOPp->AM_WRITE = 0U;
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples = 0U;
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[0U] = 0U;
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[1U] = 0U;
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[2U] = 0U;
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[3U] = 0U;
                    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address[4U] = 0U;
                }
                vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__done = 0U;
            }
        }
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__251(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__251\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__detect__DOT__found_edge 
        = ((IData)(vlTOPp->avalon_microphone_system__DOT__detect__DOT__last_test_clk) 
           ^ (IData)(vlTOPp->avalon_microphone_system__DOT__detect__DOT__cur_test_clk));
}

VL_INLINE_OPT void Vavalon_microphone_system::_combo__TOP__256(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_combo__TOP__256\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AM_WRITEDATA = ((1U == (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count))
                             ? vlTOPp->avalon_microphone_system__DOT__ready_data_1
                             : ((2U == (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count))
                                 ? vlTOPp->avalon_microphone_system__DOT__ready_data_2
                                 : ((3U == (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count))
                                     ? vlTOPp->avalon_microphone_system__DOT__ready_data_3
                                     : ((4U == (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count))
                                         ? vlTOPp->avalon_microphone_system__DOT__ready_data_4
                                         : ((5U == (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count))
                                             ? vlTOPp->adc_data
                                             : 0U)))));
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__257(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__257\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__saw_rise 
        = ((IData)(vlTOPp->avalon_microphone_system__DOT__detect__DOT__found_edge) 
           & (IData)(vlTOPp->avalon_microphone_system__DOT__detect__DOT__cur_test_clk));
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__258(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__258\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__saw_fall 
        = ((IData)(vlTOPp->avalon_microphone_system__DOT__detect__DOT__found_edge) 
           & (IData)(vlTOPp->avalon_microphone_system__DOT__detect__DOT__last_test_clk));
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__259(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__259\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsp 
        = ((IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsd) 
           ^ (IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsdd));
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__260(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__260\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsp 
        = ((IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsd) 
           ^ (IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsdd));
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__261(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__261\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsp 
        = ((IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsd) 
           ^ (IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsdd));
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__262(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__262\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsp 
        = ((IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsd) 
           ^ (IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsdd));
}

VL_INLINE_OPT void Vavalon_microphone_system::_combo__TOP__263(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_combo__TOP__263\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AVL_READDATA = (((IData)(vlTOPp->AVL_CS) 
                             & (IData)(vlTOPp->AVL_READ))
                             ? ((0U == (IData)(vlTOPp->AVL_ADDR))
                                 ? (((IData)(vlTOPp->avalon_microphone_system__DOT__saw_rise) 
                                     << 1U) | (IData)(vlTOPp->avalon_microphone_system__DOT__saw_fall))
                                 : ((1U == (IData)(vlTOPp->AVL_ADDR))
                                     ? (((IData)(vlTOPp->avalon_microphone_system__DOT__mic_l) 
                                         << 0x10U) 
                                        | (IData)(vlTOPp->avalon_microphone_system__DOT__mic_r))
                                     : ((2U == (IData)(vlTOPp->AVL_ADDR))
                                         ? (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__finish_signal)
                                         : ((3U == (IData)(vlTOPp->AVL_ADDR))
                                             ? (IData)(vlTOPp->avalon_microphone_system__DOT__half_way_latch)
                                             : ((4U 
                                                 == (IData)(vlTOPp->AVL_ADDR))
                                                 ? (IData)(vlTOPp->avalon_microphone_system__DOT__end_latch)
                                                 : 0U)))))
                             : 0U);
}

void Vavalon_microphone_system::_eval(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_eval\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vm_even_cycle = !vlTOPp->__Vm_even_cycle;
    vlTOPp->__Vm_threadPoolp->workerp(0)->addTask(__Vmtask__65, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(1)->addTask(__Vmtask__66, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(2)->addTask(__Vmtask__67, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(3)->addTask(__Vmtask__68, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(4)->addTask(__Vmtask__69, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(5)->addTask(__Vmtask__70, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(6)->addTask(__Vmtask__71, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(7)->addTask(__Vmtask__72, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(8)->addTask(__Vmtask__73, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(9)->addTask(__Vmtask__74, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(10)->addTask(__Vmtask__86, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(11)->addTask(__Vmtask__87, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(12)->addTask(__Vmtask__88, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(13)->addTask(__Vmtask__89, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(14)->addTask(__Vmtask__93, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(15)->addTask(__Vmtask__94, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(16)->addTask(__Vmtask__95, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(17)->addTask(__Vmtask__96, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(18)->addTask(__Vmtask__97, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(19)->addTask(__Vmtask__98, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(20)->addTask(__Vmtask__117, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(21)->addTask(__Vmtask__118, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(22)->addTask(__Vmtask__119, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(23)->addTask(__Vmtask__120, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(24)->addTask(__Vmtask__121, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(25)->addTask(__Vmtask__123, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(26)->addTask(__Vmtask__124, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(27)->addTask(__Vmtask__125, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(28)->addTask(__Vmtask__126, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(29)->addTask(__Vmtask__131, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(30)->addTask(__Vmtask__133, vlTOPp->__Vm_even_cycle, vlSymsp);
    __Vmtask__134(vlTOPp->__Vm_even_cycle, vlSymsp);
    Verilated::mtaskId(0);
    vlTOPp->__Vm_mt_final.waitUntilUpstreamDone(vlTOPp->__Vm_even_cycle);
    // Final
    vlTOPp->__Vclklast__TOP__AUD_BCLK = vlTOPp->AUD_BCLK;
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
}

void Vavalon_microphone_system::_eval_initial(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_eval_initial\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__AUD_BCLK = vlTOPp->AUD_BCLK;
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
}

void Vavalon_microphone_system::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::final\n"); );
    // Variables
    Vavalon_microphone_system__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vavalon_microphone_system::_eval_settle(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_eval_settle\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

VL_INLINE_OPT QData Vavalon_microphone_system::_change_request(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_change_request\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__done ^ vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__done)
         | (vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
            [0U] ^ vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address
            [0U])
         | (vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
            [1U] ^ vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address
            [1U])
         | (vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
            [2U] ^ vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address
            [2U])
         | (vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
            [3U] ^ vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address
            [3U])
         | (vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
            [4U] ^ vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address
            [4U])
         | (vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter ^ vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__counter));
    VL_DEBUG_IF( if(__req && ((vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__done ^ vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__done))) VL_DBG_MSGF("        CHANGE: mic_dma.sv:36: avalon_microphone_system.dma_yo.done\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
                               [0U] ^ vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address
                               [0U]))) VL_DBG_MSGF("        CHANGE: mic_dma.sv:37\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
                               [1U] ^ vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address
                               [1U]))) VL_DBG_MSGF("        CHANGE: mic_dma.sv:37\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
                               [2U] ^ vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address
                               [2U]))) VL_DBG_MSGF("        CHANGE: mic_dma.sv:37\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
                               [3U] ^ vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address
                               [3U]))) VL_DBG_MSGF("        CHANGE: mic_dma.sv:37\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
                               [4U] ^ vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address
                               [4U]))) VL_DBG_MSGF("        CHANGE: mic_dma.sv:37\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter ^ vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__counter))) VL_DBG_MSGF("        CHANGE: mic_dma.sv:42: avalon_microphone_system.dma_yo.counter\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__done 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__done;
    vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address[0U] 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
        [0U];
    vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address[1U] 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
        [1U];
    vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address[2U] 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
        [2U];
    vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address[3U] 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
        [3U];
    vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address[4U] 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__starting_address
        [4U];
    vlTOPp->__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__counter 
        = vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter;
    return __req;
}

#ifdef VL_DEBUG
void Vavalon_microphone_system::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((RESET & 0xfeU))) {
        Verilated::overWidthError("RESET");}
    if (VL_UNLIKELY((AM_WAITREQUEST & 0xfeU))) {
        Verilated::overWidthError("AM_WAITREQUEST");}
    if (VL_UNLIKELY((AVL_READ & 0xfeU))) {
        Verilated::overWidthError("AVL_READ");}
    if (VL_UNLIKELY((AVL_WRITE & 0xfeU))) {
        Verilated::overWidthError("AVL_WRITE");}
    if (VL_UNLIKELY((AVL_CS & 0xfeU))) {
        Verilated::overWidthError("AVL_CS");}
    if (VL_UNLIKELY((AVL_ADDR & 0xf8U))) {
        Verilated::overWidthError("AVL_ADDR");}
    if (VL_UNLIKELY((AUD_BCLK & 0xfeU))) {
        Verilated::overWidthError("AUD_BCLK");}
    if (VL_UNLIKELY((AUD_ADCLRCK & 0xfeU))) {
        Verilated::overWidthError("AUD_ADCLRCK");}
    if (VL_UNLIKELY((GPIO_DIN1 & 0xfeU))) {
        Verilated::overWidthError("GPIO_DIN1");}
    if (VL_UNLIKELY((GPIO_DIN2 & 0xfeU))) {
        Verilated::overWidthError("GPIO_DIN2");}
    if (VL_UNLIKELY((GPIO_DIN3 & 0xfeU))) {
        Verilated::overWidthError("GPIO_DIN3");}
    if (VL_UNLIKELY((GPIO_DIN4 & 0xfeU))) {
        Verilated::overWidthError("GPIO_DIN4");}
}
#endif  // VL_DEBUG

void Vavalon_microphone_system::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_ctor_var_reset\n"); );
    // Body
    CLK = VL_RAND_RESET_I(1);
    RESET = VL_RAND_RESET_I(1);
    AM_ADDR = VL_RAND_RESET_I(32);
    AM_BURSTCOUNT = VL_RAND_RESET_I(3);
    AM_WRITE = VL_RAND_RESET_I(1);
    AM_WRITEDATA = VL_RAND_RESET_I(32);
    AM_BYTEENABLE = VL_RAND_RESET_I(4);
    AM_WAITREQUEST = VL_RAND_RESET_I(1);
    AVL_READ = VL_RAND_RESET_I(1);
    AVL_WRITE = VL_RAND_RESET_I(1);
    AVL_CS = VL_RAND_RESET_I(1);
    AVL_ADDR = VL_RAND_RESET_I(3);
    AVL_WRITEDATA = VL_RAND_RESET_I(32);
    AVL_READDATA = VL_RAND_RESET_I(32);
    AUD_BCLK = VL_RAND_RESET_I(1);
    AUD_ADCLRCK = VL_RAND_RESET_I(1);
    GPIO_DIN1 = VL_RAND_RESET_I(1);
    GPIO_DIN2 = VL_RAND_RESET_I(1);
    GPIO_DIN3 = VL_RAND_RESET_I(1);
    GPIO_DIN4 = VL_RAND_RESET_I(1);
    fir_left_data = VL_RAND_RESET_I(32);
    fir_right_data = VL_RAND_RESET_I(32);
    adc_data = VL_RAND_RESET_I(32);
    vol_1 = VL_RAND_RESET_I(32);
    vol_2 = VL_RAND_RESET_I(32);
    vol_3 = VL_RAND_RESET_I(32);
    vol_4 = VL_RAND_RESET_I(32);
    vol_5 = VL_RAND_RESET_I(32);
    vol_6 = VL_RAND_RESET_I(32);
    vol_7 = VL_RAND_RESET_I(32);
    vol_8 = VL_RAND_RESET_I(32);
    coef_data = VL_RAND_RESET_I(16);
    load_coef = VL_RAND_RESET_I(1);
    change_filter = VL_RAND_RESET_I(1);
    sample_ready = VL_RAND_RESET_I(1);
    codec_stream = VL_RAND_RESET_I(32);
    avalon_microphone_system__DOT__p_vol_1 = VL_RAND_RESET_I(32);
    avalon_microphone_system__DOT__p_vol_2 = VL_RAND_RESET_I(32);
    avalon_microphone_system__DOT__p_vol_3 = VL_RAND_RESET_I(32);
    avalon_microphone_system__DOT__p_vol_4 = VL_RAND_RESET_I(32);
    avalon_microphone_system__DOT__p_vol_5 = VL_RAND_RESET_I(32);
    avalon_microphone_system__DOT__p_vol_6 = VL_RAND_RESET_I(32);
    avalon_microphone_system__DOT__p_vol_7 = VL_RAND_RESET_I(32);
    avalon_microphone_system__DOT__p_vol_8 = VL_RAND_RESET_I(32);
    avalon_microphone_system__DOT__p_coef_data = VL_RAND_RESET_I(16);
    avalon_microphone_system__DOT__saw_rise = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__saw_fall = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__start = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__ready_read_now = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__counter = VL_RAND_RESET_I(3);
    avalon_microphone_system__DOT__restart_sig = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__half_way_latch = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__half_way_ack = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__end_latch = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__end_ack = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__start_addr = VL_RAND_RESET_I(32);
    avalon_microphone_system__DOT__num_samps = VL_RAND_RESET_I(32);
    avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__mic_l = VL_RAND_RESET_I(16);
    avalon_microphone_system__DOT__mic_r = VL_RAND_RESET_I(16);
    avalon_microphone_system__DOT__mic_l2 = VL_RAND_RESET_I(16);
    avalon_microphone_system__DOT__mic_r2 = VL_RAND_RESET_I(16);
    avalon_microphone_system__DOT__mic_l3 = VL_RAND_RESET_I(16);
    avalon_microphone_system__DOT__mic_r3 = VL_RAND_RESET_I(16);
    avalon_microphone_system__DOT__mic_l4 = VL_RAND_RESET_I(16);
    avalon_microphone_system__DOT__mic_r4 = VL_RAND_RESET_I(16);
    avalon_microphone_system__DOT__ready_data_1 = VL_RAND_RESET_I(32);
    avalon_microphone_system__DOT__ready_data_2 = VL_RAND_RESET_I(32);
    avalon_microphone_system__DOT__ready_data_3 = VL_RAND_RESET_I(32);
    avalon_microphone_system__DOT__ready_data_4 = VL_RAND_RESET_I(32);
    avalon_microphone_system__DOT__dma_yo__DOT__done = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            avalon_microphone_system__DOT__dma_yo__DOT__starting_address[__Vi0] = 0;
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[__Vi0] = 0;
    }}
    avalon_microphone_system__DOT__dma_yo__DOT__finish_signal = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__dma_yo__DOT__mic_count = VL_RAND_RESET_I(3);
    avalon_microphone_system__DOT__dma_yo__DOT__prev_mic_count = VL_RAND_RESET_I(3);
    avalon_microphone_system__DOT__dma_yo__DOT__num_samples = 0;
    avalon_microphone_system__DOT__dma_yo__DOT__prev_num_samples = 0;
    avalon_microphone_system__DOT__dma_yo__DOT__counter = 0;
    avalon_microphone_system__DOT__dma_yo__DOT__prev_counter = 0;
    avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_ADDR = VL_RAND_RESET_I(32);
    avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_WRITE = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__dma_yo__DOT__prev_done = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__dma_yo__DOT__prev_finish_signal = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__dma_yo__DOT__state = VL_RAND_RESET_I(3);
    avalon_microphone_system__DOT__dma_yo__DOT__next_state = VL_RAND_RESET_I(3);
    avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk1__DOT__i = 0;
    avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk2__DOT__i = 0;
    avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk4__DOT__i = 0;
    avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk5__DOT__i = 0;
    avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound2 = 0;
    avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3 = 0;
    avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5 = 0;
    avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound6 = 0;
    avalon_microphone_system__DOT__detect__DOT__found_edge = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__detect__DOT__cur_test_clk = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__detect__DOT__last_test_clk = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__m1__DOT__wsd = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__m1__DOT__wsdd = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__m1__DOT__wsp = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__m1__DOT__counter = VL_RAND_RESET_I(5);
    avalon_microphone_system__DOT__m1__DOT__shift = VL_RAND_RESET_I(16);
    avalon_microphone_system__DOT__m2__DOT__wsd = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__m2__DOT__wsdd = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__m2__DOT__wsp = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__m2__DOT__counter = VL_RAND_RESET_I(5);
    avalon_microphone_system__DOT__m2__DOT__shift = VL_RAND_RESET_I(16);
    avalon_microphone_system__DOT__m3__DOT__wsd = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__m3__DOT__wsdd = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__m3__DOT__wsp = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__m3__DOT__counter = VL_RAND_RESET_I(5);
    avalon_microphone_system__DOT__m3__DOT__shift = VL_RAND_RESET_I(16);
    avalon_microphone_system__DOT__m4__DOT__wsd = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__m4__DOT__wsdd = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__m4__DOT__wsp = VL_RAND_RESET_I(1);
    avalon_microphone_system__DOT__m4__DOT__counter = VL_RAND_RESET_I(5);
    avalon_microphone_system__DOT__m4__DOT__shift = VL_RAND_RESET_I(16);
    __Vdly__avalon_microphone_system__DOT__p_vol_4 = VL_RAND_RESET_I(32);
    __Vdly__avalon_microphone_system__DOT__p_vol_3 = VL_RAND_RESET_I(32);
    __Vdly__avalon_microphone_system__DOT__p_vol_2 = VL_RAND_RESET_I(32);
    __Vdly__avalon_microphone_system__DOT__p_vol_1 = VL_RAND_RESET_I(32);
    __Vdly__avalon_microphone_system__DOT__p_vol_5 = VL_RAND_RESET_I(32);
    __Vdly__avalon_microphone_system__DOT__p_vol_6 = VL_RAND_RESET_I(32);
    __Vdly__avalon_microphone_system__DOT__p_vol_7 = VL_RAND_RESET_I(32);
    __Vdly__avalon_microphone_system__DOT__p_vol_8 = VL_RAND_RESET_I(32);
    __Vdly__avalon_microphone_system__DOT__p_coef_data = VL_RAND_RESET_I(16);
    __Vdly__avalon_microphone_system__DOT__counter = VL_RAND_RESET_I(3);
    __Vdly__avalon_microphone_system__DOT__ready_data_4 = VL_RAND_RESET_I(32);
    __Vdly__avalon_microphone_system__DOT__ready_data_2 = VL_RAND_RESET_I(32);
    __Vdly__avalon_microphone_system__DOT__ready_data_3 = VL_RAND_RESET_I(32);
    __Vdly__avalon_microphone_system__DOT__ready_data_1 = VL_RAND_RESET_I(32);
    __Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v0 = 0;
    __Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v5 = 0;
    __Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v5 = 0;
    __Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v6 = 0;
    __Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v6 = 0;
    __Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v7 = 0;
    __Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v7 = 0;
    __Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v8 = 0;
    __Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v8 = 0;
    __Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v9 = 0;
    __Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v9 = 0;
    __Vdly__avalon_microphone_system__DOT__m1__DOT__counter = VL_RAND_RESET_I(5);
    __Vdly__avalon_microphone_system__DOT__m2__DOT__counter = VL_RAND_RESET_I(5);
    __Vdly__avalon_microphone_system__DOT__m3__DOT__counter = VL_RAND_RESET_I(5);
    __Vdly__avalon_microphone_system__DOT__m4__DOT__counter = VL_RAND_RESET_I(5);
    __Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__done = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            __Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address[__Vi0] = 0;
    }}
    __Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__counter = 0;
    { int __Vi0=0; for (; __Vi0<70; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}

void Vavalon_microphone_system::__Vmtask__65(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(65);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__67(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(108);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__110(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(196);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__198(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(210);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__217(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2dU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__66(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(66);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__68(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(116);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__118(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(197);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__199(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(211);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__218(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2eU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__67(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(67);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__69(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(115);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__117(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(198);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__200(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(212);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__219(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2fU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__68(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(68);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__70(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(114);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__116(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(204);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__206(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(213);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__220(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x30U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__69(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(69);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__71(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(113);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__115(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(203);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__205(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(214);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__221(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x31U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__70(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(70);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__72(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(112);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__114(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(199);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__201(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(215);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__222(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x32U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__71(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(71);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__73(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(111);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__113(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(200);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__202(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(216);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__223(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x33U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__72(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(72);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__74(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(110);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__112(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(201);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__203(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(217);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__224(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x34U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__73(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(73);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__75(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(109);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__111(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(202);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__204(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(218);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__225(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x35U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__74(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(74);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__76(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(122);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__124(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xeU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_138.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_253.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_254.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_180.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_246.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_192.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(192);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__194(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x27U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_238.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_239.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_259.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_242.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(242);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__246(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3aU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_255.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(255);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__259(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x42U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__86(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(86);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__88(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(130);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__132(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_253.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_143.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_188.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(189);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__191(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x24U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_240.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_241.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_244.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_254.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(254);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__258(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x41U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_259.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(259);
    vlTOPp->_combo__TOP__263(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__87(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(87);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__89(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(129);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__131(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_253.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_254.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_186.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(187);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__189(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x22U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_238.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_239.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_243.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(144);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__146(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1aU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_184.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_252.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__88(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(88);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__90(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(128);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__130(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_253.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_254.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_190.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(191);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__193(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x26U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_240.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_241.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_245.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(145);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__147(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1bU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_184.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_252.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__89(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(89);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__91(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(132);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__134(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_253.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_254.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_142.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_192.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(193);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__195(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x28U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_238.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_239.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_259.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_242.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_138.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(138);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__138(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x17U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__93(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(93);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__95(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_135.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(127);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__129(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x13U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_182.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_185.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(185);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__187(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x20U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_259.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_240.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(240);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__244(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x38U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_257.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__94(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(94);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__96(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_135.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(107);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__109(vlSymsp);
        vlTOPp->__Vm_traceActivity[8U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_182.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_253.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(253);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__257(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x40U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_259.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_184.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(184);
    vlTOPp->_combo__TOP__186(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__95(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(95);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__97(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_135.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(103);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__105(vlSymsp);
        vlTOPp->__Vm_traceActivity[6U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_238.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_239.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_194.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(194);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__196(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x29U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__96(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(96);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__98(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_135.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(104);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__106(vlSymsp);
        vlTOPp->__Vm_traceActivity[7U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_240.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_100.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(100);
    if (((~ (IData)(vlTOPp->AUD_BCLK)) & (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK))) {
        vlTOPp->_sequent__TOP__102(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_241.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(241);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__245(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x39U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_258.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__97(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(97);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__99(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_135.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(105);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__107(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_182.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(182);
    vlTOPp->_combo__TOP__184(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x1eU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__98(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(98);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__100(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_135.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(61);
    if (((~ (IData)(vlTOPp->AUD_BCLK)) & (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK))) {
        vlTOPp->_sequent__TOP__63(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_100.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_101.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_102.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(99);
    if (((~ (IData)(vlTOPp->AUD_BCLK)) & (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK))) {
        vlTOPp->_sequent__TOP__101(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_180.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(180);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__182(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__117(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(117);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__119(vlSymsp);
        vlTOPp->__Vm_traceActivity[9U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_182.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_246.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(60);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__62(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_182.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_190.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(190);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__192(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x25U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_240.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_241.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_245.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(245);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__249(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3dU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_258.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(258);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__262(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x45U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__118(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(118);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__120(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xaU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_182.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_135.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(135);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__137(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_182.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(155);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__157(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1cU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_246.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(246);
    vlTOPp->_combo__TOP__250(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x3eU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_252.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(252);
    vlTOPp->_combo__TOP__256(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__119(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(119);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__121(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xbU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_182.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_246.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(106);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__108(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__120(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(120);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__122(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xcU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_182.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_246.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_102.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(102);
    if (((~ (IData)(vlTOPp->AUD_BCLK)) & (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK))) {
        vlTOPp->_sequent__TOP__104(vlSymsp);
        vlTOPp->__Vm_traceActivity[5U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__121(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(121);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__123(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xdU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_182.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_246.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_186.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(186);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__188(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x21U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_238.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_239.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_243.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(243);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__247(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3bU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_256.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(256);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__260(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x43U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__123(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(123);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__125(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xfU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_246.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_101.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(101);
    if (((~ (IData)(vlTOPp->AUD_BCLK)) & (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK))) {
        vlTOPp->_sequent__TOP__103(vlSymsp);
        vlTOPp->__Vm_traceActivity[4U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_239.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(239);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__243(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x37U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_256.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__124(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(124);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__126(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x10U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_184.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_246.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_183.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(183);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__185(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1fU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__125(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(125);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__127(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x11U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_182.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_183.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_185.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_246.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(181);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__183(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1dU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_142.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(142);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__144(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x18U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_184.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_252.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__126(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(126);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__128(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x12U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_182.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_246.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_259.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(195);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__197(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2aU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__131(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(131);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__133(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x14U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_182.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_246.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_188.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(188);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__190(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x23U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_240.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_241.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_244.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(244);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__248(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3cU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_257.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(257);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__261(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x44U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__133(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(133);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__135(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x15U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_182.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_259.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_194.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(205);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__207(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2bU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_246.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_238.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(238);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
        vlTOPp->_sequent__TOP__242(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x36U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_255.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__134(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(134);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__136(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x16U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(206);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__208(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2cU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(247);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__251(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3fU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_253.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_254.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_143.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(143);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__145(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x19U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_184.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_252.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}
