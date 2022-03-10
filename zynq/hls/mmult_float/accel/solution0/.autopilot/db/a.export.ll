; ModuleID = '/home/simone/Desktop/cs5222-lab-fpga/zynq/hls/mmult_float/accel/solution0/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@mmult_hw_str = internal unnamed_addr constant [9 x i8] c"mmult_hw\00"
@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535]
@p_str9 = private unnamed_addr constant [9 x i8] c"LOAD_I_2\00", align 1
@p_str8 = private unnamed_addr constant [9 x i8] c"LOAD_I_1\00", align 1
@p_str7 = private unnamed_addr constant [9 x i8] c"LOAD_W_2\00", align 1
@p_str6 = private unnamed_addr constant [9 x i8] c"LOAD_W_1\00", align 1
@p_str5 = private unnamed_addr constant [11 x i8] c"LOAD_OFF_1\00", align 1
@p_str4 = private unnamed_addr constant [5 x i8] c"both\00", align 1
@p_str3 = private unnamed_addr constant [5 x i8] c"axis\00", align 1
@p_str2 = private unnamed_addr constant [12 x i8] c"CONTROL_BUS\00", align 1
@p_str14 = private unnamed_addr constant [10 x i8] c"STORE_O_2\00", align 1
@p_str13 = private unnamed_addr constant [10 x i8] c"STORE_O_1\00", align 1
@p_str12 = private unnamed_addr constant [3 x i8] c"L3\00", align 1
@p_str11 = private unnamed_addr constant [3 x i8] c"L2\00", align 1
@p_str10 = private unnamed_addr constant [3 x i8] c"L1\00", align 1
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
  %weight_buf = alloca [2560 x float], align 4
  %in_buf = alloca [65536 x float], align 4
  %out_buf = alloca [2560 x float], align 4
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [12 x i8]* @p_str2, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i64* %in_stream_data_V, i8* %in_stream_keep_V, i8* %in_stream_strb_V, i4* %in_stream_user_V, i1* %in_stream_last_V, i5* %in_stream_id_V, i5* %in_stream_dest_V, [5 x i8]* @p_str3, i32 1, i32 1, [5 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  call void (...)* @_ssdm_op_SpecInterface(i64* %out_stream_data_V, i8* %out_stream_keep_V, i8* %out_stream_strb_V, i4* %out_stream_user_V, i1* %out_stream_last_V, i5* %out_stream_id_V, i5* %out_stream_dest_V, [5 x i8]* @p_str3, i32 1, i32 1, [5 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  br label %1

; <label>:1                                       ; preds = %2, %0
  %i = phi i4 [ 0, %0 ], [ %i_1, %2 ]
  %is_idx = phi i3 [ 0, %0 ], [ %tmp_2, %2 ]
  %exitcond5 = icmp eq i3 %is_idx, -3
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 5, i64 5, i64 5)
  %tmp_2 = add i3 %is_idx, 1
  br i1 %exitcond5, label %.preheader18.preheader, label %2

.preheader18.preheader:                           ; preds = %1
  br label %.preheader18

; <label>:2                                       ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName([11 x i8]* @p_str5) nounwind
  %empty_5 = call { i64, i8, i8, i4, i1, i5, i5 } @_ssdm_op_Read.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %in_stream_data_V, i8* %in_stream_keep_V, i8* %in_stream_strb_V, i4* %in_stream_user_V, i1* %in_stream_last_V, i5* %in_stream_id_V, i5* %in_stream_dest_V)
  %ret = extractvalue { i64, i8, i8, i4, i1, i5, i5 } %empty_5, 0
  %tmp_5 = trunc i64 %ret to i32
  %bitcast1 = bitcast i32 %tmp_5 to float
  %tmp_4 = zext i4 %i to i64
  %offset_buf_addr = getelementptr inbounds [10 x float]* %offset_buf, i64 0, i64 %tmp_4
  store float %bitcast1, float* %offset_buf_addr, align 8
  %tmp_6 = call i32 @_ssdm_op_PartSelect.i32.i64.i32.i32(i64 %ret, i32 32, i32 63)
  %tmp_7 = bitcast i32 %tmp_6 to float
  %tmp_8 = or i4 %i, 1
  %tmp_9 = zext i4 %tmp_8 to i64
  %offset_buf_addr_1 = getelementptr inbounds [10 x float]* %offset_buf, i64 0, i64 %tmp_9
  store float %tmp_7, float* %offset_buf_addr_1, align 4
  %i_1 = add i4 2, %i
  br label %1

.preheader18:                                     ; preds = %.preheader18.preheader, %6
  %indvars_iv1 = phi i11 [ %indvars_iv_next1, %6 ], [ 133, %.preheader18.preheader ]
  %i1 = phi i4 [ %i_2, %6 ], [ 0, %.preheader18.preheader ]
  %is_idx_1 = phi i11 [ %tmp_s, %6 ], [ 5, %.preheader18.preheader ]
  %exitcond6 = icmp eq i4 %i1, -6
  %empty_6 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %i_2 = add i4 %i1, 1
  br i1 %exitcond6, label %.preheader17.preheader, label %3

.preheader17.preheader:                           ; preds = %.preheader18
  br label %.preheader17

; <label>:3                                       ; preds = %.preheader18
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @p_str6) nounwind
  %tmp_3 = call i32 (...)* @_ssdm_op_SpecRegionBegin([9 x i8]* @p_str6)
  %tmp_s = add i11 %is_idx_1, 128
  %tmp_1 = call i12 @_ssdm_op_BitConcatenate.i12.i4.i8(i4 %i1, i8 0)
  %tmp_5_cast = zext i12 %tmp_1 to i13
  br label %4

