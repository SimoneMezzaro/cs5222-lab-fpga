; ModuleID = '/home/simone/Desktop/cs5222-lab-fpga/zynq/hls/mmult_float/accel/solution2/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@mmult_hw_str = internal unnamed_addr constant [9 x i8] c"mmult_hw\00"
@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535]
@L1_L2_str = internal unnamed_addr constant [6 x i8] c"L1_L2\00"
@p_str9 = private unnamed_addr constant [9 x i8] c"LOAD_I_1\00", align 1
@p_str8 = private unnamed_addr constant [9 x i8] c"LOAD_W_2\00", align 1
@p_str7 = private unnamed_addr constant [9 x i8] c"LOAD_W_1\00", align 1
@p_str6 = private unnamed_addr constant [11 x i8] c"LOAD_OFF_1\00", align 1
@p_str4 = private unnamed_addr constant [5 x i8] c"both\00", align 1
@p_str3 = private unnamed_addr constant [5 x i8] c"axis\00", align 1
@p_str2 = private unnamed_addr constant [12 x i8] c"CONTROL_BUS\00", align 1
@p_str14 = private unnamed_addr constant [10 x i8] c"STORE_O_1\00", align 1
@p_str12 = private unnamed_addr constant [3 x i8] c"L2\00", align 1
@p_str10 = private unnamed_addr constant [9 x i8] c"LOAD_I_2\00", align 1
@p_str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1
@p_str = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1

define void @mmult_hw(i64* %in_stream_data_V, i8* %in_stream_keep_V, i8* %in_stream_strb_V, i4* %in_stream_user_V, i1* %in_stream_last_V, i5* %in_stream_id_V, i5* %in_stream_dest_V, i64* %out_stream_data_V, i8* %out_stream_keep_V, i8* %out_stream_strb_V, i4* %out_stream_user_V, i1* %out_stream_last_V, i5* %out_stream_id_V, i5* %out_stream_dest_V) {
  call void (...)* @_ssdm_op_SpecBitsMap(i64* %in_stream_data_V), !map !49
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %in_stream_keep_V), !map !55
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %in_stream_strb_V), !map !59
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %in_stream_user_V), !map !63
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %in_stream_last_V), !map !67
  call void (...)* @_ssdm_op_SpecBitsMap(i5* %in_stream_id_V), !map !71
  call void (...)* @_ssdm_op_SpecBitsMap(i5* %in_stream_dest_V), !map !75
  call void (...)* @_ssdm_op_SpecBitsMap(i64* %out_stream_data_V), !map !79
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %out_stream_keep_V), !map !85
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %out_stream_strb_V), !map !89
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %out_stream_user_V), !map !93
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %out_stream_last_V), !map !97
  call void (...)* @_ssdm_op_SpecBitsMap(i5* %out_stream_id_V), !map !101
  call void (...)* @_ssdm_op_SpecBitsMap(i5* %out_stream_dest_V), !map !105
  call void (...)* @_ssdm_op_SpecTopModule([9 x i8]* @mmult_hw_str) nounwind
  %offset_buf = alloca [10 x float], align 16
  %weight_buf_0 = alloca [320 x float], align 4
  %weight_buf_1 = alloca [320 x float], align 4
  %weight_buf_2 = alloca [320 x float], align 4
  %weight_buf_3 = alloca [320 x float], align 4
  %weight_buf_4 = alloca [320 x float], align 4
  %weight_buf_5 = alloca [320 x float], align 4
  %weight_buf_6 = alloca [320 x float], align 4
  %weight_buf_7 = alloca [320 x float], align 4
  %in_buf_0 = alloca [256 x float], align 4
  %in_buf_1 = alloca [256 x float], align 4
  %in_buf_2 = alloca [256 x float], align 4
  %in_buf_3 = alloca [256 x float], align 4
  %in_buf_4 = alloca [256 x float], align 4
  %in_buf_5 = alloca [256 x float], align 4
  %in_buf_6 = alloca [256 x float], align 4
  %in_buf_7 = alloca [256 x float], align 4
  %out_buf = alloca [80 x float], align 4
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [12 x i8]* @p_str2, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i64* %in_stream_data_V, i8* %in_stream_keep_V, i8* %in_stream_strb_V, i4* %in_stream_user_V, i1* %in_stream_last_V, i5* %in_stream_id_V, i5* %in_stream_dest_V, [5 x i8]* @p_str3, i32 1, i32 1, [5 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  call void (...)* @_ssdm_op_SpecInterface(i64* %out_stream_data_V, i8* %out_stream_keep_V, i8* %out_stream_strb_V, i4* %out_stream_user_V, i1* %out_stream_last_V, i5* %out_stream_id_V, i5* %out_stream_dest_V, [5 x i8]* @p_str3, i32 1, i32 1, [5 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  br label %1

; <label>:1                                       ; preds = %2, %0
  %i = phi i4 [ 0, %0 ], [ %i_1, %2 ]
  %is_idx = phi i3 [ 0, %0 ], [ %tmp_2, %2 ]
  %exitcond5 = icmp eq i3 %is_idx, -3
  %tmp_2 = add i3 %is_idx, 1
  br i1 %exitcond5, label %.preheader18.preheader, label %2

.preheader18.preheader:                           ; preds = %1
  br label %.preheader18

; <label>:2                                       ; preds = %1
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 5, i64 5, i64 5)
  call void (...)* @_ssdm_op_SpecLoopName([11 x i8]* @p_str6) nounwind
  %tmp_3 = call i32 (...)* @_ssdm_op_SpecRegionBegin([11 x i8]* @p_str6)
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %empty_7 = call { i64, i8, i8, i4, i1, i5, i5 } @_ssdm_op_Read.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %in_stream_data_V, i8* %in_stream_keep_V, i8* %in_stream_strb_V, i4* %in_stream_user_V, i1* %in_stream_last_V, i5* %in_stream_id_V, i5* %in_stream_dest_V)
  %ret = extractvalue { i64, i8, i8, i4, i1, i5, i5 } %empty_7, 0
  %tmp_19 = trunc i64 %ret to i32
  %bitcast1 = bitcast i32 %tmp_19 to float
  %tmp_4 = zext i4 %i to i64
  %offset_buf_addr = getelementptr inbounds [10 x float]* %offset_buf, i64 0, i64 %tmp_4
  store float %bitcast1, float* %offset_buf_addr, align 8
  %tmp_6 = call i32 @_ssdm_op_PartSelect.i32.i64.i32.i32(i64 %ret, i32 32, i32 63)
  %tmp_7 = bitcast i32 %tmp_6 to float
  %tmp_8 = or i4 %i, 1
  %tmp_9 = zext i4 %tmp_8 to i64
  %offset_buf_addr_1 = getelementptr inbounds [10 x float]* %offset_buf, i64 0, i64 %tmp_9
  store float %tmp_7, float* %offset_buf_addr_1, align 4
  %empty_8 = call i32 (...)* @_ssdm_op_SpecRegionEnd([11 x i8]* @p_str6, i32 %tmp_3)
  %i_1 = add i4 2, %i
  br label %1

.preheader18:                                     ; preds = %.preheader18.preheader, %7
  %indvars_iv1 = phi i11 [ %indvars_iv_next1, %7 ], [ 133, %.preheader18.preheader ]
  %i1 = phi i4 [ %i_2, %7 ], [ 0, %.preheader18.preheader ]
  %is_idx_1 = phi i11 [ %tmp_s, %7 ], [ 5, %.preheader18.preheader ]
  %exitcond6 = icmp eq i4 %i1, -6
  %i_2 = add i4 %i1, 1
  br i1 %exitcond6, label %.preheader17.preheader, label %3

.preheader17.preheader:                           ; preds = %.preheader18
  br label %.preheader17

; <label>:3                                       ; preds = %.preheader18
  %empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @p_str7) nounwind
  %tmp_1 = call i32 (...)* @_ssdm_op_SpecRegionBegin([9 x i8]* @p_str7)
  %tmp_s = add i11 %is_idx_1, 128
  br label %4

; <label>:4                                       ; preds = %6, %3
  %j = phi i9 [ 0, %3 ], [ %j_1, %6 ]
  %is_idx_2 = phi i11 [ %is_idx_1, %3 ], [ %tmp_11, %6 ]
  %exitcond9 = icmp eq i11 %is_idx_2, %indvars_iv1
  br i1 %exitcond9, label %7, label %5

; <label>:5                                       ; preds = %4
  %empty_10 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 128, i64 128, i64 128)
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @p_str8) nounwind
  %tmp_10 = call i32 (...)* @_ssdm_op_SpecRegionBegin([9 x i8]* @p_str8)
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %tmp_11 = add i11 1, %is_idx_2
  %empty_11 = call { i64, i8, i8, i4, i1, i5, i5 } @_ssdm_op_Read.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %in_stream_data_V, i8* %in_stream_keep_V, i8* %in_stream_strb_V, i4* %in_stream_user_V, i1* %in_stream_last_V, i5* %in_stream_id_V, i5* %in_stream_dest_V)
  %ret_1 = extractvalue { i64, i8, i8, i4, i1, i5, i5 } %empty_11, 0
  %tmp_93 = trunc i64 %ret_1 to i32
  %bitcast2 = bitcast i32 %tmp_93 to float
  %arrayNo_cast_cast = call i4 @_ssdm_op_PartSelect.i4.i9.i32.i32(i9 %j, i32 5, i32 8)
  %tmp_156 = trunc i9 %j to i5
  %tmp_12 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %i1, i5 %tmp_156)
  %tmp_13 = zext i9 %tmp_12 to i64
  %weight_buf_0_addr = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_13
  %weight_buf_1_addr = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_13
  %weight_buf_2_addr = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_13
  %weight_buf_3_addr = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_13
  %weight_buf_4_addr = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_13
  %weight_buf_5_addr = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_13
  %weight_buf_6_addr = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_13
  %weight_buf_7_addr = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_13
  %tmp_14 = call i32 @_ssdm_op_PartSelect.i32.i64.i32.i32(i64 %ret_1, i32 32, i32 63)
  %tmp_15 = bitcast i32 %tmp_14 to float
  %newIndex = or i5 %tmp_156, 1
  %tmp_16 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %i1, i5 %newIndex)
  %tmp_17 = zext i9 %tmp_16 to i64
  %weight_buf_0_addr_1 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_17
  %weight_buf_1_addr_1 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_17
  %weight_buf_2_addr_1 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_17
  %weight_buf_3_addr_1 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_17
  %weight_buf_4_addr_1 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_17
  %weight_buf_5_addr_1 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_17
  %weight_buf_6_addr_1 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_17
  %weight_buf_7_addr_1 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_17
  switch i4 %arrayNo_cast_cast, label %branch15 [
    i4 0, label %branch8
    i4 1, label %branch9
    i4 2, label %branch10
    i4 3, label %branch11
    i4 4, label %branch12
    i4 5, label %branch13
    i4 6, label %branch14
  ]

; <label>:6                                       ; preds = %branch15, %branch14, %branch13, %branch12, %branch11, %branch10, %branch9, %branch8
  %empty_12 = call i32 (...)* @_ssdm_op_SpecRegionEnd([9 x i8]* @p_str8, i32 %tmp_10)
  %j_1 = add i9 %j, 2
  br label %4

; <label>:7                                       ; preds = %4
  %empty_13 = call i32 (...)* @_ssdm_op_SpecRegionEnd([9 x i8]* @p_str7, i32 %tmp_1)
  %indvars_iv_next1 = add i11 %indvars_iv1, 128
  br label %.preheader18

.preheader17:                                     ; preds = %.preheader17.preheader, %12
  %indvars_iv5 = phi i12 [ %indvars_iv_next6, %12 ], [ 1413, %.preheader17.preheader ]
  %i2 = phi i4 [ %i_3, %12 ], [ 0, %.preheader17.preheader ]
  %is_idx_3 = phi i12 [ %is_idx_5, %12 ], [ 1285, %.preheader17.preheader ]
  %exitcond8 = icmp eq i4 %i2, -8
  %i_3 = add i4 %i2, 1
  br i1 %exitcond8, label %.preheader16.preheader.preheader, label %8

.preheader16.preheader.preheader:                 ; preds = %.preheader17
  br label %.preheader16.preheader

; <label>:8                                       ; preds = %.preheader17
  %empty_14 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @p_str9) nounwind
  %tmp_5 = call i32 (...)* @_ssdm_op_SpecRegionBegin([9 x i8]* @p_str9)
  %is_idx_5 = add i12 %is_idx_3, 128
  br label %9

; <label>:9                                       ; preds = %11, %8
  %j3 = phi i9 [ 0, %8 ], [ %j_2, %11 ]
  %is_idx_4 = phi i12 [ %is_idx_3, %8 ], [ %is_idx_6, %11 ]
  %exitcond7 = icmp eq i12 %is_idx_4, %indvars_iv5
  br i1 %exitcond7, label %12, label %10

; <label>:10                                      ; preds = %9
  %empty_15 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 128, i64 128, i64 128)
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @p_str10) nounwind
  %tmp_20 = call i32 (...)* @_ssdm_op_SpecRegionBegin([9 x i8]* @p_str10)
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %is_idx_6 = add i12 1, %is_idx_4
  %empty_16 = call { i64, i8, i8, i4, i1, i5, i5 } @_ssdm_op_Read.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %in_stream_data_V, i8* %in_stream_keep_V, i8* %in_stream_strb_V, i4* %in_stream_user_V, i1* %in_stream_last_V, i5* %in_stream_id_V, i5* %in_stream_dest_V)
  %ret_2 = extractvalue { i64, i8, i8, i4, i1, i5, i5 } %empty_16, 0
  %tmp_241 = trunc i64 %ret_2 to i32
  %bitcast = bitcast i32 %tmp_241 to float
  %arrayNo1_cast_cast = call i4 @_ssdm_op_PartSelect.i4.i9.i32.i32(i9 %j3, i32 5, i32 8)
  %tmp_242 = trunc i9 %j3 to i5
  %tmp_224 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %i2, i5 %tmp_242)
  %tmp_225 = zext i9 %tmp_224 to i64
  %in_buf_0_addr = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %tmp_225
  %in_buf_1_addr = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %tmp_225
  %in_buf_2_addr = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %tmp_225
  %in_buf_3_addr = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %tmp_225
  %in_buf_4_addr = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %tmp_225
  %in_buf_5_addr = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %tmp_225
  %in_buf_6_addr = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %tmp_225
  %in_buf_7_addr = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %tmp_225
  %tmp_22 = call i32 @_ssdm_op_PartSelect.i32.i64.i32.i32(i64 %ret_2, i32 32, i32 63)
  %tmp_23 = bitcast i32 %tmp_22 to float
  %newIndex6 = or i5 %tmp_242, 1
  %tmp_226 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %i2, i5 %newIndex6)
  %tmp_227 = zext i9 %tmp_226 to i64
  %in_buf_0_addr_1 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %tmp_227
  %in_buf_1_addr_1 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %tmp_227
  %in_buf_2_addr_1 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %tmp_227
  %in_buf_3_addr_1 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %tmp_227
  %in_buf_4_addr_1 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %tmp_227
  %in_buf_5_addr_1 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %tmp_227
  %in_buf_6_addr_1 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %tmp_227
  %in_buf_7_addr_1 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %tmp_227
  switch i4 %arrayNo1_cast_cast, label %branch31 [
    i4 0, label %branch24
    i4 1, label %branch25
    i4 2, label %branch26
    i4 3, label %branch27
    i4 4, label %branch28
    i4 5, label %branch29
    i4 6, label %branch30
  ]

; <label>:11                                      ; preds = %branch31, %branch30, %branch29, %branch28, %branch27, %branch26, %branch25, %branch24
  %empty_17 = call i32 (...)* @_ssdm_op_SpecRegionEnd([9 x i8]* @p_str10, i32 %tmp_20)
  %j_2 = add i9 %j3, 2
  br label %9

; <label>:12                                      ; preds = %9
  %empty_18 = call i32 (...)* @_ssdm_op_SpecRegionEnd([9 x i8]* @p_str9, i32 %tmp_5)
  %indvars_iv_next6 = add i12 %indvars_iv5, 128
  br label %.preheader17

.preheader16.preheader:                           ; preds = %.preheader16.preheader.preheader, %.preheader16
  %indvar_flatten = phi i7 [ %indvar_flatten_next, %.preheader16 ], [ 0, %.preheader16.preheader.preheader ]
  %i4 = phi i4 [ %tmp_19_mid2_v, %.preheader16 ], [ 0, %.preheader16.preheader.preheader ]
  %j5 = phi i4 [ %j_3, %.preheader16 ], [ 0, %.preheader16.preheader.preheader ]
  %tmp_18 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %i4, i5 0)
  %tmp_21 = or i9 %tmp_18, 1
  %tmp_25 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_21)
  %tmp_32 = or i9 %tmp_18, 2
  %tmp_33 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_32)
  %tmp_34 = or i9 %tmp_18, 3
  %tmp_35 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_34)
  %tmp_36 = or i9 %tmp_18, 4
  %tmp_37 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_36)
  %tmp_38 = or i9 %tmp_18, 5
  %tmp_39 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_38)
  %tmp_40 = or i9 %tmp_18, 6
  %tmp_41 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_40)
  %tmp_42 = or i9 %tmp_18, 7
  %tmp_43 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_42)
  %tmp_44 = or i9 %tmp_18, 8
  %tmp_45 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_44)
  %tmp_46 = or i9 %tmp_18, 9
  %tmp_47 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_46)
  %tmp_48 = or i9 %tmp_18, 10
  %tmp_49 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_48)
  %tmp_50 = or i9 %tmp_18, 11
  %tmp_51 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_50)
  %tmp_52 = or i9 %tmp_18, 12
  %tmp_53 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_52)
  %tmp_54 = or i9 %tmp_18, 13
  %tmp_55 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_54)
  %tmp_56 = or i9 %tmp_18, 14
  %tmp_57 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_56)
  %tmp_58 = or i9 %tmp_18, 15
  %tmp_59 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_58)
  %tmp_60 = or i9 %tmp_18, 16
  %tmp_61 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_60)
  %tmp_62 = or i9 %tmp_18, 17
  %tmp_63 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_62)
  %tmp_64 = or i9 %tmp_18, 18
  %tmp_65 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_64)
  %tmp_66 = or i9 %tmp_18, 19
  %tmp_67 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_66)
  %tmp_68 = or i9 %tmp_18, 20
  %tmp_69 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_68)
  %tmp_70 = or i9 %tmp_18, 21
  %tmp_71 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_70)
  %tmp_72 = or i9 %tmp_18, 22
  %tmp_73 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_72)
  %tmp_74 = or i9 %tmp_18, 23
  %tmp_75 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_74)
  %tmp_76 = or i9 %tmp_18, 24
  %tmp_77 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_76)
  %tmp_78 = or i9 %tmp_18, 25
  %tmp_79 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_78)
  %tmp_80 = or i9 %tmp_18, 26
  %tmp_81 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_80)
  %tmp_82 = or i9 %tmp_18, 27
  %tmp_83 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_82)
  %tmp_84 = or i9 %tmp_18, 28
  %tmp_85 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_84)
  %tmp_86 = or i9 %tmp_18, 29
  %tmp_87 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_86)
  %tmp_88 = or i9 %tmp_18, 30
  %tmp_89 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_88)
  %tmp_90 = or i9 %tmp_18, 31
  %tmp_91 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_90)
  %exitcond_flatten = icmp eq i7 %indvar_flatten, -48
  %indvar_flatten_next = add i7 %indvar_flatten, 1
  br i1 %exitcond_flatten, label %.preheader.preheader, label %.preheader16

.preheader.preheader:                             ; preds = %.preheader16.preheader
  br label %.preheader

