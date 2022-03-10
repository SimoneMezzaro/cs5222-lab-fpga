############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_pipeline -II 1 "mmult_hw/LOAD_W_2"
set_directive_pipeline -II 1 "mmult_hw/LOAD_I_2"
set_directive_pipeline -II 1 "mmult_hw/LOAD_OFF_1"
set_directive_pipeline -II 1 "mmult_hw/L2"
set_directive_array_partition -type block -factor 4 -dim 2 "mmult_hw" weight_buf
set_directive_array_partition -type block -factor 4 -dim 2 "mmult_hw" in_buf
set_directive_pipeline -II 1 "mmult_hw/STORE_O_1"
