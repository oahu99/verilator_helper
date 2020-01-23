// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vavalon_microphone_system.h for the primary calling header

#include "Vavalon_microphone_system.h"
#include "Vavalon_microphone_system__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vavalon_microphone_system), __Vm_mt_19(1), 
  __Vm_mt_31(2), __Vm_mt_33(2), __Vm_mt_34(1), __Vm_mt_38(1), 
  __Vm_mt_16(3), __Vm_mt_20(1), __Vm_mt_39(5), __Vm_mt_36(4), 
  __Vm_mt_37(1), __Vm_mt_final(4), __Vm_threadPoolp(NULL), 
  __Vm_even_cycle(false) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = __VlSymsp = new Vavalon_microphone_system__Syms(this, name());
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
    __Vm_threadPoolp = new VlThreadPool(3, 0);
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
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
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
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
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
    // INITIAL at avalon_microphone_system.sv:156
    vlTOPp->AVL_READDATA = 0U;
    // INITIAL at avalon_microphone_system.sv:152
    vlTOPp->avalon_microphone_system__DOT__restart_sig = 0U;
    // INITIAL at avalon_microphone_system.sv:148
    vlTOPp->avalon_microphone_system__DOT__start = 0U;
    // INITIAL at avalon_microphone_system.sv:111
    vlTOPp->avalon_microphone_system__DOT__counter = 0U;
    // INITIAL at avalon_microphone_system.sv:61
    vlTOPp->vol_1 = 0x14U;
    vlTOPp->vol_2 = 0x14U;
    vlTOPp->vol_3 = 0x14U;
    vlTOPp->vol_4 = 0x14U;
    vlTOPp->vol_5 = 0x14U;
    vlTOPp->vol_6 = 0x14U;
    vlTOPp->vol_7 = 0x14U;
    vlTOPp->vol_8 = 0x14U;
    // INITIAL at mic_dma.sv:48
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__finish_signal = 0U;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter = 0U;
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_counter = 0U;
    vlTOPp->avalon_microphone_system__DOT__half_way_latch = 0U;
    vlTOPp->avalon_microphone_system__DOT__end_latch = 0U;
    // INITIAL at i2s_master.sv:16
    vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsd = 0U;
    // INITIAL at i2s_master.sv:16
    vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsd = 0U;
    // INITIAL at i2s_master.sv:16
    vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsd = 0U;
    // INITIAL at i2s_master.sv:16
    vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsd = 0U;
}