; <label>:4                                       ; preds = %5, %3
  %j = phi i9 [ 0, %3 ], [ %j_1, %5 ]
  %is_idx_2 = phi i11 [ %is_idx_1, %3 ], [ %tmp_11, %5 ]
  %exitcond9 = icmp eq i11 %is_idx_2, %indvars_iv1
  %empty_7 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 128, i64 128, i64 128)
  br i1 %exitcond9, label %6, label %5

; <label>:5                                       ; preds = %4
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @p_str7) nounwind
  %tmp_11 = add i11 1, %is_idx_2
  %empty_8 = call { i64, i8, i8, i4, i1, i5, i5 } @_ssdm_op_Read.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %in_stream_data_V, i8* %in_stream_keep_V, i8* %in_stream_strb_V, i4* %in_stream_user_V, i1* %in_stream_last_V, i5* %in_stream_id_V, i5* %in_stream_dest_V)
  %ret_1 = extractvalue { i64, i8, i8, i4, i1, i5, i5 } %empty_8, 0
  %tmp_13 = trunc i64 %ret_1 to i32
  %bitcast2 = bitcast i32 %tmp_13 to float
  %tmp_13_cast = zext i9 %j to i13
  %tmp_14 = add i13 %tmp_13_cast, %tmp_5_cast
  %tmp_18_cast = zext i13 %tmp_14 to i64
  %weight_buf_addr = getelementptr [2560 x float]* %weight_buf, i64 0, i64 %tmp_18_cast
  store float %bitcast2, float* %weight_buf_addr, align 8
  %tmp_15 = call i32 @_ssdm_op_PartSelect.i32.i64.i32.i32(i64 %ret_1, i32 32, i32 63)
  %tmp_16 = bitcast i32 %tmp_15 to float
  %tmp_18 = trunc i9 %j to i8
  %tmp_17 = or i8 %tmp_18, 1
  %tmp_19 = call i12 @_ssdm_op_BitConcatenate.i12.i4.i8(i4 %i1, i8 %tmp_17)
  %tmp_21 = zext i12 %tmp_19 to i64
  %weight_buf_addr_1 = getelementptr [2560 x float]* %weight_buf, i64 0, i64 %tmp_21
  store float %tmp_16, float* %weight_buf_addr_1, align 4
  %j_1 = add i9 2, %j
  br label %4