.preheader16:                                     ; preds = %.preheader16.preheader
  %i_4 = add i4 %i4, 1
  call void (...)* @_ssdm_op_SpecLoopName([6 x i8]* @L1_L2_str)
  %empty_19 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 80, i64 80, i64 80)
  %exitcond = icmp eq i4 %j5, -6
  %j5_mid2 = select i1 %exitcond, i4 0, i4 %j5
  %tmp_92 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %i_4, i5 0)
  %tmp_94 = or i9 %tmp_92, 1
  %tmp_95 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_94)
  %tmp_96 = or i9 %tmp_92, 2
  %tmp_97 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_96)
  %tmp_98 = or i9 %tmp_92, 3
  %tmp_99 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_98)
  %tmp_100 = or i9 %tmp_92, 4
  %tmp_101 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_100)
  %tmp_102 = or i9 %tmp_92, 5
  %tmp_103 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_102)
  %tmp_104 = or i9 %tmp_92, 6
  %tmp_105 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_104)
  %tmp_106 = or i9 %tmp_92, 7
  %tmp_107 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_106)
  %tmp_108 = or i9 %tmp_92, 8
  %tmp_109 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_108)
  %tmp_110 = or i9 %tmp_92, 9
  %tmp_111 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_110)
  %tmp_112 = or i9 %tmp_92, 10
  %tmp_113 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_112)
  %tmp_114 = or i9 %tmp_92, 11
  %tmp_115 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_114)
  %tmp_116 = or i9 %tmp_92, 12
  %tmp_117 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_116)
  %tmp_118 = or i9 %tmp_92, 13
  %tmp_119 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_118)
  %tmp_120 = or i9 %tmp_92, 14
  %tmp_121 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_120)
  %tmp_122 = or i9 %tmp_92, 15
  %tmp_123 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_122)
  %tmp_124 = or i9 %tmp_92, 16
  %tmp_125 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_124)
  %tmp_126 = or i9 %tmp_92, 17
  %tmp_127 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_126)
  %tmp_128 = or i9 %tmp_92, 18
  %tmp_129 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_128)
  %tmp_130 = or i9 %tmp_92, 19
  %tmp_131 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_130)
  %tmp_132 = or i9 %tmp_92, 20
  %tmp_133 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_132)
  %tmp_134 = or i9 %tmp_92, 21
  %tmp_135 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_134)
  %tmp_136 = or i9 %tmp_92, 22
  %tmp_137 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_136)
  %tmp_138 = or i9 %tmp_92, 23
  %tmp_139 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_138)
  %tmp_140 = or i9 %tmp_92, 24
  %tmp_141 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_140)
  %tmp_142 = or i9 %tmp_92, 25
  %tmp_143 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_142)
  %tmp_144 = or i9 %tmp_92, 26
  %tmp_145 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_144)
  %tmp_146 = or i9 %tmp_92, 27
  %tmp_147 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_146)
  %tmp_148 = or i9 %tmp_92, 28
  %tmp_149 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_148)
  %tmp_150 = or i9 %tmp_92, 29
  %tmp_151 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_150)
  %tmp_152 = or i9 %tmp_92, 30
  %tmp_153 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_152)
  %tmp_154 = or i9 %tmp_92, 31
  %tmp_155 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_154)
  %tmp_19_mid2_v = select i1 %exitcond, i4 %i_4, i4 %i4
  %tmp_157 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %tmp_19_mid2_v, i3 0)
  %p_shl_cast = zext i7 %tmp_157 to i8
  %tmp_240 = call i5 @_ssdm_op_BitConcatenate.i5.i4.i1(i4 %tmp_19_mid2_v, i1 false)
  %p_shl1_cast = zext i5 %tmp_240 to i8
  %tmp_158 = add i8 %p_shl1_cast, %p_shl_cast
  %in_buf_0_load_mid2_s = select i1 %exitcond, i9 %tmp_92, i9 %tmp_18
  %in_buf_0_load_mid2 = zext i9 %in_buf_0_load_mid2_s to i64
  %in_buf_0_addr_2 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_mid2
  %in_buf_0_load = load float* %in_buf_0_addr_2, align 4
  %in_buf_0_load_1_mid = select i1 %exitcond, i64 %tmp_95, i64 %tmp_25
  %in_buf_0_addr_3 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_1_mid
  %in_buf_0_load_1 = load float* %in_buf_0_addr_3, align 4
  %in_buf_0_load_2_mid = select i1 %exitcond, i64 %tmp_97, i64 %tmp_33
  %in_buf_0_addr_4 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_2_mid
  %in_buf_0_load_2 = load float* %in_buf_0_addr_4, align 4
  %in_buf_0_load_3_mid = select i1 %exitcond, i64 %tmp_99, i64 %tmp_35
  %in_buf_0_addr_5 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_3_mid
  %in_buf_0_load_3 = load float* %in_buf_0_addr_5, align 4
  %in_buf_0_load_4_mid = select i1 %exitcond, i64 %tmp_101, i64 %tmp_37
  %in_buf_0_addr_6 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_4_mid
  %in_buf_0_load_4 = load float* %in_buf_0_addr_6, align 4
  %in_buf_0_load_5_mid = select i1 %exitcond, i64 %tmp_103, i64 %tmp_39
  %in_buf_0_addr_7 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_5_mid
  %in_buf_0_load_5 = load float* %in_buf_0_addr_7, align 4
  %in_buf_0_load_6_mid = select i1 %exitcond, i64 %tmp_105, i64 %tmp_41
  %in_buf_0_addr_8 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_6_mid
  %in_buf_0_load_6 = load float* %in_buf_0_addr_8, align 4
  %in_buf_0_load_7_mid = select i1 %exitcond, i64 %tmp_107, i64 %tmp_43
  %in_buf_0_addr_9 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_7_mid
  %in_buf_0_load_7 = load float* %in_buf_0_addr_9, align 4
  %in_buf_0_load_8_mid = select i1 %exitcond, i64 %tmp_109, i64 %tmp_45
  %in_buf_0_addr_10 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_8_mid
  %in_buf_0_load_8 = load float* %in_buf_0_addr_10, align 4
  %in_buf_0_load_9_mid = select i1 %exitcond, i64 %tmp_111, i64 %tmp_47
  %in_buf_0_addr_11 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_9_mid
  %in_buf_0_load_9 = load float* %in_buf_0_addr_11, align 4
  %in_buf_0_load_10_mi = select i1 %exitcond, i64 %tmp_113, i64 %tmp_49
  %in_buf_0_addr_12 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_10_mi
  %in_buf_0_load_10 = load float* %in_buf_0_addr_12, align 4
  %in_buf_0_load_11_mi = select i1 %exitcond, i64 %tmp_115, i64 %tmp_51
  %in_buf_0_addr_13 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_11_mi
  %in_buf_0_load_11 = load float* %in_buf_0_addr_13, align 4
  %in_buf_0_load_12_mi = select i1 %exitcond, i64 %tmp_117, i64 %tmp_53
  %in_buf_0_addr_14 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_12_mi
  %in_buf_0_load_12 = load float* %in_buf_0_addr_14, align 4
  %in_buf_0_load_13_mi = select i1 %exitcond, i64 %tmp_119, i64 %tmp_55
  %in_buf_0_addr_15 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_13_mi
  %in_buf_0_load_13 = load float* %in_buf_0_addr_15, align 4
  %in_buf_0_load_14_mi = select i1 %exitcond, i64 %tmp_121, i64 %tmp_57
  %in_buf_0_addr_16 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_14_mi
  %in_buf_0_load_14 = load float* %in_buf_0_addr_16, align 4
  %in_buf_0_load_15_mi = select i1 %exitcond, i64 %tmp_123, i64 %tmp_59
  %in_buf_0_addr_17 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_15_mi
  %in_buf_0_load_15 = load float* %in_buf_0_addr_17, align 4
  %in_buf_0_load_16_mi = select i1 %exitcond, i64 %tmp_125, i64 %tmp_61
  %in_buf_0_addr_18 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_16_mi
  %in_buf_0_load_16 = load float* %in_buf_0_addr_18, align 4
  %in_buf_0_load_17_mi = select i1 %exitcond, i64 %tmp_127, i64 %tmp_63
  %in_buf_0_addr_19 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_17_mi
  %in_buf_0_load_17 = load float* %in_buf_0_addr_19, align 4
  %in_buf_0_load_18_mi = select i1 %exitcond, i64 %tmp_129, i64 %tmp_65
  %in_buf_0_addr_20 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_18_mi
  %in_buf_0_load_18 = load float* %in_buf_0_addr_20, align 4
  %in_buf_0_load_19_mi = select i1 %exitcond, i64 %tmp_131, i64 %tmp_67
  %in_buf_0_addr_21 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_19_mi
  %in_buf_0_load_19 = load float* %in_buf_0_addr_21, align 4
  %in_buf_0_load_20_mi = select i1 %exitcond, i64 %tmp_133, i64 %tmp_69
  %in_buf_0_addr_22 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_20_mi
  %in_buf_0_load_20 = load float* %in_buf_0_addr_22, align 4
  %in_buf_0_load_21_mi = select i1 %exitcond, i64 %tmp_135, i64 %tmp_71
  %in_buf_0_addr_23 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_21_mi
  %in_buf_0_load_21 = load float* %in_buf_0_addr_23, align 4
  %in_buf_0_load_22_mi = select i1 %exitcond, i64 %tmp_137, i64 %tmp_73
  %in_buf_0_addr_24 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_22_mi
  %in_buf_0_load_22 = load float* %in_buf_0_addr_24, align 4
  %in_buf_0_load_23_mi = select i1 %exitcond, i64 %tmp_139, i64 %tmp_75
  %in_buf_0_addr_25 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_23_mi
  %in_buf_0_load_23 = load float* %in_buf_0_addr_25, align 4
  %in_buf_0_load_24_mi = select i1 %exitcond, i64 %tmp_141, i64 %tmp_77
  %in_buf_0_addr_26 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_24_mi
  %in_buf_0_load_24 = load float* %in_buf_0_addr_26, align 4
  %in_buf_0_load_25_mi = select i1 %exitcond, i64 %tmp_143, i64 %tmp_79
  %in_buf_0_addr_27 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_25_mi
  %in_buf_0_load_25 = load float* %in_buf_0_addr_27, align 4
  %in_buf_0_load_26_mi = select i1 %exitcond, i64 %tmp_145, i64 %tmp_81
  %in_buf_0_addr_28 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_26_mi
  %in_buf_0_load_26 = load float* %in_buf_0_addr_28, align 4
  %in_buf_0_load_27_mi = select i1 %exitcond, i64 %tmp_147, i64 %tmp_83
  %in_buf_0_addr_29 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_27_mi
  %in_buf_0_load_27 = load float* %in_buf_0_addr_29, align 4
  %in_buf_0_load_28_mi = select i1 %exitcond, i64 %tmp_149, i64 %tmp_85
  %in_buf_0_addr_30 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_28_mi
  %in_buf_0_load_28 = load float* %in_buf_0_addr_30, align 4
  %in_buf_0_load_29_mi = select i1 %exitcond, i64 %tmp_151, i64 %tmp_87
  %in_buf_0_addr_31 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_29_mi
  %in_buf_0_load_29 = load float* %in_buf_0_addr_31, align 4
  %in_buf_0_load_30_mi = select i1 %exitcond, i64 %tmp_153, i64 %tmp_89
  %in_buf_0_addr_32 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_30_mi
  %in_buf_0_load_30 = load float* %in_buf_0_addr_32, align 4
  %in_buf_0_load_31_mi = select i1 %exitcond, i64 %tmp_155, i64 %tmp_91
  %in_buf_0_addr_33 = getelementptr [256 x float]* %in_buf_0, i64 0, i64 %in_buf_0_load_31_mi
  %in_buf_0_load_31 = load float* %in_buf_0_addr_33, align 4
  %in_buf_1_addr_2 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_mid2
  %in_buf_1_load = load float* %in_buf_1_addr_2, align 4
  %in_buf_1_addr_3 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_1_mid
  %in_buf_1_load_1 = load float* %in_buf_1_addr_3, align 4
  %in_buf_1_addr_4 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_2_mid
  %in_buf_1_load_2 = load float* %in_buf_1_addr_4, align 4
  %in_buf_1_addr_5 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_3_mid
  %in_buf_1_load_3 = load float* %in_buf_1_addr_5, align 4
  %in_buf_1_addr_6 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_4_mid
  %in_buf_1_load_4 = load float* %in_buf_1_addr_6, align 4
  %in_buf_1_addr_7 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_5_mid
  %in_buf_1_load_5 = load float* %in_buf_1_addr_7, align 4
  %in_buf_1_addr_8 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_6_mid
  %in_buf_1_load_6 = load float* %in_buf_1_addr_8, align 4
  %in_buf_1_addr_9 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_7_mid
  %in_buf_1_load_7 = load float* %in_buf_1_addr_9, align 4
  %in_buf_1_addr_10 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_8_mid
  %in_buf_1_load_8 = load float* %in_buf_1_addr_10, align 4
  %in_buf_1_addr_11 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_9_mid
  %in_buf_1_load_9 = load float* %in_buf_1_addr_11, align 4
  %in_buf_1_addr_12 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_10_mi
  %in_buf_1_load_10 = load float* %in_buf_1_addr_12, align 4
  %in_buf_1_addr_13 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_11_mi
  %in_buf_1_load_11 = load float* %in_buf_1_addr_13, align 4
  %in_buf_1_addr_14 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_12_mi
  %in_buf_1_load_12 = load float* %in_buf_1_addr_14, align 4
  %in_buf_1_addr_15 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_13_mi
  %in_buf_1_load_13 = load float* %in_buf_1_addr_15, align 4
  %in_buf_1_addr_16 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_14_mi
  %in_buf_1_load_14 = load float* %in_buf_1_addr_16, align 4
  %in_buf_1_addr_17 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_15_mi
  %in_buf_1_load_15 = load float* %in_buf_1_addr_17, align 4
  %in_buf_1_addr_18 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_16_mi
  %in_buf_1_load_16 = load float* %in_buf_1_addr_18, align 4
  %in_buf_1_addr_19 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_17_mi
  %in_buf_1_load_17 = load float* %in_buf_1_addr_19, align 4
  %in_buf_1_addr_20 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_18_mi
  %in_buf_1_load_18 = load float* %in_buf_1_addr_20, align 4
  %in_buf_1_addr_21 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_19_mi
  %in_buf_1_load_19 = load float* %in_buf_1_addr_21, align 4
  %in_buf_1_addr_22 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_20_mi
  %in_buf_1_load_20 = load float* %in_buf_1_addr_22, align 4
  %in_buf_1_addr_23 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_21_mi
  %in_buf_1_load_21 = load float* %in_buf_1_addr_23, align 4
  %in_buf_1_addr_24 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_22_mi
  %in_buf_1_load_22 = load float* %in_buf_1_addr_24, align 4
  %in_buf_1_addr_25 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_23_mi
  %in_buf_1_load_23 = load float* %in_buf_1_addr_25, align 4
  %in_buf_1_addr_26 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_24_mi
  %in_buf_1_load_24 = load float* %in_buf_1_addr_26, align 4
  %in_buf_1_addr_27 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_25_mi
  %in_buf_1_load_25 = load float* %in_buf_1_addr_27, align 4
  %in_buf_1_addr_28 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_26_mi
  %in_buf_1_load_26 = load float* %in_buf_1_addr_28, align 4
  %in_buf_1_addr_29 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_27_mi
  %in_buf_1_load_27 = load float* %in_buf_1_addr_29, align 4
  %in_buf_1_addr_30 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_28_mi
  %in_buf_1_load_28 = load float* %in_buf_1_addr_30, align 4
  %in_buf_1_addr_31 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_29_mi
  %in_buf_1_load_29 = load float* %in_buf_1_addr_31, align 4
  %in_buf_1_addr_32 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_30_mi
  %in_buf_1_load_30 = load float* %in_buf_1_addr_32, align 4
  %in_buf_1_addr_33 = getelementptr [256 x float]* %in_buf_1, i64 0, i64 %in_buf_0_load_31_mi
  %in_buf_1_load_31 = load float* %in_buf_1_addr_33, align 4
  %in_buf_2_addr_2 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_mid2
  %in_buf_2_load = load float* %in_buf_2_addr_2, align 4
  %in_buf_2_addr_3 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_1_mid
  %in_buf_2_load_1 = load float* %in_buf_2_addr_3, align 4
  %in_buf_2_addr_4 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_2_mid
  %in_buf_2_load_2 = load float* %in_buf_2_addr_4, align 4
  %in_buf_2_addr_5 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_3_mid
  %in_buf_2_load_3 = load float* %in_buf_2_addr_5, align 4
  %in_buf_2_addr_6 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_4_mid
  %in_buf_2_load_4 = load float* %in_buf_2_addr_6, align 4
  %in_buf_2_addr_7 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_5_mid
  %in_buf_2_load_5 = load float* %in_buf_2_addr_7, align 4
  %in_buf_2_addr_8 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_6_mid
  %in_buf_2_load_6 = load float* %in_buf_2_addr_8, align 4
  %in_buf_2_addr_9 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_7_mid
  %in_buf_2_load_7 = load float* %in_buf_2_addr_9, align 4
  %in_buf_2_addr_10 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_8_mid
  %in_buf_2_load_8 = load float* %in_buf_2_addr_10, align 4
  %in_buf_2_addr_11 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_9_mid
  %in_buf_2_load_9 = load float* %in_buf_2_addr_11, align 4
  %in_buf_2_addr_12 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_10_mi
  %in_buf_2_load_10 = load float* %in_buf_2_addr_12, align 4
  %in_buf_2_addr_13 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_11_mi
  %in_buf_2_load_11 = load float* %in_buf_2_addr_13, align 4
  %in_buf_2_addr_14 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_12_mi
  %in_buf_2_load_12 = load float* %in_buf_2_addr_14, align 4
  %in_buf_2_addr_15 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_13_mi
  %in_buf_2_load_13 = load float* %in_buf_2_addr_15, align 4
  %in_buf_2_addr_16 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_14_mi
  %in_buf_2_load_14 = load float* %in_buf_2_addr_16, align 4
  %in_buf_2_addr_17 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_15_mi
  %in_buf_2_load_15 = load float* %in_buf_2_addr_17, align 4
  %in_buf_2_addr_18 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_16_mi
  %in_buf_2_load_16 = load float* %in_buf_2_addr_18, align 4
  %in_buf_2_addr_19 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_17_mi
  %in_buf_2_load_17 = load float* %in_buf_2_addr_19, align 4
  %in_buf_2_addr_20 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_18_mi
  %in_buf_2_load_18 = load float* %in_buf_2_addr_20, align 4
  %in_buf_2_addr_21 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_19_mi
  %in_buf_2_load_19 = load float* %in_buf_2_addr_21, align 4
  %in_buf_2_addr_22 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_20_mi
  %in_buf_2_load_20 = load float* %in_buf_2_addr_22, align 4
  %in_buf_2_addr_23 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_21_mi
  %in_buf_2_load_21 = load float* %in_buf_2_addr_23, align 4
  %in_buf_2_addr_24 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_22_mi
  %in_buf_2_load_22 = load float* %in_buf_2_addr_24, align 4
  %in_buf_2_addr_25 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_23_mi
  %in_buf_2_load_23 = load float* %in_buf_2_addr_25, align 4
  %in_buf_2_addr_26 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_24_mi
  %in_buf_2_load_24 = load float* %in_buf_2_addr_26, align 4
  %in_buf_2_addr_27 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_25_mi
  %in_buf_2_load_25 = load float* %in_buf_2_addr_27, align 4
  %in_buf_2_addr_28 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_26_mi
  %in_buf_2_load_26 = load float* %in_buf_2_addr_28, align 4
  %in_buf_2_addr_29 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_27_mi
  %in_buf_2_load_27 = load float* %in_buf_2_addr_29, align 4
  %in_buf_2_addr_30 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_28_mi
  %in_buf_2_load_28 = load float* %in_buf_2_addr_30, align 4
  %in_buf_2_addr_31 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_29_mi
  %in_buf_2_load_29 = load float* %in_buf_2_addr_31, align 4
  %in_buf_2_addr_32 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_30_mi
  %in_buf_2_load_30 = load float* %in_buf_2_addr_32, align 4
  %in_buf_2_addr_33 = getelementptr [256 x float]* %in_buf_2, i64 0, i64 %in_buf_0_load_31_mi
  %in_buf_2_load_31 = load float* %in_buf_2_addr_33, align 4
  %in_buf_3_addr_2 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_mid2
  %in_buf_3_load = load float* %in_buf_3_addr_2, align 4
  %in_buf_3_addr_3 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_1_mid
  %in_buf_3_load_1 = load float* %in_buf_3_addr_3, align 4
  %in_buf_3_addr_4 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_2_mid
  %in_buf_3_load_2 = load float* %in_buf_3_addr_4, align 4
  %in_buf_3_addr_5 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_3_mid
  %in_buf_3_load_3 = load float* %in_buf_3_addr_5, align 4
  %in_buf_3_addr_6 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_4_mid
  %in_buf_3_load_4 = load float* %in_buf_3_addr_6, align 4
  %in_buf_3_addr_7 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_5_mid
  %in_buf_3_load_5 = load float* %in_buf_3_addr_7, align 4
  %in_buf_3_addr_8 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_6_mid
  %in_buf_3_load_6 = load float* %in_buf_3_addr_8, align 4
  %in_buf_3_addr_9 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_7_mid
  %in_buf_3_load_7 = load float* %in_buf_3_addr_9, align 4
  %in_buf_3_addr_10 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_8_mid
  %in_buf_3_load_8 = load float* %in_buf_3_addr_10, align 4
  %in_buf_3_addr_11 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_9_mid
  %in_buf_3_load_9 = load float* %in_buf_3_addr_11, align 4
  %in_buf_3_addr_12 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_10_mi
  %in_buf_3_load_10 = load float* %in_buf_3_addr_12, align 4
  %in_buf_3_addr_13 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_11_mi
  %in_buf_3_load_11 = load float* %in_buf_3_addr_13, align 4
  %in_buf_3_addr_14 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_12_mi
  %in_buf_3_load_12 = load float* %in_buf_3_addr_14, align 4
  %in_buf_3_addr_15 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_13_mi
  %in_buf_3_load_13 = load float* %in_buf_3_addr_15, align 4
  %in_buf_3_addr_16 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_14_mi
  %in_buf_3_load_14 = load float* %in_buf_3_addr_16, align 4
  %in_buf_3_addr_17 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_15_mi
  %in_buf_3_load_15 = load float* %in_buf_3_addr_17, align 4
  %in_buf_3_addr_18 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_16_mi
  %in_buf_3_load_16 = load float* %in_buf_3_addr_18, align 4
  %in_buf_3_addr_19 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_17_mi
  %in_buf_3_load_17 = load float* %in_buf_3_addr_19, align 4
  %in_buf_3_addr_20 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_18_mi
  %in_buf_3_load_18 = load float* %in_buf_3_addr_20, align 4
  %in_buf_3_addr_21 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_19_mi
  %in_buf_3_load_19 = load float* %in_buf_3_addr_21, align 4
  %in_buf_3_addr_22 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_20_mi
  %in_buf_3_load_20 = load float* %in_buf_3_addr_22, align 4
  %in_buf_3_addr_23 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_21_mi
  %in_buf_3_load_21 = load float* %in_buf_3_addr_23, align 4
  %in_buf_3_addr_24 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_22_mi
  %in_buf_3_load_22 = load float* %in_buf_3_addr_24, align 4
  %in_buf_3_addr_25 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_23_mi
  %in_buf_3_load_23 = load float* %in_buf_3_addr_25, align 4
  %in_buf_3_addr_26 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_24_mi
  %in_buf_3_load_24 = load float* %in_buf_3_addr_26, align 4
  %in_buf_3_addr_27 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_25_mi
  %in_buf_3_load_25 = load float* %in_buf_3_addr_27, align 4
  %in_buf_3_addr_28 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_26_mi
  %in_buf_3_load_26 = load float* %in_buf_3_addr_28, align 4
  %in_buf_3_addr_29 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_27_mi
  %in_buf_3_load_27 = load float* %in_buf_3_addr_29, align 4
  %in_buf_3_addr_30 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_28_mi
  %in_buf_3_load_28 = load float* %in_buf_3_addr_30, align 4
  %in_buf_3_addr_31 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_29_mi
  %in_buf_3_load_29 = load float* %in_buf_3_addr_31, align 4
  %in_buf_3_addr_32 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_30_mi
  %in_buf_3_load_30 = load float* %in_buf_3_addr_32, align 4
  %in_buf_3_addr_33 = getelementptr [256 x float]* %in_buf_3, i64 0, i64 %in_buf_0_load_31_mi
  %in_buf_3_load_31 = load float* %in_buf_3_addr_33, align 4
  %in_buf_4_addr_2 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_mid2
  %in_buf_4_load = load float* %in_buf_4_addr_2, align 4
  %in_buf_4_addr_3 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_1_mid
  %in_buf_4_load_1 = load float* %in_buf_4_addr_3, align 4
  %in_buf_4_addr_4 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_2_mid
  %in_buf_4_load_2 = load float* %in_buf_4_addr_4, align 4
  %in_buf_4_addr_5 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_3_mid
  %in_buf_4_load_3 = load float* %in_buf_4_addr_5, align 4
  %in_buf_4_addr_6 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_4_mid
  %in_buf_4_load_4 = load float* %in_buf_4_addr_6, align 4
  %in_buf_4_addr_7 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_5_mid
  %in_buf_4_load_5 = load float* %in_buf_4_addr_7, align 4
  %in_buf_4_addr_8 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_6_mid
  %in_buf_4_load_6 = load float* %in_buf_4_addr_8, align 4
  %in_buf_4_addr_9 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_7_mid
  %in_buf_4_load_7 = load float* %in_buf_4_addr_9, align 4
  %in_buf_4_addr_10 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_8_mid
  %in_buf_4_load_8 = load float* %in_buf_4_addr_10, align 4
  %in_buf_4_addr_11 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_9_mid
  %in_buf_4_load_9 = load float* %in_buf_4_addr_11, align 4
  %in_buf_4_addr_12 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_10_mi
  %in_buf_4_load_10 = load float* %in_buf_4_addr_12, align 4
  %in_buf_4_addr_13 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_11_mi
  %in_buf_4_load_11 = load float* %in_buf_4_addr_13, align 4
  %in_buf_4_addr_14 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_12_mi
  %in_buf_4_load_12 = load float* %in_buf_4_addr_14, align 4
  %in_buf_4_addr_15 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_13_mi
  %in_buf_4_load_13 = load float* %in_buf_4_addr_15, align 4
  %in_buf_4_addr_16 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_14_mi
  %in_buf_4_load_14 = load float* %in_buf_4_addr_16, align 4
  %in_buf_4_addr_17 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_15_mi
  %in_buf_4_load_15 = load float* %in_buf_4_addr_17, align 4
  %in_buf_4_addr_18 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_16_mi
  %in_buf_4_load_16 = load float* %in_buf_4_addr_18, align 4
  %in_buf_4_addr_19 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_17_mi
  %in_buf_4_load_17 = load float* %in_buf_4_addr_19, align 4
  %in_buf_4_addr_20 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_18_mi
  %in_buf_4_load_18 = load float* %in_buf_4_addr_20, align 4
  %in_buf_4_addr_21 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_19_mi
  %in_buf_4_load_19 = load float* %in_buf_4_addr_21, align 4
  %in_buf_4_addr_22 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_20_mi
  %in_buf_4_load_20 = load float* %in_buf_4_addr_22, align 4
  %in_buf_4_addr_23 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_21_mi
  %in_buf_4_load_21 = load float* %in_buf_4_addr_23, align 4
  %in_buf_4_addr_24 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_22_mi
  %in_buf_4_load_22 = load float* %in_buf_4_addr_24, align 4
  %in_buf_4_addr_25 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_23_mi
  %in_buf_4_load_23 = load float* %in_buf_4_addr_25, align 4
  %in_buf_4_addr_26 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_24_mi
  %in_buf_4_load_24 = load float* %in_buf_4_addr_26, align 4
  %in_buf_4_addr_27 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_25_mi
  %in_buf_4_load_25 = load float* %in_buf_4_addr_27, align 4
  %in_buf_4_addr_28 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_26_mi
  %in_buf_4_load_26 = load float* %in_buf_4_addr_28, align 4
  %in_buf_4_addr_29 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_27_mi
  %in_buf_4_load_27 = load float* %in_buf_4_addr_29, align 4
  %in_buf_4_addr_30 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_28_mi
  %in_buf_4_load_28 = load float* %in_buf_4_addr_30, align 4
  %in_buf_4_addr_31 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_29_mi
  %in_buf_4_load_29 = load float* %in_buf_4_addr_31, align 4
  %in_buf_4_addr_32 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_30_mi
  %in_buf_4_load_30 = load float* %in_buf_4_addr_32, align 4
  %in_buf_4_addr_33 = getelementptr [256 x float]* %in_buf_4, i64 0, i64 %in_buf_0_load_31_mi
  %in_buf_4_load_31 = load float* %in_buf_4_addr_33, align 4
  %in_buf_5_addr_2 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_mid2
  %in_buf_5_load = load float* %in_buf_5_addr_2, align 4
  %in_buf_5_addr_3 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_1_mid
  %in_buf_5_load_1 = load float* %in_buf_5_addr_3, align 4
  %in_buf_5_addr_4 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_2_mid
  %in_buf_5_load_2 = load float* %in_buf_5_addr_4, align 4
  %in_buf_5_addr_5 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_3_mid
  %in_buf_5_load_3 = load float* %in_buf_5_addr_5, align 4
  %in_buf_5_addr_6 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_4_mid
  %in_buf_5_load_4 = load float* %in_buf_5_addr_6, align 4
  %in_buf_5_addr_7 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_5_mid
  %in_buf_5_load_5 = load float* %in_buf_5_addr_7, align 4
  %in_buf_5_addr_8 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_6_mid
  %in_buf_5_load_6 = load float* %in_buf_5_addr_8, align 4
  %in_buf_5_addr_9 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_7_mid
  %in_buf_5_load_7 = load float* %in_buf_5_addr_9, align 4
  %in_buf_5_addr_10 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_8_mid
  %in_buf_5_load_8 = load float* %in_buf_5_addr_10, align 4
  %in_buf_5_addr_11 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_9_mid
  %in_buf_5_load_9 = load float* %in_buf_5_addr_11, align 4
  %in_buf_5_addr_12 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_10_mi
  %in_buf_5_load_10 = load float* %in_buf_5_addr_12, align 4
  %in_buf_5_addr_13 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_11_mi
  %in_buf_5_load_11 = load float* %in_buf_5_addr_13, align 4
  %in_buf_5_addr_14 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_12_mi
  %in_buf_5_load_12 = load float* %in_buf_5_addr_14, align 4
  %in_buf_5_addr_15 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_13_mi
  %in_buf_5_load_13 = load float* %in_buf_5_addr_15, align 4
  %in_buf_5_addr_16 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_14_mi
  %in_buf_5_load_14 = load float* %in_buf_5_addr_16, align 4
  %in_buf_5_addr_17 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_15_mi
  %in_buf_5_load_15 = load float* %in_buf_5_addr_17, align 4
  %in_buf_5_addr_18 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_16_mi
  %in_buf_5_load_16 = load float* %in_buf_5_addr_18, align 4
  %in_buf_5_addr_19 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_17_mi
  %in_buf_5_load_17 = load float* %in_buf_5_addr_19, align 4
  %in_buf_5_addr_20 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_18_mi
  %in_buf_5_load_18 = load float* %in_buf_5_addr_20, align 4
  %in_buf_5_addr_21 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_19_mi
  %in_buf_5_load_19 = load float* %in_buf_5_addr_21, align 4
  %in_buf_5_addr_22 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_20_mi
  %in_buf_5_load_20 = load float* %in_buf_5_addr_22, align 4
  %in_buf_5_addr_23 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_21_mi
  %in_buf_5_load_21 = load float* %in_buf_5_addr_23, align 4
  %in_buf_5_addr_24 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_22_mi
  %in_buf_5_load_22 = load float* %in_buf_5_addr_24, align 4
  %in_buf_5_addr_25 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_23_mi
  %in_buf_5_load_23 = load float* %in_buf_5_addr_25, align 4
  %in_buf_5_addr_26 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_24_mi
  %in_buf_5_load_24 = load float* %in_buf_5_addr_26, align 4
  %in_buf_5_addr_27 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_25_mi
  %in_buf_5_load_25 = load float* %in_buf_5_addr_27, align 4
  %in_buf_5_addr_28 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_26_mi
  %in_buf_5_load_26 = load float* %in_buf_5_addr_28, align 4
  %in_buf_5_addr_29 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_27_mi
  %in_buf_5_load_27 = load float* %in_buf_5_addr_29, align 4
  %in_buf_5_addr_30 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_28_mi
  %in_buf_5_load_28 = load float* %in_buf_5_addr_30, align 4
  %in_buf_5_addr_31 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_29_mi
  %in_buf_5_load_29 = load float* %in_buf_5_addr_31, align 4
  %in_buf_5_addr_32 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_30_mi
  %in_buf_5_load_30 = load float* %in_buf_5_addr_32, align 4
  %in_buf_5_addr_33 = getelementptr [256 x float]* %in_buf_5, i64 0, i64 %in_buf_0_load_31_mi
  %in_buf_5_load_31 = load float* %in_buf_5_addr_33, align 4
  %in_buf_6_addr_2 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_mid2
  %in_buf_6_load = load float* %in_buf_6_addr_2, align 4
  %in_buf_6_addr_3 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_1_mid
  %in_buf_6_load_1 = load float* %in_buf_6_addr_3, align 4
  %in_buf_6_addr_4 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_2_mid
  %in_buf_6_load_2 = load float* %in_buf_6_addr_4, align 4
  %in_buf_6_addr_5 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_3_mid
  %in_buf_6_load_3 = load float* %in_buf_6_addr_5, align 4
  %in_buf_6_addr_6 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_4_mid
  %in_buf_6_load_4 = load float* %in_buf_6_addr_6, align 4
  %in_buf_6_addr_7 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_5_mid
  %in_buf_6_load_5 = load float* %in_buf_6_addr_7, align 4
  %in_buf_6_addr_8 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_6_mid
  %in_buf_6_load_6 = load float* %in_buf_6_addr_8, align 4
  %in_buf_6_addr_9 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_7_mid
  %in_buf_6_load_7 = load float* %in_buf_6_addr_9, align 4
  %in_buf_6_addr_10 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_8_mid
  %in_buf_6_load_8 = load float* %in_buf_6_addr_10, align 4
  %in_buf_6_addr_11 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_9_mid
  %in_buf_6_load_9 = load float* %in_buf_6_addr_11, align 4
  %in_buf_6_addr_12 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_10_mi
  %in_buf_6_load_10 = load float* %in_buf_6_addr_12, align 4
  %in_buf_6_addr_13 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_11_mi
  %in_buf_6_load_11 = load float* %in_buf_6_addr_13, align 4
  %in_buf_6_addr_14 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_12_mi
  %in_buf_6_load_12 = load float* %in_buf_6_addr_14, align 4
  %in_buf_6_addr_15 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_13_mi
  %in_buf_6_load_13 = load float* %in_buf_6_addr_15, align 4
  %in_buf_6_addr_16 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_14_mi
  %in_buf_6_load_14 = load float* %in_buf_6_addr_16, align 4
  %in_buf_6_addr_17 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_15_mi
  %in_buf_6_load_15 = load float* %in_buf_6_addr_17, align 4
  %in_buf_6_addr_18 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_16_mi
  %in_buf_6_load_16 = load float* %in_buf_6_addr_18, align 4
  %in_buf_6_addr_19 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_17_mi
  %in_buf_6_load_17 = load float* %in_buf_6_addr_19, align 4
  %in_buf_6_addr_20 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_18_mi
  %in_buf_6_load_18 = load float* %in_buf_6_addr_20, align 4
  %in_buf_6_addr_21 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_19_mi
  %in_buf_6_load_19 = load float* %in_buf_6_addr_21, align 4
  %in_buf_6_addr_22 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_20_mi
  %in_buf_6_load_20 = load float* %in_buf_6_addr_22, align 4
  %in_buf_6_addr_23 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_21_mi
  %in_buf_6_load_21 = load float* %in_buf_6_addr_23, align 4
  %in_buf_6_addr_24 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_22_mi
  %in_buf_6_load_22 = load float* %in_buf_6_addr_24, align 4
  %in_buf_6_addr_25 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_23_mi
  %in_buf_6_load_23 = load float* %in_buf_6_addr_25, align 4
  %in_buf_6_addr_26 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_24_mi
  %in_buf_6_load_24 = load float* %in_buf_6_addr_26, align 4
  %in_buf_6_addr_27 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_25_mi
  %in_buf_6_load_25 = load float* %in_buf_6_addr_27, align 4
  %in_buf_6_addr_28 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_26_mi
  %in_buf_6_load_26 = load float* %in_buf_6_addr_28, align 4
  %in_buf_6_addr_29 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_27_mi
  %in_buf_6_load_27 = load float* %in_buf_6_addr_29, align 4
  %in_buf_6_addr_30 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_28_mi
  %in_buf_6_load_28 = load float* %in_buf_6_addr_30, align 4
  %in_buf_6_addr_31 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_29_mi
  %in_buf_6_load_29 = load float* %in_buf_6_addr_31, align 4
  %in_buf_6_addr_32 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_30_mi
  %in_buf_6_load_30 = load float* %in_buf_6_addr_32, align 4
  %in_buf_6_addr_33 = getelementptr [256 x float]* %in_buf_6, i64 0, i64 %in_buf_0_load_31_mi
  %in_buf_6_load_31 = load float* %in_buf_6_addr_33, align 4
  %in_buf_7_addr_2 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_mid2
  %in_buf_7_load = load float* %in_buf_7_addr_2, align 4
  %in_buf_7_addr_3 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_1_mid
  %in_buf_7_load_1 = load float* %in_buf_7_addr_3, align 4
  %in_buf_7_addr_4 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_2_mid
  %in_buf_7_load_2 = load float* %in_buf_7_addr_4, align 4
  %in_buf_7_addr_5 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_3_mid
  %in_buf_7_load_3 = load float* %in_buf_7_addr_5, align 4
  %in_buf_7_addr_6 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_4_mid
  %in_buf_7_load_4 = load float* %in_buf_7_addr_6, align 4
  %in_buf_7_addr_7 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_5_mid
  %in_buf_7_load_5 = load float* %in_buf_7_addr_7, align 4
  %in_buf_7_addr_8 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_6_mid
  %in_buf_7_load_6 = load float* %in_buf_7_addr_8, align 4
  %in_buf_7_addr_9 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_7_mid
  %in_buf_7_load_7 = load float* %in_buf_7_addr_9, align 4
  %in_buf_7_addr_10 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_8_mid
  %in_buf_7_load_8 = load float* %in_buf_7_addr_10, align 4
  %in_buf_7_addr_11 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_9_mid
  %in_buf_7_load_9 = load float* %in_buf_7_addr_11, align 4
  %in_buf_7_addr_12 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_10_mi
  %in_buf_7_load_10 = load float* %in_buf_7_addr_12, align 4
  %in_buf_7_addr_13 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_11_mi
  %in_buf_7_load_11 = load float* %in_buf_7_addr_13, align 4
  %in_buf_7_addr_14 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_12_mi
  %in_buf_7_load_12 = load float* %in_buf_7_addr_14, align 4
  %in_buf_7_addr_15 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_13_mi
  %in_buf_7_load_13 = load float* %in_buf_7_addr_15, align 4
  %in_buf_7_addr_16 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_14_mi
  %in_buf_7_load_14 = load float* %in_buf_7_addr_16, align 4
  %in_buf_7_addr_17 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_15_mi
  %in_buf_7_load_15 = load float* %in_buf_7_addr_17, align 4
  %in_buf_7_addr_18 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_16_mi
  %in_buf_7_load_16 = load float* %in_buf_7_addr_18, align 4
  %in_buf_7_addr_19 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_17_mi
  %in_buf_7_load_17 = load float* %in_buf_7_addr_19, align 4
  %in_buf_7_addr_20 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_18_mi
  %in_buf_7_load_18 = load float* %in_buf_7_addr_20, align 4
  %in_buf_7_addr_21 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_19_mi
  %in_buf_7_load_19 = load float* %in_buf_7_addr_21, align 4
  %in_buf_7_addr_22 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_20_mi
  %in_buf_7_load_20 = load float* %in_buf_7_addr_22, align 4
  %in_buf_7_addr_23 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_21_mi
  %in_buf_7_load_21 = load float* %in_buf_7_addr_23, align 4
  %in_buf_7_addr_24 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_22_mi
  %in_buf_7_load_22 = load float* %in_buf_7_addr_24, align 4
  %in_buf_7_addr_25 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_23_mi
  %in_buf_7_load_23 = load float* %in_buf_7_addr_25, align 4
  %in_buf_7_addr_26 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_24_mi
  %in_buf_7_load_24 = load float* %in_buf_7_addr_26, align 4
  %in_buf_7_addr_27 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_25_mi
  %in_buf_7_load_25 = load float* %in_buf_7_addr_27, align 4
  %in_buf_7_addr_28 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_26_mi
  %in_buf_7_load_26 = load float* %in_buf_7_addr_28, align 4
  %in_buf_7_addr_29 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_27_mi
  %in_buf_7_load_27 = load float* %in_buf_7_addr_29, align 4
  %in_buf_7_addr_30 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_28_mi
  %in_buf_7_load_28 = load float* %in_buf_7_addr_30, align 4
  %in_buf_7_addr_31 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_29_mi
  %in_buf_7_load_29 = load float* %in_buf_7_addr_31, align 4
  %in_buf_7_addr_32 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_30_mi
  %in_buf_7_load_30 = load float* %in_buf_7_addr_32, align 4
  %in_buf_7_addr_33 = getelementptr [256 x float]* %in_buf_7, i64 0, i64 %in_buf_0_load_31_mi
  %in_buf_7_load_31 = load float* %in_buf_7_addr_33, align 4
  call void (...)* @_ssdm_op_SpecLoopName([3 x i8]* @p_str12) nounwind
  %tmp_29 = call i32 (...)* @_ssdm_op_SpecRegionBegin([3 x i8]* @p_str12)
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %tmp_28 = zext i4 %j5_mid2 to i64
  %tmp_28_cast = zext i4 %j5_mid2 to i8
  %tmp_159 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %j5_mid2, i5 0)
  %tmp_160 = zext i9 %tmp_159 to i64
  %weight_buf_0_addr_2 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_160
  %tmp_161 = or i9 %tmp_159, 1
  %tmp_162 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_161)
  %weight_buf_0_addr_3 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_162
  %tmp_163 = or i9 %tmp_159, 2
  %tmp_164 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_163)
  %weight_buf_0_addr_4 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_164
  %tmp_165 = or i9 %tmp_159, 3
  %tmp_166 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_165)
  %weight_buf_0_addr_5 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_166
  %tmp_167 = or i9 %tmp_159, 4
  %tmp_168 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_167)
  %weight_buf_0_addr_6 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_168
  %tmp_169 = or i9 %tmp_159, 5
  %tmp_170 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_169)
  %weight_buf_0_addr_7 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_170
  %tmp_171 = or i9 %tmp_159, 6
  %tmp_172 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_171)
  %weight_buf_0_addr_8 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_172
  %tmp_173 = or i9 %tmp_159, 7
  %tmp_174 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_173)
  %weight_buf_0_addr_9 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_174
  %tmp_175 = or i9 %tmp_159, 8
  %tmp_176 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_175)
  %weight_buf_0_addr_10 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_176
  %tmp_177 = or i9 %tmp_159, 9
  %tmp_178 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_177)
  %weight_buf_0_addr_11 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_178
  %tmp_179 = or i9 %tmp_159, 10
  %tmp_180 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_179)
  %weight_buf_0_addr_12 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_180
  %tmp_181 = or i9 %tmp_159, 11
  %tmp_182 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_181)
  %weight_buf_0_addr_13 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_182
  %tmp_183 = or i9 %tmp_159, 12
  %tmp_184 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_183)
  %weight_buf_0_addr_14 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_184
  %tmp_185 = or i9 %tmp_159, 13
  %tmp_186 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_185)
  %weight_buf_0_addr_15 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_186
  %tmp_187 = or i9 %tmp_159, 14
  %tmp_188 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_187)
  %weight_buf_0_addr_16 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_188
  %tmp_189 = or i9 %tmp_159, 15
  %tmp_190 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_189)
  %weight_buf_0_addr_17 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_190
  %tmp_191 = or i9 %tmp_159, 16
  %tmp_192 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_191)
  %weight_buf_0_addr_18 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_192
  %tmp_193 = or i9 %tmp_159, 17
  %tmp_194 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_193)
  %weight_buf_0_addr_19 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_194
  %tmp_195 = or i9 %tmp_159, 18
  %tmp_196 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_195)
  %weight_buf_0_addr_20 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_196
  %tmp_197 = or i9 %tmp_159, 19
  %tmp_198 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_197)
  %weight_buf_0_addr_21 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_198
  %tmp_199 = or i9 %tmp_159, 20
  %tmp_200 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_199)
  %weight_buf_0_addr_22 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_200
  %tmp_201 = or i9 %tmp_159, 21
  %tmp_202 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_201)
  %weight_buf_0_addr_23 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_202
  %tmp_203 = or i9 %tmp_159, 22
  %tmp_204 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_203)
  %weight_buf_0_addr_24 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_204
  %tmp_205 = or i9 %tmp_159, 23
  %tmp_206 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_205)
  %weight_buf_0_addr_25 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_206
  %tmp_207 = or i9 %tmp_159, 24
  %tmp_208 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_207)
  %weight_buf_0_addr_26 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_208
  %tmp_209 = or i9 %tmp_159, 25
  %tmp_210 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_209)
  %weight_buf_0_addr_27 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_210
  %tmp_211 = or i9 %tmp_159, 26
  %tmp_212 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_211)
  %weight_buf_0_addr_28 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_212
  %tmp_213 = or i9 %tmp_159, 27
  %tmp_214 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_213)
  %weight_buf_0_addr_29 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_214
  %tmp_215 = or i9 %tmp_159, 28
  %tmp_216 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_215)
  %weight_buf_0_addr_30 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_216
  %tmp_217 = or i9 %tmp_159, 29
  %tmp_218 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_217)
  %weight_buf_0_addr_31 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_218
  %tmp_219 = or i9 %tmp_159, 30
  %tmp_220 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_219)
  %weight_buf_0_addr_32 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_220
  %tmp_221 = or i9 %tmp_159, 31
  %tmp_222 = call i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55 0, i9 %tmp_221)
  %weight_buf_0_addr_33 = getelementptr [320 x float]* %weight_buf_0, i64 0, i64 %tmp_222
  %weight_buf_1_addr_2 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_160
  %weight_buf_1_addr_3 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_162
  %weight_buf_1_addr_4 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_164
  %weight_buf_1_addr_5 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_166
  %weight_buf_1_addr_6 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_168
  %weight_buf_1_addr_7 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_170
  %weight_buf_1_addr_8 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_172
  %weight_buf_1_addr_9 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_174
  %weight_buf_1_addr_10 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_176
  %weight_buf_1_addr_11 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_178
  %weight_buf_1_addr_12 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_180
  %weight_buf_1_addr_13 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_182
  %weight_buf_1_addr_14 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_184
  %weight_buf_1_addr_15 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_186
  %weight_buf_1_addr_16 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_188
  %weight_buf_1_addr_17 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_190
  %weight_buf_1_addr_18 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_192
  %weight_buf_1_addr_19 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_194
  %weight_buf_1_addr_20 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_196
  %weight_buf_1_addr_21 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_198
  %weight_buf_1_addr_22 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_200
  %weight_buf_1_addr_23 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_202
  %weight_buf_1_addr_24 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_204
  %weight_buf_1_addr_25 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_206
  %weight_buf_1_addr_26 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_208
  %weight_buf_1_addr_27 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_210
  %weight_buf_1_addr_28 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_212
  %weight_buf_1_addr_29 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_214
  %weight_buf_1_addr_30 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_216
  %weight_buf_1_addr_31 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_218
  %weight_buf_1_addr_32 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_220
  %weight_buf_1_addr_33 = getelementptr [320 x float]* %weight_buf_1, i64 0, i64 %tmp_222
  %weight_buf_2_addr_2 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_160
  %weight_buf_2_addr_3 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_162
  %weight_buf_2_addr_4 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_164
  %weight_buf_2_addr_5 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_166
  %weight_buf_2_addr_6 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_168
  %weight_buf_2_addr_7 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_170
  %weight_buf_2_addr_8 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_172
  %weight_buf_2_addr_9 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_174
  %weight_buf_2_addr_10 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_176
  %weight_buf_2_addr_11 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_178
  %weight_buf_2_addr_12 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_180
  %weight_buf_2_addr_13 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_182
  %weight_buf_2_addr_14 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_184
  %weight_buf_2_addr_15 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_186
  %weight_buf_2_addr_16 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_188
  %weight_buf_2_addr_17 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_190
  %weight_buf_2_addr_18 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_192
  %weight_buf_2_addr_19 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_194
  %weight_buf_2_addr_20 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_196
  %weight_buf_2_addr_21 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_198
  %weight_buf_2_addr_22 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_200
  %weight_buf_2_addr_23 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_202
  %weight_buf_2_addr_24 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_204
  %weight_buf_2_addr_25 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_206
  %weight_buf_2_addr_26 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_208
  %weight_buf_2_addr_27 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_210
  %weight_buf_2_addr_28 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_212
  %weight_buf_2_addr_29 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_214
  %weight_buf_2_addr_30 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_216
  %weight_buf_2_addr_31 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_218
  %weight_buf_2_addr_32 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_220
  %weight_buf_2_addr_33 = getelementptr [320 x float]* %weight_buf_2, i64 0, i64 %tmp_222
  %weight_buf_3_addr_2 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_160
  %weight_buf_3_addr_3 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_162
  %weight_buf_3_addr_4 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_164
  %weight_buf_3_addr_5 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_166
  %weight_buf_3_addr_6 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_168
  %weight_buf_3_addr_7 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_170
  %weight_buf_3_addr_8 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_172
  %weight_buf_3_addr_9 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_174
  %weight_buf_3_addr_10 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_176
  %weight_buf_3_addr_11 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_178
  %weight_buf_3_addr_12 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_180
  %weight_buf_3_addr_13 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_182
  %weight_buf_3_addr_14 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_184
  %weight_buf_3_addr_15 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_186
  %weight_buf_3_addr_16 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_188
  %weight_buf_3_addr_17 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_190
  %weight_buf_3_addr_18 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_192
  %weight_buf_3_addr_19 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_194
  %weight_buf_3_addr_20 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_196
  %weight_buf_3_addr_21 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_198
  %weight_buf_3_addr_22 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_200
  %weight_buf_3_addr_23 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_202
  %weight_buf_3_addr_24 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_204
  %weight_buf_3_addr_25 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_206
  %weight_buf_3_addr_26 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_208
  %weight_buf_3_addr_27 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_210
  %weight_buf_3_addr_28 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_212
  %weight_buf_3_addr_29 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_214
  %weight_buf_3_addr_30 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_216
  %weight_buf_3_addr_31 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_218
  %weight_buf_3_addr_32 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_220
  %weight_buf_3_addr_33 = getelementptr [320 x float]* %weight_buf_3, i64 0, i64 %tmp_222
  %weight_buf_4_addr_2 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_160
  %weight_buf_4_addr_3 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_162
  %weight_buf_4_addr_4 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_164
  %weight_buf_4_addr_5 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_166
  %weight_buf_4_addr_6 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_168
  %weight_buf_4_addr_7 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_170
  %weight_buf_4_addr_8 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_172
  %weight_buf_4_addr_9 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_174
  %weight_buf_4_addr_10 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_176
  %weight_buf_4_addr_11 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_178
  %weight_buf_4_addr_12 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_180
  %weight_buf_4_addr_13 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_182
  %weight_buf_4_addr_14 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_184
  %weight_buf_4_addr_15 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_186
  %weight_buf_4_addr_16 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_188
  %weight_buf_4_addr_17 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_190
  %weight_buf_4_addr_18 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_192
  %weight_buf_4_addr_19 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_194
  %weight_buf_4_addr_20 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_196
  %weight_buf_4_addr_21 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_198
  %weight_buf_4_addr_22 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_200
  %weight_buf_4_addr_23 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_202
  %weight_buf_4_addr_24 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_204
  %weight_buf_4_addr_25 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_206
  %weight_buf_4_addr_26 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_208
  %weight_buf_4_addr_27 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_210
  %weight_buf_4_addr_28 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_212
  %weight_buf_4_addr_29 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_214
  %weight_buf_4_addr_30 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_216
  %weight_buf_4_addr_31 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_218
  %weight_buf_4_addr_32 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_220
  %weight_buf_4_addr_33 = getelementptr [320 x float]* %weight_buf_4, i64 0, i64 %tmp_222
  %weight_buf_5_addr_2 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_160
  %weight_buf_5_addr_3 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_162
  %weight_buf_5_addr_4 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_164
  %weight_buf_5_addr_5 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_166
  %weight_buf_5_addr_6 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_168
  %weight_buf_5_addr_7 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_170
  %weight_buf_5_addr_8 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_172
  %weight_buf_5_addr_9 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_174
  %weight_buf_5_addr_10 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_176
  %weight_buf_5_addr_11 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_178
  %weight_buf_5_addr_12 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_180
  %weight_buf_5_addr_13 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_182
  %weight_buf_5_addr_14 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_184
  %weight_buf_5_addr_15 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_186
  %weight_buf_5_addr_16 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_188
  %weight_buf_5_addr_17 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_190
  %weight_buf_5_addr_18 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_192
  %weight_buf_5_addr_19 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_194
  %weight_buf_5_addr_20 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_196
  %weight_buf_5_addr_21 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_198
  %weight_buf_5_addr_22 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_200
  %weight_buf_5_addr_23 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_202
  %weight_buf_5_addr_24 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_204
  %weight_buf_5_addr_25 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_206
  %weight_buf_5_addr_26 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_208
  %weight_buf_5_addr_27 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_210
  %weight_buf_5_addr_28 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_212
  %weight_buf_5_addr_29 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_214
  %weight_buf_5_addr_30 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_216
  %weight_buf_5_addr_31 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_218
  %weight_buf_5_addr_32 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_220
  %weight_buf_5_addr_33 = getelementptr [320 x float]* %weight_buf_5, i64 0, i64 %tmp_222
  %weight_buf_6_addr_2 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_160
  %weight_buf_6_addr_3 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_162
  %weight_buf_6_addr_4 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_164
  %weight_buf_6_addr_5 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_166
  %weight_buf_6_addr_6 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_168
  %weight_buf_6_addr_7 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_170
  %weight_buf_6_addr_8 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_172
  %weight_buf_6_addr_9 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_174
  %weight_buf_6_addr_10 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_176
  %weight_buf_6_addr_11 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_178
  %weight_buf_6_addr_12 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_180
  %weight_buf_6_addr_13 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_182
  %weight_buf_6_addr_14 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_184
  %weight_buf_6_addr_15 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_186
  %weight_buf_6_addr_16 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_188
  %weight_buf_6_addr_17 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_190
  %weight_buf_6_addr_18 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_192
  %weight_buf_6_addr_19 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_194
  %weight_buf_6_addr_20 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_196
  %weight_buf_6_addr_21 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_198
  %weight_buf_6_addr_22 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_200
  %weight_buf_6_addr_23 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_202
  %weight_buf_6_addr_24 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_204
  %weight_buf_6_addr_25 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_206
  %weight_buf_6_addr_26 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_208
  %weight_buf_6_addr_27 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_210
  %weight_buf_6_addr_28 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_212
  %weight_buf_6_addr_29 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_214
  %weight_buf_6_addr_30 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_216
  %weight_buf_6_addr_31 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_218
  %weight_buf_6_addr_32 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_220
  %weight_buf_6_addr_33 = getelementptr [320 x float]* %weight_buf_6, i64 0, i64 %tmp_222
  %weight_buf_7_addr_2 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_160
  %weight_buf_7_addr_3 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_162
  %weight_buf_7_addr_4 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_164
  %weight_buf_7_addr_5 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_166
  %weight_buf_7_addr_6 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_168
  %weight_buf_7_addr_7 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_170
  %weight_buf_7_addr_8 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_172
  %weight_buf_7_addr_9 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_174
  %weight_buf_7_addr_10 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_176
  %weight_buf_7_addr_11 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_178
  %weight_buf_7_addr_12 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_180
  %weight_buf_7_addr_13 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_182
  %weight_buf_7_addr_14 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_184
  %weight_buf_7_addr_15 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_186
  %weight_buf_7_addr_16 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_188
  %weight_buf_7_addr_17 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_190
  %weight_buf_7_addr_18 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_192
  %weight_buf_7_addr_19 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_194
  %weight_buf_7_addr_20 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_196
  %weight_buf_7_addr_21 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_198
  %weight_buf_7_addr_22 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_200
  %weight_buf_7_addr_23 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_202
  %weight_buf_7_addr_24 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_204
  %weight_buf_7_addr_25 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_206
  %weight_buf_7_addr_26 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_208
  %weight_buf_7_addr_27 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_210
  %weight_buf_7_addr_28 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_212
  %weight_buf_7_addr_29 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_214
  %weight_buf_7_addr_30 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_216
  %weight_buf_7_addr_31 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_218
  %weight_buf_7_addr_32 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_220
  %weight_buf_7_addr_33 = getelementptr [320 x float]* %weight_buf_7, i64 0, i64 %tmp_222
  %tmp_223 = add i8 %tmp_158, %tmp_28_cast
  %tmp_223_cast = zext i8 %tmp_223 to i64
  %out_buf_addr_2 = getelementptr [80 x float]* %out_buf, i64 0, i64 %tmp_223_cast
  %offset_buf_addr_2 = getelementptr inbounds [10 x float]* %offset_buf, i64 0, i64 %tmp_28
  %tmp = load float* %offset_buf_addr_2, align 4
  %weight_buf_0_load = load float* %weight_buf_0_addr_2, align 16
  %tmp_30 = fmul float %in_buf_0_load, %weight_buf_0_load
  %tmp_31 = fadd float %tmp, %tmp_30
  %weight_buf_0_load_1 = load float* %weight_buf_0_addr_3, align 4
  %tmp_40_1 = fmul float %in_buf_0_load_1, %weight_buf_0_load_1
  %tmp_41_1 = fadd float %tmp_31, %tmp_40_1
  %weight_buf_0_load_2 = load float* %weight_buf_0_addr_4, align 8
  %tmp_40_2 = fmul float %in_buf_0_load_2, %weight_buf_0_load_2
  %tmp_41_2 = fadd float %tmp_41_1, %tmp_40_2
  %weight_buf_0_load_3 = load float* %weight_buf_0_addr_5, align 4
  %tmp_40_3 = fmul float %in_buf_0_load_3, %weight_buf_0_load_3
  %tmp_41_3 = fadd float %tmp_41_2, %tmp_40_3
  %weight_buf_0_load_4 = load float* %weight_buf_0_addr_6, align 16
  %tmp_40_4 = fmul float %in_buf_0_load_4, %weight_buf_0_load_4
  %tmp_41_4 = fadd float %tmp_41_3, %tmp_40_4
  %weight_buf_0_load_5 = load float* %weight_buf_0_addr_7, align 4
  %tmp_40_5 = fmul float %in_buf_0_load_5, %weight_buf_0_load_5
  %tmp_41_5 = fadd float %tmp_41_4, %tmp_40_5
  %weight_buf_0_load_6 = load float* %weight_buf_0_addr_8, align 8
  %tmp_40_6 = fmul float %in_buf_0_load_6, %weight_buf_0_load_6
  %tmp_41_6 = fadd float %tmp_41_5, %tmp_40_6
  %weight_buf_0_load_7 = load float* %weight_buf_0_addr_9, align 4
  %tmp_40_7 = fmul float %in_buf_0_load_7, %weight_buf_0_load_7
  %tmp_41_7 = fadd float %tmp_41_6, %tmp_40_7
  %weight_buf_0_load_8 = load float* %weight_buf_0_addr_10, align 16
  %tmp_40_8 = fmul float %in_buf_0_load_8, %weight_buf_0_load_8
  %tmp_41_8 = fadd float %tmp_41_7, %tmp_40_8
  %weight_buf_0_load_9 = load float* %weight_buf_0_addr_11, align 4
  %tmp_40_9 = fmul float %in_buf_0_load_9, %weight_buf_0_load_9
  %tmp_41_9 = fadd float %tmp_41_8, %tmp_40_9
  %weight_buf_0_load_10 = load float* %weight_buf_0_addr_12, align 8
  %tmp_40_s = fmul float %in_buf_0_load_10, %weight_buf_0_load_10
  %tmp_41_s = fadd float %tmp_41_9, %tmp_40_s
  %weight_buf_0_load_11 = load float* %weight_buf_0_addr_13, align 4
  %tmp_40_10 = fmul float %in_buf_0_load_11, %weight_buf_0_load_11
  %tmp_41_10 = fadd float %tmp_41_s, %tmp_40_10
  %weight_buf_0_load_12 = load float* %weight_buf_0_addr_14, align 16
  %tmp_40_11 = fmul float %in_buf_0_load_12, %weight_buf_0_load_12
  %tmp_41_11 = fadd float %tmp_41_10, %tmp_40_11
  %weight_buf_0_load_13 = load float* %weight_buf_0_addr_15, align 4
  %tmp_40_12 = fmul float %in_buf_0_load_13, %weight_buf_0_load_13
  %tmp_41_12 = fadd float %tmp_41_11, %tmp_40_12
  %weight_buf_0_load_14 = load float* %weight_buf_0_addr_16, align 8
  %tmp_40_13 = fmul float %in_buf_0_load_14, %weight_buf_0_load_14
  %tmp_41_13 = fadd float %tmp_41_12, %tmp_40_13
  %weight_buf_0_load_15 = load float* %weight_buf_0_addr_17, align 4
  %tmp_40_14 = fmul float %in_buf_0_load_15, %weight_buf_0_load_15
  %tmp_41_14 = fadd float %tmp_41_13, %tmp_40_14
  %weight_buf_0_load_16 = load float* %weight_buf_0_addr_18, align 16
  %tmp_40_15 = fmul float %in_buf_0_load_16, %weight_buf_0_load_16
  %tmp_41_15 = fadd float %tmp_41_14, %tmp_40_15
  %weight_buf_0_load_17 = load float* %weight_buf_0_addr_19, align 4
  %tmp_40_16 = fmul float %in_buf_0_load_17, %weight_buf_0_load_17
  %tmp_41_16 = fadd float %tmp_41_15, %tmp_40_16
  %weight_buf_0_load_18 = load float* %weight_buf_0_addr_20, align 8
  %tmp_40_17 = fmul float %in_buf_0_load_18, %weight_buf_0_load_18
  %tmp_41_17 = fadd float %tmp_41_16, %tmp_40_17
  %weight_buf_0_load_19 = load float* %weight_buf_0_addr_21, align 4
  %tmp_40_18 = fmul float %in_buf_0_load_19, %weight_buf_0_load_19
  %tmp_41_18 = fadd float %tmp_41_17, %tmp_40_18
  %weight_buf_0_load_20 = load float* %weight_buf_0_addr_22, align 16
  %tmp_40_19 = fmul float %in_buf_0_load_20, %weight_buf_0_load_20
  %tmp_41_19 = fadd float %tmp_41_18, %tmp_40_19
  %weight_buf_0_load_21 = load float* %weight_buf_0_addr_23, align 4
  %tmp_40_20 = fmul float %in_buf_0_load_21, %weight_buf_0_load_21
  %tmp_41_20 = fadd float %tmp_41_19, %tmp_40_20
  %weight_buf_0_load_22 = load float* %weight_buf_0_addr_24, align 8
  %tmp_40_21 = fmul float %in_buf_0_load_22, %weight_buf_0_load_22
  %tmp_41_21 = fadd float %tmp_41_20, %tmp_40_21
  %weight_buf_0_load_23 = load float* %weight_buf_0_addr_25, align 4
  %tmp_40_22 = fmul float %in_buf_0_load_23, %weight_buf_0_load_23
  %tmp_41_22 = fadd float %tmp_41_21, %tmp_40_22
  %weight_buf_0_load_24 = load float* %weight_buf_0_addr_26, align 16
  %tmp_40_23 = fmul float %in_buf_0_load_24, %weight_buf_0_load_24
  %tmp_41_23 = fadd float %tmp_41_22, %tmp_40_23
  %weight_buf_0_load_25 = load float* %weight_buf_0_addr_27, align 4
  %tmp_40_24 = fmul float %in_buf_0_load_25, %weight_buf_0_load_25
  %tmp_41_24 = fadd float %tmp_41_23, %tmp_40_24
  %weight_buf_0_load_26 = load float* %weight_buf_0_addr_28, align 8
  %tmp_40_25 = fmul float %in_buf_0_load_26, %weight_buf_0_load_26
  %tmp_41_25 = fadd float %tmp_41_24, %tmp_40_25
  %weight_buf_0_load_27 = load float* %weight_buf_0_addr_29, align 4
  %tmp_40_26 = fmul float %in_buf_0_load_27, %weight_buf_0_load_27
  %tmp_41_26 = fadd float %tmp_41_25, %tmp_40_26
  %weight_buf_0_load_28 = load float* %weight_buf_0_addr_30, align 16
  %tmp_40_27 = fmul float %in_buf_0_load_28, %weight_buf_0_load_28
  %tmp_41_27 = fadd float %tmp_41_26, %tmp_40_27
  %weight_buf_0_load_29 = load float* %weight_buf_0_addr_31, align 4
  %tmp_40_28 = fmul float %in_buf_0_load_29, %weight_buf_0_load_29
  %tmp_41_28 = fadd float %tmp_41_27, %tmp_40_28
  %weight_buf_0_load_30 = load float* %weight_buf_0_addr_32, align 8
  %tmp_40_29 = fmul float %in_buf_0_load_30, %weight_buf_0_load_30
  %tmp_41_29 = fadd float %tmp_41_28, %tmp_40_29
  %weight_buf_0_load_31 = load float* %weight_buf_0_addr_33, align 4
  %tmp_40_30 = fmul float %in_buf_0_load_31, %weight_buf_0_load_31
  %tmp_41_30 = fadd float %tmp_41_29, %tmp_40_30
  %weight_buf_1_load = load float* %weight_buf_1_addr_2, align 16
  %tmp_40_31 = fmul float %in_buf_1_load, %weight_buf_1_load
  %tmp_41_31 = fadd float %tmp_41_30, %tmp_40_31
  %weight_buf_1_load_1 = load float* %weight_buf_1_addr_3, align 4
  %tmp_40_32 = fmul float %in_buf_1_load_1, %weight_buf_1_load_1
  %tmp_41_32 = fadd float %tmp_41_31, %tmp_40_32
  %weight_buf_1_load_2 = load float* %weight_buf_1_addr_4, align 8
  %tmp_40_33 = fmul float %in_buf_1_load_2, %weight_buf_1_load_2
  %tmp_41_33 = fadd float %tmp_41_32, %tmp_40_33
  %weight_buf_1_load_3 = load float* %weight_buf_1_addr_5, align 4
  %tmp_40_34 = fmul float %in_buf_1_load_3, %weight_buf_1_load_3
  %tmp_41_34 = fadd float %tmp_41_33, %tmp_40_34
  %weight_buf_1_load_4 = load float* %weight_buf_1_addr_6, align 16
  %tmp_40_35 = fmul float %in_buf_1_load_4, %weight_buf_1_load_4
  %tmp_41_35 = fadd float %tmp_41_34, %tmp_40_35
  %weight_buf_1_load_5 = load float* %weight_buf_1_addr_7, align 4
  %tmp_40_36 = fmul float %in_buf_1_load_5, %weight_buf_1_load_5
  %tmp_41_36 = fadd float %tmp_41_35, %tmp_40_36
  %weight_buf_1_load_6 = load float* %weight_buf_1_addr_8, align 8
  %tmp_40_37 = fmul float %in_buf_1_load_6, %weight_buf_1_load_6
  %tmp_41_37 = fadd float %tmp_41_36, %tmp_40_37
  %weight_buf_1_load_7 = load float* %weight_buf_1_addr_9, align 4
  %tmp_40_38 = fmul float %in_buf_1_load_7, %weight_buf_1_load_7
  %tmp_41_38 = fadd float %tmp_41_37, %tmp_40_38
  %weight_buf_1_load_8 = load float* %weight_buf_1_addr_10, align 16
  %tmp_40_39 = fmul float %in_buf_1_load_8, %weight_buf_1_load_8
  %tmp_41_39 = fadd float %tmp_41_38, %tmp_40_39
  %weight_buf_1_load_9 = load float* %weight_buf_1_addr_11, align 4
  %tmp_40_40 = fmul float %in_buf_1_load_9, %weight_buf_1_load_9
  %tmp_41_40 = fadd float %tmp_41_39, %tmp_40_40
  %weight_buf_1_load_10 = load float* %weight_buf_1_addr_12, align 8
  %tmp_40_41 = fmul float %in_buf_1_load_10, %weight_buf_1_load_10
  %tmp_41_41 = fadd float %tmp_41_40, %tmp_40_41
  %weight_buf_1_load_11 = load float* %weight_buf_1_addr_13, align 4
  %tmp_40_42 = fmul float %in_buf_1_load_11, %weight_buf_1_load_11
  %tmp_41_42 = fadd float %tmp_41_41, %tmp_40_42
  %weight_buf_1_load_12 = load float* %weight_buf_1_addr_14, align 16
  %tmp_40_43 = fmul float %in_buf_1_load_12, %weight_buf_1_load_12
  %tmp_41_43 = fadd float %tmp_41_42, %tmp_40_43
  %weight_buf_1_load_13 = load float* %weight_buf_1_addr_15, align 4
  %tmp_40_44 = fmul float %in_buf_1_load_13, %weight_buf_1_load_13
  %tmp_41_44 = fadd float %tmp_41_43, %tmp_40_44
  %weight_buf_1_load_14 = load float* %weight_buf_1_addr_16, align 8
  %tmp_40_45 = fmul float %in_buf_1_load_14, %weight_buf_1_load_14
  %tmp_41_45 = fadd float %tmp_41_44, %tmp_40_45
  %weight_buf_1_load_15 = load float* %weight_buf_1_addr_17, align 4
  %tmp_40_46 = fmul float %in_buf_1_load_15, %weight_buf_1_load_15
  %tmp_41_46 = fadd float %tmp_41_45, %tmp_40_46
  %weight_buf_1_load_16 = load float* %weight_buf_1_addr_18, align 16
  %tmp_40_47 = fmul float %in_buf_1_load_16, %weight_buf_1_load_16
  %tmp_41_47 = fadd float %tmp_41_46, %tmp_40_47
  %weight_buf_1_load_17 = load float* %weight_buf_1_addr_19, align 4
  %tmp_40_48 = fmul float %in_buf_1_load_17, %weight_buf_1_load_17
  %tmp_41_48 = fadd float %tmp_41_47, %tmp_40_48
  %weight_buf_1_load_18 = load float* %weight_buf_1_addr_20, align 8
  %tmp_40_49 = fmul float %in_buf_1_load_18, %weight_buf_1_load_18
  %tmp_41_49 = fadd float %tmp_41_48, %tmp_40_49
  %weight_buf_1_load_19 = load float* %weight_buf_1_addr_21, align 4
  %tmp_40_50 = fmul float %in_buf_1_load_19, %weight_buf_1_load_19
  %tmp_41_50 = fadd float %tmp_41_49, %tmp_40_50
  %weight_buf_1_load_20 = load float* %weight_buf_1_addr_22, align 16
  %tmp_40_51 = fmul float %in_buf_1_load_20, %weight_buf_1_load_20
  %tmp_41_51 = fadd float %tmp_41_50, %tmp_40_51
  %weight_buf_1_load_21 = load float* %weight_buf_1_addr_23, align 4
  %tmp_40_52 = fmul float %in_buf_1_load_21, %weight_buf_1_load_21
  %tmp_41_52 = fadd float %tmp_41_51, %tmp_40_52
  %weight_buf_1_load_22 = load float* %weight_buf_1_addr_24, align 8
  %tmp_40_53 = fmul float %in_buf_1_load_22, %weight_buf_1_load_22
  %tmp_41_53 = fadd float %tmp_41_52, %tmp_40_53
  %weight_buf_1_load_23 = load float* %weight_buf_1_addr_25, align 4
  %tmp_40_54 = fmul float %in_buf_1_load_23, %weight_buf_1_load_23
  %tmp_41_54 = fadd float %tmp_41_53, %tmp_40_54
  %weight_buf_1_load_24 = load float* %weight_buf_1_addr_26, align 16
  %tmp_40_55 = fmul float %in_buf_1_load_24, %weight_buf_1_load_24
  %tmp_41_55 = fadd float %tmp_41_54, %tmp_40_55
  %weight_buf_1_load_25 = load float* %weight_buf_1_addr_27, align 4
  %tmp_40_56 = fmul float %in_buf_1_load_25, %weight_buf_1_load_25
  %tmp_41_56 = fadd float %tmp_41_55, %tmp_40_56
  %weight_buf_1_load_26 = load float* %weight_buf_1_addr_28, align 8
  %tmp_40_57 = fmul float %in_buf_1_load_26, %weight_buf_1_load_26
  %tmp_41_57 = fadd float %tmp_41_56, %tmp_40_57
  %weight_buf_1_load_27 = load float* %weight_buf_1_addr_29, align 4
  %tmp_40_58 = fmul float %in_buf_1_load_27, %weight_buf_1_load_27
  %tmp_41_58 = fadd float %tmp_41_57, %tmp_40_58
  %weight_buf_1_load_28 = load float* %weight_buf_1_addr_30, align 16
  %tmp_40_59 = fmul float %in_buf_1_load_28, %weight_buf_1_load_28
  %tmp_41_59 = fadd float %tmp_41_58, %tmp_40_59
  %weight_buf_1_load_29 = load float* %weight_buf_1_addr_31, align 4
  %tmp_40_60 = fmul float %in_buf_1_load_29, %weight_buf_1_load_29
  %tmp_41_60 = fadd float %tmp_41_59, %tmp_40_60
  %weight_buf_1_load_30 = load float* %weight_buf_1_addr_32, align 8
  %tmp_40_61 = fmul float %in_buf_1_load_30, %weight_buf_1_load_30
  %tmp_41_61 = fadd float %tmp_41_60, %tmp_40_61
  %weight_buf_1_load_31 = load float* %weight_buf_1_addr_33, align 4
  %tmp_40_62 = fmul float %in_buf_1_load_31, %weight_buf_1_load_31
  %tmp_41_62 = fadd float %tmp_41_61, %tmp_40_62
  %weight_buf_2_load = load float* %weight_buf_2_addr_2, align 16
  %tmp_40_63 = fmul float %in_buf_2_load, %weight_buf_2_load
  %tmp_41_63 = fadd float %tmp_41_62, %tmp_40_63
  %weight_buf_2_load_1 = load float* %weight_buf_2_addr_3, align 4
  %tmp_40_64 = fmul float %in_buf_2_load_1, %weight_buf_2_load_1
  %tmp_41_64 = fadd float %tmp_41_63, %tmp_40_64
  %weight_buf_2_load_2 = load float* %weight_buf_2_addr_4, align 8
  %tmp_40_65 = fmul float %in_buf_2_load_2, %weight_buf_2_load_2
  %tmp_41_65 = fadd float %tmp_41_64, %tmp_40_65
  %weight_buf_2_load_3 = load float* %weight_buf_2_addr_5, align 4
  %tmp_40_66 = fmul float %in_buf_2_load_3, %weight_buf_2_load_3
  %tmp_41_66 = fadd float %tmp_41_65, %tmp_40_66
  %weight_buf_2_load_4 = load float* %weight_buf_2_addr_6, align 16
  %tmp_40_67 = fmul float %in_buf_2_load_4, %weight_buf_2_load_4
  %tmp_41_67 = fadd float %tmp_41_66, %tmp_40_67
  %weight_buf_2_load_5 = load float* %weight_buf_2_addr_7, align 4
  %tmp_40_68 = fmul float %in_buf_2_load_5, %weight_buf_2_load_5
  %tmp_41_68 = fadd float %tmp_41_67, %tmp_40_68
  %weight_buf_2_load_6 = load float* %weight_buf_2_addr_8, align 8
  %tmp_40_69 = fmul float %in_buf_2_load_6, %weight_buf_2_load_6
  %tmp_41_69 = fadd float %tmp_41_68, %tmp_40_69
  %weight_buf_2_load_7 = load float* %weight_buf_2_addr_9, align 4
  %tmp_40_70 = fmul float %in_buf_2_load_7, %weight_buf_2_load_7
  %tmp_41_70 = fadd float %tmp_41_69, %tmp_40_70
  %weight_buf_2_load_8 = load float* %weight_buf_2_addr_10, align 16
  %tmp_40_71 = fmul float %in_buf_2_load_8, %weight_buf_2_load_8
  %tmp_41_71 = fadd float %tmp_41_70, %tmp_40_71
  %weight_buf_2_load_9 = load float* %weight_buf_2_addr_11, align 4
  %tmp_40_72 = fmul float %in_buf_2_load_9, %weight_buf_2_load_9
  %tmp_41_72 = fadd float %tmp_41_71, %tmp_40_72
  %weight_buf_2_load_10 = load float* %weight_buf_2_addr_12, align 8
  %tmp_40_73 = fmul float %in_buf_2_load_10, %weight_buf_2_load_10
  %tmp_41_73 = fadd float %tmp_41_72, %tmp_40_73
  %weight_buf_2_load_11 = load float* %weight_buf_2_addr_13, align 4
  %tmp_40_74 = fmul float %in_buf_2_load_11, %weight_buf_2_load_11
  %tmp_41_74 = fadd float %tmp_41_73, %tmp_40_74
  %weight_buf_2_load_12 = load float* %weight_buf_2_addr_14, align 16
  %tmp_40_75 = fmul float %in_buf_2_load_12, %weight_buf_2_load_12
  %tmp_41_75 = fadd float %tmp_41_74, %tmp_40_75
  %weight_buf_2_load_13 = load float* %weight_buf_2_addr_15, align 4
  %tmp_40_76 = fmul float %in_buf_2_load_13, %weight_buf_2_load_13
  %tmp_41_76 = fadd float %tmp_41_75, %tmp_40_76
  %weight_buf_2_load_14 = load float* %weight_buf_2_addr_16, align 8
  %tmp_40_77 = fmul float %in_buf_2_load_14, %weight_buf_2_load_14
  %tmp_41_77 = fadd float %tmp_41_76, %tmp_40_77
  %weight_buf_2_load_15 = load float* %weight_buf_2_addr_17, align 4
  %tmp_40_78 = fmul float %in_buf_2_load_15, %weight_buf_2_load_15
  %tmp_41_78 = fadd float %tmp_41_77, %tmp_40_78
  %weight_buf_2_load_16 = load float* %weight_buf_2_addr_18, align 16
  %tmp_40_79 = fmul float %in_buf_2_load_16, %weight_buf_2_load_16
  %tmp_41_79 = fadd float %tmp_41_78, %tmp_40_79
  %weight_buf_2_load_17 = load float* %weight_buf_2_addr_19, align 4
  %tmp_40_80 = fmul float %in_buf_2_load_17, %weight_buf_2_load_17
  %tmp_41_80 = fadd float %tmp_41_79, %tmp_40_80
  %weight_buf_2_load_18 = load float* %weight_buf_2_addr_20, align 8
  %tmp_40_81 = fmul float %in_buf_2_load_18, %weight_buf_2_load_18
  %tmp_41_81 = fadd float %tmp_41_80, %tmp_40_81
  %weight_buf_2_load_19 = load float* %weight_buf_2_addr_21, align 4
  %tmp_40_82 = fmul float %in_buf_2_load_19, %weight_buf_2_load_19
  %tmp_41_82 = fadd float %tmp_41_81, %tmp_40_82
  %weight_buf_2_load_20 = load float* %weight_buf_2_addr_22, align 16
  %tmp_40_83 = fmul float %in_buf_2_load_20, %weight_buf_2_load_20
  %tmp_41_83 = fadd float %tmp_41_82, %tmp_40_83
  %weight_buf_2_load_21 = load float* %weight_buf_2_addr_23, align 4
  %tmp_40_84 = fmul float %in_buf_2_load_21, %weight_buf_2_load_21
  %tmp_41_84 = fadd float %tmp_41_83, %tmp_40_84
  %weight_buf_2_load_22 = load float* %weight_buf_2_addr_24, align 8
  %tmp_40_85 = fmul float %in_buf_2_load_22, %weight_buf_2_load_22
  %tmp_41_85 = fadd float %tmp_41_84, %tmp_40_85
  %weight_buf_2_load_23 = load float* %weight_buf_2_addr_25, align 4
  %tmp_40_86 = fmul float %in_buf_2_load_23, %weight_buf_2_load_23
  %tmp_41_86 = fadd float %tmp_41_85, %tmp_40_86
  %weight_buf_2_load_24 = load float* %weight_buf_2_addr_26, align 16
  %tmp_40_87 = fmul float %in_buf_2_load_24, %weight_buf_2_load_24
  %tmp_41_87 = fadd float %tmp_41_86, %tmp_40_87
  %weight_buf_2_load_25 = load float* %weight_buf_2_addr_27, align 4
  %tmp_40_88 = fmul float %in_buf_2_load_25, %weight_buf_2_load_25
  %tmp_41_88 = fadd float %tmp_41_87, %tmp_40_88
  %weight_buf_2_load_26 = load float* %weight_buf_2_addr_28, align 8
  %tmp_40_89 = fmul float %in_buf_2_load_26, %weight_buf_2_load_26
  %tmp_41_89 = fadd float %tmp_41_88, %tmp_40_89
  %weight_buf_2_load_27 = load float* %weight_buf_2_addr_29, align 4
  %tmp_40_90 = fmul float %in_buf_2_load_27, %weight_buf_2_load_27
  %tmp_41_90 = fadd float %tmp_41_89, %tmp_40_90
  %weight_buf_2_load_28 = load float* %weight_buf_2_addr_30, align 16
  %tmp_40_91 = fmul float %in_buf_2_load_28, %weight_buf_2_load_28
  %tmp_41_91 = fadd float %tmp_41_90, %tmp_40_91
  %weight_buf_2_load_29 = load float* %weight_buf_2_addr_31, align 4
  %tmp_40_92 = fmul float %in_buf_2_load_29, %weight_buf_2_load_29
  %tmp_41_92 = fadd float %tmp_41_91, %tmp_40_92
  %weight_buf_2_load_30 = load float* %weight_buf_2_addr_32, align 8
  %tmp_40_93 = fmul float %in_buf_2_load_30, %weight_buf_2_load_30
  %tmp_41_93 = fadd float %tmp_41_92, %tmp_40_93
  %weight_buf_2_load_31 = load float* %weight_buf_2_addr_33, align 4
  %tmp_40_94 = fmul float %in_buf_2_load_31, %weight_buf_2_load_31
  %tmp_41_94 = fadd float %tmp_41_93, %tmp_40_94
  %weight_buf_3_load = load float* %weight_buf_3_addr_2, align 16
  %tmp_40_95 = fmul float %in_buf_3_load, %weight_buf_3_load
  %tmp_41_95 = fadd float %tmp_41_94, %tmp_40_95
  %weight_buf_3_load_1 = load float* %weight_buf_3_addr_3, align 4
  %tmp_40_96 = fmul float %in_buf_3_load_1, %weight_buf_3_load_1
  %tmp_41_96 = fadd float %tmp_41_95, %tmp_40_96
  %weight_buf_3_load_2 = load float* %weight_buf_3_addr_4, align 8
  %tmp_40_97 = fmul float %in_buf_3_load_2, %weight_buf_3_load_2
  %tmp_41_97 = fadd float %tmp_41_96, %tmp_40_97
  %weight_buf_3_load_3 = load float* %weight_buf_3_addr_5, align 4
  %tmp_40_98 = fmul float %in_buf_3_load_3, %weight_buf_3_load_3
  %tmp_41_98 = fadd float %tmp_41_97, %tmp_40_98
  %weight_buf_3_load_4 = load float* %weight_buf_3_addr_6, align 16
  %tmp_40_99 = fmul float %in_buf_3_load_4, %weight_buf_3_load_4
  %tmp_41_99 = fadd float %tmp_41_98, %tmp_40_99
  %weight_buf_3_load_5 = load float* %weight_buf_3_addr_7, align 4
  %tmp_40_100 = fmul float %in_buf_3_load_5, %weight_buf_3_load_5
  %tmp_41_100 = fadd float %tmp_41_99, %tmp_40_100
  %weight_buf_3_load_6 = load float* %weight_buf_3_addr_8, align 8
  %tmp_40_101 = fmul float %in_buf_3_load_6, %weight_buf_3_load_6
  %tmp_41_101 = fadd float %tmp_41_100, %tmp_40_101
  %weight_buf_3_load_7 = load float* %weight_buf_3_addr_9, align 4
  %tmp_40_102 = fmul float %in_buf_3_load_7, %weight_buf_3_load_7
  %tmp_41_102 = fadd float %tmp_41_101, %tmp_40_102
  %weight_buf_3_load_8 = load float* %weight_buf_3_addr_10, align 16
  %tmp_40_103 = fmul float %in_buf_3_load_8, %weight_buf_3_load_8
  %tmp_41_103 = fadd float %tmp_41_102, %tmp_40_103
  %weight_buf_3_load_9 = load float* %weight_buf_3_addr_11, align 4
  %tmp_40_104 = fmul float %in_buf_3_load_9, %weight_buf_3_load_9
  %tmp_41_104 = fadd float %tmp_41_103, %tmp_40_104
  %weight_buf_3_load_10 = load float* %weight_buf_3_addr_12, align 8
  %tmp_40_105 = fmul float %in_buf_3_load_10, %weight_buf_3_load_10
  %tmp_41_105 = fadd float %tmp_41_104, %tmp_40_105
  %weight_buf_3_load_11 = load float* %weight_buf_3_addr_13, align 4
  %tmp_40_106 = fmul float %in_buf_3_load_11, %weight_buf_3_load_11
  %tmp_41_106 = fadd float %tmp_41_105, %tmp_40_106
  %weight_buf_3_load_12 = load float* %weight_buf_3_addr_14, align 16
  %tmp_40_107 = fmul float %in_buf_3_load_12, %weight_buf_3_load_12
  %tmp_41_107 = fadd float %tmp_41_106, %tmp_40_107
  %weight_buf_3_load_13 = load float* %weight_buf_3_addr_15, align 4
  %tmp_40_108 = fmul float %in_buf_3_load_13, %weight_buf_3_load_13
  %tmp_41_108 = fadd float %tmp_41_107, %tmp_40_108
  %weight_buf_3_load_14 = load float* %weight_buf_3_addr_16, align 8
  %tmp_40_109 = fmul float %in_buf_3_load_14, %weight_buf_3_load_14
  %tmp_41_109 = fadd float %tmp_41_108, %tmp_40_109
  %weight_buf_3_load_15 = load float* %weight_buf_3_addr_17, align 4
  %tmp_40_110 = fmul float %in_buf_3_load_15, %weight_buf_3_load_15
  %tmp_41_110 = fadd float %tmp_41_109, %tmp_40_110
  %weight_buf_3_load_16 = load float* %weight_buf_3_addr_18, align 16
  %tmp_40_111 = fmul float %in_buf_3_load_16, %weight_buf_3_load_16
  %tmp_41_111 = fadd float %tmp_41_110, %tmp_40_111
  %weight_buf_3_load_17 = load float* %weight_buf_3_addr_19, align 4
  %tmp_40_112 = fmul float %in_buf_3_load_17, %weight_buf_3_load_17
  %tmp_41_112 = fadd float %tmp_41_111, %tmp_40_112
  %weight_buf_3_load_18 = load float* %weight_buf_3_addr_20, align 8
  %tmp_40_113 = fmul float %in_buf_3_load_18, %weight_buf_3_load_18
  %tmp_41_113 = fadd float %tmp_41_112, %tmp_40_113
  %weight_buf_3_load_19 = load float* %weight_buf_3_addr_21, align 4
  %tmp_40_114 = fmul float %in_buf_3_load_19, %weight_buf_3_load_19
  %tmp_41_114 = fadd float %tmp_41_113, %tmp_40_114
  %weight_buf_3_load_20 = load float* %weight_buf_3_addr_22, align 16
  %tmp_40_115 = fmul float %in_buf_3_load_20, %weight_buf_3_load_20
  %tmp_41_115 = fadd float %tmp_41_114, %tmp_40_115
  %weight_buf_3_load_21 = load float* %weight_buf_3_addr_23, align 4
  %tmp_40_116 = fmul float %in_buf_3_load_21, %weight_buf_3_load_21
  %tmp_41_116 = fadd float %tmp_41_115, %tmp_40_116
  %weight_buf_3_load_22 = load float* %weight_buf_3_addr_24, align 8
  %tmp_40_117 = fmul float %in_buf_3_load_22, %weight_buf_3_load_22
  %tmp_41_117 = fadd float %tmp_41_116, %tmp_40_117
  %weight_buf_3_load_23 = load float* %weight_buf_3_addr_25, align 4
  %tmp_40_118 = fmul float %in_buf_3_load_23, %weight_buf_3_load_23
  %tmp_41_118 = fadd float %tmp_41_117, %tmp_40_118
  %weight_buf_3_load_24 = load float* %weight_buf_3_addr_26, align 16
  %tmp_40_119 = fmul float %in_buf_3_load_24, %weight_buf_3_load_24
  %tmp_41_119 = fadd float %tmp_41_118, %tmp_40_119
  %weight_buf_3_load_25 = load float* %weight_buf_3_addr_27, align 4
  %tmp_40_120 = fmul float %in_buf_3_load_25, %weight_buf_3_load_25
  %tmp_41_120 = fadd float %tmp_41_119, %tmp_40_120
  %weight_buf_3_load_26 = load float* %weight_buf_3_addr_28, align 8
  %tmp_40_121 = fmul float %in_buf_3_load_26, %weight_buf_3_load_26
  %tmp_41_121 = fadd float %tmp_41_120, %tmp_40_121
  %weight_buf_3_load_27 = load float* %weight_buf_3_addr_29, align 4
  %tmp_40_122 = fmul float %in_buf_3_load_27, %weight_buf_3_load_27
  %tmp_41_122 = fadd float %tmp_41_121, %tmp_40_122
  %weight_buf_3_load_28 = load float* %weight_buf_3_addr_30, align 16
  %tmp_40_123 = fmul float %in_buf_3_load_28, %weight_buf_3_load_28
  %tmp_41_123 = fadd float %tmp_41_122, %tmp_40_123
  %weight_buf_3_load_29 = load float* %weight_buf_3_addr_31, align 4
  %tmp_40_124 = fmul float %in_buf_3_load_29, %weight_buf_3_load_29
  %tmp_41_124 = fadd float %tmp_41_123, %tmp_40_124
  %weight_buf_3_load_30 = load float* %weight_buf_3_addr_32, align 8
  %tmp_40_125 = fmul float %in_buf_3_load_30, %weight_buf_3_load_30
  %tmp_41_125 = fadd float %tmp_41_124, %tmp_40_125
  %weight_buf_3_load_31 = load float* %weight_buf_3_addr_33, align 4
  %tmp_40_126 = fmul float %in_buf_3_load_31, %weight_buf_3_load_31
  %tmp_41_126 = fadd float %tmp_41_125, %tmp_40_126
  %weight_buf_4_load = load float* %weight_buf_4_addr_2, align 16
  %tmp_40_127 = fmul float %in_buf_4_load, %weight_buf_4_load
  %tmp_41_127 = fadd float %tmp_41_126, %tmp_40_127
  %weight_buf_4_load_1 = load float* %weight_buf_4_addr_3, align 4
  %tmp_40_128 = fmul float %in_buf_4_load_1, %weight_buf_4_load_1
  %tmp_41_128 = fadd float %tmp_41_127, %tmp_40_128
  %weight_buf_4_load_2 = load float* %weight_buf_4_addr_4, align 8
  %tmp_40_129 = fmul float %in_buf_4_load_2, %weight_buf_4_load_2
  %tmp_41_129 = fadd float %tmp_41_128, %tmp_40_129
  %weight_buf_4_load_3 = load float* %weight_buf_4_addr_5, align 4
  %tmp_40_130 = fmul float %in_buf_4_load_3, %weight_buf_4_load_3
  %tmp_41_130 = fadd float %tmp_41_129, %tmp_40_130
  %weight_buf_4_load_4 = load float* %weight_buf_4_addr_6, align 16
  %tmp_40_131 = fmul float %in_buf_4_load_4, %weight_buf_4_load_4
  %tmp_41_131 = fadd float %tmp_41_130, %tmp_40_131
  %weight_buf_4_load_5 = load float* %weight_buf_4_addr_7, align 4
  %tmp_40_132 = fmul float %in_buf_4_load_5, %weight_buf_4_load_5
  %tmp_41_132 = fadd float %tmp_41_131, %tmp_40_132
  %weight_buf_4_load_6 = load float* %weight_buf_4_addr_8, align 8
  %tmp_40_133 = fmul float %in_buf_4_load_6, %weight_buf_4_load_6
  %tmp_41_133 = fadd float %tmp_41_132, %tmp_40_133
  %weight_buf_4_load_7 = load float* %weight_buf_4_addr_9, align 4
  %tmp_40_134 = fmul float %in_buf_4_load_7, %weight_buf_4_load_7
  %tmp_41_134 = fadd float %tmp_41_133, %tmp_40_134
  %weight_buf_4_load_8 = load float* %weight_buf_4_addr_10, align 16
  %tmp_40_135 = fmul float %in_buf_4_load_8, %weight_buf_4_load_8
  %tmp_41_135 = fadd float %tmp_41_134, %tmp_40_135
  %weight_buf_4_load_9 = load float* %weight_buf_4_addr_11, align 4
  %tmp_40_136 = fmul float %in_buf_4_load_9, %weight_buf_4_load_9
  %tmp_41_136 = fadd float %tmp_41_135, %tmp_40_136
  %weight_buf_4_load_10 = load float* %weight_buf_4_addr_12, align 8
  %tmp_40_137 = fmul float %in_buf_4_load_10, %weight_buf_4_load_10
  %tmp_41_137 = fadd float %tmp_41_136, %tmp_40_137
  %weight_buf_4_load_11 = load float* %weight_buf_4_addr_13, align 4
  %tmp_40_138 = fmul float %in_buf_4_load_11, %weight_buf_4_load_11
  %tmp_41_138 = fadd float %tmp_41_137, %tmp_40_138
  %weight_buf_4_load_12 = load float* %weight_buf_4_addr_14, align 16
  %tmp_40_139 = fmul float %in_buf_4_load_12, %weight_buf_4_load_12
  %tmp_41_139 = fadd float %tmp_41_138, %tmp_40_139
  %weight_buf_4_load_13 = load float* %weight_buf_4_addr_15, align 4
  %tmp_40_140 = fmul float %in_buf_4_load_13, %weight_buf_4_load_13
  %tmp_41_140 = fadd float %tmp_41_139, %tmp_40_140
  %weight_buf_4_load_14 = load float* %weight_buf_4_addr_16, align 8
  %tmp_40_141 = fmul float %in_buf_4_load_14, %weight_buf_4_load_14
  %tmp_41_141 = fadd float %tmp_41_140, %tmp_40_141
  %weight_buf_4_load_15 = load float* %weight_buf_4_addr_17, align 4
  %tmp_40_142 = fmul float %in_buf_4_load_15, %weight_buf_4_load_15
  %tmp_41_142 = fadd float %tmp_41_141, %tmp_40_142
  %weight_buf_4_load_16 = load float* %weight_buf_4_addr_18, align 16
  %tmp_40_143 = fmul float %in_buf_4_load_16, %weight_buf_4_load_16
  %tmp_41_143 = fadd float %tmp_41_142, %tmp_40_143
  %weight_buf_4_load_17 = load float* %weight_buf_4_addr_19, align 4
  %tmp_40_144 = fmul float %in_buf_4_load_17, %weight_buf_4_load_17
  %tmp_41_144 = fadd float %tmp_41_143, %tmp_40_144
  %weight_buf_4_load_18 = load float* %weight_buf_4_addr_20, align 8
  %tmp_40_145 = fmul float %in_buf_4_load_18, %weight_buf_4_load_18
  %tmp_41_145 = fadd float %tmp_41_144, %tmp_40_145
  %weight_buf_4_load_19 = load float* %weight_buf_4_addr_21, align 4
  %tmp_40_146 = fmul float %in_buf_4_load_19, %weight_buf_4_load_19
  %tmp_41_146 = fadd float %tmp_41_145, %tmp_40_146
  %weight_buf_4_load_20 = load float* %weight_buf_4_addr_22, align 16
  %tmp_40_147 = fmul float %in_buf_4_load_20, %weight_buf_4_load_20
  %tmp_41_147 = fadd float %tmp_41_146, %tmp_40_147
  %weight_buf_4_load_21 = load float* %weight_buf_4_addr_23, align 4
  %tmp_40_148 = fmul float %in_buf_4_load_21, %weight_buf_4_load_21
  %tmp_41_148 = fadd float %tmp_41_147, %tmp_40_148
  %weight_buf_4_load_22 = load float* %weight_buf_4_addr_24, align 8
  %tmp_40_149 = fmul float %in_buf_4_load_22, %weight_buf_4_load_22
  %tmp_41_149 = fadd float %tmp_41_148, %tmp_40_149
  %weight_buf_4_load_23 = load float* %weight_buf_4_addr_25, align 4
  %tmp_40_150 = fmul float %in_buf_4_load_23, %weight_buf_4_load_23
  %tmp_41_150 = fadd float %tmp_41_149, %tmp_40_150
  %weight_buf_4_load_24 = load float* %weight_buf_4_addr_26, align 16
  %tmp_40_151 = fmul float %in_buf_4_load_24, %weight_buf_4_load_24
  %tmp_41_151 = fadd float %tmp_41_150, %tmp_40_151
  %weight_buf_4_load_25 = load float* %weight_buf_4_addr_27, align 4
  %tmp_40_152 = fmul float %in_buf_4_load_25, %weight_buf_4_load_25
  %tmp_41_152 = fadd float %tmp_41_151, %tmp_40_152
  %weight_buf_4_load_26 = load float* %weight_buf_4_addr_28, align 8
  %tmp_40_153 = fmul float %in_buf_4_load_26, %weight_buf_4_load_26
  %tmp_41_153 = fadd float %tmp_41_152, %tmp_40_153
  %weight_buf_4_load_27 = load float* %weight_buf_4_addr_29, align 4
  %tmp_40_154 = fmul float %in_buf_4_load_27, %weight_buf_4_load_27
  %tmp_41_154 = fadd float %tmp_41_153, %tmp_40_154
  %weight_buf_4_load_28 = load float* %weight_buf_4_addr_30, align 16
  %tmp_40_155 = fmul float %in_buf_4_load_28, %weight_buf_4_load_28
  %tmp_41_155 = fadd float %tmp_41_154, %tmp_40_155
  %weight_buf_4_load_29 = load float* %weight_buf_4_addr_31, align 4
  %tmp_40_156 = fmul float %in_buf_4_load_29, %weight_buf_4_load_29
  %tmp_41_156 = fadd float %tmp_41_155, %tmp_40_156
  %weight_buf_4_load_30 = load float* %weight_buf_4_addr_32, align 8
  %tmp_40_157 = fmul float %in_buf_4_load_30, %weight_buf_4_load_30
  %tmp_41_157 = fadd float %tmp_41_156, %tmp_40_157
  %weight_buf_4_load_31 = load float* %weight_buf_4_addr_33, align 4
  %tmp_40_158 = fmul float %in_buf_4_load_31, %weight_buf_4_load_31
  %tmp_41_158 = fadd float %tmp_41_157, %tmp_40_158
  %weight_buf_5_load = load float* %weight_buf_5_addr_2, align 16
  %tmp_40_159 = fmul float %in_buf_5_load, %weight_buf_5_load
  %tmp_41_159 = fadd float %tmp_41_158, %tmp_40_159
  %weight_buf_5_load_1 = load float* %weight_buf_5_addr_3, align 4
  %tmp_40_160 = fmul float %in_buf_5_load_1, %weight_buf_5_load_1
  %tmp_41_160 = fadd float %tmp_41_159, %tmp_40_160
  %weight_buf_5_load_2 = load float* %weight_buf_5_addr_4, align 8
  %tmp_40_161 = fmul float %in_buf_5_load_2, %weight_buf_5_load_2
  %tmp_41_161 = fadd float %tmp_41_160, %tmp_40_161
  %weight_buf_5_load_3 = load float* %weight_buf_5_addr_5, align 4
  %tmp_40_162 = fmul float %in_buf_5_load_3, %weight_buf_5_load_3
  %tmp_41_162 = fadd float %tmp_41_161, %tmp_40_162
  %weight_buf_5_load_4 = load float* %weight_buf_5_addr_6, align 16
  %tmp_40_163 = fmul float %in_buf_5_load_4, %weight_buf_5_load_4
  %tmp_41_163 = fadd float %tmp_41_162, %tmp_40_163
  %weight_buf_5_load_5 = load float* %weight_buf_5_addr_7, align 4
  %tmp_40_164 = fmul float %in_buf_5_load_5, %weight_buf_5_load_5
  %tmp_41_164 = fadd float %tmp_41_163, %tmp_40_164
  %weight_buf_5_load_6 = load float* %weight_buf_5_addr_8, align 8
  %tmp_40_165 = fmul float %in_buf_5_load_6, %weight_buf_5_load_6
  %tmp_41_165 = fadd float %tmp_41_164, %tmp_40_165
  %weight_buf_5_load_7 = load float* %weight_buf_5_addr_9, align 4
  %tmp_40_166 = fmul float %in_buf_5_load_7, %weight_buf_5_load_7
  %tmp_41_166 = fadd float %tmp_41_165, %tmp_40_166
  %weight_buf_5_load_8 = load float* %weight_buf_5_addr_10, align 16
  %tmp_40_167 = fmul float %in_buf_5_load_8, %weight_buf_5_load_8
  %tmp_41_167 = fadd float %tmp_41_166, %tmp_40_167
  %weight_buf_5_load_9 = load float* %weight_buf_5_addr_11, align 4
  %tmp_40_168 = fmul float %in_buf_5_load_9, %weight_buf_5_load_9
  %tmp_41_168 = fadd float %tmp_41_167, %tmp_40_168
  %weight_buf_5_load_10 = load float* %weight_buf_5_addr_12, align 8
  %tmp_40_169 = fmul float %in_buf_5_load_10, %weight_buf_5_load_10
  %tmp_41_169 = fadd float %tmp_41_168, %tmp_40_169
  %weight_buf_5_load_11 = load float* %weight_buf_5_addr_13, align 4
  %tmp_40_170 = fmul float %in_buf_5_load_11, %weight_buf_5_load_11
  %tmp_41_170 = fadd float %tmp_41_169, %tmp_40_170
  %weight_buf_5_load_12 = load float* %weight_buf_5_addr_14, align 16
  %tmp_40_171 = fmul float %in_buf_5_load_12, %weight_buf_5_load_12
  %tmp_41_171 = fadd float %tmp_41_170, %tmp_40_171
  %weight_buf_5_load_13 = load float* %weight_buf_5_addr_15, align 4
  %tmp_40_172 = fmul float %in_buf_5_load_13, %weight_buf_5_load_13
  %tmp_41_172 = fadd float %tmp_41_171, %tmp_40_172
  %weight_buf_5_load_14 = load float* %weight_buf_5_addr_16, align 8
  %tmp_40_173 = fmul float %in_buf_5_load_14, %weight_buf_5_load_14
  %tmp_41_173 = fadd float %tmp_41_172, %tmp_40_173
  %weight_buf_5_load_15 = load float* %weight_buf_5_addr_17, align 4
  %tmp_40_174 = fmul float %in_buf_5_load_15, %weight_buf_5_load_15
  %tmp_41_174 = fadd float %tmp_41_173, %tmp_40_174
  %weight_buf_5_load_16 = load float* %weight_buf_5_addr_18, align 16
  %tmp_40_175 = fmul float %in_buf_5_load_16, %weight_buf_5_load_16
  %tmp_41_175 = fadd float %tmp_41_174, %tmp_40_175
  %weight_buf_5_load_17 = load float* %weight_buf_5_addr_19, align 4
  %tmp_40_176 = fmul float %in_buf_5_load_17, %weight_buf_5_load_17
  %tmp_41_176 = fadd float %tmp_41_175, %tmp_40_176
  %weight_buf_5_load_18 = load float* %weight_buf_5_addr_20, align 8
  %tmp_40_177 = fmul float %in_buf_5_load_18, %weight_buf_5_load_18
  %tmp_41_177 = fadd float %tmp_41_176, %tmp_40_177
  %weight_buf_5_load_19 = load float* %weight_buf_5_addr_21, align 4
  %tmp_40_178 = fmul float %in_buf_5_load_19, %weight_buf_5_load_19
  %tmp_41_178 = fadd float %tmp_41_177, %tmp_40_178
  %weight_buf_5_load_20 = load float* %weight_buf_5_addr_22, align 16
  %tmp_40_179 = fmul float %in_buf_5_load_20, %weight_buf_5_load_20
  %tmp_41_179 = fadd float %tmp_41_178, %tmp_40_179
  %weight_buf_5_load_21 = load float* %weight_buf_5_addr_23, align 4
  %tmp_40_180 = fmul float %in_buf_5_load_21, %weight_buf_5_load_21
  %tmp_41_180 = fadd float %tmp_41_179, %tmp_40_180
  %weight_buf_5_load_22 = load float* %weight_buf_5_addr_24, align 8
  %tmp_40_181 = fmul float %in_buf_5_load_22, %weight_buf_5_load_22
  %tmp_41_181 = fadd float %tmp_41_180, %tmp_40_181
  %weight_buf_5_load_23 = load float* %weight_buf_5_addr_25, align 4
  %tmp_40_182 = fmul float %in_buf_5_load_23, %weight_buf_5_load_23
  %tmp_41_182 = fadd float %tmp_41_181, %tmp_40_182
  %weight_buf_5_load_24 = load float* %weight_buf_5_addr_26, align 16
  %tmp_40_183 = fmul float %in_buf_5_load_24, %weight_buf_5_load_24
  %tmp_41_183 = fadd float %tmp_41_182, %tmp_40_183
  %weight_buf_5_load_25 = load float* %weight_buf_5_addr_27, align 4
  %tmp_40_184 = fmul float %in_buf_5_load_25, %weight_buf_5_load_25
  %tmp_41_184 = fadd float %tmp_41_183, %tmp_40_184
  %weight_buf_5_load_26 = load float* %weight_buf_5_addr_28, align 8
  %tmp_40_185 = fmul float %in_buf_5_load_26, %weight_buf_5_load_26
  %tmp_41_185 = fadd float %tmp_41_184, %tmp_40_185
  %weight_buf_5_load_27 = load float* %weight_buf_5_addr_29, align 4
  %tmp_40_186 = fmul float %in_buf_5_load_27, %weight_buf_5_load_27
  %tmp_41_186 = fadd float %tmp_41_185, %tmp_40_186
  %weight_buf_5_load_28 = load float* %weight_buf_5_addr_30, align 16
  %tmp_40_187 = fmul float %in_buf_5_load_28, %weight_buf_5_load_28
  %tmp_41_187 = fadd float %tmp_41_186, %tmp_40_187
  %weight_buf_5_load_29 = load float* %weight_buf_5_addr_31, align 4
  %tmp_40_188 = fmul float %in_buf_5_load_29, %weight_buf_5_load_29
  %tmp_41_188 = fadd float %tmp_41_187, %tmp_40_188
  %weight_buf_5_load_30 = load float* %weight_buf_5_addr_32, align 8
  %tmp_40_189 = fmul float %in_buf_5_load_30, %weight_buf_5_load_30
  %tmp_41_189 = fadd float %tmp_41_188, %tmp_40_189
  %weight_buf_5_load_31 = load float* %weight_buf_5_addr_33, align 4
  %tmp_40_190 = fmul float %in_buf_5_load_31, %weight_buf_5_load_31
  %tmp_41_190 = fadd float %tmp_41_189, %tmp_40_190
  %weight_buf_6_load = load float* %weight_buf_6_addr_2, align 16
  %tmp_40_191 = fmul float %in_buf_6_load, %weight_buf_6_load
  %tmp_41_191 = fadd float %tmp_41_190, %tmp_40_191
  %weight_buf_6_load_1 = load float* %weight_buf_6_addr_3, align 4
  %tmp_40_192 = fmul float %in_buf_6_load_1, %weight_buf_6_load_1
  %tmp_41_192 = fadd float %tmp_41_191, %tmp_40_192
  %weight_buf_6_load_2 = load float* %weight_buf_6_addr_4, align 8
  %tmp_40_193 = fmul float %in_buf_6_load_2, %weight_buf_6_load_2
  %tmp_41_193 = fadd float %tmp_41_192, %tmp_40_193
  %weight_buf_6_load_3 = load float* %weight_buf_6_addr_5, align 4
  %tmp_40_194 = fmul float %in_buf_6_load_3, %weight_buf_6_load_3
  %tmp_41_194 = fadd float %tmp_41_193, %tmp_40_194
  %weight_buf_6_load_4 = load float* %weight_buf_6_addr_6, align 16
  %tmp_40_195 = fmul float %in_buf_6_load_4, %weight_buf_6_load_4
  %tmp_41_195 = fadd float %tmp_41_194, %tmp_40_195
  %weight_buf_6_load_5 = load float* %weight_buf_6_addr_7, align 4
  %tmp_40_196 = fmul float %in_buf_6_load_5, %weight_buf_6_load_5
  %tmp_41_196 = fadd float %tmp_41_195, %tmp_40_196
  %weight_buf_6_load_6 = load float* %weight_buf_6_addr_8, align 8
  %tmp_40_197 = fmul float %in_buf_6_load_6, %weight_buf_6_load_6
  %tmp_41_197 = fadd float %tmp_41_196, %tmp_40_197
  %weight_buf_6_load_7 = load float* %weight_buf_6_addr_9, align 4
  %tmp_40_198 = fmul float %in_buf_6_load_7, %weight_buf_6_load_7
  %tmp_41_198 = fadd float %tmp_41_197, %tmp_40_198
  %weight_buf_6_load_8 = load float* %weight_buf_6_addr_10, align 16
  %tmp_40_199 = fmul float %in_buf_6_load_8, %weight_buf_6_load_8
  %tmp_41_199 = fadd float %tmp_41_198, %tmp_40_199
  %weight_buf_6_load_9 = load float* %weight_buf_6_addr_11, align 4
  %tmp_40_200 = fmul float %in_buf_6_load_9, %weight_buf_6_load_9
  %tmp_41_200 = fadd float %tmp_41_199, %tmp_40_200
  %weight_buf_6_load_10 = load float* %weight_buf_6_addr_12, align 8
  %tmp_40_201 = fmul float %in_buf_6_load_10, %weight_buf_6_load_10
  %tmp_41_201 = fadd float %tmp_41_200, %tmp_40_201
  %weight_buf_6_load_11 = load float* %weight_buf_6_addr_13, align 4
  %tmp_40_202 = fmul float %in_buf_6_load_11, %weight_buf_6_load_11
  %tmp_41_202 = fadd float %tmp_41_201, %tmp_40_202
  %weight_buf_6_load_12 = load float* %weight_buf_6_addr_14, align 16
  %tmp_40_203 = fmul float %in_buf_6_load_12, %weight_buf_6_load_12
  %tmp_41_203 = fadd float %tmp_41_202, %tmp_40_203
  %weight_buf_6_load_13 = load float* %weight_buf_6_addr_15, align 4
  %tmp_40_204 = fmul float %in_buf_6_load_13, %weight_buf_6_load_13
  %tmp_41_204 = fadd float %tmp_41_203, %tmp_40_204
  %weight_buf_6_load_14 = load float* %weight_buf_6_addr_16, align 8
  %tmp_40_205 = fmul float %in_buf_6_load_14, %weight_buf_6_load_14
  %tmp_41_205 = fadd float %tmp_41_204, %tmp_40_205
  %weight_buf_6_load_15 = load float* %weight_buf_6_addr_17, align 4
  %tmp_40_206 = fmul float %in_buf_6_load_15, %weight_buf_6_load_15
  %tmp_41_206 = fadd float %tmp_41_205, %tmp_40_206
  %weight_buf_6_load_16 = load float* %weight_buf_6_addr_18, align 16
  %tmp_40_207 = fmul float %in_buf_6_load_16, %weight_buf_6_load_16
  %tmp_41_207 = fadd float %tmp_41_206, %tmp_40_207
  %weight_buf_6_load_17 = load float* %weight_buf_6_addr_19, align 4
  %tmp_40_208 = fmul float %in_buf_6_load_17, %weight_buf_6_load_17
  %tmp_41_208 = fadd float %tmp_41_207, %tmp_40_208
  %weight_buf_6_load_18 = load float* %weight_buf_6_addr_20, align 8
  %tmp_40_209 = fmul float %in_buf_6_load_18, %weight_buf_6_load_18
  %tmp_41_209 = fadd float %tmp_41_208, %tmp_40_209
  %weight_buf_6_load_19 = load float* %weight_buf_6_addr_21, align 4
  %tmp_40_210 = fmul float %in_buf_6_load_19, %weight_buf_6_load_19
  %tmp_41_210 = fadd float %tmp_41_209, %tmp_40_210
  %weight_buf_6_load_20 = load float* %weight_buf_6_addr_22, align 16
  %tmp_40_211 = fmul float %in_buf_6_load_20, %weight_buf_6_load_20
  %tmp_41_211 = fadd float %tmp_41_210, %tmp_40_211
  %weight_buf_6_load_21 = load float* %weight_buf_6_addr_23, align 4
  %tmp_40_212 = fmul float %in_buf_6_load_21, %weight_buf_6_load_21
  %tmp_41_212 = fadd float %tmp_41_211, %tmp_40_212
  %weight_buf_6_load_22 = load float* %weight_buf_6_addr_24, align 8
  %tmp_40_213 = fmul float %in_buf_6_load_22, %weight_buf_6_load_22
  %tmp_41_213 = fadd float %tmp_41_212, %tmp_40_213
  %weight_buf_6_load_23 = load float* %weight_buf_6_addr_25, align 4
  %tmp_40_214 = fmul float %in_buf_6_load_23, %weight_buf_6_load_23
  %tmp_41_214 = fadd float %tmp_41_213, %tmp_40_214
  %weight_buf_6_load_24 = load float* %weight_buf_6_addr_26, align 16
  %tmp_40_215 = fmul float %in_buf_6_load_24, %weight_buf_6_load_24
  %tmp_41_215 = fadd float %tmp_41_214, %tmp_40_215
  %weight_buf_6_load_25 = load float* %weight_buf_6_addr_27, align 4
  %tmp_40_216 = fmul float %in_buf_6_load_25, %weight_buf_6_load_25
  %tmp_41_216 = fadd float %tmp_41_215, %tmp_40_216
  %weight_buf_6_load_26 = load float* %weight_buf_6_addr_28, align 8
  %tmp_40_217 = fmul float %in_buf_6_load_26, %weight_buf_6_load_26
  %tmp_41_217 = fadd float %tmp_41_216, %tmp_40_217
  %weight_buf_6_load_27 = load float* %weight_buf_6_addr_29, align 4
  %tmp_40_218 = fmul float %in_buf_6_load_27, %weight_buf_6_load_27
  %tmp_41_218 = fadd float %tmp_41_217, %tmp_40_218
  %weight_buf_6_load_28 = load float* %weight_buf_6_addr_30, align 16
  %tmp_40_219 = fmul float %in_buf_6_load_28, %weight_buf_6_load_28
  %tmp_41_219 = fadd float %tmp_41_218, %tmp_40_219
  %weight_buf_6_load_29 = load float* %weight_buf_6_addr_31, align 4
  %tmp_40_220 = fmul float %in_buf_6_load_29, %weight_buf_6_load_29
  %tmp_41_220 = fadd float %tmp_41_219, %tmp_40_220
  %weight_buf_6_load_30 = load float* %weight_buf_6_addr_32, align 8
  %tmp_40_221 = fmul float %in_buf_6_load_30, %weight_buf_6_load_30
  %tmp_41_221 = fadd float %tmp_41_220, %tmp_40_221
  %weight_buf_6_load_31 = load float* %weight_buf_6_addr_33, align 4
  %tmp_40_222 = fmul float %in_buf_6_load_31, %weight_buf_6_load_31
  %tmp_41_222 = fadd float %tmp_41_221, %tmp_40_222
  %weight_buf_7_load = load float* %weight_buf_7_addr_2, align 16
  %tmp_40_223 = fmul float %in_buf_7_load, %weight_buf_7_load
  %tmp_41_223 = fadd float %tmp_41_222, %tmp_40_223
  %weight_buf_7_load_1 = load float* %weight_buf_7_addr_3, align 4
  %tmp_40_224 = fmul float %in_buf_7_load_1, %weight_buf_7_load_1
  %tmp_41_224 = fadd float %tmp_41_223, %tmp_40_224
  %weight_buf_7_load_2 = load float* %weight_buf_7_addr_4, align 8
  %tmp_40_225 = fmul float %in_buf_7_load_2, %weight_buf_7_load_2
  %tmp_41_225 = fadd float %tmp_41_224, %tmp_40_225
  %weight_buf_7_load_3 = load float* %weight_buf_7_addr_5, align 4
  %tmp_40_226 = fmul float %in_buf_7_load_3, %weight_buf_7_load_3
  %tmp_41_226 = fadd float %tmp_41_225, %tmp_40_226
  %weight_buf_7_load_4 = load float* %weight_buf_7_addr_6, align 16
  %tmp_40_227 = fmul float %in_buf_7_load_4, %weight_buf_7_load_4
  %tmp_41_227 = fadd float %tmp_41_226, %tmp_40_227
  %weight_buf_7_load_5 = load float* %weight_buf_7_addr_7, align 4
  %tmp_40_228 = fmul float %in_buf_7_load_5, %weight_buf_7_load_5
  %tmp_41_228 = fadd float %tmp_41_227, %tmp_40_228
  %weight_buf_7_load_6 = load float* %weight_buf_7_addr_8, align 8
  %tmp_40_229 = fmul float %in_buf_7_load_6, %weight_buf_7_load_6
  %tmp_41_229 = fadd float %tmp_41_228, %tmp_40_229
  %weight_buf_7_load_7 = load float* %weight_buf_7_addr_9, align 4
  %tmp_40_230 = fmul float %in_buf_7_load_7, %weight_buf_7_load_7
  %tmp_41_230 = fadd float %tmp_41_229, %tmp_40_230
  %weight_buf_7_load_8 = load float* %weight_buf_7_addr_10, align 16
  %tmp_40_231 = fmul float %in_buf_7_load_8, %weight_buf_7_load_8
  %tmp_41_231 = fadd float %tmp_41_230, %tmp_40_231
  %weight_buf_7_load_9 = load float* %weight_buf_7_addr_11, align 4
  %tmp_40_232 = fmul float %in_buf_7_load_9, %weight_buf_7_load_9
  %tmp_41_232 = fadd float %tmp_41_231, %tmp_40_232
  %weight_buf_7_load_10 = load float* %weight_buf_7_addr_12, align 8
  %tmp_40_233 = fmul float %in_buf_7_load_10, %weight_buf_7_load_10
  %tmp_41_233 = fadd float %tmp_41_232, %tmp_40_233
  %weight_buf_7_load_11 = load float* %weight_buf_7_addr_13, align 4
  %tmp_40_234 = fmul float %in_buf_7_load_11, %weight_buf_7_load_11
  %tmp_41_234 = fadd float %tmp_41_233, %tmp_40_234
  %weight_buf_7_load_12 = load float* %weight_buf_7_addr_14, align 16
  %tmp_40_235 = fmul float %in_buf_7_load_12, %weight_buf_7_load_12
  %tmp_41_235 = fadd float %tmp_41_234, %tmp_40_235
  %weight_buf_7_load_13 = load float* %weight_buf_7_addr_15, align 4
  %tmp_40_236 = fmul float %in_buf_7_load_13, %weight_buf_7_load_13
  %tmp_41_236 = fadd float %tmp_41_235, %tmp_40_236
  %weight_buf_7_load_14 = load float* %weight_buf_7_addr_16, align 8
  %tmp_40_237 = fmul float %in_buf_7_load_14, %weight_buf_7_load_14
  %tmp_41_237 = fadd float %tmp_41_236, %tmp_40_237
  %weight_buf_7_load_15 = load float* %weight_buf_7_addr_17, align 4
  %tmp_40_238 = fmul float %in_buf_7_load_15, %weight_buf_7_load_15
  %tmp_41_238 = fadd float %tmp_41_237, %tmp_40_238
  %weight_buf_7_load_16 = load float* %weight_buf_7_addr_18, align 16
  %tmp_40_239 = fmul float %in_buf_7_load_16, %weight_buf_7_load_16
  %tmp_41_239 = fadd float %tmp_41_238, %tmp_40_239
  %weight_buf_7_load_17 = load float* %weight_buf_7_addr_19, align 4
  %tmp_40_240 = fmul float %in_buf_7_load_17, %weight_buf_7_load_17
  %tmp_41_240 = fadd float %tmp_41_239, %tmp_40_240
  %weight_buf_7_load_18 = load float* %weight_buf_7_addr_20, align 8
  %tmp_40_241 = fmul float %in_buf_7_load_18, %weight_buf_7_load_18
  %tmp_41_241 = fadd float %tmp_41_240, %tmp_40_241
  %weight_buf_7_load_19 = load float* %weight_buf_7_addr_21, align 4
  %tmp_40_242 = fmul float %in_buf_7_load_19, %weight_buf_7_load_19
  %tmp_41_242 = fadd float %tmp_41_241, %tmp_40_242
  %weight_buf_7_load_20 = load float* %weight_buf_7_addr_22, align 16
  %tmp_40_243 = fmul float %in_buf_7_load_20, %weight_buf_7_load_20
  %tmp_41_243 = fadd float %tmp_41_242, %tmp_40_243
  %weight_buf_7_load_21 = load float* %weight_buf_7_addr_23, align 4
  %tmp_40_244 = fmul float %in_buf_7_load_21, %weight_buf_7_load_21
  %tmp_41_244 = fadd float %tmp_41_243, %tmp_40_244
  %weight_buf_7_load_22 = load float* %weight_buf_7_addr_24, align 8
  %tmp_40_245 = fmul float %in_buf_7_load_22, %weight_buf_7_load_22
  %tmp_41_245 = fadd float %tmp_41_244, %tmp_40_245
  %weight_buf_7_load_23 = load float* %weight_buf_7_addr_25, align 4
  %tmp_40_246 = fmul float %in_buf_7_load_23, %weight_buf_7_load_23
  %tmp_41_246 = fadd float %tmp_41_245, %tmp_40_246
  %weight_buf_7_load_24 = load float* %weight_buf_7_addr_26, align 16
  %tmp_40_247 = fmul float %in_buf_7_load_24, %weight_buf_7_load_24
  %tmp_41_247 = fadd float %tmp_41_246, %tmp_40_247
  %weight_buf_7_load_25 = load float* %weight_buf_7_addr_27, align 4
  %tmp_40_248 = fmul float %in_buf_7_load_25, %weight_buf_7_load_25
  %tmp_41_248 = fadd float %tmp_41_247, %tmp_40_248
  %weight_buf_7_load_26 = load float* %weight_buf_7_addr_28, align 8
  %tmp_40_249 = fmul float %in_buf_7_load_26, %weight_buf_7_load_26
  %tmp_41_249 = fadd float %tmp_41_248, %tmp_40_249
  %weight_buf_7_load_27 = load float* %weight_buf_7_addr_29, align 4
  %tmp_40_250 = fmul float %in_buf_7_load_27, %weight_buf_7_load_27
  %tmp_41_250 = fadd float %tmp_41_249, %tmp_40_250
  %weight_buf_7_load_28 = load float* %weight_buf_7_addr_30, align 16
  %tmp_40_251 = fmul float %in_buf_7_load_28, %weight_buf_7_load_28
  %tmp_41_251 = fadd float %tmp_41_250, %tmp_40_251
  %weight_buf_7_load_29 = load float* %weight_buf_7_addr_31, align 4
  %tmp_40_252 = fmul float %in_buf_7_load_29, %weight_buf_7_load_29
  %tmp_41_252 = fadd float %tmp_41_251, %tmp_40_252
  %weight_buf_7_load_30 = load float* %weight_buf_7_addr_32, align 8
  %tmp_40_253 = fmul float %in_buf_7_load_30, %weight_buf_7_load_30
  %tmp_41_253 = fadd float %tmp_41_252, %tmp_40_253
  %weight_buf_7_load_31 = load float* %weight_buf_7_addr_33, align 4
  %tmp_40_254 = fmul float %in_buf_7_load_31, %weight_buf_7_load_31
  %tmp_41_254 = fadd float %tmp_41_253, %tmp_40_254
  store float %tmp_41_254, float* %out_buf_addr_2, align 4
  %empty_20 = call i32 (...)* @_ssdm_op_SpecRegionEnd([3 x i8]* @p_str12, i32 %tmp_29)
  %j_3 = add i4 %j5_mid2, 1
  br label %.preheader16.preheader

