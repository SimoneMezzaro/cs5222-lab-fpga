set C_TypeInfoList {{ 
"mmult_hw" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"in_stream": [[], {"array": ["0", [34053]]}] }, {"out_stream": [[], {"array": ["0", [1280]]}] }],[],""], 
"0": [ "AXI_VAL", {"typedef": [[[],"1"],""]}], 
"1": [ "ap_axiu<64, 4, 5, 5>", {"struct": [[],[{"D":[[], {"scalar": { "int": 64}}]},{"U":[[], {"scalar": { "int": 4}}]},{"TI":[[], {"scalar": { "int": 5}}]},{"TD":[[], {"scalar": { "int": 5}}]}],[{ "data": [[], "2"]},{ "keep": [[], "3"]},{ "strb": [[], "3"]},{ "user": [[], "4"]},{ "last": [[], "5"]},{ "id": [[], "6"]},{ "dest": [[], "6"]}],""]}], 
"2": [ "ap_uint<64>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 64}}]],""]}}], 
"3": [ "ap_uint<8>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 8}}]],""]}}], 
"4": [ "ap_uint<4>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 4}}]],""]}}], 
"5": [ "ap_uint<1>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 1}}]],""]}}], 
"6": [ "ap_uint<5>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 5}}]],""]}}]
}}
set moduleName mmult_hw
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {mmult_hw}
set C_modelType { void 0 }
set C_modelArgList {
	{ in_stream_data_V int 64 regular {axi_s 0 volatile  { in_stream Data } }  }
	{ in_stream_keep_V int 8 regular {axi_s 0 volatile  { in_stream Keep } }  }
	{ in_stream_strb_V int 8 regular {axi_s 0 volatile  { in_stream Strb } }  }
	{ in_stream_user_V int 4 regular {axi_s 0 volatile  { in_stream User } }  }
	{ in_stream_last_V int 1 regular {axi_s 0 volatile  { in_stream Last } }  }
	{ in_stream_id_V int 5 regular {axi_s 0 volatile  { in_stream ID } }  }
	{ in_stream_dest_V int 5 regular {axi_s 0 volatile  { in_stream Dest } }  }
	{ out_stream_data_V int 64 regular {axi_s 1 volatile  { out_stream Data } }  }
	{ out_stream_keep_V int 8 regular {axi_s 1 volatile  { out_stream Keep } }  }
	{ out_stream_strb_V int 8 regular {axi_s 1 volatile  { out_stream Strb } }  }
	{ out_stream_user_V int 4 regular {axi_s 1 volatile  { out_stream User } }  }
	{ out_stream_last_V int 1 regular {axi_s 1 volatile  { out_stream Last } }  }
	{ out_stream_id_V int 5 regular {axi_s 1 volatile  { out_stream ID } }  }
	{ out_stream_dest_V int 5 regular {axi_s 1 volatile  { out_stream Dest } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_stream_data_V", "interface" : "axis", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "in_stream.data.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 34052,"step" : 1}]}]}]} , 
 	{ "Name" : "in_stream_keep_V", "interface" : "axis", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "in_stream.keep.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 34052,"step" : 1}]}]}]} , 
 	{ "Name" : "in_stream_strb_V", "interface" : "axis", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "in_stream.strb.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 34052,"step" : 1}]}]}]} , 
 	{ "Name" : "in_stream_user_V", "interface" : "axis", "bitwidth" : 4, "direction" : "READONLY", "bitSlice":[{"low":0,"up":3,"cElement": [{"cName": "in_stream.user.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"cArray": [{"low" : 0,"up" : 34052,"step" : 1}]}]}]} , 
 	{ "Name" : "in_stream_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "in_stream.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 34052,"step" : 1}]}]}]} , 
 	{ "Name" : "in_stream_id_V", "interface" : "axis", "bitwidth" : 5, "direction" : "READONLY", "bitSlice":[{"low":0,"up":4,"cElement": [{"cName": "in_stream.id.V","cData": "uint5","bit_use": { "low": 0,"up": 4},"cArray": [{"low" : 0,"up" : 34052,"step" : 1}]}]}]} , 
 	{ "Name" : "in_stream_dest_V", "interface" : "axis", "bitwidth" : 5, "direction" : "READONLY", "bitSlice":[{"low":0,"up":4,"cElement": [{"cName": "in_stream.dest.V","cData": "uint5","bit_use": { "low": 0,"up": 4},"cArray": [{"low" : 0,"up" : 34052,"step" : 1}]}]}]} , 
 	{ "Name" : "out_stream_data_V", "interface" : "axis", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "out_stream.data.V","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 1279,"step" : 1}]}]}]} , 
 	{ "Name" : "out_stream_keep_V", "interface" : "axis", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "out_stream.keep.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 1279,"step" : 1}]}]}]} , 
 	{ "Name" : "out_stream_strb_V", "interface" : "axis", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "out_stream.strb.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 1279,"step" : 1}]}]}]} , 
 	{ "Name" : "out_stream_user_V", "interface" : "axis", "bitwidth" : 4, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":3,"cElement": [{"cName": "out_stream.user.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"cArray": [{"low" : 0,"up" : 1279,"step" : 1}]}]}]} , 
 	{ "Name" : "out_stream_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "out_stream.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 1279,"step" : 1}]}]}]} , 
 	{ "Name" : "out_stream_id_V", "interface" : "axis", "bitwidth" : 5, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":4,"cElement": [{"cName": "out_stream.id.V","cData": "uint5","bit_use": { "low": 0,"up": 4},"cArray": [{"low" : 0,"up" : 1279,"step" : 1}]}]}]} , 
 	{ "Name" : "out_stream_dest_V", "interface" : "axis", "bitwidth" : 5, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":4,"cElement": [{"cName": "out_stream.dest.V","cData": "uint5","bit_use": { "low": 0,"up": 4},"cArray": [{"low" : 0,"up" : 1279,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 38
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ in_stream_TDATA sc_in sc_lv 64 signal 0 } 
	{ in_stream_TVALID sc_in sc_logic 1 invld 6 } 
	{ in_stream_TREADY sc_out sc_logic 1 inacc 6 } 
	{ in_stream_TKEEP sc_in sc_lv 8 signal 1 } 
	{ in_stream_TSTRB sc_in sc_lv 8 signal 2 } 
	{ in_stream_TUSER sc_in sc_lv 4 signal 3 } 
	{ in_stream_TLAST sc_in sc_lv 1 signal 4 } 
	{ in_stream_TID sc_in sc_lv 5 signal 5 } 
	{ in_stream_TDEST sc_in sc_lv 5 signal 6 } 
	{ out_stream_TDATA sc_out sc_lv 64 signal 7 } 
	{ out_stream_TVALID sc_out sc_logic 1 outvld 13 } 
	{ out_stream_TREADY sc_in sc_logic 1 outacc 13 } 
	{ out_stream_TKEEP sc_out sc_lv 8 signal 8 } 
	{ out_stream_TSTRB sc_out sc_lv 8 signal 9 } 
	{ out_stream_TUSER sc_out sc_lv 4 signal 10 } 
	{ out_stream_TLAST sc_out sc_lv 1 signal 11 } 
	{ out_stream_TID sc_out sc_lv 5 signal 12 } 
	{ out_stream_TDEST sc_out sc_lv 5 signal 13 } 
	{ s_axi_CONTROL_BUS_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_AWADDR sc_in sc_lv 4 signal -1 } 
	{ s_axi_CONTROL_BUS_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_CONTROL_BUS_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_CONTROL_BUS_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_ARADDR sc_in sc_lv 4 signal -1 } 
	{ s_axi_CONTROL_BUS_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_CONTROL_BUS_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_CONTROL_BUS_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_CONTROL_BUS_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "AWADDR" },"address":[{"name":"mmult_hw","role":"start","value":"0","valid_bit":"0"},{"name":"mmult_hw","role":"continue","value":"0","valid_bit":"4"},{"name":"mmult_hw","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_CONTROL_BUS_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "AWVALID" } },
	{ "name": "s_axi_CONTROL_BUS_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "AWREADY" } },
	{ "name": "s_axi_CONTROL_BUS_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "WVALID" } },
	{ "name": "s_axi_CONTROL_BUS_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "WREADY" } },
	{ "name": "s_axi_CONTROL_BUS_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "WDATA" } },
	{ "name": "s_axi_CONTROL_BUS_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "WSTRB" } },
	{ "name": "s_axi_CONTROL_BUS_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "ARADDR" },"address":[{"name":"mmult_hw","role":"start","value":"0","valid_bit":"0"},{"name":"mmult_hw","role":"done","value":"0","valid_bit":"1"},{"name":"mmult_hw","role":"idle","value":"0","valid_bit":"2"},{"name":"mmult_hw","role":"ready","value":"0","valid_bit":"3"},{"name":"mmult_hw","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_CONTROL_BUS_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "ARVALID" } },
	{ "name": "s_axi_CONTROL_BUS_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "ARREADY" } },
	{ "name": "s_axi_CONTROL_BUS_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "RVALID" } },
	{ "name": "s_axi_CONTROL_BUS_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "RREADY" } },
	{ "name": "s_axi_CONTROL_BUS_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "RDATA" } },
	{ "name": "s_axi_CONTROL_BUS_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "RRESP" } },
	{ "name": "s_axi_CONTROL_BUS_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "BVALID" } },
	{ "name": "s_axi_CONTROL_BUS_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "BREADY" } },
	{ "name": "s_axi_CONTROL_BUS_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "in_stream_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "in_stream_data_V", "role": "default" }} , 
 	{ "name": "in_stream_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "in_stream_dest_V", "role": "default" }} , 
 	{ "name": "in_stream_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "in_stream_dest_V", "role": "default" }} , 
 	{ "name": "in_stream_TKEEP", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "in_stream_keep_V", "role": "default" }} , 
 	{ "name": "in_stream_TSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "in_stream_strb_V", "role": "default" }} , 
 	{ "name": "in_stream_TUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in_stream_user_V", "role": "default" }} , 
 	{ "name": "in_stream_TLAST", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_stream_last_V", "role": "default" }} , 
 	{ "name": "in_stream_TID", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "in_stream_id_V", "role": "default" }} , 
 	{ "name": "in_stream_TDEST", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "in_stream_dest_V", "role": "default" }} , 
 	{ "name": "out_stream_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "out_stream_data_V", "role": "default" }} , 
 	{ "name": "out_stream_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_stream_dest_V", "role": "default" }} , 
 	{ "name": "out_stream_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "out_stream_dest_V", "role": "default" }} , 
 	{ "name": "out_stream_TKEEP", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "out_stream_keep_V", "role": "default" }} , 
 	{ "name": "out_stream_TSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "out_stream_strb_V", "role": "default" }} , 
 	{ "name": "out_stream_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_stream_user_V", "role": "default" }} , 
 	{ "name": "out_stream_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_stream_last_V", "role": "default" }} , 
 	{ "name": "out_stream_TID", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "out_stream_id_V", "role": "default" }} , 
 	{ "name": "out_stream_TDEST", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "out_stream_dest_V", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7"],
		"CDFG" : "mmult_hw",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "in_stream_data_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "in_stream_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_stream_keep_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "in_stream_strb_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "in_stream_user_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "in_stream_last_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "in_stream_id_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "in_stream_dest_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "out_stream_data_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "out_stream_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_stream_keep_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_stream_strb_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_stream_user_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_stream_last_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_stream_id_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_stream_dest_V", "Type" : "Axis", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_CONTROL_BUS_s_axi_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.offset_buf_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_buf_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_buf_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.out_buf_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_fadd_32nbkb_U1", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_fmul_32ncud_U2", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	mmult_hw {
		in_stream_data_V {Type I LastRead 4 FirstWrite -1}
		in_stream_keep_V {Type I LastRead 4 FirstWrite -1}
		in_stream_strb_V {Type I LastRead 4 FirstWrite -1}
		in_stream_user_V {Type I LastRead 4 FirstWrite -1}
		in_stream_last_V {Type I LastRead 4 FirstWrite -1}
		in_stream_id_V {Type I LastRead 4 FirstWrite -1}
		in_stream_dest_V {Type I LastRead 4 FirstWrite -1}
		out_stream_data_V {Type O LastRead -1 FirstWrite 7}
		out_stream_keep_V {Type O LastRead -1 FirstWrite 7}
		out_stream_strb_V {Type O LastRead -1 FirstWrite 7}
		out_stream_user_V {Type O LastRead -1 FirstWrite 7}
		out_stream_last_V {Type O LastRead -1 FirstWrite 7}
		out_stream_id_V {Type O LastRead -1 FirstWrite 7}
		out_stream_dest_V {Type O LastRead -1 FirstWrite 7}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "7290147", "Max" : "7290147"}
	, {"Name" : "Interval", "Min" : "7290148", "Max" : "7290148"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	in_stream_data_V { axis {  { in_stream_TDATA in_data 0 64 } } }
	in_stream_keep_V { axis {  { in_stream_TKEEP in_data 0 8 } } }
	in_stream_strb_V { axis {  { in_stream_TSTRB in_data 0 8 } } }
	in_stream_user_V { axis {  { in_stream_TUSER in_data 0 4 } } }
	in_stream_last_V { axis {  { in_stream_TLAST in_data 0 1 } } }
	in_stream_id_V { axis {  { in_stream_TID in_data 0 5 } } }
	in_stream_dest_V { axis {  { in_stream_TVALID in_vld 0 1 }  { in_stream_TREADY in_acc 1 1 }  { in_stream_TDEST in_data 0 5 } } }
	out_stream_data_V { axis {  { out_stream_TDATA out_data 1 64 } } }
	out_stream_keep_V { axis {  { out_stream_TKEEP out_data 1 8 } } }
	out_stream_strb_V { axis {  { out_stream_TSTRB out_data 1 8 } } }
	out_stream_user_V { axis {  { out_stream_TUSER out_data 1 4 } } }
	out_stream_last_V { axis {  { out_stream_TLAST out_data 1 1 } } }
	out_stream_id_V { axis {  { out_stream_TID out_data 1 5 } } }
	out_stream_dest_V { axis {  { out_stream_TVALID out_vld 1 1 }  { out_stream_TREADY out_acc 0 1 }  { out_stream_TDEST out_data 1 5 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
