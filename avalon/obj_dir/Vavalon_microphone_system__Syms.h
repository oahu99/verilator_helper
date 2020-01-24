// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VAVALON_MICROPHONE_SYSTEM__SYMS_H_
#define _VAVALON_MICROPHONE_SYSTEM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vavalon_microphone_system.h"

// SYMS CLASS
class Vavalon_microphone_system__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vavalon_microphone_system*     TOPp;
    
    // CREATORS
    Vavalon_microphone_system__Syms(Vavalon_microphone_system* topp, const char* namep);
    ~Vavalon_microphone_system__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