void Vavalon_microphone_system::_settle__TOP__2(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_settle__TOP__2\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sample_ready = vlTOPp->avalon_microphone_system__DOT__ready_read_now;
    // ALWAYS at mic_dma.sv:109
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
    // ALWAYS at mic_dma.sv:109
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
    // ALWAYS at avalon_microphone_system.sv:242
    vlTOPp->codec_stream = ((IData)(vlTOPp->avalon_microphone_system__DOT__start)
			     ? 0U : ((((vlTOPp->avalon_microphone_system__DOT__ready_data_1 
					+ vlTOPp->avalon_microphone_system__DOT__ready_data_2) 
				       + vlTOPp->avalon_microphone_system__DOT__ready_data_3) 
				      + vlTOPp->avalon_microphone_system__DOT__ready_data_4) 
				     + vlTOPp->adc_data));
    // ALWAYS at mic_dma.sv:109
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
    // ALWAYS at mic_dma.sv:109
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
    // ALWAYS at avalon_microphone_system.sv:367
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

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__5(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__5\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v0 = 0U;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__6(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__6\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v5 = 0U;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__7(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__7\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v6 = 0U;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__8(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__8\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v7 = 0U;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__9(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__9\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v8 = 0U;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__10(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__10\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v9 = 0U;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__11(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__11\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 9 
    VL_SIG8(__Vdly__avalon_microphone_system__DOT__m1__DOT__counter,4,0);
    VL_SIG8(__Vdly__avalon_microphone_system__DOT__m2__DOT__counter,4,0);
    VL_SIG8(__Vdly__avalon_microphone_system__DOT__m3__DOT__counter,4,0);
    VL_SIG8(__Vdly__avalon_microphone_system__DOT__m4__DOT__counter,4,0);
    // Body
    __Vdly__avalon_microphone_system__DOT__m4__DOT__counter 
	= vlTOPp->avalon_microphone_system__DOT__m4__DOT__counter;
    __Vdly__avalon_microphone_system__DOT__m3__DOT__counter 
	= vlTOPp->avalon_microphone_system__DOT__m3__DOT__counter;
    __Vdly__avalon_microphone_system__DOT__m2__DOT__counter 
	= vlTOPp->avalon_microphone_system__DOT__m2__DOT__counter;
    __Vdly__avalon_microphone_system__DOT__m1__DOT__counter 
	= vlTOPp->avalon_microphone_system__DOT__m1__DOT__counter;
    // ALWAYS at i2s_master.sv:27
    if (vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsp) {
	__Vdly__avalon_microphone_system__DOT__m1__DOT__counter = 0U;
    } else {
	if ((0x10U > (IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__counter))) {
	    __Vdly__avalon_microphone_system__DOT__m1__DOT__counter 
		= (0x1fU & ((IData)(1U) + (IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__counter)));
	}
    }
    // ALWAYS at i2s_master.sv:27
    if (vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsp) {
	__Vdly__avalon_microphone_system__DOT__m2__DOT__counter = 0U;
    } else {
	if ((0x10U > (IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__counter))) {
	    __Vdly__avalon_microphone_system__DOT__m2__DOT__counter 
		= (0x1fU & ((IData)(1U) + (IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__counter)));
	}
    }
    // ALWAYS at i2s_master.sv:27
    if (vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsp) {
	__Vdly__avalon_microphone_system__DOT__m3__DOT__counter = 0U;
    } else {
	if ((0x10U > (IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__counter))) {
	    __Vdly__avalon_microphone_system__DOT__m3__DOT__counter 
		= (0x1fU & ((IData)(1U) + (IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__counter)));
	}
    }
    // ALWAYS at i2s_master.sv:27
    if (vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsp) {
	__Vdly__avalon_microphone_system__DOT__m4__DOT__counter = 0U;
    } else {
	if ((0x10U > (IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__counter))) {
	    __Vdly__avalon_microphone_system__DOT__m4__DOT__counter 
		= (0x1fU & ((IData)(1U) + (IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__counter)));
	}
    }
    vlTOPp->avalon_microphone_system__DOT__m4__DOT__counter 
	= __Vdly__avalon_microphone_system__DOT__m4__DOT__counter;
    vlTOPp->avalon_microphone_system__DOT__m3__DOT__counter 
	= __Vdly__avalon_microphone_system__DOT__m3__DOT__counter;
    vlTOPp->avalon_microphone_system__DOT__m2__DOT__counter 
	= __Vdly__avalon_microphone_system__DOT__m2__DOT__counter;
    vlTOPp->avalon_microphone_system__DOT__m1__DOT__counter 
	= __Vdly__avalon_microphone_system__DOT__m1__DOT__counter;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__12(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__12\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at avalon_microphone_system.sv:254
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

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__13(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__13\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at avalon_microphone_system.sv:254
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

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__14(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__14\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at mic_dma.sv:78
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_WRITE 
	= ((~ (IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET)) 
	   & (IData)(vlTOPp->AM_WRITE));
    // ALWAYS at mic_dma.sv:78
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_ADDR 
	= ((IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET)
	    ? 0U : vlTOPp->AM_ADDR);
    // ALWAYS at mic_dma.sv:78
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_done 
	= ((~ (IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET)) 
	   & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__done));
    // ALWAYS at mic_dma.sv:78
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_mic_count 
	= ((IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET)
	    ? 0U : (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__mic_count));
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__15(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__15\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__counter 
	= vlTOPp->avalon_microphone_system__DOT__counter;
    // ALWAYS at avalon_microphone_system.sv:115
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
    // ALWAYS at avalon_microphone_system.sv:254
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

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__16(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__16\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at avalon_microphone_system.sv:254
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
    // ALWAYS at mic_dma.sv:65
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state 
	= ((IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET)
	    ? 0U : (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__next_state));
    // ALWAYS at mic_dma.sv:78
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_counter 
	= ((IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET)
	    ? 0U : vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__counter);
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__18(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__18\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_1 
	= vlTOPp->avalon_microphone_system__DOT__ready_data_1;
    // ALWAYS at mic_dma.sv:78
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_num_samples 
	= ((IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET)
	    ? 0U : vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples);
    // ALWAYS at mic_dma.sv:310
    if (((IData)(vlTOPp->avalon_microphone_system__DOT__end_ack) 
	 | (IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET))) {
	vlTOPp->avalon_microphone_system__DOT__end_latch = 0U;
    } else {
	if ((0U == vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__num_samples)) {
	    vlTOPp->avalon_microphone_system__DOT__end_latch = 1U;
	}
    }
    // ALWAYS at avalon_microphone_system.sv:222
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

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__20(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__20\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_4 
	= vlTOPp->avalon_microphone_system__DOT__ready_data_4;
    vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_3 
	= vlTOPp->avalon_microphone_system__DOT__ready_data_3;
    vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_2 
	= vlTOPp->avalon_microphone_system__DOT__ready_data_2;
    // ALWAYS at avalon_microphone_system.sv:222
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
    // ALWAYS at avalon_microphone_system.sv:222
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
    // ALWAYS at avalon_microphone_system.sv:222
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

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__22(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__22\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__ready_data_4 
	= vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_4;
    vlTOPp->avalon_microphone_system__DOT__ready_data_3 
	= vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_3;
    vlTOPp->avalon_microphone_system__DOT__ready_data_1 
	= vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_1;
    vlTOPp->avalon_microphone_system__DOT__ready_data_2 
	= vlTOPp->__Vdly__avalon_microphone_system__DOT__ready_data_2;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__23(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__23\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at i2s_master.sv:42
    if (((IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsd) 
	 & (IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsp))) {
	vlTOPp->avalon_microphone_system__DOT__mic_l2 
	    = vlTOPp->avalon_microphone_system__DOT__m2__DOT__shift;
    }
    // ALWAYS at i2s_master.sv:46
    if (((~ (IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsd)) 
	 & (IData)(vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsp))) {
	vlTOPp->avalon_microphone_system__DOT__mic_r2 
	    = vlTOPp->avalon_microphone_system__DOT__m2__DOT__shift;
    }
    // ALWAYS at i2s_master.sv:42
    if (((IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsd) 
	 & (IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsp))) {
	vlTOPp->avalon_microphone_system__DOT__mic_l3 
	    = vlTOPp->avalon_microphone_system__DOT__m3__DOT__shift;
    }
    // ALWAYS at i2s_master.sv:46
    if (((~ (IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsd)) 
	 & (IData)(vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsp))) {
	vlTOPp->avalon_microphone_system__DOT__mic_r3 
	    = vlTOPp->avalon_microphone_system__DOT__m3__DOT__shift;
    }
    // ALWAYS at i2s_master.sv:42
    if (((IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsd) 
	 & (IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsp))) {
	vlTOPp->avalon_microphone_system__DOT__mic_l4 
	    = vlTOPp->avalon_microphone_system__DOT__m4__DOT__shift;
    }
    // ALWAYS at i2s_master.sv:46
    if (((~ (IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsd)) 
	 & (IData)(vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsp))) {
	vlTOPp->avalon_microphone_system__DOT__mic_r4 
	    = vlTOPp->avalon_microphone_system__DOT__m4__DOT__shift;
    }
    // ALWAYS at i2s_master.sv:46
    if (((~ (IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsd)) 
	 & (IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsp))) {
	vlTOPp->avalon_microphone_system__DOT__mic_r 
	    = vlTOPp->avalon_microphone_system__DOT__m1__DOT__shift;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__24(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__24\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at avalon_microphone_system.sv:254
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

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__25(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__25\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 21 
    VL_SIG16(__Vdly__avalon_microphone_system__DOT__p_coef_data,15,0);
    // Body
    __Vdly__avalon_microphone_system__DOT__p_coef_data 
	= vlTOPp->avalon_microphone_system__DOT__p_coef_data;
    // ALWAYS at avalon_microphone_system.sv:75
    __Vdly__avalon_microphone_system__DOT__p_coef_data 
	= ((IData)(vlTOPp->RESET) ? 0U : (IData)(vlTOPp->coef_data));
    // ALWAYS at avalon_microphone_system.sv:254
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
    vlTOPp->avalon_microphone_system__DOT__p_coef_data 
	= __Vdly__avalon_microphone_system__DOT__p_coef_data;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__26(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__26\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 22 
    VL_SIG(__Vdly__avalon_microphone_system__DOT__p_vol_7,31,0);
    // Body
    __Vdly__avalon_microphone_system__DOT__p_vol_7 
	= vlTOPp->avalon_microphone_system__DOT__p_vol_7;
    // ALWAYS at avalon_microphone_system.sv:75
    __Vdly__avalon_microphone_system__DOT__p_vol_7 
	= ((IData)(vlTOPp->RESET) ? 0x14U : vlTOPp->vol_7);
    // ALWAYS at avalon_microphone_system.sv:254
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
    vlTOPp->avalon_microphone_system__DOT__p_vol_7 
	= __Vdly__avalon_microphone_system__DOT__p_vol_7;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__27(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__27\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 23 
    VL_SIG(__Vdly__avalon_microphone_system__DOT__p_vol_6,31,0);
    // Body
    __Vdly__avalon_microphone_system__DOT__p_vol_6 
	= vlTOPp->avalon_microphone_system__DOT__p_vol_6;
    // ALWAYS at avalon_microphone_system.sv:75
    __Vdly__avalon_microphone_system__DOT__p_vol_6 
	= ((IData)(vlTOPp->RESET) ? 0x14U : vlTOPp->vol_6);
    // ALWAYS at avalon_microphone_system.sv:254
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
    vlTOPp->avalon_microphone_system__DOT__p_vol_6 
	= __Vdly__avalon_microphone_system__DOT__p_vol_6;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__28(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__28\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 24 
    VL_SIG(__Vdly__avalon_microphone_system__DOT__p_vol_5,31,0);
    // Body
    __Vdly__avalon_microphone_system__DOT__p_vol_5 
	= vlTOPp->avalon_microphone_system__DOT__p_vol_5;
    // ALWAYS at avalon_microphone_system.sv:75
    __Vdly__avalon_microphone_system__DOT__p_vol_5 
	= ((IData)(vlTOPp->RESET) ? 0x14U : vlTOPp->vol_5);
    // ALWAYS at avalon_microphone_system.sv:254
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
    vlTOPp->avalon_microphone_system__DOT__p_vol_5 
	= __Vdly__avalon_microphone_system__DOT__p_vol_5;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__29(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__29\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 25 
    VL_SIG(__Vdly__avalon_microphone_system__DOT__p_vol_4,31,0);
    // Body
    __Vdly__avalon_microphone_system__DOT__p_vol_4 
	= vlTOPp->avalon_microphone_system__DOT__p_vol_4;
    // ALWAYS at avalon_microphone_system.sv:75
    __Vdly__avalon_microphone_system__DOT__p_vol_4 
	= ((IData)(vlTOPp->RESET) ? 0x14U : vlTOPp->vol_4);
    // ALWAYS at avalon_microphone_system.sv:254
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
    vlTOPp->avalon_microphone_system__DOT__p_vol_4 
	= __Vdly__avalon_microphone_system__DOT__p_vol_4;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__30(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__30\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 26 
    VL_SIG(__Vdly__avalon_microphone_system__DOT__p_vol_3,31,0);
    // Body
    __Vdly__avalon_microphone_system__DOT__p_vol_3 
	= vlTOPp->avalon_microphone_system__DOT__p_vol_3;
    // ALWAYS at avalon_microphone_system.sv:75
    __Vdly__avalon_microphone_system__DOT__p_vol_3 
	= ((IData)(vlTOPp->RESET) ? 0x14U : vlTOPp->vol_3);
    // ALWAYS at avalon_microphone_system.sv:254
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
    vlTOPp->avalon_microphone_system__DOT__p_vol_3 
	= __Vdly__avalon_microphone_system__DOT__p_vol_3;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__31(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__31\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 27 
    VL_SIG(__Vdly__avalon_microphone_system__DOT__p_vol_2,31,0);
    // Body
    __Vdly__avalon_microphone_system__DOT__p_vol_2 
	= vlTOPp->avalon_microphone_system__DOT__p_vol_2;
    // ALWAYS at avalon_microphone_system.sv:75
    __Vdly__avalon_microphone_system__DOT__p_vol_2 
	= ((IData)(vlTOPp->RESET) ? 0x14U : vlTOPp->vol_2);
    // ALWAYS at avalon_microphone_system.sv:254
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
    vlTOPp->avalon_microphone_system__DOT__p_vol_2 
	= __Vdly__avalon_microphone_system__DOT__p_vol_2;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__32(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__32\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 28 
    VL_SIG(__Vdly__avalon_microphone_system__DOT__p_vol_1,31,0);
    // Body
    __Vdly__avalon_microphone_system__DOT__p_vol_1 
	= vlTOPp->avalon_microphone_system__DOT__p_vol_1;
    // ALWAYS at avalon_microphone_system.sv:75
    __Vdly__avalon_microphone_system__DOT__p_vol_1 
	= ((IData)(vlTOPp->RESET) ? 0x14U : vlTOPp->vol_1);
    // ALWAYS at avalon_microphone_system.sv:254
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
    vlTOPp->avalon_microphone_system__DOT__p_vol_1 
	= __Vdly__avalon_microphone_system__DOT__p_vol_1;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__33(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__33\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 29 
    VL_SIG(__Vdly__avalon_microphone_system__DOT__p_vol_8,31,0);
    // Body
    __Vdly__avalon_microphone_system__DOT__p_vol_8 
	= vlTOPp->avalon_microphone_system__DOT__p_vol_8;
    // ALWAYS at avalon_microphone_system.sv:75
    __Vdly__avalon_microphone_system__DOT__p_vol_8 
	= ((IData)(vlTOPp->RESET) ? 0x14U : vlTOPp->vol_8);
    // ALWAYS at avalon_microphone_system.sv:254
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
    vlTOPp->avalon_microphone_system__DOT__p_vol_8 
	= __Vdly__avalon_microphone_system__DOT__p_vol_8;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__34(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__34\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at mic_dma.sv:298
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
    // ALWAYS at avalon_microphone_system.sv:254
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

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__37(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__37\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at i2s_master.sv:21
    vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsdd 
	= vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsd;
    // ALWAYS at i2s_master.sv:21
    vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsdd 
	= vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsd;
    // ALWAYS at i2s_master.sv:21
    vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsdd 
	= vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsd;
    // ALWAYS at i2s_master.sv:21
    vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsdd 
	= vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsd;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__38(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__38\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at mic_dma.sv:78
    vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__prev_finish_signal 
	= ((~ (IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET)) 
	   & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__finish_signal));
    // ALWAYS at altera_up_clock_edge.v:97
    vlTOPp->avalon_microphone_system__DOT__detect__DOT__last_test_clk 
	= vlTOPp->avalon_microphone_system__DOT__detect__DOT__cur_test_clk;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__41(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__41\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at i2s_master.sv:42
    if (((IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsd) 
	 & (IData)(vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsp))) {
	vlTOPp->avalon_microphone_system__DOT__mic_l 
	    = vlTOPp->avalon_microphone_system__DOT__m1__DOT__shift;
    }
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__42(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__42\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at mic_dma.sv:109
    if ((1U & (~ ((IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state))) {
	    if ((1U & (~ (IData)(vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__state)))) {
		vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk5__DOT__i = 5U;
	    }
	}
    }
    // ALWAYS at mic_dma.sv:109
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
    // ALWAYS at altera_up_clock_edge.v:94
    vlTOPp->avalon_microphone_system__DOT__detect__DOT__cur_test_clk 
	= vlTOPp->AUD_ADCLRCK;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__44(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__44\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__detect__DOT__found_edge 
	= ((IData)(vlTOPp->avalon_microphone_system__DOT__detect__DOT__last_test_clk) 
	   ^ (IData)(vlTOPp->avalon_microphone_system__DOT__detect__DOT__cur_test_clk));
}

VL_INLINE_OPT void Vavalon_microphone_system::_combo__TOP__47(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_combo__TOP__47\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at avalon_microphone_system.sv:242
    vlTOPp->codec_stream = ((IData)(vlTOPp->avalon_microphone_system__DOT__start)
			     ? 0U : ((((vlTOPp->avalon_microphone_system__DOT__ready_data_1 
					+ vlTOPp->avalon_microphone_system__DOT__ready_data_2) 
				       + vlTOPp->avalon_microphone_system__DOT__ready_data_3) 
				      + vlTOPp->avalon_microphone_system__DOT__ready_data_4) 
				     + vlTOPp->adc_data));
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__48(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__48\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at mic_dma.sv:109
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

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__49(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__49\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at i2s_master.sv:17
    vlTOPp->avalon_microphone_system__DOT__m1__DOT__wsd 
	= vlTOPp->AUD_ADCLRCK;
    // ALWAYS at i2s_master.sv:17
    vlTOPp->avalon_microphone_system__DOT__m2__DOT__wsd 
	= vlTOPp->AUD_ADCLRCK;
    // ALWAYS at i2s_master.sv:17
    vlTOPp->avalon_microphone_system__DOT__m3__DOT__wsd 
	= vlTOPp->AUD_ADCLRCK;
    // ALWAYS at i2s_master.sv:17
    vlTOPp->avalon_microphone_system__DOT__m4__DOT__wsd 
	= vlTOPp->AUD_ADCLRCK;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__50(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__50\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at i2s_master.sv:34
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
    // ALWAYS at i2s_master.sv:34
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

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__51(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__51\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at i2s_master.sv:34
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
    // ALWAYS at i2s_master.sv:34
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

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__52(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__52\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__53(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__53\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at mic_dma.sv:78
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

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__54(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__54\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at avalon_microphone_system.sv:254
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

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__55(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__55\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at mic_dma.sv:78
    if ((1U & (~ (IData)(vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET)))) {
	vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk2__DOT__i = 5U;
    }
    // ALWAYS at mic_dma.sv:78
    if (vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET) {
	vlTOPp->avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk1__DOT__i = 5U;
    }
    // ALWAYS at avalon_microphone_system.sv:254
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
    vlTOPp->avalon_microphone_system__DOT__counter 
	= vlTOPp->__Vdly__avalon_microphone_system__DOT__counter;
}

VL_INLINE_OPT void Vavalon_microphone_system::_combo__TOP__56(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_combo__TOP__56\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET 
	= ((IData)(vlTOPp->RESET) | (IData)(vlTOPp->avalon_microphone_system__DOT__restart_sig));
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__57(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__57\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sample_ready = vlTOPp->avalon_microphone_system__DOT__ready_read_now;
}

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__59(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__59\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->avalon_microphone_system__DOT__saw_rise 
	= ((IData)(vlTOPp->avalon_microphone_system__DOT__detect__DOT__found_edge) 
	   & (IData)(vlTOPp->avalon_microphone_system__DOT__detect__DOT__cur_test_clk));
    vlTOPp->avalon_microphone_system__DOT__saw_fall 
	= ((IData)(vlTOPp->avalon_microphone_system__DOT__detect__DOT__found_edge) 
	   & (IData)(vlTOPp->avalon_microphone_system__DOT__detect__DOT__last_test_clk));
}

VL_INLINE_OPT void Vavalon_microphone_system::_combo__TOP__60(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_combo__TOP__60\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at avalon_microphone_system.sv:367
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

VL_INLINE_OPT void Vavalon_microphone_system::_sequent__TOP__61(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_sequent__TOP__61\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYSPOST at mic_dma.sv:83
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

VL_INLINE_OPT void Vavalon_microphone_system::_combo__TOP__62(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_combo__TOP__62\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at mic_dma.sv:109
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

VL_INLINE_OPT void Vavalon_microphone_system::_combo__TOP__63(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_combo__TOP__63\n"); );
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

void Vavalon_microphone_system::_eval(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_eval\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vm_even_cycle = !vlTOPp->__Vm_even_cycle;
    vlTOPp->__Vm_threadPoolp->workerp(0)->addTask(__Vmtask__3, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(1)->addTask(__Vmtask__4, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(2)->addTask(__Vmtask__14, vlTOPp->__Vm_even_cycle, vlSymsp);
    __Vmtask__15(vlTOPp->__Vm_even_cycle, vlSymsp);
    Verilated::mtaskId(0);
    vlTOPp->__Vm_mt_final.waitUntilUpstreamDone(vlTOPp->__Vm_even_cycle);
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
    vlTOPp->__Vclklast__TOP__AUD_BCLK = vlTOPp->AUD_BCLK;
}

void Vavalon_microphone_system::_eval_initial(Vavalon_microphone_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vavalon_microphone_system::_eval_initial\n"); );
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
    vlTOPp->__Vclklast__TOP__AUD_BCLK = vlTOPp->AUD_BCLK;
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
#endif // VL_DEBUG

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
    __Vdly__avalon_microphone_system__DOT__counter = VL_RAND_RESET_I(3);
    __Vdly__avalon_microphone_system__DOT__ready_data_2 = VL_RAND_RESET_I(32);
    __Vdly__avalon_microphone_system__DOT__ready_data_1 = VL_RAND_RESET_I(32);
    __Vdly__avalon_microphone_system__DOT__ready_data_3 = VL_RAND_RESET_I(32);
    __Vdly__avalon_microphone_system__DOT__ready_data_4 = VL_RAND_RESET_I(32);
    __Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v0 = VL_RAND_RESET_I(1);
    __Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v5 = 0;
    __Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v5 = VL_RAND_RESET_I(1);
    __Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v6 = 0;
    __Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v6 = VL_RAND_RESET_I(1);
    __Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v7 = 0;
    __Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v7 = VL_RAND_RESET_I(1);
    __Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v8 = 0;
    __Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v8 = VL_RAND_RESET_I(1);
    __Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v9 = 0;
    __Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v9 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__done = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    __Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address[__Vi0] = 0;
    }}
    __Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__counter = 0;
    { int __Vi0=0; for (; __Vi0<35; ++__Vi0) {
	    __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}

void Vavalon_microphone_system::__Vmtask__3(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(3);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(5);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(7);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(30);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__34(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x12U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_20.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_39.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_16.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(16);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__53(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_39.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(17);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__61(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x21U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_36.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(36);
    vlTOPp->_combo__TOP__62(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x22U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(23);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__27(vlSymsp);
	vlTOPp->__Vm_traceActivity[0xbU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(26);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__30(vlSymsp);
	vlTOPp->__Vm_traceActivity[0xeU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(11);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__13(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_37.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(37);
    vlTOPp->_combo__TOP__63(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__4(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(4);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_16.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(6);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_16.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(8);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_16.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(12);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__14(vlSymsp);
	vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_36.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_31.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(31);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
	vlTOPp->_sequent__TOP__37(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x13U] = 1U;
    }
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__38(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x14U] = 1U;
    }
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
	vlTOPp->_sequent__TOP__41(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x15U] = 1U;
    }
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__42(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x16U] = 1U;
    }
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__44(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x17U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_33.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_34.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_20.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(20);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__54(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x1dU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_39.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(39);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__55(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x1eU] = 1U;
    }
    vlTOPp->_combo__TOP__56(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x1fU] = 1U;
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__57(vlSymsp);
    }
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__59(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x20U] = 1U;
    }
    vlTOPp->_combo__TOP__60(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(27);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__31(vlSymsp);
	vlTOPp->__Vm_traceActivity[0xfU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(10);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__12(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__14(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(14);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__16(vlSymsp);
	vlTOPp->__Vm_traceActivity[4U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_31.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_36.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(13);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__15(vlSymsp);
	vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_39.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_36.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_19.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(19);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__24(vlSymsp);
	vlTOPp->__Vm_traceActivity[8U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_39.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(9);
    if (((~ (IData)(vlTOPp->AUD_BCLK)) & (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK))) {
	vlTOPp->_sequent__TOP__11(vlSymsp);
	vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(21);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__25(vlSymsp);
	vlTOPp->__Vm_traceActivity[9U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_33.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(33);
    vlTOPp->_combo__TOP__47(vlSymsp);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__48(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x18U] = 1U;
    }
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
	vlTOPp->_sequent__TOP__49(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x19U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_38.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(25);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__29(vlSymsp);
	vlTOPp->__Vm_traceActivity[0xdU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(29);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__33(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x11U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void Vavalon_microphone_system::__Vmtask__15(bool even_cycle, void* symtab) {
    Vavalon_microphone_system__Syms* __restrict vlSymsp = (Vavalon_microphone_system__Syms*)symtab;
    Vavalon_microphone_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(15);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__18(vlSymsp);
	vlTOPp->__Vm_traceActivity[5U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_19.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_31.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_36.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(18);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__20(vlSymsp);
    }
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__22(vlSymsp);
	vlTOPp->__Vm_traceActivity[6U] = 1U;
    }
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
	vlTOPp->_sequent__TOP__23(vlSymsp);
	vlTOPp->__Vm_traceActivity[7U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_33.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_39.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_37.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(35);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
	vlTOPp->_sequent__TOP__51(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x1bU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(22);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__26(vlSymsp);
	vlTOPp->__Vm_traceActivity[0xaU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_34.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(34);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
	vlTOPp->_sequent__TOP__50(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x1aU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(24);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__28(vlSymsp);
	vlTOPp->__Vm_traceActivity[0xcU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(28);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
	vlTOPp->_sequent__TOP__32(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x10U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_38.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(38);
    if (((IData)(vlTOPp->AUD_BCLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__AUD_BCLK)))) {
	vlTOPp->_sequent__TOP__52(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x1cU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}
