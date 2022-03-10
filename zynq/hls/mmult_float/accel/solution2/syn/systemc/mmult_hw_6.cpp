#include "mmult_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void mmult_hw::thread_weight_buf_5_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,4,4>(arrayNo_cast_cast_reg_8367.read(), ap_const_lv4_5))) {
        weight_buf_5_we1 = ap_const_logic_1;
    } else {
        weight_buf_5_we1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage15_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address0 =  (sc_lv<9>) (tmp_220_fu_8016_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage14_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address0 =  (sc_lv<9>) (tmp_216_fu_7974_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage13_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address0 =  (sc_lv<9>) (tmp_212_fu_7932_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage12_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address0 =  (sc_lv<9>) (tmp_208_fu_7890_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage11_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address0 =  (sc_lv<9>) (tmp_204_fu_7848_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage10_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address0 =  (sc_lv<9>) (tmp_200_fu_7806_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage9_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address0 =  (sc_lv<9>) (tmp_196_fu_7764_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address0 =  (sc_lv<9>) (tmp_192_fu_7722_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address0 =  (sc_lv<9>) (tmp_188_fu_7680_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address0 =  (sc_lv<9>) (tmp_184_fu_7638_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address0 =  (sc_lv<9>) (tmp_180_fu_7596_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address0 =  (sc_lv<9>) (tmp_176_fu_7554_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address0 =  (sc_lv<9>) (tmp_172_fu_7508_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address0 =  (sc_lv<9>) (tmp_168_fu_7466_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address0 =  (sc_lv<9>) (tmp_164_fu_7424_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address0 =  (sc_lv<9>) (tmp_160_fu_7379_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address0 =  (sc_lv<9>) (tmp_13_fu_5988_p1.read());
    } else {
        weight_buf_6_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void mmult_hw::thread_weight_buf_6_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage15_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address1 =  (sc_lv<9>) (tmp_222_fu_8037_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage14_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address1 =  (sc_lv<9>) (tmp_218_fu_7995_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage13_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address1 =  (sc_lv<9>) (tmp_214_fu_7953_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage12_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address1 =  (sc_lv<9>) (tmp_210_fu_7911_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage11_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address1 =  (sc_lv<9>) (tmp_206_fu_7869_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage10_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address1 =  (sc_lv<9>) (tmp_202_fu_7827_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage9_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address1 =  (sc_lv<9>) (tmp_198_fu_7785_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address1 =  (sc_lv<9>) (tmp_194_fu_7743_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address1 =  (sc_lv<9>) (tmp_190_fu_7701_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address1 =  (sc_lv<9>) (tmp_186_fu_7659_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address1 =  (sc_lv<9>) (tmp_182_fu_7617_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address1 =  (sc_lv<9>) (tmp_178_fu_7575_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address1 =  (sc_lv<9>) (tmp_174_fu_7529_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address1 =  (sc_lv<9>) (tmp_170_fu_7487_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address1 =  (sc_lv<9>) (tmp_166_fu_7445_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address1 =  (sc_lv<9>) (tmp_162_fu_7397_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_address1 =  (sc_lv<9>) (tmp_17_fu_6025_p1.read());
    } else {
        weight_buf_6_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void mmult_hw::thread_weight_buf_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage13_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage14_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage15_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage12_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_6_ce0 = ap_const_logic_1;
    } else {
        weight_buf_6_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage13_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage14_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage15_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage12_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_6_ce1 = ap_const_logic_1;
    } else {
        weight_buf_6_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,4,4>(arrayNo_cast_cast_reg_8367.read(), ap_const_lv4_6))) {
        weight_buf_6_we0 = ap_const_logic_1;
    } else {
        weight_buf_6_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,4,4>(arrayNo_cast_cast_reg_8367.read(), ap_const_lv4_6))) {
        weight_buf_6_we1 = ap_const_logic_1;
    } else {
        weight_buf_6_we1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage15_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address0 =  (sc_lv<9>) (tmp_220_fu_8016_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage14_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address0 =  (sc_lv<9>) (tmp_216_fu_7974_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage13_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address0 =  (sc_lv<9>) (tmp_212_fu_7932_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage12_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address0 =  (sc_lv<9>) (tmp_208_fu_7890_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage11_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address0 =  (sc_lv<9>) (tmp_204_fu_7848_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage10_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address0 =  (sc_lv<9>) (tmp_200_fu_7806_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage9_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address0 =  (sc_lv<9>) (tmp_196_fu_7764_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address0 =  (sc_lv<9>) (tmp_192_fu_7722_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address0 =  (sc_lv<9>) (tmp_188_fu_7680_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address0 =  (sc_lv<9>) (tmp_184_fu_7638_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address0 =  (sc_lv<9>) (tmp_180_fu_7596_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address0 =  (sc_lv<9>) (tmp_176_fu_7554_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address0 =  (sc_lv<9>) (tmp_172_fu_7508_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address0 =  (sc_lv<9>) (tmp_168_fu_7466_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address0 =  (sc_lv<9>) (tmp_164_fu_7424_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address0 =  (sc_lv<9>) (tmp_160_fu_7379_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address0 =  (sc_lv<9>) (tmp_13_fu_5988_p1.read());
    } else {
        weight_buf_7_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void mmult_hw::thread_weight_buf_7_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage15_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address1 =  (sc_lv<9>) (tmp_222_fu_8037_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage14_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address1 =  (sc_lv<9>) (tmp_218_fu_7995_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage13_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address1 =  (sc_lv<9>) (tmp_214_fu_7953_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage12_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address1 =  (sc_lv<9>) (tmp_210_fu_7911_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage11_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address1 =  (sc_lv<9>) (tmp_206_fu_7869_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage10_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address1 =  (sc_lv<9>) (tmp_202_fu_7827_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage9_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address1 =  (sc_lv<9>) (tmp_198_fu_7785_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address1 =  (sc_lv<9>) (tmp_194_fu_7743_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address1 =  (sc_lv<9>) (tmp_190_fu_7701_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address1 =  (sc_lv<9>) (tmp_186_fu_7659_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address1 =  (sc_lv<9>) (tmp_182_fu_7617_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address1 =  (sc_lv<9>) (tmp_178_fu_7575_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address1 =  (sc_lv<9>) (tmp_174_fu_7529_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address1 =  (sc_lv<9>) (tmp_170_fu_7487_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address1 =  (sc_lv<9>) (tmp_166_fu_7445_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address1 =  (sc_lv<9>) (tmp_162_fu_7397_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_address1 =  (sc_lv<9>) (tmp_17_fu_6025_p1.read());
    } else {
        weight_buf_7_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void mmult_hw::thread_weight_buf_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage13_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage14_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage15_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage12_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_7_ce0 = ap_const_logic_1;
    } else {
        weight_buf_7_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage13_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage14_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage15_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage12_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_7_ce1 = ap_const_logic_1;
    } else {
        weight_buf_7_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,4,4>(arrayNo_cast_cast_reg_8367.read(), ap_const_lv4_0) && 
         !esl_seteq<1,4,4>(arrayNo_cast_cast_reg_8367.read(), ap_const_lv4_1) && 
         !esl_seteq<1,4,4>(arrayNo_cast_cast_reg_8367.read(), ap_const_lv4_2) && 
         !esl_seteq<1,4,4>(arrayNo_cast_cast_reg_8367.read(), ap_const_lv4_3) && 
         !esl_seteq<1,4,4>(arrayNo_cast_cast_reg_8367.read(), ap_const_lv4_4) && 
         !esl_seteq<1,4,4>(arrayNo_cast_cast_reg_8367.read(), ap_const_lv4_5) && 
         !esl_seteq<1,4,4>(arrayNo_cast_cast_reg_8367.read(), ap_const_lv4_6))) {
        weight_buf_7_we0 = ap_const_logic_1;
    } else {
        weight_buf_7_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,4,4>(arrayNo_cast_cast_reg_8367.read(), ap_const_lv4_0) && 
         !esl_seteq<1,4,4>(arrayNo_cast_cast_reg_8367.read(), ap_const_lv4_1) && 
         !esl_seteq<1,4,4>(arrayNo_cast_cast_reg_8367.read(), ap_const_lv4_2) && 
         !esl_seteq<1,4,4>(arrayNo_cast_cast_reg_8367.read(), ap_const_lv4_3) && 
         !esl_seteq<1,4,4>(arrayNo_cast_cast_reg_8367.read(), ap_const_lv4_4) && 
         !esl_seteq<1,4,4>(arrayNo_cast_cast_reg_8367.read(), ap_const_lv4_5) && 
         !esl_seteq<1,4,4>(arrayNo_cast_cast_reg_8367.read(), ap_const_lv4_6))) {
        weight_buf_7_we1 = ap_const_logic_1;
    } else {
        weight_buf_7_we1 = ap_const_logic_0;
    }
}

}

