#!/bin/bash
verilator -Wall --threads 32 -cc --trace avalon_microphone_system.sv --exe avalon_i2s_sim.cpp 
make -j32 -C obj_dir -f Vavalon_microphone_system.mk Vavalon_microphone_system