; <label>:6                                       ; preds = %4
  %empty_9 = call i32 (...)* @_ssdm_op_SpecRegionEnd([9 x i8]* @p_str6, i32 %tmp_3)
  %indvars_iv_next1 = add i11 %indvars_iv1, 128
  br label %.preheader18

.preheader17:                                     ; preds = %.preheader17.preheader, %10
  %indvars_iv5 = phi i16 [ %indvars_iv_next6, %10 ], [ 1413, %.preheader17.preheader ]
  %i2 = phi i9 [ %i_3, %10 ], [ 0, %.preheader17.preheader ]
  %is_idx_3 = phi i16 [ %is_idx_5, %10 ], [ 1285, %.preheader17.preheader ]
  %exitcond8 = icmp eq i9 %i2, -256
  %empty_10 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 256, i64 256, i64 256)
  %i_3 = add i9 %i2, 1
  br i1 %exitcond8, label %.preheader16.preheader, label %7

.preheader16.preheader:                           ; preds = %.preheader17
  br label %.preheader16

; <label>:7                                       ; preds = %.preheader17
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @p_str8) nounwind
  %tmp_10 = call i32 (...)* @_ssdm_op_SpecRegionBegin([9 x i8]* @p_str8)
  %is_idx_5 = add i16 %is_idx_3, 128
  %tmp_12 = call i17 @_ssdm_op_BitConcatenate.i17.i9.i8(i9 %i2, i8 0)
  %tmp_14_cast = zext i17 %tmp_12 to i18
  br label %8

; <label>:8                                       ; preds = %9, %7
  %j3 = phi i9 [ 0, %7 ], [ %j_2, %9 ]
  %is_idx_4 = phi i16 [ %is_idx_3, %7 ], [ %is_idx_6, %9 ]
  %exitcond7 = icmp eq i16 %is_idx_4, %indvars_iv5
  %empty_11 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 128, i64 128, i64 128)
  br i1 %exitcond7, label %10, label %9

; <label>:9                                       ; preds = %8
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @p_str9) nounwind
  %is_idx_6 = add i16 1, %is_idx_4
  %empty_12 = call { i64, i8, i8, i4, i1, i5, i5 } @_ssdm_op_Read.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %in_stream_data_V, i8* %in_stream_keep_V, i8* %in_stream_strb_V, i4* %in_stream_user_V, i1* %in_stream_last_V, i5* %in_stream_id_V, i5* %in_stream_dest_V)
  %ret_2 = extractvalue { i64, i8, i8, i4, i1, i5, i5 } %empty_12, 0
  %tmp_33 = trunc i64 %ret_2 to i32
  %bitcast = bitcast i32 %tmp_33 to float
  %tmp_21_cast = zext i9 %j3 to i18
  %tmp_37 = add i18 %tmp_21_cast, %tmp_14_cast
  %tmp_43_cast = zext i18 %tmp_37 to i64
  %in_buf_addr = getelementptr [65536 x float]* %in_buf, i64 0, i64 %tmp_43_cast
  store float %bitcast, float* %in_buf_addr, align 8
  %tmp_23 = call i32 @_ssdm_op_PartSelect.i32.i64.i32.i32(i64 %ret_2, i32 32, i32 63)
  %tmp_24 = bitcast i32 %tmp_23 to float
  %tmp_40 = trunc i9 %j3 to i8
  %tmp_25 = or i8 %tmp_40, 1
  %tmp_41 = call i17 @_ssdm_op_BitConcatenate.i17.i9.i8(i9 %i2, i8 %tmp_25)
  %tmp_42 = zext i17 %tmp_41 to i64
  %in_buf_addr_1 = getelementptr [65536 x float]* %in_buf, i64 0, i64 %tmp_42
  store float %tmp_24, float* %in_buf_addr_1, align 4
  %j_2 = add i9 2, %j3
  br label %8

