// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vi2s_master_H_
#define _Vi2s_master_H_

#include "verilated.h"

class Vi2s_master__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vi2s_master) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_IN8(sck,0,0);
    VL_IN8(ws,0,0);
    VL_IN8(sd,0,0);
    VL_OUT16(data_left,15,0);
    VL_OUT16(data_right,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(i2s_master__DOT__wsd,0,0);
    VL_SIG8(i2s_master__DOT__wsdd,0,0);
    VL_SIG8(i2s_master__DOT__wsp,0,0);
    VL_SIG8(i2s_master__DOT__counter,4,0);
    VL_SIG16(i2s_master__DOT__shift,15,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(__Vclklast__TOP__sck,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vi2s_master__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vi2s_master);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vi2s_master(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vi2s_master();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vi2s_master__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vi2s_master__Syms* symsp, bool first);
  private:
    static QData _change_request(Vi2s_master__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vi2s_master__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vi2s_master__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vi2s_master__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__3(Vi2s_master__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vi2s_master__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vi2s_master__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(Vi2s_master__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(Vi2s_master__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vi2s_master__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vi2s_master__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vi2s_master__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vi2s_master__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vi2s_master__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vi2s_master__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vi2s_master__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vi2s_master__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
