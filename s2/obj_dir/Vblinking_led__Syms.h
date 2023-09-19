// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBLINKING_LED__SYMS_H_
#define VERILATED_VBLINKING_LED__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vblinking_led.h"

// INCLUDE MODULE CLASSES
#include "Vblinking_led___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vblinking_led__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vblinking_led* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vblinking_led___024root        TOP;

    // CONSTRUCTORS
    Vblinking_led__Syms(VerilatedContext* contextp, const char* namep, Vblinking_led* modelp);
    ~Vblinking_led__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard