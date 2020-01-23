// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vavalon_microphone_system_H_
#define _Vavalon_microphone_system_H_

#include "verilated.h"
#include "verilated_threads.h"

class Vavalon_microphone_system__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vavalon_microphone_system) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 9 15 18 31 33 34 35 
    VL_IN8(AUD_BCLK,0,0);
    // Begin mtask footprint  all: 31 33 
    VL_IN8(AUD_ADCLRCK,0,0);
    // Begin mtask footprint  all: 33 
    VL_OUT(codec_stream,31,0);
    // Begin mtask footprint  all: 33 37 
    VL_IN(adc_data,31,0);
    // Begin mtask footprint  all: 11 
    VL_OUT8(change_filter,0,0);
    // Begin mtask footprint  all: 22 
    VL_OUT(vol_7,31,0);
    // Begin mtask footprint  all: 10 
    VL_OUT8(load_coef,0,0);
    // Begin mtask footprint  all: 
    VL_IN(fir_left_data,31,0);
    VL_IN(fir_right_data,31,0);
    // Begin mtask footprint  all: 36 
    VL_OUT8(AM_BURSTCOUNT,2,0);
    VL_OUT8(AM_BYTEENABLE,3,0);
    VL_IN8(AM_WAITREQUEST,0,0);
    // Begin mtask footprint  all: 12 36 
    VL_OUT(AM_ADDR,31,0);
    VL_OUT8(AM_WRITE,0,0);
    // Begin mtask footprint  all: 39 
    VL_OUT(AVL_READDATA,31,0);
    VL_IN8(AVL_READ,0,0);
    VL_OUT8(sample_ready,0,0);
    // Begin mtask footprint  all: 35 
    VL_IN8(GPIO_DIN3,0,0);
    VL_IN8(GPIO_DIN4,0,0);
    // Begin mtask footprint  all: 37 
    VL_OUT(AM_WRITEDATA,31,0);
    // Begin mtask footprint  all: 29 
    VL_OUT(vol_8,31,0);
    // Begin mtask footprint  all: 34 
    VL_IN8(GPIO_DIN1,0,0);
    VL_IN8(GPIO_DIN2,0,0);
    // Begin mtask footprint  all: 27 
    VL_OUT(vol_2,31,0);
    // Begin mtask footprint  all: 28 
    VL_OUT(vol_1,31,0);
    // Begin mtask footprint  all: 25 
    VL_OUT(vol_4,31,0);
    // Begin mtask footprint  all: 26 
    VL_OUT(vol_3,31,0);
    // Begin mtask footprint  all: 23 
    VL_OUT(vol_6,31,0);
    // Begin mtask footprint  all: 24 
    VL_OUT(vol_5,31,0);
    // Begin mtask footprint  all: 21 
    VL_OUT16(coef_data,15,0);
    // Begin mtask footprint  all: 13 14 19 20 21 22 23 24 25 26 27 28 29 30 39 
    VL_IN(AVL_WRITEDATA,31,0);
    // Begin mtask footprint  all: 10 11 13 14 19 20 21 22 23 24 25 26 27 28 29 30 39 
    VL_IN8(RESET,0,0);
    VL_IN8(AVL_WRITE,0,0);
    VL_IN8(AVL_CS,0,0);
    VL_IN8(AVL_ADDR,2,0);
    // Begin mtask footprint  all: 1 2 10 11 12 13 14 15 18 19 20 21 22 23 24 25 26 27 28 29 30 31 39 
    VL_IN8(CLK,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
	// Begin mtask footprint  all: 20 30 
	VL_SIG8(avalon_microphone_system__DOT__half_way_ack,0,0);
	// Begin mtask footprint  all: 30 39 
	VL_SIG8(avalon_microphone_system__DOT__half_way_latch,0,0);
	// Begin mtask footprint  all: 39 
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk1__DOT__i,31,0);
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk2__DOT__i,31,0);
	VL_SIG8(avalon_microphone_system__DOT__restart_sig,0,0);
	// Begin mtask footprint  all: 15 19 39 
	VL_SIG8(avalon_microphone_system__DOT__end_ack,0,0);
	// Begin mtask footprint  all: 13 39 
	VL_SIG8(avalon_microphone_system__DOT__counter,2,0);
	// Begin mtask footprint  all: 13 36 39 
	VL_SIG8(avalon_microphone_system__DOT__ready_read_now,0,0);
	// Begin mtask footprint  all: 13 32 36 
	VL_SIG(avalon_microphone_system__DOT__start_addr,31,0);
	// Begin mtask footprint  all: 30 32 36 
	VL_SIG(avalon_microphone_system__DOT__num_samps,31,0);
	// Begin mtask footprint  all: 15 30 36 
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__num_samples,31,0);
	// Begin mtask footprint  all: 15 36 
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__prev_num_samples,31,0);
	// Begin mtask footprint  all: 12 36 
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_ADDR,31,0);
	VL_SIG8(avalon_microphone_system__DOT__dma_yo__DOT__done,0,0);
	VL_SIG8(avalon_microphone_system__DOT__dma_yo__DOT__prev_mic_count,2,0);
	VL_SIG8(avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_WRITE,0,0);
	VL_SIG8(avalon_microphone_system__DOT__dma_yo__DOT__prev_done,0,0);
	// Begin mtask footprint  all: 16 36 
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__starting_address[5],31,0);
	// Begin mtask footprint  all: 17 36 
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[5],31,0);
	// Begin mtask footprint  all: 12 36 37 
	VL_SIG8(avalon_microphone_system__DOT__dma_yo__DOT__mic_count,2,0);
	// Begin mtask footprint  all: 14 36 
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__counter,31,0);
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__prev_counter,31,0);
	VL_SIG8(avalon_microphone_system__DOT__dma_yo__DOT__next_state,2,0);
	// Begin mtask footprint  all: 14 33 36 
	VL_SIG8(avalon_microphone_system__DOT__start,0,0);
	// Begin mtask footprint  all: 14 31 33 36 
	VL_SIG8(avalon_microphone_system__DOT__dma_yo__DOT__state,2,0);
	// Begin mtask footprint  all: 33 
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk4__DOT__i,31,0);
	// Begin mtask footprint  all: 18 33 
	VL_SIG16(avalon_microphone_system__DOT__mic_l2,15,0);
	VL_SIG16(avalon_microphone_system__DOT__mic_r2,15,0);
	VL_SIG16(avalon_microphone_system__DOT__mic_l4,15,0);
	VL_SIG16(avalon_microphone_system__DOT__mic_r4,15,0);
	// Begin mtask footprint  all: 18 33 37 
	VL_SIG(avalon_microphone_system__DOT__ready_data_2,31,0);
	VL_SIG(avalon_microphone_system__DOT__ready_data_3,31,0);
	VL_SIG(avalon_microphone_system__DOT__ready_data_4,31,0);
	// Begin mtask footprint  all: 15 18 33 37 
	VL_SIG(avalon_microphone_system__DOT__ready_data_1,31,0);
	// Begin mtask footprint  all: 18 31 33 38 
	VL_SIG8(avalon_microphone_system__DOT__m1__DOT__wsd,0,0);
	VL_SIG8(avalon_microphone_system__DOT__m2__DOT__wsd,0,0);
	VL_SIG8(avalon_microphone_system__DOT__m3__DOT__wsd,0,0);
	VL_SIG8(avalon_microphone_system__DOT__m4__DOT__wsd,0,0);
	// Begin mtask footprint  all: 18 31 34 38 
	VL_SIG16(avalon_microphone_system__DOT__m1__DOT__shift,15,0);
	// Begin mtask footprint  all: 9 18 31 34 38 
	VL_SIG8(avalon_microphone_system__DOT__m1__DOT__wsp,0,0);
	// Begin mtask footprint  all: 9 18 34 38 
	VL_SIG8(avalon_microphone_system__DOT__m2__DOT__wsp,0,0);
	// Begin mtask footprint  all: 18 34 38 
	VL_SIG16(avalon_microphone_system__DOT__m2__DOT__shift,15,0);
	// Begin mtask footprint  all: 9 34 
	VL_SIG8(avalon_microphone_system__DOT__m1__DOT__counter,4,0);
	VL_SIG8(avalon_microphone_system__DOT__m2__DOT__counter,4,0);
	// Begin mtask footprint  all: 9 18 35 38 
	VL_SIG8(avalon_microphone_system__DOT__m3__DOT__wsp,0,0);
	VL_SIG8(avalon_microphone_system__DOT__m4__DOT__wsp,0,0);
	// Begin mtask footprint  all: 9 35 
	VL_SIG8(avalon_microphone_system__DOT__m3__DOT__counter,4,0);
	VL_SIG8(avalon_microphone_system__DOT__m4__DOT__counter,4,0);
	// Begin mtask footprint  all: 18 35 38 
	VL_SIG16(avalon_microphone_system__DOT__m3__DOT__shift,15,0);
	VL_SIG16(avalon_microphone_system__DOT__m4__DOT__shift,15,0);
	// Begin mtask footprint  all: 18 35 
	VL_SIG16(avalon_microphone_system__DOT__mic_l3,15,0);
	VL_SIG16(avalon_microphone_system__DOT__mic_r3,15,0);
	// Begin mtask footprint  all: 29 
	VL_SIG(avalon_microphone_system__DOT__p_vol_8,31,0);
	// Begin mtask footprint  all: 21 
	VL_SIG16(avalon_microphone_system__DOT__p_coef_data,15,0);
	// Begin mtask footprint  all: 27 
	VL_SIG(avalon_microphone_system__DOT__p_vol_2,31,0);
	// Begin mtask footprint  all: 28 
	VL_SIG(avalon_microphone_system__DOT__p_vol_1,31,0);
	// Begin mtask footprint  all: 25 
	VL_SIG(avalon_microphone_system__DOT__p_vol_4,31,0);
	// Begin mtask footprint  all: 26 
	VL_SIG(avalon_microphone_system__DOT__p_vol_3,31,0);
	// Begin mtask footprint  all: 23 
	VL_SIG(avalon_microphone_system__DOT__p_vol_6,31,0);
	// Begin mtask footprint  all: 24 
	VL_SIG(avalon_microphone_system__DOT__p_vol_5,31,0);
	// Begin mtask footprint  all: 22 
	VL_SIG(avalon_microphone_system__DOT__p_vol_7,31,0);
	// Begin mtask footprint  all: 31 
	VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk5__DOT__i,31,0);
	VL_SIG8(avalon_microphone_system__DOT__dma_yo__DOT__prev_finish_signal,0,0);
	// Begin mtask footprint  all: 31 38 
	VL_SIG8(avalon_microphone_system__DOT__m1__DOT__wsdd,0,0);
    };
    struct {
	VL_SIG8(avalon_microphone_system__DOT__m2__DOT__wsdd,0,0);
	VL_SIG8(avalon_microphone_system__DOT__m3__DOT__wsdd,0,0);
	VL_SIG8(avalon_microphone_system__DOT__m4__DOT__wsdd,0,0);
	// Begin mtask footprint  all: 31 39 
	VL_SIG8(avalon_microphone_system__DOT__dma_yo__DOT__finish_signal,0,0);
	VL_SIG8(avalon_microphone_system__DOT__detect__DOT__found_edge,0,0);
	VL_SIG8(avalon_microphone_system__DOT__detect__DOT__cur_test_clk,0,0);
	VL_SIG8(avalon_microphone_system__DOT__detect__DOT__last_test_clk,0,0);
	// Begin mtask footprint  all: 15 31 39 
	VL_SIG16(avalon_microphone_system__DOT__mic_l,15,0);
	// Begin mtask footprint  all: 15 39 
	VL_SIG8(avalon_microphone_system__DOT__end_latch,0,0);
	// Begin mtask footprint  all: 15 18 39 
	VL_SIG16(avalon_microphone_system__DOT__mic_r,15,0);
	// Begin mtask footprint  all: 13 15 18 39 
	VL_SIG8(avalon_microphone_system__DOT__saw_rise,0,0);
	VL_SIG8(avalon_microphone_system__DOT__saw_fall,0,0);
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 12 14 15 16 30 31 39 
    VL_SIG8(avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET,0,0);
    // Begin mtask footprint  all: 15 18 
    VL_SIG(__Vdly__avalon_microphone_system__DOT__ready_data_1,31,0);
    // Begin mtask footprint  all: 18 
    VL_SIG(__Vdly__avalon_microphone_system__DOT__ready_data_2,31,0);
    VL_SIG(__Vdly__avalon_microphone_system__DOT__ready_data_3,31,0);
    VL_SIG(__Vdly__avalon_microphone_system__DOT__ready_data_4,31,0);
    // Begin mtask footprint  all: 
    VL_SIG(__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address[5],31,0);
    VL_SIG8(__Vm_traceActivity[35],0,0);
    VL_SIG(__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__counter,31,0);
    VL_SIG8(__Vclklast__TOP__CLK,0,0);
    VL_SIG8(__Vclklast__TOP__AUD_BCLK,0,0);
    VL_SIG8(__Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__done,0,0);
    // Begin mtask footprint  all: 36 
    VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3,31,0);
    VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5,31,0);
    VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound6,31,0);
    // Begin mtask footprint  all: 13 39 
    VL_SIG8(__Vdly__avalon_microphone_system__DOT__counter,2,0);
    // Begin mtask footprint  all: 16 
    VL_SIG(avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound2,31,0);
    // Begin mtask footprint  all: 16 17 
    VL_SIG(__Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v5,31,0);
    VL_SIG(__Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v6,31,0);
    VL_SIG(__Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v7,31,0);
    VL_SIG(__Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v8,31,0);
    VL_SIG(__Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v9,31,0);
    // Begin mtask footprint  all: 3 16 17 
    VL_SIG8(__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v0,0,0);
    // Begin mtask footprint  all: 4 16 17 
    VL_SIG8(__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v5,0,0);
    // Begin mtask footprint  all: 5 16 17 
    VL_SIG8(__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v6,0,0);
    // Begin mtask footprint  all: 6 16 17 
    VL_SIG8(__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v7,0,0);
    // Begin mtask footprint  all: 7 16 17 
    VL_SIG8(__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v8,0,0);
    // Begin mtask footprint  all: 8 16 17 
    VL_SIG8(__Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v9,0,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vavalon_microphone_system__Syms* __VlSymsp;  // Symbol table
  private:
    VlMTaskVertex __Vm_mt_19;
    VlMTaskVertex __Vm_mt_31;
    VlMTaskVertex __Vm_mt_33;
    VlMTaskVertex __Vm_mt_34;
    VlMTaskVertex __Vm_mt_38;
    VlMTaskVertex __Vm_mt_16;
    VlMTaskVertex __Vm_mt_20;
    VlMTaskVertex __Vm_mt_39;
    VlMTaskVertex __Vm_mt_36;
    VlMTaskVertex __Vm_mt_37;
    VlMTaskVertex __Vm_mt_final;
    VlThreadPool* __Vm_threadPoolp;
    bool __Vm_even_cycle;
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
  public:
    
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
    static void _combo__TOP__47(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _combo__TOP__56(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _combo__TOP__60(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _combo__TOP__62(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _combo__TOP__63(Vavalon_microphone_system__Syms* __restrict vlSymsp);
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
    static void _sequent__TOP__10(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__15(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__16(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__18(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__20(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__22(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__23(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__24(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__25(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__26(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__27(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__28(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__29(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__30(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__31(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__32(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__33(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__34(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__37(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__38(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__41(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__42(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__44(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__48(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__49(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__50(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__51(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__52(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__53(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__54(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__55(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__57(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__59(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__61(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vavalon_microphone_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__13(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__14(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__15(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__16(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__17(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__18(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__19(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__20(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__21(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__22(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__23(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__24(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__25(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__26(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__27(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__28(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__29(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__30(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__31(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__32(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__33(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__34(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__35(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__36(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__37(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__38(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__39(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__40(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__41(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
  private:
    static void __Vmtask__3(bool even_cycle, void* symtab);
    static void __Vmtask__4(bool even_cycle, void* symtab);
    static void __Vmtask__14(bool even_cycle, void* symtab);
    static void __Vmtask__15(bool even_cycle, void* symtab);
    static void __Vmtask__final(bool even_cycle, void* symtab);
  public:
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
