#!/bin/bash
verilator -Wall -cc --trace i2s_master.sv --exe i2s_sim.cpp 
make -j4 -C obj_dir -f Vi2s_master.mk Vi2s_master
