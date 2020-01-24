// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vavalon_microphone_system.h for the primary calling header

#ifndef _VAVALON_MICROPHONE_SYSTEM_AVALON_MICROPHONE_SYSTEM_H_
#define _VAVALON_MICROPHONE_SYSTEM_AVALON_MICROPHONE_SYSTEM_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "Vavalon_microphone_system__Dpi.h"

class Vavalon_microphone_system__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vavalon_microphone_system_avalon_microphone_system) {
  public:
    
    // PORTS
    // Begin mtask footprint all: 116 172 231 242 
    VL_OUT(vol_8,31,0);
    // Begin mtask footprint all: 113 166 225 245 
    VL_OUT(vol_5,31,0);
    // Begin mtask footprint all: 114 165 224 244 
    VL_OUT(vol_6,31,0);
    // Begin mtask footprint all: 111 169 228 248 
    VL_OUT(vol_2,31,0);
    // Begin mtask footprint all: 112 170 229 249 
    VL_OUT(vol_1,31,0);
    // Begin mtask footprint all: 109 167 226 246 
    VL_OUT(vol_4,31,0);
    // Begin mtask footprint all: 110 168 227 247 
    VL_OUT(vol_3,31,0);
    // Begin mtask footprint all: 119 258 263 
    VL_OUT(AM_ADDR,31,0);
    // Begin mtask footprint all: 121 258 261 
    VL_OUT8(AM_WRITE,0,0);
    // Begin mtask footprint all: 63 138 181 
    VL_OUT8(change_filter,0,0);
    // Begin mtask footprint all: 108 164 223 241 
    VL_OUT16(coef_data,15,0);
    // Begin mtask footprint all: 275 276 
    VL_OUT(AVL_READDATA,31,0);
    // Begin mtask footprint all: 62 137 182 
    VL_OUT8(load_coef,0,0);
    // Begin mtask footprint all: 258 260 
    VL_OUT8(AM_BYTEENABLE,3,0);
    // Begin mtask footprint all: 258 262 
    VL_OUT8(AM_BURSTCOUNT,2,0);
    // Begin mtask footprint all: 
    VL_OUT(AM_WRITEDATA,31,0);
    VL_IN(AVL_WRITEDATA,31,0);
    VL_IN(fir_left_data,31,0);
    VL_IN(fir_right_data,31,0);
    VL_IN(adc_data,31,0);
    VL_OUT(codec_stream,31,0);
    VL_IN8(RESET,0,0);
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
    VL_OUT8(sample_ready,0,0);
    VL_IN8(CLK,0,0);
    VL_IN8(AUD_BCLK,0,0);
    // Begin mtask footprint all: 115 171 230 243 
    VL_OUT(vol_7,31,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 124 126 127 128 130 270 275 
        CData/*0:0*/ __PVT__saw_fall;
        // Begin mtask footprint all: 124 126 127 128 130 269 275 
        CData/*0:0*/ __PVT__saw_rise;
        // Begin mtask footprint all: 130 174 237 275 
        SData/*15:0*/ __PVT__mic_r;
        // Begin mtask footprint all: 130 175 238 275 
        SData/*15:0*/ __PVT__mic_l;
        // Begin mtask footprint all: 60 
        IData/*31:0*/ __PVT__dma_yo__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __PVT__dma_yo__DOT__unnamedblk2__DOT__i;
        // Begin mtask footprint all: 86 126 143 186 268 
        IData/*31:0*/ __PVT__ready_data_4;
        // Begin mtask footprint all: 87 130 140 186 268 
        IData/*31:0*/ __PVT__ready_data_1;
        // Begin mtask footprint all: 84 128 141 186 268 
        IData/*31:0*/ __PVT__ready_data_3;
        // Begin mtask footprint all: 85 127 142 186 268 
        IData/*31:0*/ __PVT__ready_data_2;
        // Begin mtask footprint all: 259 269 270 
        CData/*0:0*/ __PVT__detect__DOT__found_edge;
        // Begin mtask footprint all: 92 177 259 270 
        CData/*0:0*/ __PVT__detect__DOT__last_test_clk;
        // Begin mtask footprint all: 134 179 240 259 269 
        CData/*0:0*/ __PVT__detect__DOT__cur_test_clk;
        // Begin mtask footprint all: 192 193 232 264 
        SData/*15:0*/ __PVT__m4__DOT__shift;
        // Begin mtask footprint all: 133 153 210 
        CData/*0:0*/ __PVT__half_way_ack;
        // Begin mtask footprint all: 188 189 234 266 
        SData/*15:0*/ __PVT__m2__DOT__shift;
        // Begin mtask footprint all: 127 150 222 
        SData/*15:0*/ __PVT__mic_r2;
        // Begin mtask footprint all: 127 151 222 
        SData/*15:0*/ __PVT__mic_l2;
        // Begin mtask footprint all: 128 149 221 
        SData/*15:0*/ __PVT__mic_l3;
        // Begin mtask footprint all: 128 148 221 
        SData/*15:0*/ __PVT__mic_r3;
        // Begin mtask footprint all: 125 152 209 
        CData/*0:0*/ __PVT__end_ack;
        // Begin mtask footprint all: 126 147 220 
        SData/*15:0*/ __PVT__mic_l4;
        // Begin mtask footprint all: 126 146 220 
        SData/*15:0*/ __PVT__mic_r4;
        // Begin mtask footprint all: 74 124 136 
        CData/*2:0*/ __PVT__counter;
        // Begin mtask footprint all: 91 145 275 
        CData/*0:0*/ __PVT__half_way_latch;
        // Begin mtask footprint all: 236 275 
        CData/*0:0*/ fin_signal;
        // Begin mtask footprint all: 75 144 275 
        CData/*0:0*/ __PVT__end_latch;
        // Begin mtask footprint all: 132 187 236 
        CData/*0:0*/ __PVT__dma_yo__DOT__finish_signal;
        // Begin mtask footprint all: 90 161 187 
        CData/*0:0*/ __PVT__dma_yo__DOT__prev_finish_signal;
        // Begin mtask footprint all: 72 203 218 
        IData/*31:0*/ __PVT__p_vol_3;
        // Begin mtask footprint all: 73 204 219 
        IData/*31:0*/ __PVT__p_vol_4;
        // Begin mtask footprint all: 70 201 216 
        IData/*31:0*/ __PVT__p_vol_1;
        // Begin mtask footprint all: 71 202 217 
        IData/*31:0*/ __PVT__p_vol_2;
        // Begin mtask footprint all: 68 206 214 
        IData/*31:0*/ __PVT__p_vol_6;
        // Begin mtask footprint all: 69 205 215 
        IData/*31:0*/ __PVT__p_vol_5;
        // Begin mtask footprint all: 66 199 212 
        IData/*31:0*/ __PVT__p_vol_8;
        // Begin mtask footprint all: 67 200 213 
        IData/*31:0*/ __PVT__p_vol_7;
        // Begin mtask footprint all: 64 139 184 
        CData/*0:0*/ __PVT__restart_sig;
        // Begin mtask footprint all: 65 196 211 
        SData/*15:0*/ __PVT__p_coef_data;
        // Begin mtask footprint all: 61 101 256 
        CData/*4:0*/ __PVT__m3__DOT__counter;
        // Begin mtask footprint all: 101 190 191 256 273 
        CData/*0:0*/ __PVT__m3__DOT__wsp;
        // Begin mtask footprint all: 190 191 233 265 
        SData/*15:0*/ __PVT__m3__DOT__shift;
        // Begin mtask footprint all: 61 99 254 
        CData/*4:0*/ __PVT__m1__DOT__counter;
        // Begin mtask footprint all: 99 197 198 254 271 
        CData/*0:0*/ __PVT__m1__DOT__wsp;
        // Begin mtask footprint all: 197 198 235 267 
        SData/*15:0*/ __PVT__m1__DOT__shift;
        // Begin mtask footprint all: 104 273 
        CData/*0:0*/ __PVT__m3__DOT__wsdd;
        // Begin mtask footprint all: 104 190 191 252 273 
        CData/*0:0*/ __PVT__m3__DOT__wsd;
        // Begin mtask footprint all: 104 274 
        CData/*0:0*/ __PVT__m4__DOT__wsdd;
        // Begin mtask footprint all: 104 192 193 253 274 
        CData/*0:0*/ __PVT__m4__DOT__wsd;
        // Begin mtask footprint all: 102 192 193 257 274 
        CData/*0:0*/ __PVT__m4__DOT__wsp;
        // Begin mtask footprint all: 61 102 257 
        CData/*4:0*/ __PVT__m4__DOT__counter;
        // Begin mtask footprint all: 103 271 
        CData/*0:0*/ __PVT__m1__DOT__wsdd;
        // Begin mtask footprint all: 103 197 198 250 271 
        CData/*0:0*/ __PVT__m1__DOT__wsd;
        // Begin mtask footprint all: 103 272 
        CData/*0:0*/ __PVT__m2__DOT__wsdd;
        // Begin mtask footprint all: 103 188 189 251 272 
        CData/*0:0*/ __PVT__m2__DOT__wsd;
        // Begin mtask footprint all: 100 188 189 255 272 
        CData/*0:0*/ __PVT__m2__DOT__wsp;
        // Begin mtask footprint all: 61 100 255 
        CData/*4:0*/ __PVT__m2__DOT__counter;
        // Begin mtask footprint all: 185 
        IData/*31:0*/ __PVT__dma_yo__DOT__unnamedblk4__DOT__i;
        // Begin mtask footprint all: 82 173 185 186 258 
        CData/*0:0*/ __PVT__start;
        // Begin mtask footprint all: 83 162 180 258 
        CData/*0:0*/ __PVT__ready_read_now;
        // Begin mtask footprint all: 120 258 
        CData/*0:0*/ __PVT__dma_yo__DOT__done;
        // Begin mtask footprint all: 123 125 133 258 
        IData/*31:0*/ __PVT__dma_yo__DOT__num_samples;
        // Begin mtask footprint all: 133 178 239 258 
        IData/*31:0*/ __PVT__num_samps;
        // Begin mtask footprint all: 89 160 258 
        IData/*31:0*/ __PVT__dma_yo__DOT__prev_counter;
    };
    struct {
        // Begin mtask footprint all: 122 258 268 
        CData/*2:0*/ __PVT__dma_yo__DOT__mic_count;
        // Begin mtask footprint all: 80 157 258 
        IData/*31:0*/ __PVT__dma_yo__DOT__prev_AM_ADDR;
        // Begin mtask footprint all: 81 158 258 
        IData/*31:0*/ __PVT__dma_yo__DOT__prev_num_samples;
        // Begin mtask footprint all: 78 155 258 
        CData/*0:0*/ __PVT__dma_yo__DOT__prev_AM_WRITE;
        // Begin mtask footprint all: 79 156 258 
        CData/*0:0*/ __PVT__dma_yo__DOT__prev_done;
        // Begin mtask footprint all: 76 159 258 
        IData/*31:0*/ __PVT__start_addr;
        // Begin mtask footprint all: 77 154 258 
        CData/*2:0*/ __PVT__dma_yo__DOT__prev_mic_count;
        // Begin mtask footprint all: 135 258 
        IData/*31:0*/ __PVT__dma_yo__DOT__starting_address[5];
        // Begin mtask footprint all: 163 258 
        IData/*31:0*/ __PVT__dma_yo__DOT__prev_starting_address[5];
        // Begin mtask footprint all: 129 258 
        CData/*2:0*/ __PVT__dma_yo__DOT__next_state;
        // Begin mtask footprint all: 131 258 
        IData/*31:0*/ __PVT__dma_yo__DOT__counter;
        // Begin mtask footprint all: 183 
        IData/*31:0*/ __PVT__dma_yo__DOT__unnamedblk5__DOT__i;
        // Begin mtask footprint all: 88 176 183 185 187 258 
        CData/*2:0*/ __PVT__dma_yo__DOT__state;
    };
    