; <label>:10                                      ; preds = %8
  %empty_13 = call i32 (...)* @_ssdm_op_SpecRegionEnd([9 x i8]* @p_str8, i32 %tmp_10)
  %indvars_iv_next6 = add i16 %indvars_iv5, 128
  br label %.preheader17

.preheader16:                                     ; preds = %.preheader16.preheader, %17
  %i4 = phi i9 [ %i_4, %17 ], [ 0, %.preheader16.preheader ]
  %exitcond4 = icmp eq i9 %i4, -256
  %empty_14 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 256, i64 256, i64 256)
  %i_4 = add i9 %i4, 1
  br i1 %exitcond4, label %.preheader.preheader, label %11

.preheader.preheader:                             ; preds = %.preheader16
  br label %.preheader

; <label>:11                                      ; preds = %.preheader16
  call void (...)* @_ssdm_op_SpecLoopName([3 x i8]* @p_str10) nounwind
  %tmp_20 = call i32 (...)* @_ssdm_op_SpecRegionBegin([3 x i8]* @p_str10)
  %tmp_22 = call i17 @_ssdm_op_BitConcatenate.i17.i9.i8(i9 %i4, i8 0)
  %tmp_27_cast = zext i17 %tmp_22 to i18
  %tmp_26 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %i4, i3 0)
  %p_shl_cast = zext i12 %tmp_26 to i13
  %tmp_27 = call i10 @_ssdm_op_BitConcatenate.i10.i9.i1(i9 %i4, i1 false)
  %p_shl1_cast = zext i10 %tmp_27 to i13
  %tmp_29 = add i13 %p_shl1_cast, %p_shl_cast
  br label %12

; <label>:12                                      ; preds = %16, %11
  %j5 = phi i4 [ 0, %11 ], [ %j_4, %16 ]
  %exitcond3 = icmp eq i4 %j5, -6
  %empty_15 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %j_4 = add i4 %j5, 1
  br i1 %exitcond3, label %17, label %13

; <label>:13                                      ; preds = %12
  call void (...)* @_ssdm_op_SpecLoopName([3 x i8]* @p_str11) nounwind
  %tmp_35 = call i32 (...)* @_ssdm_op_SpecRegionBegin([3 x i8]* @p_str11)
  %tmp_28 = zext i4 %j5 to i64
  %tmp_28_cast = zext i4 %j5 to i13
  %tmp_46 = call i12 @_ssdm_op_BitConcatenate.i12.i4.i8(i4 %j5, i8 0)
  %tmp_50_cast = zext i12 %tmp_46 to i13
  %tmp_47 = add i13 %tmp_28_cast, %tmp_29
  %tmp_51_cast = zext i13 %tmp_47 to i64
  %out_buf_addr_2 = getelementptr [2560 x float]* %out_buf, i64 0, i64 %tmp_51_cast
  %offset_buf_addr_2 = getelementptr inbounds [10 x float]* %offset_buf, i64 0, i64 %tmp_28
  %tmp = load float* %offset_buf_addr_2, align 4
  br label %14

; <label>:14                                      ; preds = %15, %13
  %k = phi i9 [ 0, %13 ], [ %k_1, %15 ]
  %tmp1 = phi float [ %tmp, %13 ], [ %tmp_39, %15 ]
  %exitcond2 = icmp eq i9 %k, -256
  %empty_16 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 256, i64 256, i64 256)
  %k_1 = add i9 %k, 1
  br i1 %exitcond2, label %16, label %15