.preheader:                                       ; preds = %.preheader.preheader, %13
  %indvars_iv = phi i6 [ %indvars_iv_next, %13 ], [ 5, %.preheader.preheader ]
  %os_idx = phi i6 [ %indvars_iv, %13 ], [ 0, %.preheader.preheader ]
  %i6 = phi i4 [ %i_5, %13 ], [ 0, %.preheader.preheader ]
  %exitcond1 = icmp eq i4 %i6, -8
  %i_5 = add i4 %i6, 1
  br i1 %exitcond1, label %14, label %13

; <label>:13                                      ; preds = %.preheader
  %empty_21 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  call void (...)* @_ssdm_op_SpecLoopName([10 x i8]* @p_str14) nounwind
  %tmp_24 = call i32 (...)* @_ssdm_op_SpecRegionBegin([10 x i8]* @p_str14)
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %tmp_228 = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %i6, i3 0)
  %p_shl2_cast = zext i7 %tmp_228 to i8
  %tmp_229 = call i5 @_ssdm_op_BitConcatenate.i5.i4.i1(i4 %i6, i1 false)
  %p_shl3_cast = zext i5 %tmp_229 to i8
  %tmp_230 = add i8 %p_shl3_cast, %p_shl2_cast
  %tmp_230_cast = zext i8 %tmp_230 to i64
  %out_buf_addr = getelementptr [80 x float]* %out_buf, i64 0, i64 %tmp_230_cast
  %tmp_231 = or i8 %tmp_230, 1
  %tmp_231_cast = zext i8 %tmp_231 to i64
  %out_buf_addr_1 = getelementptr [80 x float]* %out_buf, i64 0, i64 %tmp_231_cast
  %tmp_232 = add i8 %tmp_230, 2
  %tmp_232_cast = sext i8 %tmp_232 to i64
  %out_buf_addr_5 = getelementptr [80 x float]* %out_buf, i64 0, i64 %tmp_232_cast
  %tmp_233 = add i8 %tmp_230, 3
  %tmp_233_cast = sext i8 %tmp_233 to i64
  %out_buf_addr_6 = getelementptr [80 x float]* %out_buf, i64 0, i64 %tmp_233_cast
  %tmp_234 = add i8 %tmp_230, 4
  %tmp_234_cast = sext i8 %tmp_234 to i64
  %out_buf_addr_7 = getelementptr [80 x float]* %out_buf, i64 0, i64 %tmp_234_cast
  %tmp_235 = add i8 %tmp_230, 5
  %tmp_235_cast = sext i8 %tmp_235 to i64
  %out_buf_addr_8 = getelementptr [80 x float]* %out_buf, i64 0, i64 %tmp_235_cast
  %tmp_236 = add i8 %tmp_230, 6
  %tmp_236_cast = sext i8 %tmp_236 to i64
  %out_buf_addr_3 = getelementptr [80 x float]* %out_buf, i64 0, i64 %tmp_236_cast
  %tmp_237 = add i8 %tmp_230, 7
  %tmp_237_cast = sext i8 %tmp_237 to i64
  %out_buf_addr_9 = getelementptr [80 x float]* %out_buf, i64 0, i64 %tmp_237_cast
  %tmp_238 = add i8 %tmp_230, 8
  %tmp_238_cast = sext i8 %tmp_238 to i64
  %out_buf_addr_4 = getelementptr [80 x float]* %out_buf, i64 0, i64 %tmp_238_cast
  %tmp_239 = add i8 %tmp_230, 9
  %tmp_239_cast = sext i8 %tmp_239 to i64
  %out_buf_addr_10 = getelementptr [80 x float]* %out_buf, i64 0, i64 %tmp_239_cast
  %out_buf_load = load float* %out_buf_addr, align 8
  %tmp_26 = bitcast float %out_buf_load to i32
  %out_buf_load_1 = load float* %out_buf_addr_1, align 4
  %tmp_27 = bitcast float %out_buf_load_1 to i32
  %converter_s = call i64 @_ssdm_op_BitConcatenate.i64.i32.i32(i32 %tmp_27, i32 %tmp_26)
  call void @_ssdm_op_Write.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %out_stream_data_V, i8* %out_stream_keep_V, i8* %out_stream_strb_V, i4* %out_stream_user_V, i1* %out_stream_last_V, i5* %out_stream_id_V, i5* %out_stream_dest_V, i64 %converter_s, i8 -1, i8 -1, i4 0, i1 false, i5 0, i5 0)
  %out_buf_load_5 = load float* %out_buf_addr_5, align 8
  %tmp_30_1 = bitcast float %out_buf_load_5 to i32
  %out_buf_load_6 = load float* %out_buf_addr_6, align 4
  %tmp_34_1 = bitcast float %out_buf_load_6 to i32
  %converter_12_1 = call i64 @_ssdm_op_BitConcatenate.i64.i32.i32(i32 %tmp_34_1, i32 %tmp_30_1)
  call void @_ssdm_op_Write.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %out_stream_data_V, i8* %out_stream_keep_V, i8* %out_stream_strb_V, i4* %out_stream_user_V, i1* %out_stream_last_V, i5* %out_stream_id_V, i5* %out_stream_dest_V, i64 %converter_12_1, i8 -1, i8 -1, i4 0, i1 false, i5 0, i5 0)
  %out_buf_load_2 = load float* %out_buf_addr_7, align 8
  %tmp_30_2 = bitcast float %out_buf_load_2 to i32
  %out_buf_load_7 = load float* %out_buf_addr_8, align 4
  %tmp_34_2 = bitcast float %out_buf_load_7 to i32
  %converter_12_2 = call i64 @_ssdm_op_BitConcatenate.i64.i32.i32(i32 %tmp_34_2, i32 %tmp_30_2)
  call void @_ssdm_op_Write.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %out_stream_data_V, i8* %out_stream_keep_V, i8* %out_stream_strb_V, i4* %out_stream_user_V, i1* %out_stream_last_V, i5* %out_stream_id_V, i5* %out_stream_dest_V, i64 %converter_12_2, i8 -1, i8 -1, i4 0, i1 false, i5 0, i5 0)
  %out_buf_load_3 = load float* %out_buf_addr_3, align 8
  %tmp_30_3 = bitcast float %out_buf_load_3 to i32
  %out_buf_load_8 = load float* %out_buf_addr_9, align 4
  %tmp_34_3 = bitcast float %out_buf_load_8 to i32
  %converter_12_3 = call i64 @_ssdm_op_BitConcatenate.i64.i32.i32(i32 %tmp_34_3, i32 %tmp_30_3)
  call void @_ssdm_op_Write.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %out_stream_data_V, i8* %out_stream_keep_V, i8* %out_stream_strb_V, i4* %out_stream_user_V, i1* %out_stream_last_V, i5* %out_stream_id_V, i5* %out_stream_dest_V, i64 %converter_12_3, i8 -1, i8 -1, i4 0, i1 false, i5 0, i5 0)
  %out_buf_load_4 = load float* %out_buf_addr_4, align 8
  %tmp_30_4 = bitcast float %out_buf_load_4 to i32
  %out_buf_load_9 = load float* %out_buf_addr_10, align 4
  %tmp_34_4 = bitcast float %out_buf_load_9 to i32
  %converter_12_4 = call i64 @_ssdm_op_BitConcatenate.i64.i32.i32(i32 %tmp_34_4, i32 %tmp_30_4)
  %last_assign_4 = icmp eq i6 %os_idx, -29
  call void @_ssdm_op_Write.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %out_stream_data_V, i8* %out_stream_keep_V, i8* %out_stream_strb_V, i4* %out_stream_user_V, i1* %out_stream_last_V, i5* %out_stream_id_V, i5* %out_stream_dest_V, i64 %converter_12_4, i8 -1, i8 -1, i4 0, i1 %last_assign_4, i5 0, i5 0)
  %empty_22 = call i32 (...)* @_ssdm_op_SpecRegionEnd([10 x i8]* @p_str14, i32 %tmp_24)
  %indvars_iv_next = add i6 %indvars_iv, 5
  br label %.preheader