    // LOCAL VARIABLES
    // Begin mtask footprint all: 60 119 120 121 122 123 125 129 131 132 133 135 184 
    CData/*0:0*/ __Vcellinp__dma_yo__RESET;
    // Begin mtask footprint all: 135 
    IData/*31:0*/ dma_yo__DOT____Vlvbound2;
    // Begin mtask footprint all: 86 126 143 
    IData/*31:0*/ __Vdly__ready_data_4;
    // Begin mtask footprint all: 87 130 140 
    IData/*31:0*/ __Vdly__ready_data_1;
    // Begin mtask footprint all: 84 128 141 
    IData/*31:0*/ __Vdly__ready_data_3;
    // Begin mtask footprint all: 85 127 142 
    IData/*31:0*/ __Vdly__ready_data_2;
    // Begin mtask footprint all: 73 109 219 
    IData/*31:0*/ __Vdly__p_vol_4;
    // Begin mtask footprint all: 74 124 136 
    CData/*2:0*/ __Vdly__counter;
    // Begin mtask footprint all: 71 111 217 
    IData/*31:0*/ __Vdly__p_vol_2;
    // Begin mtask footprint all: 72 110 218 
    IData/*31:0*/ __Vdly__p_vol_3;
    // Begin mtask footprint all: 69 113 215 
    IData/*31:0*/ __Vdly__p_vol_5;
    // Begin mtask footprint all: 70 112 216 
    IData/*31:0*/ __Vdly__p_vol_1;
    // Begin mtask footprint all: 67 115 213 
    IData/*31:0*/ __Vdly__p_vol_7;
    // Begin mtask footprint all: 68 114 214 
    IData/*31:0*/ __Vdly__p_vol_6;
    // Begin mtask footprint all: 65 108 211 
    SData/*15:0*/ __Vdly__p_coef_data;
    // Begin mtask footprint all: 66 116 212 
    IData/*31:0*/ __Vdly__p_vol_8;
    // Begin mtask footprint all: 258 
    IData/*31:0*/ dma_yo__DOT____Vlvbound3;
    IData/*31:0*/ dma_yo__DOT____Vlvbound5;
    IData/*31:0*/ dma_yo__DOT____Vlvbound6;
    // Begin mtask footprint all: 61 102 
    CData/*4:0*/ __Vdly__m4__DOT__counter;
    // Begin mtask footprint all: 61 99 
    CData/*4:0*/ __Vdly__m1__DOT__counter;
    // Begin mtask footprint all: 61 100 
    CData/*4:0*/ __Vdly__m2__DOT__counter;
    // Begin mtask footprint all: 61 101 
    CData/*4:0*/ __Vdly__m3__DOT__counter;
    // Begin mtask footprint all: 135 163 
    IData/*31:0*/ __Vdlyvval__dma_yo__DOT__prev_starting_address__v5;
    IData/*31:0*/ __Vdlyvval__dma_yo__DOT__prev_starting_address__v6;
    IData/*31:0*/ __Vdlyvval__dma_yo__DOT__prev_starting_address__v7;
    IData/*31:0*/ __Vdlyvval__dma_yo__DOT__prev_starting_address__v8;
    IData/*31:0*/ __Vdlyvval__dma_yo__DOT__prev_starting_address__v9;
    // Begin mtask footprint all: 93 135 163 
    CData/*0:0*/ __Vdlyvset__dma_yo__DOT__prev_starting_address__v0;
    // Begin mtask footprint all: 94 135 163 
    CData/*0:0*/ __Vdlyvset__dma_yo__DOT__prev_starting_address__v5;
    // Begin mtask footprint all: 95 135 163 
    CData/*0:0*/ __Vdlyvset__dma_yo__DOT__prev_starting_address__v6;
    // Begin mtask footprint all: 96 135 163 
    CData/*0:0*/ __Vdlyvset__dma_yo__DOT__prev_starting_address__v7;
    // Begin mtask footprint all: 97 135 163 
    CData/*0:0*/ __Vdlyvset__dma_yo__DOT__prev_starting_address__v8;
    // Begin mtask footprint all: 98 135 163 
    CData/*0:0*/ __Vdlyvset__dma_yo__DOT__prev_starting_address__v9;
    
