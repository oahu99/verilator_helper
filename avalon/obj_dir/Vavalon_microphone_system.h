// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vavalon_microphone_system_H_
#define _Vavalon_microphone_system_H_

#include "verilated.h"

class Vavalon_microphone_system__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vavalon_microphone_system) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_IN8(CLK,0,0);
    VL_IN8(AUD_BCLK,0,0);
    VL_IN8(RESET,0,0);
    VL_OUT8(AM_BURSTCOUNT,2,0);
    VL_OUT8(AM_WRITE,0,0);
    VL_OUT8(AM_BYTEENABLE,3,0);
    VL_IN8(AM_WAITREQUEST,0,0);
    VL_IN8(AVL_READ,0,0);
    VL_IN8(AVL_WRITE,0,0);
    VL_IN8(AVL_CS,0,0);
    VL_IN8(AVL_ADDR,2,0);
    VL_IN8(AUD_ADCLRCK,0,0);
    VL_IN8(GPIO_DIN1,0,0);
    VL_IN8(GPIO_DIN2,0,0);
    VL_IN8(GPIO_DIN3,0,0);
    VL_IN8(GPIO_DIN4,0,0);
    VL_OUT8(load_coef,0,0);
    VL_OUT8(change_filter,0,0);
    VL_OUT8(sample_ready,0,0);
    VL_OUT16(coef_data,15,0);
    VL_OUT(AM_ADDR,31,0);
    VL_OUT(AM_WRITEDATA,31,0);
    VL_IN(AVL_WRITEDATA,31,0);
    VL_OUT(AVL_READDATA,31,0);
    VL_IN(fir_left_data,31,0);
    VL_IN(fir_right_data,31,0);
    VL_IN(adc_data,31,0);
    VL_OUT(vol_1,31,0);
    VL_OUT(vol_2,31,0);
    VL_OUT(vol_3,31,0);
    VL_OUT(vol_4,31,0);
    VL_OUT(vol_5,31,0);
    VL_OUT(vol_6,31,0);
    VL_OUT(vol_7,31,0);
    VL_OUT(vol_8,31,0);
    VL_OUT(codec_stream,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
	// Begin mtask footprint  all: 
	VL_SIG8(avalon_microphone_system__DOT__saw_rise,0,0);
	VL_SIG8(avalon_microphone_system__DOT__saw_fall,0,0);
	VL_SIG8(avalon_microphone_system__DOT__start,0,0);
	VL_SIG8(avalon_microphone_system__DOT__ready_read_now,0,0);
	VL_SIG8(avalon_microphone_system__DOT__counter,2,0);
	VL_SIG8(avalon_microphone_system__DOT__restart_sig,0,0);
	VL_SIG8(avalon_microphone_system__DOT__half_way_latch,0,0);
	VL_SIG8(avalon_microphone_system__DOT__half_way_ack,0,0);
	VL_SIG8(avalon_microphone_system__DOT__end_latch,0,0);
	VL_SIG8(avalon_microphone_system__DOT__end_ack,0,0);
	VL_SIG8(avalon_microphone_system__DOT__dma_yo__DOT__done,0,0);
	VL_SIG8(avalon_microphone_system__DOT__dma_yo__DOT__finish_signal,0,0);
	VL_SIG8(avalon_microphone_system__DOT__dma_yo__DOT__mic_count,2,0);
	VL_SIG8(avalon_microphone_system__DOT__dma_yo__DOT__prev_mic_count,2,0);
	VL_SIG8(avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_WRITE,0,0);
	VL_SIG8(avalon_microphone_system__DOT__dma_yo__DOT__prev_done,0,0);
	VL_SIG8(avalon_microphone_system__DOT__dma_yo__DOT__prev_finish_signal,0,0);
	VL_SIG8(avalon_microphone_system__DOT__dma_yo__DOT__state,2,0);
	VL_SIG8(avalon_microphone_system__DOT__dma_yo__DOT__next_state,2,0);
	VL_SIG8(avalon_microphone_system__DOT__detect__DOT__found_edge,0,0);
	VL_SIG8(avalon_microphone_system__DOT__detect__DOT__cur_test_clk,0,0);
	VL_SIG8(avalon_microphone_system__DOT__detect__DOT__last_test_clk,0,0);
	VL_SIG8(avalon_microphone_system__DOT__m1__DOT__wsd,0,0);
	VL_SIG8(avalon_microphone_system__DOT__m1__DOT__wsdd,0,0);
	VL_SIG8(avalon_microphone_system__DOT__m1__DOT__wsp,0,0);
	VL_SIG8(avalon_microphone_system__DOT__m1__DOT__counter,4,0);
	VL_SIG8(avalon_microphone_system__DOT__m2__DOT__wsd,0,0);
	VL_SIG8(avalon_microphone_system__DOT__m2__DOT__wsdd,0,0);
	VL_SIG8(avalon_microphone_system__DOT__m2__DOT__wsp,0,0);
	VL_SIG8(avalon_microphone_system__DOT__m2__DOT__counter,4,0);
	VL_SIG8(avalon_microphone_system__DOT__m3__DOT__wsd,0,0);
	VL_SIG8(avalon_microphone_system__DOT__m3__DOT__wsdd,0,0);
	VL_SIG8(avalon_microphone_system__DOT__m3__DOT__wsp,0,0);
	VL_SIG8(avalon_microphone_system__DOT__m3__DOT__counter,4,0);
	VL_SIG8(avalon_microphone_system__DOT__m4__DOT__wsd,0,0);
	VL_SIG8(avalon_microphone_system__DOT__m4__DOT__wsdd,0,0);
	VL_SIG8(avalon_microphone_system__DOT__m4__DOT__wsp,0,0);
	VL_SIG8(avalon_microphone_system__DOT__m4__DOT__counter,4,0);
	VL_SIG16(avalon_microphone_system__DOT__p_coef_data,15,0);
	VL_SIG16(avalon_microphone_system__DOT__mic_l,15,0);
	VL_SIG16(avalon_microphone_system__DOT__mic_r,15,0);
	VL_SIG16(avalon_microphone_system__DOT__mic_l2,15,0);
	VL_SIG16(avalon_microphone_system__DOT__mic_r2,15,0);
	VL_SIG16(avalon_microphone_system__DOT__mic_l3,15,0);
	VL_SIG16(avalon_microphone_system__DOT__mic_r3,15,0);
	VL_SIG16(avalon_microphone_system__DOT__mic_l4,15,0);
	VL_SIG16(avalon_microphone_system__DOT__mic_r4,15,0);
	VL_SIG16(avalon_microphone_system__DOT__m1__DOT__shift,15,0);
	VL_SIG16(avalon_microphone_system__DOT__m2__DOT__shift,15,0);
	VL_SIG16(avalon_microphone_system__DOT__m3__DOT__shift,15,0);
	VL_SIG16(avalon_microphone_system__DOT__m4__DOT__shift,15,0);
	VL_SIG(avalon_microphone_system__DOT__p_vol_1,31,0);
	VL_SIG(avalon_microphone_system__DOT__p_vol_2,31,0);
	VL_SIG(avalon_microphone_system__DOT__p_vol_3,31,0);
	VL_SIG(avalon_microphone_system__DOT__p_vol_4,31,0);
	VL_SIG(avalon_microphone_system__DOT__p_vol_5,31,0);
	VL_SIG(avalon_microphone_system__DOT__p_vol_6,31,0);
	VL_SIG(avalon_microphone_system__DOT__p_vol_7,31,0);
	VL_SIG(avalon_microphone_system__DOT__p_vol_8,31,0);
	VL_SIG(avalon_microphone_system__DOT__start_addr,31,0);
	VL_SIG(avalon_microphone_system__DOT__num_samps,31,0);
	VL_SIG(avalon_microphone_system__DOT__ready_data_1,31,0);
	VL_SIG(avalon_microphone_system__DOT__ready_data_2,31,0);
	VL_SIG(avalon_microphone_system__DOT__ready_data_3,31,0);
    };
    struct {
	VL_SIG(avalon_microphone_system__DOT__ready_data_4,31,0);
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__num_samples,31,0);
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__prev_num_samples,31,0);
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__counter,31,0);
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__prev_counter,31,0);
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_ADDR,31,0);
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk1__DOT__i,31,0);
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk2__DOT__i,31,0);
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk4__DOT__i,31,0);
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk5__DOT__i,31,0);
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__starting_address[5],31,0);
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[5],31,0);
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET,0,0);
    VL_SIG8(__Vclklast__TOP__AUD_BCLK,0,0);
    VL_SIG8(__Vclklast__TOP__CLK,0,0);
    VL_SIG8(__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__done,0,0);
    VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound2,31,0);
    VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3,31,0);
    VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5,31,0);
    VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound6,31,0);
    VL_SIG(__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__counter,31,0);
    VL_SIG(__Vm_traceActivity,31,0);
    VL_SIG(__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address[5],31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vavalon_microphone_system__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vavalon_microphone_system);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vavalon_microphone_system(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vavalon_microphone_system();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vavalon_microphone_system__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vavalon_microphone_system__Syms* symsp, bool first);
  private:
    static QData _change_request(Vavalon_microphone_system__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__7(Vavalon_microphone_system__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vavalon_microphone_system__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vavalon_microphone_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vavalon_microphone_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vavalon_microphone_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _settle__TOP__5(Vavalon_microphone_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