; <label>:14                                      ; preds = %.preheader
  ret void

branch8:                                          ; preds = %5
  store float %bitcast2, float* %weight_buf_0_addr, align 8
  store float %tmp_15, float* %weight_buf_0_addr_1, align 4
  br label %6

branch9:                                          ; preds = %5
  store float %bitcast2, float* %weight_buf_1_addr, align 8
  store float %tmp_15, float* %weight_buf_1_addr_1, align 4
  br label %6

branch10:                                         ; preds = %5
  store float %bitcast2, float* %weight_buf_2_addr, align 8
  store float %tmp_15, float* %weight_buf_2_addr_1, align 4
  br label %6

branch11:                                         ; preds = %5
  store float %bitcast2, float* %weight_buf_3_addr, align 8
  store float %tmp_15, float* %weight_buf_3_addr_1, align 4
  br label %6

branch12:                                         ; preds = %5
  store float %bitcast2, float* %weight_buf_4_addr, align 8
  store float %tmp_15, float* %weight_buf_4_addr_1, align 4
  br label %6

branch13:                                         ; preds = %5
  store float %bitcast2, float* %weight_buf_5_addr, align 8
  store float %tmp_15, float* %weight_buf_5_addr_1, align 4
  br label %6

branch14:                                         ; preds = %5
  store float %bitcast2, float* %weight_buf_6_addr, align 8
  store float %tmp_15, float* %weight_buf_6_addr_1, align 4
  br label %6