; <label>:15                                      ; preds = %14
  call void (...)* @_ssdm_op_SpecLoopName([3 x i8]* @p_str12) nounwind
  %tmp_37_cast6 = zext i9 %k to i18
  %tmp_37_cast = zext i9 %k to i13
  %tmp_50 = add i13 %tmp_50_cast, %tmp_37_cast
  %tmp_54_cast = zext i13 %tmp_50 to i64
  %weight_buf_addr_2 = getelementptr [2560 x float]* %weight_buf, i64 0, i64 %tmp_54_cast
  %tmp_51 = add i18 %tmp_27_cast, %tmp_37_cast6
  %tmp_55_cast = zext i18 %tmp_51 to i64
  %in_buf_addr_2 = getelementptr [65536 x float]* %in_buf, i64 0, i64 %tmp_55_cast
  %in_buf_load = load float* %in_buf_addr_2, align 4
  %weight_buf_load = load float* %weight_buf_addr_2, align 4
  %tmp_38 = fmul float %in_buf_load, %weight_buf_load
  %tmp_39 = fadd float %tmp1, %tmp_38
  br label %14

; <label>:16                                      ; preds = %14
  store float %tmp1, float* %out_buf_addr_2, align 4
  %empty_17 = call i32 (...)* @_ssdm_op_SpecRegionEnd([3 x i8]* @p_str11, i32 %tmp_35)
  br label %12

; <label>:17                                      ; preds = %12
  %empty_18 = call i32 (...)* @_ssdm_op_SpecRegionEnd([3 x i8]* @p_str10, i32 %tmp_20)
  br label %.preheader16

.preheader:                                       ; preds = %.preheader.preheader, %21
  %indvars_iv = phi i11 [ %indvars_iv_next, %21 ], [ 5, %.preheader.preheader ]
  %os_idx = phi i11 [ %os_idx_2, %21 ], [ 0, %.preheader.preheader ]
  %i6 = phi i9 [ %i_5, %21 ], [ 0, %.preheader.preheader ]
  %exitcond1 = icmp eq i9 %i6, -256
  %empty_19 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 256, i64 256, i64 256)
  %i_5 = add i9 %i6, 1
  br i1 %exitcond1, label %22, label %18

; <label>:18                                      ; preds = %.preheader
  call void (...)* @_ssdm_op_SpecLoopName([10 x i8]* @p_str13) nounwind
  %tmp_31 = call i32 (...)* @_ssdm_op_SpecRegionBegin([10 x i8]* @p_str13)
  %os_idx_2 = add i11 %os_idx, 5
  %tmp_43 = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %i6, i3 0)
  %p_shl2_cast = zext i12 %tmp_43 to i13
  %tmp_44 = call i10 @_ssdm_op_BitConcatenate.i10.i9.i1(i9 %i6, i1 false)
  %p_shl3_cast = zext i10 %tmp_44 to i13
  %tmp_45 = add i13 %p_shl3_cast, %p_shl2_cast
  br label %19

; <label>:19                                      ; preds = %20, %18
  %os_idx_1 = phi i11 [ %os_idx, %18 ], [ %tmp_36, %20 ]
  %j7 = phi i4 [ 0, %18 ], [ %j_3, %20 ]
  %exitcond = icmp eq i11 %os_idx_1, %indvars_iv
  %empty_20 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 5, i64 5, i64 5)
  br i1 %exitcond, label %21, label %20

; <label>:20                                      ; preds = %19
  call void (...)* @_ssdm_op_SpecLoopName([10 x i8]* @p_str14) nounwind
  %tmp_29_cast = zext i4 %j7 to i13
  %tmp_48 = add i13 %tmp_45, %tmp_29_cast
  %tmp_52_cast = zext i13 %tmp_48 to i64
  %out_buf_addr = getelementptr [2560 x float]* %out_buf, i64 0, i64 %tmp_52_cast
  %out_buf_load = load float* %out_buf_addr, align 8
  %tmp_30 = bitcast float %out_buf_load to i32
  %tmp_32 = or i4 %j7, 1
  %tmp_33_cast = zext i4 %tmp_32 to i13
  %tmp_49 = add i13 %tmp_45, %tmp_33_cast
  %tmp_53_cast = zext i13 %tmp_49 to i64
  %out_buf_addr_1 = getelementptr [2560 x float]* %out_buf, i64 0, i64 %tmp_53_cast
  %out_buf_load_1 = load float* %out_buf_addr_1, align 4
  %tmp_34 = bitcast float %out_buf_load_1 to i32
  %converter = call i64 @_ssdm_op_BitConcatenate.i64.i32.i32(i32 %tmp_34, i32 %tmp_30)
  %tmp_36 = add i11 %os_idx_1, 1
  %last_assign = icmp eq i11 %tmp_36, -768
  call void @_ssdm_op_Write.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %out_stream_data_V, i8* %out_stream_keep_V, i8* %out_stream_strb_V, i4* %out_stream_user_V, i1* %out_stream_last_V, i5* %out_stream_id_V, i5* %out_stream_dest_V, i64 %converter, i8 -1, i8 -1, i4 0, i1 %last_assign, i5 0, i5 0)
  %j_3 = add i4 %j7, 2
  br label %19

