#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/simone/Desktop/cs5222-lab-fpga/zynq/hls/mmult_float/accel/solution3/.autopilot/db/a.g.bc ${1+"$@"}