branch15:                                         ; preds = %5
  store float %bitcast2, float* %weight_buf_7_addr, align 8
  store float %tmp_15, float* %weight_buf_7_addr_1, align 4
  br label %6

branch24:                                         ; preds = %10
  store float %bitcast, float* %in_buf_0_addr, align 8
  store float %tmp_23, float* %in_buf_0_addr_1, align 4
  br label %11

branch25:                                         ; preds = %10
  store float %bitcast, float* %in_buf_1_addr, align 8
  store float %tmp_23, float* %in_buf_1_addr_1, align 4
  br label %11

branch26:                                         ; preds = %10
  store float %bitcast, float* %in_buf_2_addr, align 8
  store float %tmp_23, float* %in_buf_2_addr_1, align 4
  br label %11

branch27:                                         ; preds = %10
  store float %bitcast, float* %in_buf_3_addr, align 8
  store float %tmp_23, float* %in_buf_3_addr_1, align 4
  br label %11

branch28:                                         ; preds = %10
  store float %bitcast, float* %in_buf_4_addr, align 8
  store float %tmp_23, float* %in_buf_4_addr_1, align 4
  br label %11

branch29:                                         ; preds = %10
  store float %bitcast, float* %in_buf_5_addr, align 8
  store float %tmp_23, float* %in_buf_5_addr_1, align 4
  br label %11