; <label>:21                                      ; preds = %19
  %empty_21 = call i32 (...)* @_ssdm_op_SpecRegionEnd([10 x i8]* @p_str13, i32 %tmp_31)
  %indvars_iv_next = add i11 %indvars_iv, 5
  br label %.preheader

; <label>:22                                      ; preds = %.preheader
  ret void
}

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
  %empty_22 = load i8* %1
  %empty_23 = load i8* %2
  %empty_24 = load i4* %3
  %empty_25 = load i1* %4
  %empty_26 = load i5* %5
  %empty_27 = load i5* %6
  %mrv_0 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } undef, i64 %empty, 0
  %mrv1 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv_0, i8 %empty_22, 1
  %mrv2 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv1, i8 %empty_23, 2
  %mrv3 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv2, i4 %empty_24, 3
  %mrv4 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv3, i1 %empty_25, 4
  %mrv5 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv4, i5 %empty_26, 5
  %mrv6 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv5, i5 %empty_27, 6
  ret { i64, i8, i8, i4, i1, i5, i5 } %mrv6
}

declare i8 @_ssdm_op_PartSelect.i8.i9.i32.i32(i9, i32, i32) nounwind readnone

define weak i32 @_ssdm_op_PartSelect.i32.i64.i32.i32(i64, i32, i32) nounwind readnone {
entry:
  %empty = call i64 @llvm.part.select.i64(i64 %0, i32 %1, i32 %2)
  %empty_28 = trunc i64 %empty to i32
  ret i32 %empty_28
}

define weak i64 @_ssdm_op_BitConcatenate.i64.i32.i32(i32, i32) nounwind readnone {
entry:
  %empty = zext i32 %0 to i64
  %empty_29 = zext i32 %1 to i64
  %empty_30 = shl i64 %empty, 32
  %empty_31 = or i64 %empty_30, %empty_29
  ret i64 %empty_31
}

define weak i17 @_ssdm_op_BitConcatenate.i17.i9.i8(i9, i8) nounwind readnone {
entry:
  %empty = zext i9 %0 to i17
  %empty_32 = zext i8 %1 to i17
  %empty_33 = shl i17 %empty, 8
  %empty_34 = or i17 %empty_33, %empty_32
  ret i17 %empty_34
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9, i3) nounwind readnone {
entry:
  %empty = zext i9 %0 to i12
  %empty_35 = zext i3 %1 to i12
  %empty_36 = shl i12 %empty, 3
  %empty_37 = or i12 %empty_36, %empty_35
  ret i12 %empty_37
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i4.i8(i4, i8) nounwind readnone {
entry:
  %empty = zext i4 %0 to i12
  %empty_38 = zext i8 %1 to i12
  %empty_39 = shl i12 %empty, 8
  %empty_40 = or i12 %empty_39, %empty_38
  ret i12 %empty_40
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i9.i1(i9, i1) nounwind readnone {
entry:
  %empty = zext i9 %0 to i10
  %empty_41 = zext i1 %1 to i10
  %empty_42 = shl i10 %empty, 1
  %empty_43 = or i10 %empty_42, %empty_41
  ret i10 %empty_43
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
!54 = metadata !{i32 0, i32 34052, i32 1}
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
!84 = metadata !{i32 0, i32 1279, i32 1}
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