    // INTERNAL VARIABLES
  private:
    Vavalon_microphone_system__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vavalon_microphone_system_avalon_microphone_system);  ///< Copying not allowed
  public:
    Vavalon_microphone_system_avalon_microphone_system(const char* name = "TOP");
    ~Vavalon_microphone_system_avalon_microphone_system();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vavalon_microphone_system__Syms* symsp, bool first);
    static void _combo__TOP__avalon_microphone_system__186(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _combo__TOP__avalon_microphone_system__252(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _combo__TOP__avalon_microphone_system__264(Vavalon_microphone_system__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__avalon_microphone_system__1(Vavalon_microphone_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__avalon_microphone_system__100(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__101(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__102(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__103(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__104(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__105(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__106(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__107(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__108(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__109(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__110(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__111(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__112(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__113(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__114(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__115(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__116(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__117(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__118(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__119(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__120(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__121(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__122(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__123(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__124(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__125(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__126(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__127(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__128(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__129(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__130(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__131(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__132(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__133(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__134(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__135(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__136(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__137(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__138(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__139(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__140(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__141(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__145(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__146(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__147(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__148(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__168(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__185(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__187(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__188(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__189(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__190(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__191(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__192(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__193(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__194(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__195(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__196(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__197(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__198(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__199(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__200(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__201(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__202(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__203(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__204(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__205(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__206(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__207(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__208(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__209(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__217(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__218(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__219(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__220(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__221(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__222(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__223(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__224(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__225(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__239(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__244(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__245(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__246(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__247(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__248(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__249(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__250(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__251(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__253(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__258(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__259(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__260(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__261(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__262(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__263(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__65(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__66(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__70(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__71(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__72(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__73(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__74(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__75(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__76(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__77(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__78(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__79(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__89(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__90(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__91(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__92(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__98(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _sequent__TOP__avalon_microphone_system__99(Vavalon_microphone_system__Syms* __restrict vlSymsp);
    static void _settle__TOP__avalon_microphone_system__2(Vavalon_microphone_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__avalon_microphone_system__3(Vavalon_microphone_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__avalon_microphone_system__4(Vavalon_microphone_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__avalon_microphone_system__5(Vavalon_microphone_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  // guard