branch30:                                         ; preds = %10
  store float %bitcast, float* %in_buf_6_addr, align 8
  store float %tmp_23, float* %in_buf_6_addr_1, align 4
  br label %11

branch31:                                         ; preds = %10
  store float %bitcast, float* %in_buf_7_addr, align 8
  store float %tmp_23, float* %in_buf_7_addr_1, align 4
  br label %11
}

declare i9 @llvm.part.select.i9(i9, i32, i32) nounwind readnone

declare i64 @llvm.part.select.i64(i64, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

define weak void @_ssdm_op_Write.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64*, i8*, i8*, i4*, i1*, i5*, i5*, i64, i8, i8, i4, i1, i5, i5) {
entry:
  store i64 %7, i64* %0
  store i8 %8, i8* %1
  store i8 %9, i8* %2
  store i4 %10, i4* %3
  store i1 %11, i1* %4
  store i5 %12, i5* %5
  store i5 %13, i5* %6
  ret void
}

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak { i64, i8, i8, i4, i1, i5, i5 } @_ssdm_op_Read.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64*, i8*, i8*, i4*, i1*, i5*, i5*) {
entry:
  %empty = load i64* %0
  %empty_23 = load i8* %1
  %empty_24 = load i8* %2
  %empty_25 = load i4* %3
  %empty_26 = load i1* %4
  %empty_27 = load i5* %5
  %empty_28 = load i5* %6
  %mrv_0 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } undef, i64 %empty, 0
  %mrv1 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv_0, i8 %empty_23, 1
  %mrv2 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv1, i8 %empty_24, 2
  %mrv3 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv2, i4 %empty_25, 3
  %mrv4 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv3, i1 %empty_26, 4
  %mrv5 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv4, i5 %empty_27, 5
  %mrv6 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv5, i5 %empty_28, 6
  ret { i64, i8, i8, i4, i1, i5, i5 } %mrv6
}

