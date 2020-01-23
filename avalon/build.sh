#!/bin/bash
verilator -Wall --threads 4 -cc --trace avalon_microphone_system.sv --exe avalon_i2s_sim.cpp 
make -j4 -C obj_dir -f Vavalon_microphone_system.mk Vavalon_microphone_system
