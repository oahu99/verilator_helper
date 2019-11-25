// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi2s_master.h for the primary calling header

#include "Vi2s_master.h"
#include "Vi2s_master__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vi2s_master) {
    Vi2s_master__Syms* __restrict vlSymsp = __VlSymsp = new Vi2s_master__Syms(this, name());
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vi2s_master::__Vconfigure(Vi2s_master__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vi2s_master::~Vi2s_master() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vi2s_master::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vi2s_master::eval\n"); );
    Vi2s_master__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
}

void Vi2s_master::_eval_initial_loop(Vi2s_master__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vi2s_master::_sequent__TOP__1(Vi2s_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2s_master::_sequent__TOP__1\n"); );
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vdly__i2s_master__DOT__counter,4,0);
    // Body
    __Vdly__i2s_master__DOT__counter = vlTOPp->i2s_master__DOT__counter;
    // ALWAYS at i2s_master.sv:27
    if (vlTOPp->i2s_master__DOT__wsp) {
	__Vdly__i2s_master__DOT__counter = 0U;
    } else {
	if ((0x10U > (IData)(vlTOPp->i2s_master__DOT__counter))) {
	    __Vdly__i2s_master__DOT__counter = (0x1fU 
						& ((IData)(1U) 
						   + (IData)(vlTOPp->i2s_master__DOT__counter)));
	}
    }
    vlTOPp->i2s_master__DOT__counter = __Vdly__i2s_master__DOT__counter;
}

VL_INLINE_OPT void Vi2s_master::_sequent__TOP__2(Vi2s_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2s_master::_sequent__TOP__2\n"); );
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at i2s_master.sv:21
    vlTOPp->i2s_master__DOT__wsdd = vlTOPp->i2s_master__DOT__wsd;
    // ALWAYS at i2s_master.sv:46
    if (((~ (IData)(vlTOPp->i2s_master__DOT__wsd)) 
	 & (IData)(vlTOPp->i2s_master__DOT__wsp))) {
	vlTOPp->data_right = vlTOPp->i2s_master__DOT__shift;
    }
    // ALWAYS at i2s_master.sv:42
    if (((IData)(vlTOPp->i2s_master__DOT__wsd) & (IData)(vlTOPp->i2s_master__DOT__wsp))) {
	vlTOPp->data_left = vlTOPp->i2s_master__DOT__shift;
    }
    // ALWAYS at i2s_master.sv:17
    vlTOPp->i2s_master__DOT__wsd = vlTOPp->ws;
    // ALWAYS at i2s_master.sv:34
    if (vlTOPp->i2s_master__DOT__wsp) {
	vlTOPp->i2s_master__DOT__shift = 0U;
    }
    if ((0x10U > (IData)(vlTOPp->i2s_master__DOT__counter))) {
	vlTOPp->i2s_master__DOT__shift = (((~ ((IData)(1U) 
					       << (0xfU 
						   & ((IData)(0xfU) 
						      - (IData)(vlTOPp->i2s_master__DOT__counter))))) 
					   & (IData)(vlTOPp->i2s_master__DOT__shift)) 
					  | ((IData)(vlTOPp->sd) 
					     << (0xfU 
						 & ((IData)(0xfU) 
						    - (IData)(vlTOPp->i2s_master__DOT__counter)))));
    }
    vlTOPp->i2s_master__DOT__wsp = ((IData)(vlTOPp->i2s_master__DOT__wsd) 
				    ^ (IData)(vlTOPp->i2s_master__DOT__wsdd));
}

void Vi2s_master::_initial__TOP__3(Vi2s_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2s_master::_initial__TOP__3\n"); );
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at i2s_master.sv:16
    vlTOPp->i2s_master__DOT__wsd = 0U;
}

void Vi2s_master::_settle__TOP__4(Vi2s_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2s_master::_settle__TOP__4\n"); );
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->i2s_master__DOT__wsp = ((IData)(vlTOPp->i2s_master__DOT__wsd) 
				    ^ (IData)(vlTOPp->i2s_master__DOT__wsdd));
}

void Vi2s_master::_eval(Vi2s_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2s_master::_eval\n"); );
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->sck)) & (IData)(vlTOPp->__Vclklast__TOP__sck))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->sck) & (~ (IData)(vlTOPp->__Vclklast__TOP__sck)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__sck = vlTOPp->sck;
}

void Vi2s_master::_eval_initial(Vi2s_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2s_master::_eval_initial\n"); );
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__sck = vlTOPp->sck;
    vlTOPp->_initial__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void Vi2s_master::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2s_master::final\n"); );
    // Variables
    Vi2s_master__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vi2s_master::_eval_settle(Vi2s_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2s_master::_eval_settle\n"); );
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vi2s_master::_change_request(Vi2s_master__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2s_master::_change_request\n"); );
    Vi2s_master* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vi2s_master::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2s_master::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((sck & 0xfeU))) {
	Verilated::overWidthError("sck");}
    if (VL_UNLIKELY((ws & 0xfeU))) {
	Verilated::overWidthError("ws");}
    if (VL_UNLIKELY((sd & 0xfeU))) {
	Verilated::overWidthError("sd");}
}
#endif // VL_DEBUG

void Vi2s_master::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2s_master::_ctor_var_reset\n"); );
    // Body
    sck = VL_RAND_RESET_I(1);
    ws = VL_RAND_RESET_I(1);
    sd = VL_RAND_RESET_I(1);
    data_left = VL_RAND_RESET_I(16);
    data_right = VL_RAND_RESET_I(16);
    i2s_master__DOT__wsd = VL_RAND_RESET_I(1);
    i2s_master__DOT__wsdd = VL_RAND_RESET_I(1);
    i2s_master__DOT__wsp = VL_RAND_RESET_I(1);
    i2s_master__DOT__counter = VL_RAND_RESET_I(5);
    i2s_master__DOT__shift = VL_RAND_RESET_I(16);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