declare i5 @_ssdm_op_PartSelect.i5.i9.i32.i32(i9, i32, i32) nounwind readnone

define weak i4 @_ssdm_op_PartSelect.i4.i9.i32.i32(i9, i32, i32) nounwind readnone {
entry:
  %empty = call i9 @llvm.part.select.i9(i9 %0, i32 %1, i32 %2)
  %empty_29 = trunc i9 %empty to i4
  ret i4 %empty_29
}

define weak i32 @_ssdm_op_PartSelect.i32.i64.i32.i32(i64, i32, i32) nounwind readnone {
entry:
  %empty = call i64 @llvm.part.select.i64(i64 %0, i32 %1, i32 %2)
  %empty_30 = trunc i64 %empty to i32
  ret i32 %empty_30
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4, i5) nounwind readnone {
entry:
  %empty = zext i4 %0 to i9
  %empty_31 = zext i5 %1 to i9
  %empty_32 = shl i9 %empty, 5
  %empty_33 = or i9 %empty_32, %empty_31
  ret i9 %empty_33
}

define weak i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4, i3) nounwind readnone {
entry:
  %empty = zext i4 %0 to i7
  %empty_34 = zext i3 %1 to i7
  %empty_35 = shl i7 %empty, 3
  %empty_36 = or i7 %empty_35, %empty_34
  ret i7 %empty_36
}

