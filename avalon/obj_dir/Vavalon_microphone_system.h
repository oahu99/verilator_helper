// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAVALON_MICROPHONE_SYSTEM_H_
#define _VAVALON_MICROPHONE_SYSTEM_H_  // guard

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
    // Begin mtask footprint all: 5 6 13 14 15 16 17 18 19 20 21 22 23 24 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 57 58 59 
    VL_IN8(CLK,0,0);
    // Begin mtask footprint all: 206 238 239 240 241 
    VL_IN8(AUD_ADCLRCK,0,0);
    // Begin mtask footprint all: 1 2 3 4 7 8 9 10 11 12 25 26 56 61 103 104 325 445 
    VL_IN8(AUD_BCLK,0,0);
    // Begin mtask footprint all: 115 172 228 
    VL_OUT(vol_7,31,0);
    // Begin mtask footprint all: 116 173 229 
    VL_OUT(vol_8,31,0);
    // Begin mtask footprint all: 113 167 223 
    VL_OUT(vol_5,31,0);
    // Begin mtask footprint all: 114 166 222 
    VL_OUT(vol_6,31,0);
    // Begin mtask footprint all: 111 170 226 
    VL_OUT(vol_2,31,0);
    // Begin mtask footprint all: 112 171 227 
    VL_OUT(vol_1,31,0);
    // Begin mtask footprint all: 109 168 224 
    VL_OUT(vol_4,31,0);
    // Begin mtask footprint all: 110 169 225 
    VL_OUT(vol_3,31,0);
    // Begin mtask footprint all: 62 136 
    VL_OUT8(load_coef,0,0);
    // Begin mtask footprint all: 63 137 
    VL_OUT8(change_filter,0,0);
    // Begin mtask footprint all: 246 
    VL_OUT8(AM_BURSTCOUNT,2,0);
    VL_OUT8(AM_BYTEENABLE,3,0);
    VL_IN8(AM_WAITREQUEST,0,0);
    // Begin mtask footprint all: 117 246 
    VL_OUT(AM_ADDR,31,0);
    // Begin mtask footprint all: 119 246 
    VL_OUT8(AM_WRITE,0,0);
    // Begin mtask footprint all: 108 165 208 
    VL_OUT16(coef_data,15,0);
    // Begin mtask footprint all: 245 
    VL_IN8(GPIO_DIN4,0,0);
    // Begin mtask footprint all: 259 
    VL_OUT(AVL_READDATA,31,0);
    VL_IN8(AVL_READ,0,0);
    // Begin mtask footprint all: 243 
    VL_IN8(GPIO_DIN2,0,0);
    // Begin mtask footprint all: 244 
    VL_IN8(GPIO_DIN3,0,0);
    // Begin mtask footprint all: 184 
    VL_OUT(codec_stream,31,0);
    // Begin mtask footprint all: 184 252 
    VL_IN(adc_data,31,0);
    // Begin mtask footprint all: 252 
    VL_OUT(AM_WRITEDATA,31,0);
    // Begin mtask footprint all: 180 
    VL_OUT8(sample_ready,0,0);
    // Begin mtask footprint all: 242 
    VL_IN8(GPIO_DIN1,0,0);
    // Begin mtask footprint all: 
    VL_IN(fir_left_data,31,0);
    VL_IN(fir_right_data,31,0);
    // Begin mtask footprint all: 107 123 124 194 195 196 197 198 199 200 201 202 203 204 205 
    VL_IN(AVL_WRITEDATA,31,0);
    // Begin mtask footprint all: 105 106 107 123 124 194 195 196 197 198 199 200 201 202 203 204 205 
    VL_IN8(AVL_WRITE,0,0);
    // Begin mtask footprint all: 105 106 107 123 124 194 195 196 197 198 199 200 201 202 203 204 205 259 
    VL_IN8(AVL_CS,0,0);
    VL_IN8(AVL_ADDR,2,0);
    // Begin mtask footprint all: 105 106 107 108 109 110 111 112 113 114 115 116 123 124 182 194 195 196 197 198 199 200 201 202 203 204 205 
    VL_IN8(RESET,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 122 128 129 130 132 254 259 
        CData/*0:0*/ avalon_microphone_system__DOT__saw_fall;
        // Begin mtask footprint all: 122 128 129 130 132 253 259 
        CData/*0:0*/ avalon_microphone_system__DOT__saw_rise;
        // Begin mtask footprint all: 132 175 230 259 
        SData/*15:0*/ avalon_microphone_system__DOT__mic_r;
        // Begin mtask footprint all: 132 176 231 259 
        SData/*15:0*/ avalon_microphone_system__DOT__mic_l;
        // Begin mtask footprint all: 60 
        IData/*31:0*/ avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk2__DOT__i;
        // Begin mtask footprint all: 88 128 145 184 252 
        IData/*31:0*/ avalon_microphone_system__DOT__ready_data_4;
        // Begin mtask footprint all: 89 132 142 184 252 
        IData/*31:0*/ avalon_microphone_system__DOT__ready_data_1;
        // Begin mtask footprint all: 86 130 143 184 252 
        IData/*31:0*/ avalon_microphone_system__DOT__ready_data_3;
        // Begin mtask footprint all: 87 129 144 184 252 
        IData/*31:0*/ avalon_microphone_system__DOT__ready_data_2;
        // Begin mtask footprint all: 186 187 234 250 
        SData/*15:0*/ avalon_microphone_system__DOT__m2__DOT__shift;
        // Begin mtask footprint all: 190 191 232 248 
        SData/*15:0*/ avalon_microphone_system__DOT__m4__DOT__shift;
        // Begin mtask footprint all: 247 253 254 
        CData/*0:0*/ avalon_microphone_system__DOT__detect__DOT__found_edge;
        // Begin mtask footprint all: 92 177 247 254 
        CData/*0:0*/ avalon_microphone_system__DOT__detect__DOT__last_test_clk;
        // Begin mtask footprint all: 134 179 237 247 253 
        CData/*0:0*/ avalon_microphone_system__DOT__detect__DOT__cur_test_clk;
        // Begin mtask footprint all: 192 193 235 251 
        SData/*15:0*/ avalon_microphone_system__DOT__m1__DOT__shift;
        // Begin mtask footprint all: 130 159 220 
        SData/*15:0*/ avalon_microphone_system__DOT__mic_r3;
        // Begin mtask footprint all: 130 160 220 
        SData/*15:0*/ avalon_microphone_system__DOT__mic_l3;
        // Begin mtask footprint all: 133 164 209 
        CData/*0:0*/ avalon_microphone_system__DOT__half_way_ack;
        // Begin mtask footprint all: 128 157 219 
        SData/*15:0*/ avalon_microphone_system__DOT__mic_r4;
        // Begin mtask footprint all: 128 158 219 
        SData/*15:0*/ avalon_microphone_system__DOT__mic_l4;
        // Begin mtask footprint all: 129 162 221 
        SData/*15:0*/ avalon_microphone_system__DOT__mic_l2;
        // Begin mtask footprint all: 129 161 221 
        SData/*15:0*/ avalon_microphone_system__DOT__mic_r2;
        // Begin mtask footprint all: 84 146 185 
        CData/*0:0*/ avalon_microphone_system__DOT__dma_yo__DOT__prev_finish_signal;
        // Begin mtask footprint all: 127 185 259 
        CData/*0:0*/ avalon_microphone_system__DOT__dma_yo__DOT__finish_signal;
        // Begin mtask footprint all: 79 140 259 
        CData/*0:0*/ avalon_microphone_system__DOT__end_latch;
        // Begin mtask footprint all: 91 141 259 
        CData/*0:0*/ avalon_microphone_system__DOT__half_way_latch;
        // Begin mtask footprint all: 74 122 138 
        CData/*2:0*/ avalon_microphone_system__DOT__counter;
        // Begin mtask footprint all: 126 163 207 
        CData/*0:0*/ avalon_microphone_system__DOT__end_ack;
        // Begin mtask footprint all: 72 201 217 
        IData/*31:0*/ avalon_microphone_system__DOT__p_vol_3;
        // Begin mtask footprint all: 73 202 218 
        IData/*31:0*/ avalon_microphone_system__DOT__p_vol_4;
        // Begin mtask footprint all: 70 199 215 
        IData/*31:0*/ avalon_microphone_system__DOT__p_vol_1;
        // Begin mtask footprint all: 71 200 216 
        IData/*31:0*/ avalon_microphone_system__DOT__p_vol_2;
        // Begin mtask footprint all: 68 204 213 
        IData/*31:0*/ avalon_microphone_system__DOT__p_vol_6;
        // Begin mtask footprint all: 69 203 214 
        IData/*31:0*/ avalon_microphone_system__DOT__p_vol_5;
        // Begin mtask footprint all: 66 197 211 
        IData/*31:0*/ avalon_microphone_system__DOT__p_vol_8;
        // Begin mtask footprint all: 67 198 212 
        IData/*31:0*/ avalon_microphone_system__DOT__p_vol_7;
        // Begin mtask footprint all: 64 139 182 
        CData/*0:0*/ avalon_microphone_system__DOT__restart_sig;
        // Begin mtask footprint all: 65 196 210 
        SData/*15:0*/ avalon_microphone_system__DOT__p_coef_data;
        // Begin mtask footprint all: 61 101 244 
        CData/*4:0*/ avalon_microphone_system__DOT__m3__DOT__counter;
        // Begin mtask footprint all: 101 188 189 244 257 
        CData/*0:0*/ avalon_microphone_system__DOT__m3__DOT__wsp;
        // Begin mtask footprint all: 188 189 233 249 
        SData/*15:0*/ avalon_microphone_system__DOT__m3__DOT__shift;
        // Begin mtask footprint all: 61 99 242 
        CData/*4:0*/ avalon_microphone_system__DOT__m1__DOT__counter;
        // Begin mtask footprint all: 99 192 193 242 255 
        CData/*0:0*/ avalon_microphone_system__DOT__m1__DOT__wsp;
        // Begin mtask footprint all: 103 192 193 238 255 
        CData/*0:0*/ avalon_microphone_system__DOT__m1__DOT__wsd;
        // Begin mtask footprint all: 103 255 
        CData/*0:0*/ avalon_microphone_system__DOT__m1__DOT__wsdd;
        // Begin mtask footprint all: 104 257 
        CData/*0:0*/ avalon_microphone_system__DOT__m3__DOT__wsdd;
        // Begin mtask footprint all: 104 188 189 240 257 
        CData/*0:0*/ avalon_microphone_system__DOT__m3__DOT__wsd;
        // Begin mtask footprint all: 104 258 
        CData/*0:0*/ avalon_microphone_system__DOT__m4__DOT__wsdd;
        // Begin mtask footprint all: 104 190 191 241 258 
        CData/*0:0*/ avalon_microphone_system__DOT__m4__DOT__wsd;
        // Begin mtask footprint all: 102 190 191 245 258 
        CData/*0:0*/ avalon_microphone_system__DOT__m4__DOT__wsp;
        // Begin mtask footprint all: 61 102 245 
        CData/*4:0*/ avalon_microphone_system__DOT__m4__DOT__counter;
        // Begin mtask footprint all: 103 256 
        CData/*0:0*/ avalon_microphone_system__DOT__m2__DOT__wsdd;
        // Begin mtask footprint all: 103 186 187 239 256 
        CData/*0:0*/ avalon_microphone_system__DOT__m2__DOT__wsd;
        // Begin mtask footprint all: 100 186 187 243 256 
        CData/*0:0*/ avalon_microphone_system__DOT__m2__DOT__wsp;
        // Begin mtask footprint all: 61 100 243 
        CData/*4:0*/ avalon_microphone_system__DOT__m2__DOT__counter;
        // Begin mtask footprint all: 183 
        IData/*31:0*/ avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk4__DOT__i;
        // Begin mtask footprint all: 83 156 183 184 246 
        CData/*0:0*/ avalon_microphone_system__DOT__start;
        // Begin mtask footprint all: 82 154 180 246 
        CData/*0:0*/ avalon_microphone_system__DOT__ready_read_now;
        // Begin mtask footprint all: 118 246 
        CData/*0:0*/ avalon_microphone_system__DOT__dma_yo__DOT__done;
        // Begin mtask footprint all: 121 126 133 246 
        IData/*31:0*/ avalon_microphone_system__DOT__dma_yo__DOT__num_samples;
        // Begin mtask footprint all: 133 178 236 246 
        IData/*31:0*/ avalon_microphone_system__DOT__num_samps;
        // Begin mtask footprint all: 90 153 246 
        IData/*31:0*/ avalon_microphone_system__DOT__dma_yo__DOT__prev_counter;
        // Begin mtask footprint all: 120 246 252 
        CData/*2:0*/ avalon_microphone_system__DOT__dma_yo__DOT__mic_count;
    };
    struct {
        // Begin mtask footprint all: 80 151 246 
        IData/*31:0*/ avalon_microphone_system__DOT__dma_yo__DOT__prev_num_samples;
        // Begin mtask footprint all: 81 152 246 
        IData/*31:0*/ avalon_microphone_system__DOT__start_addr;
        // Begin mtask footprint all: 77 149 246 
        CData/*0:0*/ avalon_microphone_system__DOT__dma_yo__DOT__prev_done;
        // Begin mtask footprint all: 78 150 246 
        IData/*31:0*/ avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_ADDR;
        // Begin mtask footprint all: 75 147 246 
        CData/*2:0*/ avalon_microphone_system__DOT__dma_yo__DOT__prev_mic_count;
        // Begin mtask footprint all: 76 148 246 
        CData/*0:0*/ avalon_microphone_system__DOT__dma_yo__DOT__prev_AM_WRITE;
        // Begin mtask footprint all: 135 246 
        IData/*31:0*/ avalon_microphone_system__DOT__dma_yo__DOT__starting_address[5];
        // Begin mtask footprint all: 155 246 
        IData/*31:0*/ avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address[5];
        // Begin mtask footprint all: 125 246 
        CData/*2:0*/ avalon_microphone_system__DOT__dma_yo__DOT__next_state;
        // Begin mtask footprint all: 131 246 
        IData/*31:0*/ avalon_microphone_system__DOT__dma_yo__DOT__counter;
        // Begin mtask footprint all: 181 
        IData/*31:0*/ avalon_microphone_system__DOT__dma_yo__DOT__unnamedblk5__DOT__i;
        // Begin mtask footprint all: 85 174 181 183 185 246 
        CData/*2:0*/ avalon_microphone_system__DOT__dma_yo__DOT__state;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint all: 89 132 142 
    IData/*31:0*/ __Vdly__avalon_microphone_system__DOT__ready_data_1;
    // Begin mtask footprint all: 
    IData/*31:0*/ __Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__starting_address[5];
    CData/*0:0*/ __Vm_traceActivity[70];
    IData/*31:0*/ __Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__counter;
    CData/*0:0*/ __Vclklast__TOP__AUD_BCLK;
    CData/*0:0*/ __Vclklast__TOP__CLK;
    CData/*0:0*/ __Vchglast__TOP__avalon_microphone_system__DOT__dma_yo__DOT__done;
    // Begin mtask footprint all: 87 129 144 
    IData/*31:0*/ __Vdly__avalon_microphone_system__DOT__ready_data_2;
    // Begin mtask footprint all: 88 128 145 
    IData/*31:0*/ __Vdly__avalon_microphone_system__DOT__ready_data_4;
    // Begin mtask footprint all: 74 122 138 
    CData/*2:0*/ __Vdly__avalon_microphone_system__DOT__counter;
    // Begin mtask footprint all: 86 130 143 
    IData/*31:0*/ __Vdly__avalon_microphone_system__DOT__ready_data_3;
    // Begin mtask footprint all: 72 110 217 
    IData/*31:0*/ __Vdly__avalon_microphone_system__DOT__p_vol_3;
    // Begin mtask footprint all: 73 109 218 
    IData/*31:0*/ __Vdly__avalon_microphone_system__DOT__p_vol_4;
    // Begin mtask footprint all: 70 112 215 
    IData/*31:0*/ __Vdly__avalon_microphone_system__DOT__p_vol_1;
    // Begin mtask footprint all: 71 111 216 
    IData/*31:0*/ __Vdly__avalon_microphone_system__DOT__p_vol_2;
    // Begin mtask footprint all: 68 114 213 
    IData/*31:0*/ __Vdly__avalon_microphone_system__DOT__p_vol_6;
    // Begin mtask footprint all: 69 113 214 
    IData/*31:0*/ __Vdly__avalon_microphone_system__DOT__p_vol_5;
    // Begin mtask footprint all: 66 116 211 
    IData/*31:0*/ __Vdly__avalon_microphone_system__DOT__p_vol_8;
    // Begin mtask footprint all: 67 115 212 
    IData/*31:0*/ __Vdly__avalon_microphone_system__DOT__p_vol_7;
    // Begin mtask footprint all: 61 101 
    CData/*4:0*/ __Vdly__avalon_microphone_system__DOT__m3__DOT__counter;
    // Begin mtask footprint all: 61 102 
    CData/*4:0*/ __Vdly__avalon_microphone_system__DOT__m4__DOT__counter;
    // Begin mtask footprint all: 61 99 
    CData/*4:0*/ __Vdly__avalon_microphone_system__DOT__m1__DOT__counter;
    // Begin mtask footprint all: 61 100 
    CData/*4:0*/ __Vdly__avalon_microphone_system__DOT__m2__DOT__counter;
    // Begin mtask footprint all: 246 
    IData/*31:0*/ avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound3;
    IData/*31:0*/ avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound5;
    IData/*31:0*/ avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound6;
    // Begin mtask footprint all: 65 108 210 
    SData/*15:0*/ __Vdly__avalon_microphone_system__DOT__p_coef_data;
    // Begin mtask footprint all: 135 
    IData/*31:0*/ avalon_microphone_system__DOT__dma_yo__DOT____Vlvbound2;
    // Begin mtask footprint all: 135 155 
    IData/*31:0*/ __Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v5;
    IData/*31:0*/ __Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v6;
    IData/*31:0*/ __Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v7;
    IData/*31:0*/ __Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v8;
    IData/*31:0*/ __Vdlyvval__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v9;
    // Begin mtask footprint all: 93 135 155 
    CData/*0:0*/ __Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v0;
    // Begin mtask footprint all: 94 135 155 
    CData/*0:0*/ __Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v5;
    // Begin mtask footprint all: 95 135 155 
    CData/*0:0*/ __Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v6;
    // Begin mtask footprint all: 96 135 155 
    CData/*0:0*/ __Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v7;
    // Begin mtask footprint all: 97 135 155 
    CData/*0:0*/ __Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v8;
    // Begin mtask footprint all: 98 135 155 
    CData/*0:0*/ __Vdlyvset__avalon_microphone_system__DOT__dma_yo__DOT__prev_starting_address__v9;
    // Begin mtask footprint all: 60 117 118 119 120 121 125 126 127 131 133 135 182 
    CData/*0:0*/ avalon_microphone_system__DOT____Vcellinp__dma_yo__RESET;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vavalon_microphone_system__Syms* __VlSymsp;  // Symbol table
  private:
    VlMTaskVertex __Vm_mt_100;
    VlMTaskVertex __Vm_mt_101;
    VlMTaskVertex __Vm_mt_102;
    VlMTaskVertex __Vm_mt_135;
    VlMTaskVertex __Vm_mt_138;
    VlMTaskVertex __Vm_mt_142;
    VlMTaskVertex __Vm_mt_143;
    VlMTaskVertex __Vm_mt_180;
    VlMTaskVertex __Vm_mt_182;
    VlMTaskVertex __Vm_mt_183;
    VlMTaskVertex __Vm_mt_184;
    VlMTaskVertex __Vm_mt_185;
    VlMTaskVertex __Vm_mt_186;
    VlMTaskVertex __Vm_mt_188;
    VlMTaskVertex __Vm_mt_190;
    VlMTaskVertex __Vm_mt_192;
    VlMTaskVertex __Vm_mt_194;
    VlMTaskVertex __Vm_mt_238;
    VlMTaskVertex __Vm_mt_239;
    VlMTaskVertex __Vm_mt_240;
    VlMTaskVertex __Vm_mt_241;
    VlMTaskVertex __Vm_mt_242;
    VlMTaskVertex __Vm_mt_243;
    VlMTaskVertex __Vm_mt_244;
    VlMTaskVertex __Vm_mt_245;
    VlMTaskVertex __Vm_mt_246;
    VlMTaskVertex __Vm_mt_252;
    VlMTaskVertex __Vm_mt_253;
    VlMTaskVertex __Vm_mt_254;
    VlMTaskVertex __Vm_mt_255;
    VlMTaskVertex __Vm_mt_256;
    VlMTaskVertex __Vm_mt_257;
    VlMTaskVertex __Vm_mt_258;
    VlMTaskVertex __Vm_mt_259;
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
    Vavalon_microphone_system(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vavalon_microphone_system();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
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
    static void _combo__TOP__184(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _combo__TOP__186(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _combo__TOP__250(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _combo__TOP__256(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _combo__TOP__263(Vavalon_microphone_system__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vavalon_microphone_system__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vavalon_microphone_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vavalon_microphone_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vavalon_microphone_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__100(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__101(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__102(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__103(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__104(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__105(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__106(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__107(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__108(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__109(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__110(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__111(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__112(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__113(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__114(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__115(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__116(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__117(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__118(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__119(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__120(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__121(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__122(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__123(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__124(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__125(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__126(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__127(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__128(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__129(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__130(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__131(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__132(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__133(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__134(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__135(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__136(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__137(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__138(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__144(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__145(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__146(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__147(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__157(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__182(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__183(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__185(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__187(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__188(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__189(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__190(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__191(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__192(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__193(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__194(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__195(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__196(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__197(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__198(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__199(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__200(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__201(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__202(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__203(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__204(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__205(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__206(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__207(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__208(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__217(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__218(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__219(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__220(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__221(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__222(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__223(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__224(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__225(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__242(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__243(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__244(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__245(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__246(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__247(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__248(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__249(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__251(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__257(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__258(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__259(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__260(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__261(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__262(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__62(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__63(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__67(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__68(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__69(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__70(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__71(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__72(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__73(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__74(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__75(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__76(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__88(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__89(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__90(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__91(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__95(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__96(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__97(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__98(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__99(Vavalon_microphone_system__Syms* __restrict vlSymsp);
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
    static void traceChgThis__42(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__43(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__44(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__45(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__46(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__47(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__48(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__49(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__50(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__51(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__52(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__53(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__54(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__55(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__56(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__57(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__58(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__59(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__60(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__61(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__62(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__63(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__64(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__65(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__66(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__67(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__68(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__69(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__70(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__71(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vavalon_microphone_system__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
  private:
    static void __Vmtask__65(bool even_cycle, void* symtab);
    static void __Vmtask__66(bool even_cycle, void* symtab);
    static void __Vmtask__67(bool even_cycle, void* symtab);
    static void __Vmtask__68(bool even_cycle, void* symtab);
    static void __Vmtask__69(bool even_cycle, void* symtab);
    static void __Vmtask__70(bool even_cycle, void* symtab);
    static void __Vmtask__71(bool even_cycle, void* symtab);
    static void __Vmtask__72(bool even_cycle, void* symtab);
    static void __Vmtask__73(bool even_cycle, void* symtab);
    static void __Vmtask__74(bool even_cycle, void* symtab);
    static void __Vmtask__86(bool even_cycle, void* symtab);
    static void __Vmtask__87(bool even_cycle, void* symtab);
    static void __Vmtask__88(bool even_cycle, void* symtab);
    static void __Vmtask__89(bool even_cycle, void* symtab);
    static void __Vmtask__93(bool even_cycle, void* symtab);
    static void __Vmtask__94(bool even_cycle, void* symtab);
    static void __Vmtask__95(bool even_cycle, void* symtab);
    static void __Vmtask__96(bool even_cycle, void* symtab);
    static void __Vmtask__97(bool even_cycle, void* symtab);
    static void __Vmtask__98(bool even_cycle, void* symtab);
    static void __Vmtask__117(bool even_cycle, void* symtab);
    static void __Vmtask__118(bool even_cycle, void* symtab);
    static void __Vmtask__119(bool even_cycle, void* symtab);
    static void __Vmtask__120(bool even_cycle, void* symtab);
    static void __Vmtask__121(bool even_cycle, void* symtab);
    static void __Vmtask__123(bool even_cycle, void* symtab);
    static void __Vmtask__124(bool even_cycle, void* symtab);
    static void __Vmtask__125(bool even_cycle, void* symtab);
    static void __Vmtask__126(bool even_cycle, void* symtab);
    static void __Vmtask__131(bool even_cycle, void* symtab);
    static void __Vmtask__133(bool even_cycle, void* symtab);
    static void __Vmtask__134(bool even_cycle, void* symtab);
    static void __Vmtask__final(bool even_cycle, void* symtab);
  public:
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  // guard