define weak i64 @_ssdm_op_BitConcatenate.i64.i55.i9(i55, i9) nounwind readnone {
entry:
  %empty = zext i55 %0 to i64
  %empty_37 = zext i9 %1 to i64
  %empty_38 = shl i64 %empty, 9
  %empty_39 = or i64 %empty_38, %empty_37
  ret i64 %empty_39
}

define weak i64 @_ssdm_op_BitConcatenate.i64.i32.i32(i32, i32) nounwind readnone {
entry:
  %empty = zext i32 %0 to i64
  %empty_40 = zext i32 %1 to i64
  %empty_41 = shl i64 %empty, 32
  %empty_42 = or i64 %empty_41, %empty_40
  ret i64 %empty_42
}

define weak i5 @_ssdm_op_BitConcatenate.i5.i4.i1(i4, i1) nounwind readnone {
entry:
  %empty = zext i4 %0 to i5
  %empty_43 = zext i1 %1 to i5
  %empty_44 = shl i5 %empty, 1
  %empty_45 = or i5 %empty_44, %empty_43
  ret i5 %empty_45
}

declare void @_GLOBAL__I_a() nounwind section ".text.startup"

!opencl.kernels = !{!0, !7, !13, !17, !17, !20, !20, !17, !17, !20, !20, !17, !17, !20, !20, !17, !17, !20, !20, !26, !26, !20, !20, !20, !28, !31, !33, !35, !37, !20, !20, !20, !20, !20, !20, !20, !20, !20, !20, !20, !20, !39}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!42}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"AXI_VAL*", metadata !"AXI_VAL*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"in_stream", metadata !"out_stream"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!9 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!10 = metadata !{metadata !"kernel_arg_type", metadata !"const AXI_VAL &"}
!11 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!12 = metadata !{metadata !"kernel_arg_name", metadata !"e"}
!13 = metadata !{null, metadata !14, metadata !2, metadata !15, metadata !4, metadata !16, metadata !6}
!14 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0}
!15 = metadata !{metadata !"kernel_arg_type", metadata !"const axi_T &", metadata !"_Bool"}
!16 = metadata !{metadata !"kernel_arg_name", metadata !"v", metadata !"last"}
!17 = metadata !{null, metadata !8, metadata !9, metadata !18, metadata !11, metadata !19, metadata !6}
!18 = metadata !{metadata !"kernel_arg_type", metadata !"int"}
!19 = metadata !{metadata !"kernel_arg_name", metadata !"val"}
!20 = metadata !{null, metadata !21, metadata !22, metadata !23, metadata !24, metadata !25, metadata !6}
!21 = metadata !{metadata !"kernel_arg_addr_space"}
!22 = metadata !{metadata !"kernel_arg_access_qual"}
!23 = metadata !{metadata !"kernel_arg_type"}
!24 = metadata !{metadata !"kernel_arg_type_qual"}
!25 = metadata !{metadata !"kernel_arg_name"}
!26 = metadata !{null, metadata !8, metadata !9, metadata !27, metadata !11, metadata !19, metadata !6}
!27 = metadata !{metadata !"kernel_arg_type", metadata !"ulong long"}
!28 = metadata !{null, metadata !8, metadata !9, metadata !29, metadata !11, metadata !30, metadata !6}
!29 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<5> &"}
!30 = metadata !{metadata !"kernel_arg_name", metadata !"op2"}
!31 = metadata !{null, metadata !8, metadata !9, metadata !32, metadata !11, metadata !30, metadata !6}
!32 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<1> &"}
!33 = metadata !{null, metadata !8, metadata !9, metadata !34, metadata !11, metadata !30, metadata !6}
!34 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<4> &"}
!35 = metadata !{null, metadata !8, metadata !9, metadata !36, metadata !11, metadata !30, metadata !6}
!36 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<8> &"}
!37 = metadata !{null, metadata !8, metadata !9, metadata !38, metadata !11, metadata !30, metadata !6}
!38 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<64> &"}
!39 = metadata !{null, metadata !8, metadata !9, metadata !40, metadata !11, metadata !41, metadata !6}
!40 = metadata !{metadata !"kernel_arg_type", metadata !"const struct ap_axiu<64, 4, 5, 5> &"}
!41 = metadata !{metadata !"kernel_arg_name", metadata !""}
!42 = metadata !{metadata !43, [1 x i32]* @llvm_global_ctors_0}
!43 = metadata !{metadata !44}
!44 = metadata !{i32 0, i32 31, metadata !45}
!45 = metadata !{metadata !46}
!46 = metadata !{metadata !"llvm.global_ctors.0", metadata !47, metadata !"", i32 0, i32 31}
!47 = metadata !{metadata !48}
!48 = metadata !{i32 0, i32 0, i32 1}
!49 = metadata !{metadata !50}
!50 = metadata !{i32 0, i32 63, metadata !51}
!51 = metadata !{metadata !52}
!52 = metadata !{metadata !"in_stream.data.V", metadata !53, metadata !"uint64", i32 0, i32 63}
!53 = metadata !{metadata !54}
!54 = metadata !{i32 0, i32 2308, i32 1}
!55 = metadata !{metadata !56}
!56 = metadata !{i32 0, i32 7, metadata !57}
!57 = metadata !{metadata !58}
!58 = metadata !{metadata !"in_stream.keep.V", metadata !53, metadata !"uint8", i32 0, i32 7}
!59 = metadata !{metadata !60}
!60 = metadata !{i32 0, i32 7, metadata !61}
!61 = metadata !{metadata !62}
!62 = metadata !{metadata !"in_stream.strb.V", metadata !53, metadata !"uint8", i32 0, i32 7}
!63 = metadata !{metadata !64}
!64 = metadata !{i32 0, i32 3, metadata !65}
!65 = metadata !{metadata !66}
!66 = metadata !{metadata !"in_stream.user.V", metadata !53, metadata !"uint4", i32 0, i32 3}
!67 = metadata !{metadata !68}
!68 = metadata !{i32 0, i32 0, metadata !69}
!69 = metadata !{metadata !70}
!70 = metadata !{metadata !"in_stream.last.V", metadata !53, metadata !"uint1", i32 0, i32 0}
!71 = metadata !{metadata !72}
!72 = metadata !{i32 0, i32 4, metadata !73}
!73 = metadata !{metadata !74}
!74 = metadata !{metadata !"in_stream.id.V", metadata !53, metadata !"uint5", i32 0, i32 4}
!75 = metadata !{metadata !76}
!76 = metadata !{i32 0, i32 4, metadata !77}
!77 = metadata !{metadata !78}
!78 = metadata !{metadata !"in_stream.dest.V", metadata !53, metadata !"uint5", i32 0, i32 4}
!79 = metadata !{metadata !80}
!80 = metadata !{i32 0, i32 63, metadata !81}
!81 = metadata !{metadata !82}
!82 = metadata !{metadata !"out_stream.data.V", metadata !83, metadata !"uint64", i32 0, i32 63}
!83 = metadata !{metadata !84}
!84 = metadata !{i32 0, i32 39, i32 1}
!85 = metadata !{metadata !86}
!86 = metadata !{i32 0, i32 7, metadata !87}
!87 = metadata !{metadata !88}
!88 = metadata !{metadata !"out_stream.keep.V", metadata !83, metadata !"uint8", i32 0, i32 7}
!89 = metadata !{metadata !90}
!90 = metadata !{i32 0, i32 7, metadata !91}
!91 = metadata !{metadata !92}
!92 = metadata !{metadata !"out_stream.strb.V", metadata !83, metadata !"uint8", i32 0, i32 7}
!93 = metadata !{metadata !94}
!94 = metadata !{i32 0, i32 3, metadata !95}
!95 = metadata !{metadata !96}
!96 = metadata !{metadata !"out_stream.user.V", metadata !83, metadata !"uint4", i32 0, i32 3}
!97 = metadata !{metadata !98}
!98 = metadata !{i32 0, i32 0, metadata !99}
!99 = metadata !{metadata !100}
!100 = metadata !{metadata !"out_stream.last.V", metadata !83, metadata !"uint1", i32 0, i32 0}
!101 = metadata !{metadata !102}
!102 = metadata !{i32 0, i32 4, metadata !103}
!103 = metadata !{metadata !104}
!104 = metadata !{metadata !"out_stream.id.V", metadata !83, metadata !"uint5", i32 0, i32 4}
!105 = metadata !{metadata !106}
!106 = metadata !{i32 0, i32 4, metadata !107}
!107 = metadata !{metadata !108}
!108 = metadata !{metadata !"out_stream.dest.V", metadata !83, metadata !"uint5", i32 0, i32 4}
