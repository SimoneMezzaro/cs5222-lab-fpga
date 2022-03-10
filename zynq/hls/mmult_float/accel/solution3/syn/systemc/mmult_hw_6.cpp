#include "mmult_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void mmult_hw::thread_tmp_31_fu_8062_p1() {
    tmp_31_fu_8062_p1 = esl_zext<64,4>(j5_mid2_reg_9459.read());
}

void mmult_hw::thread_tmp_320_fu_8185_p2() {
    tmp_320_fu_8185_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_F);
}

void mmult_hw::thread_tmp_321_fu_8190_p3() {
    tmp_321_fu_8190_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_320_fu_8185_p2.read());
}

void mmult_hw::thread_tmp_322_fu_8202_p2() {
    tmp_322_fu_8202_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_10);
}

void mmult_hw::thread_tmp_323_fu_8207_p3() {
    tmp_323_fu_8207_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_322_fu_8202_p2.read());
}

void mmult_hw::thread_tmp_324_fu_8219_p2() {
    tmp_324_fu_8219_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_11);
}

void mmult_hw::thread_tmp_325_fu_8224_p3() {
    tmp_325_fu_8224_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_324_fu_8219_p2.read());
}

void mmult_hw::thread_tmp_326_fu_8236_p2() {
    tmp_326_fu_8236_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_12);
}

void mmult_hw::thread_tmp_327_fu_8241_p3() {
    tmp_327_fu_8241_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_326_fu_8236_p2.read());
}

void mmult_hw::thread_tmp_328_fu_8253_p2() {
    tmp_328_fu_8253_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_13);
}

void mmult_hw::thread_tmp_329_fu_8258_p3() {
    tmp_329_fu_8258_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_328_fu_8253_p2.read());
}

void mmult_hw::thread_tmp_330_fu_8270_p2() {
    tmp_330_fu_8270_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_14);
}

void mmult_hw::thread_tmp_331_fu_8275_p3() {
    tmp_331_fu_8275_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_330_fu_8270_p2.read());
}

void mmult_hw::thread_tmp_332_fu_8287_p2() {
    tmp_332_fu_8287_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_15);
}

void mmult_hw::thread_tmp_333_fu_8292_p3() {
    tmp_333_fu_8292_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_332_fu_8287_p2.read());
}

void mmult_hw::thread_tmp_334_fu_8304_p2() {
    tmp_334_fu_8304_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_16);
}

void mmult_hw::thread_tmp_335_fu_8309_p3() {
    tmp_335_fu_8309_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_334_fu_8304_p2.read());
}

void mmult_hw::thread_tmp_336_fu_8321_p2() {
    tmp_336_fu_8321_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_17);
}

void mmult_hw::thread_tmp_337_fu_8326_p3() {
    tmp_337_fu_8326_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_336_fu_8321_p2.read());
}

void mmult_hw::thread_tmp_338_fu_8338_p2() {
    tmp_338_fu_8338_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_18);
}

void mmult_hw::thread_tmp_339_fu_8343_p3() {
    tmp_339_fu_8343_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_338_fu_8338_p2.read());
}

void mmult_hw::thread_tmp_33_1_fu_9227_p1() {
    tmp_33_1_fu_9227_p1 = out_buf_q1.read();
}

void mmult_hw::thread_tmp_33_2_fu_9264_p1() {
    tmp_33_2_fu_9264_p1 = out_buf_q1.read();
}

void mmult_hw::thread_tmp_33_3_fu_9301_p1() {
    tmp_33_3_fu_9301_p1 = out_buf_q1.read();
}

void mmult_hw::thread_tmp_33_4_fu_9318_p1() {
    tmp_33_4_fu_9318_p1 = out_buf_q1.read();
}

void mmult_hw::thread_tmp_340_fu_8355_p2() {
    tmp_340_fu_8355_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_19);
}

void mmult_hw::thread_tmp_341_fu_8360_p3() {
    tmp_341_fu_8360_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_340_fu_8355_p2.read());
}

void mmult_hw::thread_tmp_342_fu_8372_p2() {
    tmp_342_fu_8372_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_1A);
}

void mmult_hw::thread_tmp_343_fu_8377_p3() {
    tmp_343_fu_8377_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_342_fu_8372_p2.read());
}

void mmult_hw::thread_tmp_344_fu_8389_p2() {
    tmp_344_fu_8389_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_1B);
}

void mmult_hw::thread_tmp_345_fu_8394_p3() {
    tmp_345_fu_8394_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_344_fu_8389_p2.read());
}

void mmult_hw::thread_tmp_346_fu_8406_p2() {
    tmp_346_fu_8406_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_1C);
}

void mmult_hw::thread_tmp_347_fu_8411_p3() {
    tmp_347_fu_8411_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_346_fu_8406_p2.read());
}

void mmult_hw::thread_tmp_348_fu_8423_p2() {
    tmp_348_fu_8423_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_1D);
}

void mmult_hw::thread_tmp_349_fu_8428_p3() {
    tmp_349_fu_8428_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_348_fu_8423_p2.read());
}

void mmult_hw::thread_tmp_350_fu_8440_p2() {
    tmp_350_fu_8440_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_1E);
}

void mmult_hw::thread_tmp_351_fu_8445_p3() {
    tmp_351_fu_8445_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_350_fu_8440_p2.read());
}

void mmult_hw::thread_tmp_352_fu_8457_p2() {
    tmp_352_fu_8457_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_1F);
}

void mmult_hw::thread_tmp_353_fu_8462_p3() {
    tmp_353_fu_8462_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_352_fu_8457_p2.read());
}

void mmult_hw::thread_tmp_354_fu_8474_p2() {
    tmp_354_fu_8474_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_20);
}

void mmult_hw::thread_tmp_355_fu_8479_p3() {
    tmp_355_fu_8479_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_354_fu_8474_p2.read());
}

void mmult_hw::thread_tmp_356_fu_8491_p2() {
    tmp_356_fu_8491_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_21);
}

void mmult_hw::thread_tmp_357_fu_8496_p3() {
    tmp_357_fu_8496_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_356_fu_8491_p2.read());
}

void mmult_hw::thread_tmp_358_fu_8508_p2() {
    tmp_358_fu_8508_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_22);
}

void mmult_hw::thread_tmp_359_fu_8513_p3() {
    tmp_359_fu_8513_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_358_fu_8508_p2.read());
}

void mmult_hw::thread_tmp_35_fu_5598_p2() {
    tmp_35_fu_5598_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_2);
}

void mmult_hw::thread_tmp_360_fu_8525_p2() {
    tmp_360_fu_8525_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_23);
}

void mmult_hw::thread_tmp_361_fu_8530_p3() {
    tmp_361_fu_8530_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_360_fu_8525_p2.read());
}

void mmult_hw::thread_tmp_362_fu_8542_p2() {
    tmp_362_fu_8542_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_24);
}

void mmult_hw::thread_tmp_363_fu_8547_p3() {
    tmp_363_fu_8547_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_362_fu_8542_p2.read());
}

void mmult_hw::thread_tmp_364_fu_8559_p2() {
    tmp_364_fu_8559_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_25);
}

void mmult_hw::thread_tmp_365_fu_8564_p3() {
    tmp_365_fu_8564_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_364_fu_8559_p2.read());
}

void mmult_hw::thread_tmp_366_fu_8576_p2() {
    tmp_366_fu_8576_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_26);
}

void mmult_hw::thread_tmp_367_fu_8581_p3() {
    tmp_367_fu_8581_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_366_fu_8576_p2.read());
}

void mmult_hw::thread_tmp_368_fu_8593_p2() {
    tmp_368_fu_8593_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_27);
}

void mmult_hw::thread_tmp_369_fu_8598_p3() {
    tmp_369_fu_8598_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_368_fu_8593_p2.read());
}

void mmult_hw::thread_tmp_36_fu_5604_p3() {
    tmp_36_fu_5604_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_35_fu_5598_p2.read());
}

void mmult_hw::thread_tmp_370_fu_8610_p2() {
    tmp_370_fu_8610_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_28);
}

void mmult_hw::thread_tmp_371_fu_8615_p3() {
    tmp_371_fu_8615_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_370_fu_8610_p2.read());
}

void mmult_hw::thread_tmp_372_fu_8627_p2() {
    tmp_372_fu_8627_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_29);
}

void mmult_hw::thread_tmp_373_fu_8632_p3() {
    tmp_373_fu_8632_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_372_fu_8627_p2.read());
}

void mmult_hw::thread_tmp_374_fu_8644_p2() {
    tmp_374_fu_8644_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_2A);
}

void mmult_hw::thread_tmp_375_fu_8649_p3() {
    tmp_375_fu_8649_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_374_fu_8644_p2.read());
}

void mmult_hw::thread_tmp_376_fu_8661_p2() {
    tmp_376_fu_8661_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_2B);
}

void mmult_hw::thread_tmp_377_fu_8666_p3() {
    tmp_377_fu_8666_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_376_fu_8661_p2.read());
}

void mmult_hw::thread_tmp_378_fu_8678_p2() {
    tmp_378_fu_8678_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_2C);
}

void mmult_hw::thread_tmp_379_fu_8683_p3() {
    tmp_379_fu_8683_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_378_fu_8678_p2.read());
}

void mmult_hw::thread_tmp_37_1_fu_9231_p1() {
    tmp_37_1_fu_9231_p1 = out_buf_q0.read();
}

void mmult_hw::thread_tmp_37_2_fu_9268_p1() {
    tmp_37_2_fu_9268_p1 = out_buf_q0.read();
}

void mmult_hw::thread_tmp_37_3_fu_9305_p1() {
    tmp_37_3_fu_9305_p1 = out_buf_q0.read();
}

void mmult_hw::thread_tmp_37_4_fu_9322_p1() {
    tmp_37_4_fu_9322_p1 = out_buf_q0.read();
}

void mmult_hw::thread_tmp_37_fu_5612_p2() {
    tmp_37_fu_5612_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_3);
}

void mmult_hw::thread_tmp_380_fu_8695_p2() {
    tmp_380_fu_8695_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_2D);
}

void mmult_hw::thread_tmp_381_fu_8700_p3() {
    tmp_381_fu_8700_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_380_fu_8695_p2.read());
}

void mmult_hw::thread_tmp_382_fu_8712_p2() {
    tmp_382_fu_8712_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_2E);
}

void mmult_hw::thread_tmp_383_fu_8717_p3() {
    tmp_383_fu_8717_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_382_fu_8712_p2.read());
}

void mmult_hw::thread_tmp_384_fu_8729_p2() {
    tmp_384_fu_8729_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_2F);
}

void mmult_hw::thread_tmp_385_fu_8734_p3() {
    tmp_385_fu_8734_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_384_fu_8729_p2.read());
}

void mmult_hw::thread_tmp_386_fu_8746_p2() {
    tmp_386_fu_8746_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_30);
}

void mmult_hw::thread_tmp_387_fu_8751_p3() {
    tmp_387_fu_8751_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_386_fu_8746_p2.read());
}

void mmult_hw::thread_tmp_388_fu_8763_p2() {
    tmp_388_fu_8763_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_31);
}

void mmult_hw::thread_tmp_389_fu_8768_p3() {
    tmp_389_fu_8768_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_388_fu_8763_p2.read());
}

void mmult_hw::thread_tmp_38_fu_5618_p3() {
    tmp_38_fu_5618_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_37_fu_5612_p2.read());
}

void mmult_hw::thread_tmp_390_fu_8780_p2() {
    tmp_390_fu_8780_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_32);
}

void mmult_hw::thread_tmp_391_fu_8785_p3() {
    tmp_391_fu_8785_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_390_fu_8780_p2.read());
}

void mmult_hw::thread_tmp_392_fu_8797_p2() {
    tmp_392_fu_8797_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_33);
}

void mmult_hw::thread_tmp_393_fu_8802_p3() {
    tmp_393_fu_8802_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_392_fu_8797_p2.read());
}

void mmult_hw::thread_tmp_394_fu_8814_p2() {
    tmp_394_fu_8814_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_34);
}

void mmult_hw::thread_tmp_395_fu_8819_p3() {
    tmp_395_fu_8819_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_394_fu_8814_p2.read());
}

void mmult_hw::thread_tmp_396_fu_8831_p2() {
    tmp_396_fu_8831_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_35);
}

void mmult_hw::thread_tmp_397_fu_8836_p3() {
    tmp_397_fu_8836_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_396_fu_8831_p2.read());
}

void mmult_hw::thread_tmp_398_fu_8848_p2() {
    tmp_398_fu_8848_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_36);
}

void mmult_hw::thread_tmp_399_fu_8853_p3() {
    tmp_399_fu_8853_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_398_fu_8848_p2.read());
}

void mmult_hw::thread_tmp_39_fu_5626_p2() {
    tmp_39_fu_5626_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_4);
}

void mmult_hw::thread_tmp_400_fu_8865_p2() {
    tmp_400_fu_8865_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_37);
}

void mmult_hw::thread_tmp_401_fu_8870_p3() {
    tmp_401_fu_8870_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_400_fu_8865_p2.read());
}

void mmult_hw::thread_tmp_402_fu_8882_p2() {
    tmp_402_fu_8882_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_38);
}

void mmult_hw::thread_tmp_403_fu_8887_p3() {
    tmp_403_fu_8887_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_402_fu_8882_p2.read());
}

void mmult_hw::thread_tmp_404_fu_8899_p2() {
    tmp_404_fu_8899_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_39);
}

void mmult_hw::thread_tmp_405_fu_8904_p3() {
    tmp_405_fu_8904_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_404_fu_8899_p2.read());
}

void mmult_hw::thread_tmp_406_fu_8916_p2() {
    tmp_406_fu_8916_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_3A);
}

void mmult_hw::thread_tmp_407_fu_8921_p3() {
    tmp_407_fu_8921_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_406_fu_8916_p2.read());
}

void mmult_hw::thread_tmp_408_fu_8933_p2() {
    tmp_408_fu_8933_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_3B);
}

void mmult_hw::thread_tmp_409_fu_8938_p3() {
    tmp_409_fu_8938_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_408_fu_8933_p2.read());
}

void mmult_hw::thread_tmp_40_fu_5632_p3() {
    tmp_40_fu_5632_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_39_fu_5626_p2.read());
}

void mmult_hw::thread_tmp_410_fu_8950_p2() {
    tmp_410_fu_8950_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_3C);
}

void mmult_hw::thread_tmp_411_fu_8955_p3() {
    tmp_411_fu_8955_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_410_fu_8950_p2.read());
}

void mmult_hw::thread_tmp_412_fu_8967_p2() {
    tmp_412_fu_8967_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_3D);
}

void mmult_hw::thread_tmp_413_fu_8972_p3() {
    tmp_413_fu_8972_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_412_fu_8967_p2.read());
}

void mmult_hw::thread_tmp_414_fu_8984_p2() {
    tmp_414_fu_8984_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_3E);
}

void mmult_hw::thread_tmp_415_fu_8989_p3() {
    tmp_415_fu_8989_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_414_fu_8984_p2.read());
}

void mmult_hw::thread_tmp_416_fu_9001_p2() {
    tmp_416_fu_9001_p2 = (tmp_290_reg_10008.read() | ap_const_lv10_3F);
}

void mmult_hw::thread_tmp_417_fu_9006_p3() {
    tmp_417_fu_9006_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_416_fu_9001_p2.read());
}

void mmult_hw::thread_tmp_418_cast_fu_9055_p1() {
    tmp_418_cast_fu_9055_p1 = esl_zext<64,12>(tmp_418_fu_9049_p2.read());
}

void mmult_hw::thread_tmp_418_fu_9049_p2() {
    tmp_418_fu_9049_p2 = (!tmp_289_fu_9040_p2.read().is_01() || !tmp_31_cast_fu_9046_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_289_fu_9040_p2.read()) + sc_biguint<12>(tmp_31_cast_fu_9046_p1.read()));
}

void mmult_hw::thread_tmp_419_fu_5532_p3() {
    tmp_419_fu_5532_p3 = esl_concat<8,6>(i2_reg_4555.read(), tmp_437_reg_9439.read());
}

void mmult_hw::thread_tmp_41_fu_5640_p2() {
    tmp_41_fu_5640_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_5);
}

void mmult_hw::thread_tmp_420_fu_5539_p1() {
    tmp_420_fu_5539_p1 = esl_zext<64,14>(tmp_419_fu_5532_p3.read());
}

void mmult_hw::thread_tmp_421_fu_5560_p3() {
    tmp_421_fu_5560_p3 = esl_concat<8,6>(i2_reg_4555.read(), newIndex6_fu_5555_p2.read());
}

void mmult_hw::thread_tmp_422_fu_5568_p1() {
    tmp_422_fu_5568_p1 = esl_zext<64,14>(tmp_421_fu_5560_p3.read());
}

void mmult_hw::thread_tmp_423_fu_9088_p3() {
    tmp_423_fu_9088_p3 = esl_concat<8,3>(i6_phi_fu_4645_p4.read(), ap_const_lv3_0);
}

void mmult_hw::thread_tmp_424_fu_9100_p3() {
    tmp_424_fu_9100_p3 = esl_concat<8,1>(i6_phi_fu_4645_p4.read(), ap_const_lv1_0);
}

void mmult_hw::thread_tmp_425_cast_fu_9118_p1() {
    tmp_425_cast_fu_9118_p1 = esl_zext<64,12>(tmp_425_fu_9112_p2.read());
}

void mmult_hw::thread_tmp_425_fu_9112_p2() {
    tmp_425_fu_9112_p2 = (!p_shl3_cast_fu_9108_p1.read().is_01() || !p_shl2_cast_fu_9096_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl3_cast_fu_9108_p1.read()) + sc_biguint<12>(p_shl2_cast_fu_9096_p1.read()));
}

void mmult_hw::thread_tmp_426_cast_fu_9129_p1() {
    tmp_426_cast_fu_9129_p1 = esl_zext<64,12>(tmp_426_fu_9123_p2.read());
}

void mmult_hw::thread_tmp_426_fu_9123_p2() {
    tmp_426_fu_9123_p2 = (tmp_425_fu_9112_p2.read() | ap_const_lv12_1);
}

void mmult_hw::thread_tmp_427_cast_fu_9175_p1() {
    tmp_427_cast_fu_9175_p1 = esl_sext<64,12>(tmp_427_fu_9170_p2.read());
}

void mmult_hw::thread_tmp_427_fu_9170_p2() {
    tmp_427_fu_9170_p2 = (!tmp_425_reg_13913.read().is_01() || !ap_const_lv12_2.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_425_reg_13913.read()) + sc_biguint<12>(ap_const_lv12_2));
}

void mmult_hw::thread_tmp_428_cast_fu_9185_p1() {
    tmp_428_cast_fu_9185_p1 = esl_sext<64,12>(tmp_428_fu_9180_p2.read());
}

void mmult_hw::thread_tmp_428_fu_9180_p2() {
    tmp_428_fu_9180_p2 = (!tmp_425_reg_13913.read().is_01() || !ap_const_lv12_3.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_425_reg_13913.read()) + sc_biguint<12>(ap_const_lv12_3));
}

void mmult_hw::thread_tmp_429_cast_fu_9212_p1() {
    tmp_429_cast_fu_9212_p1 = esl_sext<64,12>(tmp_429_fu_9207_p2.read());
}

void mmult_hw::thread_tmp_429_fu_9207_p2() {
    tmp_429_fu_9207_p2 = (!tmp_425_reg_13913.read().is_01() || !ap_const_lv12_4.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_425_reg_13913.read()) + sc_biguint<12>(ap_const_lv12_4));
}

void mmult_hw::thread_tmp_42_fu_5646_p3() {
    tmp_42_fu_5646_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_41_fu_5640_p2.read());
}

void mmult_hw::thread_tmp_430_cast_fu_9222_p1() {
    tmp_430_cast_fu_9222_p1 = esl_sext<64,12>(tmp_430_fu_9217_p2.read());
}

void mmult_hw::thread_tmp_430_fu_9217_p2() {
    tmp_430_fu_9217_p2 = (!tmp_425_reg_13913.read().is_01() || !ap_const_lv12_5.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_425_reg_13913.read()) + sc_biguint<12>(ap_const_lv12_5));
}

void mmult_hw::thread_tmp_431_cast_fu_9249_p1() {
    tmp_431_cast_fu_9249_p1 = esl_sext<64,12>(tmp_431_fu_9244_p2.read());
}

void mmult_hw::thread_tmp_431_fu_9244_p2() {
    tmp_431_fu_9244_p2 = (!tmp_425_reg_13913.read().is_01() || !ap_const_lv12_6.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_425_reg_13913.read()) + sc_biguint<12>(ap_const_lv12_6));
}

void mmult_hw::thread_tmp_432_cast_fu_9259_p1() {
    tmp_432_cast_fu_9259_p1 = esl_sext<64,12>(tmp_432_fu_9254_p2.read());
}

void mmult_hw::thread_tmp_432_fu_9254_p2() {
    tmp_432_fu_9254_p2 = (!tmp_425_reg_13913.read().is_01() || !ap_const_lv12_7.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_425_reg_13913.read()) + sc_biguint<12>(ap_const_lv12_7));
}

void mmult_hw::thread_tmp_433_cast_fu_9286_p1() {
    tmp_433_cast_fu_9286_p1 = esl_sext<64,12>(tmp_433_fu_9281_p2.read());
}

void mmult_hw::thread_tmp_433_fu_9281_p2() {
    tmp_433_fu_9281_p2 = (!tmp_425_reg_13913.read().is_01() || !ap_const_lv12_8.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_425_reg_13913.read()) + sc_biguint<12>(ap_const_lv12_8));
}

void mmult_hw::thread_tmp_434_cast_fu_9296_p1() {
    tmp_434_cast_fu_9296_p1 = esl_sext<64,12>(tmp_434_fu_9291_p2.read());
}

void mmult_hw::thread_tmp_434_fu_9291_p2() {
    tmp_434_fu_9291_p2 = (!tmp_425_reg_13913.read().is_01() || !ap_const_lv12_9.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_425_reg_13913.read()) + sc_biguint<12>(ap_const_lv12_9));
}

void mmult_hw::thread_tmp_435_fu_9029_p3() {
    tmp_435_fu_9029_p3 = esl_concat<8,1>(ap_reg_pp3_iter40_tmp_21_mid2_v_reg_9465.read(), ap_const_lv1_0);
}

void mmult_hw::thread_tmp_436_fu_5520_p1() {
    tmp_436_fu_5520_p1 = in_stream_data_V_0_data_out.read().range(32-1, 0);
}

void mmult_hw::thread_tmp_437_fu_5510_p1() {
    tmp_437_fu_5510_p1 = j3_reg_4567.read().range(6-1, 0);
}

void mmult_hw::thread_tmp_43_fu_5654_p2() {
    tmp_43_fu_5654_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_6);
}

void mmult_hw::thread_tmp_44_fu_5660_p3() {
    tmp_44_fu_5660_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_43_fu_5654_p2.read());
}

void mmult_hw::thread_tmp_45_fu_5668_p2() {
    tmp_45_fu_5668_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_7);
}

void mmult_hw::thread_tmp_46_fu_5674_p3() {
    tmp_46_fu_5674_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_45_fu_5668_p2.read());
}

void mmult_hw::thread_tmp_47_fu_5682_p2() {
    tmp_47_fu_5682_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_8);
}

void mmult_hw::thread_tmp_48_fu_5688_p3() {
    tmp_48_fu_5688_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_47_fu_5682_p2.read());
}

void mmult_hw::thread_tmp_49_fu_5696_p2() {
    tmp_49_fu_5696_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_9);
}

void mmult_hw::thread_tmp_4_fu_5314_p1() {
    tmp_4_fu_5314_p1 = esl_zext<64,4>(i_reg_4428.read());
}

void mmult_hw::thread_tmp_50_fu_5702_p3() {
    tmp_50_fu_5702_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_49_fu_5696_p2.read());
}

void mmult_hw::thread_tmp_51_fu_5710_p2() {
    tmp_51_fu_5710_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_A);
}

void mmult_hw::thread_tmp_52_fu_5716_p3() {
    tmp_52_fu_5716_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_51_fu_5710_p2.read());
}

void mmult_hw::thread_tmp_53_fu_5724_p2() {
    tmp_53_fu_5724_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_B);
}

void mmult_hw::thread_tmp_54_fu_5730_p3() {
    tmp_54_fu_5730_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_53_fu_5724_p2.read());
}

void mmult_hw::thread_tmp_55_fu_5738_p2() {
    tmp_55_fu_5738_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_C);
}

void mmult_hw::thread_tmp_56_fu_5744_p3() {
    tmp_56_fu_5744_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_55_fu_5738_p2.read());
}

void mmult_hw::thread_tmp_57_fu_5752_p2() {
    tmp_57_fu_5752_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_D);
}

void mmult_hw::thread_tmp_58_fu_5758_p3() {
    tmp_58_fu_5758_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_57_fu_5752_p2.read());
}

void mmult_hw::thread_tmp_59_fu_5766_p2() {
    tmp_59_fu_5766_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_E);
}

void mmult_hw::thread_tmp_5_fu_5305_p1() {
    tmp_5_fu_5305_p1 = in_stream_data_V_0_data_out.read().range(32-1, 0);
}

void mmult_hw::thread_tmp_60_fu_5772_p3() {
    tmp_60_fu_5772_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_59_fu_5766_p2.read());
}

void mmult_hw::thread_tmp_61_fu_5780_p2() {
    tmp_61_fu_5780_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_F);
}

void mmult_hw::thread_tmp_62_fu_5786_p3() {
    tmp_62_fu_5786_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_61_fu_5780_p2.read());
}

void mmult_hw::thread_tmp_63_fu_5794_p2() {
    tmp_63_fu_5794_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_10);
}

void mmult_hw::thread_tmp_64_fu_5800_p3() {
    tmp_64_fu_5800_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_63_fu_5794_p2.read());
}

void mmult_hw::thread_tmp_65_fu_5808_p2() {
    tmp_65_fu_5808_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_11);
}

void mmult_hw::thread_tmp_66_fu_5814_p3() {
    tmp_66_fu_5814_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_65_fu_5808_p2.read());
}

void mmult_hw::thread_tmp_67_fu_5822_p2() {
    tmp_67_fu_5822_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_12);
}

void mmult_hw::thread_tmp_68_fu_5828_p3() {
    tmp_68_fu_5828_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_67_fu_5822_p2.read());
}

void mmult_hw::thread_tmp_69_fu_5836_p2() {
    tmp_69_fu_5836_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_13);
}

void mmult_hw::thread_tmp_70_fu_5842_p3() {
    tmp_70_fu_5842_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_69_fu_5836_p2.read());
}

void mmult_hw::thread_tmp_71_fu_5850_p2() {
    tmp_71_fu_5850_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_14);
}

void mmult_hw::thread_tmp_72_fu_5856_p3() {
    tmp_72_fu_5856_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_71_fu_5850_p2.read());
}

void mmult_hw::thread_tmp_73_fu_5864_p2() {
    tmp_73_fu_5864_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_15);
}

void mmult_hw::thread_tmp_74_fu_5870_p3() {
    tmp_74_fu_5870_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_73_fu_5864_p2.read());
}

void mmult_hw::thread_tmp_75_fu_5878_p2() {
    tmp_75_fu_5878_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_16);
}

void mmult_hw::thread_tmp_76_fu_5884_p3() {
    tmp_76_fu_5884_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_75_fu_5878_p2.read());
}

void mmult_hw::thread_tmp_77_fu_5892_p2() {
    tmp_77_fu_5892_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_17);
}

void mmult_hw::thread_tmp_78_fu_5898_p3() {
    tmp_78_fu_5898_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_77_fu_5892_p2.read());
}

void mmult_hw::thread_tmp_79_fu_5906_p2() {
    tmp_79_fu_5906_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_18);
}

void mmult_hw::thread_tmp_80_fu_5912_p3() {
    tmp_80_fu_5912_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_79_fu_5906_p2.read());
}

void mmult_hw::thread_tmp_81_fu_5920_p2() {
    tmp_81_fu_5920_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_19);
}

void mmult_hw::thread_tmp_82_fu_5926_p3() {
    tmp_82_fu_5926_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_81_fu_5920_p2.read());
}

void mmult_hw::thread_tmp_83_fu_5934_p2() {
    tmp_83_fu_5934_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_1A);
}

void mmult_hw::thread_tmp_84_fu_5940_p3() {
    tmp_84_fu_5940_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_83_fu_5934_p2.read());
}

void mmult_hw::thread_tmp_85_fu_5948_p2() {
    tmp_85_fu_5948_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_1B);
}

void mmult_hw::thread_tmp_86_fu_5954_p3() {
    tmp_86_fu_5954_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_85_fu_5948_p2.read());
}

void mmult_hw::thread_tmp_87_fu_5962_p2() {
    tmp_87_fu_5962_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_1C);
}

void mmult_hw::thread_tmp_88_fu_5968_p3() {
    tmp_88_fu_5968_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_87_fu_5962_p2.read());
}

void mmult_hw::thread_tmp_89_fu_5976_p2() {
    tmp_89_fu_5976_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_1D);
}

void mmult_hw::thread_tmp_8_fu_5324_p2() {
    tmp_8_fu_5324_p2 = (i_reg_4428.read() | ap_const_lv4_1);
}

void mmult_hw::thread_tmp_90_fu_5982_p3() {
    tmp_90_fu_5982_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_89_fu_5976_p2.read());
}

void mmult_hw::thread_tmp_91_fu_5990_p2() {
    tmp_91_fu_5990_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_1E);
}

void mmult_hw::thread_tmp_92_fu_5996_p3() {
    tmp_92_fu_5996_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_91_fu_5990_p2.read());
}

void mmult_hw::thread_tmp_93_fu_6004_p2() {
    tmp_93_fu_6004_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_1F);
}

void mmult_hw::thread_tmp_94_fu_6010_p3() {
    tmp_94_fu_6010_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_93_fu_6004_p2.read());
}

void mmult_hw::thread_tmp_95_fu_6018_p2() {
    tmp_95_fu_6018_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_20);
}

void mmult_hw::thread_tmp_96_fu_6024_p3() {
    tmp_96_fu_6024_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_95_fu_6018_p2.read());
}

void mmult_hw::thread_tmp_97_fu_6032_p2() {
    tmp_97_fu_6032_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_21);
}

void mmult_hw::thread_tmp_98_fu_6038_p3() {
    tmp_98_fu_6038_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_97_fu_6032_p2.read());
}

void mmult_hw::thread_tmp_99_fu_6046_p2() {
    tmp_99_fu_6046_p2 = (tmp_21_fu_5576_p3.read() | ap_const_lv14_22);
}

void mmult_hw::thread_tmp_9_fu_5330_p1() {
    tmp_9_fu_5330_p1 = esl_zext<64,4>(tmp_8_fu_5324_p2.read());
}

void mmult_hw::thread_tmp_s_fu_5353_p2() {
    tmp_s_fu_5353_p2 = (!is_idx_1_reg_4475.read().is_01() || !ap_const_lv11_80.is_01())? sc_lv<11>(): (sc_biguint<11>(is_idx_1_reg_4475.read()) + sc_biguint<11>(ap_const_lv11_80));
}

void mmult_hw::thread_weight_buf_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage31.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage31_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_415_fu_8989_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage30_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_411_fu_8955_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage29_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_407_fu_8921_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage28_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_403_fu_8887_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage27_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_399_fu_8853_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage26_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_395_fu_8819_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage25_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_391_fu_8785_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage24_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_387_fu_8751_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage23_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_383_fu_8717_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage22_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_379_fu_8683_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage21_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_375_fu_8649_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage20_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_371_fu_8615_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage19_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_367_fu_8581_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage18_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_363_fu_8547_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage17_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_359_fu_8513_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage16_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_355_fu_8479_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage15_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_351_fu_8445_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage14_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_347_fu_8411_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage13_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_343_fu_8377_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage12_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_339_fu_8343_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage11_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_335_fu_8309_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage10_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_331_fu_8275_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage9_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_327_fu_8241_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_323_fu_8207_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_319_fu_8173_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_315_fu_8139_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_311_fu_8105_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_307_fu_8071_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_303_fu_8033_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_299_fu_7999_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_295_fu_7965_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_291_fu_7928_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address0 =  (sc_lv<10>) (tmp_14_fu_5410_p1.read());
    } else {
        weight_buf_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void mmult_hw::thread_weight_buf_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage31.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage31_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_417_fu_9006_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage30_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_413_fu_8972_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage29_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_409_fu_8938_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage28_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_405_fu_8904_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage27_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_401_fu_8870_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage26_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_397_fu_8836_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage25_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_393_fu_8802_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage24_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_389_fu_8768_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage23_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_385_fu_8734_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage22_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_381_fu_8700_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage21_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_377_fu_8666_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage20_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_373_fu_8632_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage19_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_369_fu_8598_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage18_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_365_fu_8564_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage17_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_361_fu_8530_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage16_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_357_fu_8496_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage15_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_353_fu_8462_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage14_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_349_fu_8428_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage13_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_345_fu_8394_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage12_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_341_fu_8360_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage11_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_337_fu_8326_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage10_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_333_fu_8292_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage9_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_329_fu_8258_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_325_fu_8224_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_321_fu_8190_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_317_fu_8156_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_313_fu_8122_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_309_fu_8088_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_305_fu_8050_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_301_fu_8016_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_297_fu_7982_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_293_fu_7942_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_address1 =  (sc_lv<10>) (tmp_19_fu_5439_p1.read());
    } else {
        weight_buf_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void mmult_hw::thread_weight_buf_0_ce0() {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage17_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage21_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage25_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage29_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage18_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage22_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage26_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage30_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage19_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage23_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage27_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage31_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage16_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage20_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage24_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage28_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_0_ce0 = ap_const_logic_1;
    } else {
        weight_buf_0_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_ce1() {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage17_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage21_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage25_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage29_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage18_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage22_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage26_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage30_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage19_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage23_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage27_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage31_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage16_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage20_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage24_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage28_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_0_ce1 = ap_const_logic_1;
    } else {
        weight_buf_0_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,3,3>(arrayNo_cast_cast_reg_9378.read(), ap_const_lv3_0))) {
        weight_buf_0_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,3,3>(arrayNo_cast_cast_reg_9378.read(), ap_const_lv3_0))) {
        weight_buf_0_we1 = ap_const_logic_1;
    } else {
        weight_buf_0_we1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage31.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage31_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_415_fu_8989_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage30_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_411_fu_8955_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage29_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_407_fu_8921_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage28_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_403_fu_8887_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage27_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_399_fu_8853_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage26_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_395_fu_8819_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage25_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_391_fu_8785_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage24_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_387_fu_8751_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage23_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_383_fu_8717_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage22_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_379_fu_8683_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage21_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_375_fu_8649_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage20_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_371_fu_8615_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage19_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_367_fu_8581_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage18_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_363_fu_8547_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage17_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_359_fu_8513_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage16_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_355_fu_8479_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage15_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_351_fu_8445_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage14_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_347_fu_8411_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage13_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_343_fu_8377_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage12_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_339_fu_8343_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage11_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_335_fu_8309_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage10_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_331_fu_8275_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage9_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_327_fu_8241_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_323_fu_8207_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_319_fu_8173_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_315_fu_8139_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_311_fu_8105_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_307_fu_8071_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_303_fu_8033_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_299_fu_7999_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_295_fu_7965_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_291_fu_7928_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address0 =  (sc_lv<10>) (tmp_14_fu_5410_p1.read());
    } else {
        weight_buf_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void mmult_hw::thread_weight_buf_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage31.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage31_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_417_fu_9006_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage30_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_413_fu_8972_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage29_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_409_fu_8938_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage28_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_405_fu_8904_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage27_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_401_fu_8870_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage26_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_397_fu_8836_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage25_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_393_fu_8802_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage24_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_389_fu_8768_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage23_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_385_fu_8734_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage22_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_381_fu_8700_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage21_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_377_fu_8666_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage20_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_373_fu_8632_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage19_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_369_fu_8598_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage18_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_365_fu_8564_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage17_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_361_fu_8530_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage16_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_357_fu_8496_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage15_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_353_fu_8462_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage14_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_349_fu_8428_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage13_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_345_fu_8394_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage12_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_341_fu_8360_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage11_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_337_fu_8326_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage10_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_333_fu_8292_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage9_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_329_fu_8258_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_325_fu_8224_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_321_fu_8190_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_317_fu_8156_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_313_fu_8122_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_309_fu_8088_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_305_fu_8050_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_301_fu_8016_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_297_fu_7982_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_293_fu_7942_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_address1 =  (sc_lv<10>) (tmp_19_fu_5439_p1.read());
    } else {
        weight_buf_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void mmult_hw::thread_weight_buf_1_ce0() {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage17_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage21_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage25_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage29_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage18_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage22_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage26_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage30_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage19_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage23_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage27_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage31_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage16_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage20_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage24_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage28_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_1_ce0 = ap_const_logic_1;
    } else {
        weight_buf_1_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_ce1() {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage17_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage21_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage25_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage29_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage18_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage22_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage26_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage30_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage19_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage23_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage27_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage31_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage16_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage20_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage24_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage28_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_1_ce1 = ap_const_logic_1;
    } else {
        weight_buf_1_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,3,3>(arrayNo_cast_cast_reg_9378.read(), ap_const_lv3_1))) {
        weight_buf_1_we0 = ap_const_logic_1;
    } else {
        weight_buf_1_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,3,3>(arrayNo_cast_cast_reg_9378.read(), ap_const_lv3_1))) {
        weight_buf_1_we1 = ap_const_logic_1;
    } else {
        weight_buf_1_we1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage31.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage31_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_415_fu_8989_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage30_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_411_fu_8955_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage29_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_407_fu_8921_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage28_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_403_fu_8887_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage27_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_399_fu_8853_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage26_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_395_fu_8819_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage25_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_391_fu_8785_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage24_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_387_fu_8751_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage23_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_383_fu_8717_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage22_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_379_fu_8683_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage21_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_375_fu_8649_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage20_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_371_fu_8615_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage19_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_367_fu_8581_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage18_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_363_fu_8547_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage17_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_359_fu_8513_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage16_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_355_fu_8479_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage15_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_351_fu_8445_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage14_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_347_fu_8411_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage13_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_343_fu_8377_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage12_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_339_fu_8343_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage11_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_335_fu_8309_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage10_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_331_fu_8275_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage9_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_327_fu_8241_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_323_fu_8207_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_319_fu_8173_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_315_fu_8139_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_311_fu_8105_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_307_fu_8071_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_303_fu_8033_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_299_fu_7999_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_295_fu_7965_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_291_fu_7928_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address0 =  (sc_lv<10>) (tmp_14_fu_5410_p1.read());
    } else {
        weight_buf_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void mmult_hw::thread_weight_buf_2_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage31.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage31_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_417_fu_9006_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage30_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_413_fu_8972_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage29_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_409_fu_8938_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage28_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_405_fu_8904_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage27_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_401_fu_8870_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage26_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_397_fu_8836_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage25_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_393_fu_8802_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage24_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_389_fu_8768_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage23_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_385_fu_8734_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage22_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_381_fu_8700_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage21_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_377_fu_8666_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage20_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_373_fu_8632_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage19_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_369_fu_8598_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage18_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_365_fu_8564_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage17_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_361_fu_8530_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage16_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_357_fu_8496_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage15_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_353_fu_8462_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage14_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_349_fu_8428_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage13_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_345_fu_8394_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage12_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_341_fu_8360_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage11_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_337_fu_8326_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage10_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_333_fu_8292_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage9_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_329_fu_8258_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_325_fu_8224_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_321_fu_8190_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_317_fu_8156_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_313_fu_8122_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_309_fu_8088_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_305_fu_8050_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_301_fu_8016_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_297_fu_7982_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_293_fu_7942_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_address1 =  (sc_lv<10>) (tmp_19_fu_5439_p1.read());
    } else {
        weight_buf_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void mmult_hw::thread_weight_buf_2_ce0() {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage17_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage21_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage25_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage29_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage18_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage22_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage26_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage30_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage19_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage23_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage27_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage31_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage16_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage20_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage24_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage28_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_2_ce0 = ap_const_logic_1;
    } else {
        weight_buf_2_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_ce1() {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage17_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage21_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage25_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage29_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage18_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage22_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage26_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage30_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage19_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage23_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage27_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage31_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage16_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage20_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage24_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage28_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_2_ce1 = ap_const_logic_1;
    } else {
        weight_buf_2_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,3,3>(arrayNo_cast_cast_reg_9378.read(), ap_const_lv3_2))) {
        weight_buf_2_we0 = ap_const_logic_1;
    } else {
        weight_buf_2_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,3,3>(arrayNo_cast_cast_reg_9378.read(), ap_const_lv3_2))) {
        weight_buf_2_we1 = ap_const_logic_1;
    } else {
        weight_buf_2_we1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage31.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage31_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_415_fu_8989_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage30_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_411_fu_8955_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage29_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_407_fu_8921_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage28_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_403_fu_8887_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage27_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_399_fu_8853_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage26_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_395_fu_8819_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage25_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_391_fu_8785_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage24_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_387_fu_8751_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage23_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_383_fu_8717_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage22_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_379_fu_8683_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage21_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_375_fu_8649_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage20_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_371_fu_8615_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage19_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_367_fu_8581_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage18_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_363_fu_8547_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage17_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_359_fu_8513_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage16_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_355_fu_8479_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage15_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_351_fu_8445_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage14_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_347_fu_8411_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage13_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_343_fu_8377_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage12_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_339_fu_8343_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage11_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_335_fu_8309_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage10_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_331_fu_8275_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage9_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_327_fu_8241_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_323_fu_8207_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_319_fu_8173_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_315_fu_8139_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_311_fu_8105_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_307_fu_8071_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_303_fu_8033_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_299_fu_7999_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_295_fu_7965_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_291_fu_7928_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address0 =  (sc_lv<10>) (tmp_14_fu_5410_p1.read());
    } else {
        weight_buf_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void mmult_hw::thread_weight_buf_3_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage31.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage31_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_417_fu_9006_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage30_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_413_fu_8972_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage29_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_409_fu_8938_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage28_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_405_fu_8904_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage27_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_401_fu_8870_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage26_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_397_fu_8836_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage25_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_393_fu_8802_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage24_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_389_fu_8768_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage23_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_385_fu_8734_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage22_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_381_fu_8700_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage21_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_377_fu_8666_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage20_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_373_fu_8632_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage19_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_369_fu_8598_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage18_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_365_fu_8564_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage17_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_361_fu_8530_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage16_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_357_fu_8496_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage15_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_353_fu_8462_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage14_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_349_fu_8428_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage13_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_345_fu_8394_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage12_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_341_fu_8360_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage11_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_337_fu_8326_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage10_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_333_fu_8292_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage9_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_329_fu_8258_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_325_fu_8224_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_321_fu_8190_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_317_fu_8156_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_313_fu_8122_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_309_fu_8088_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_305_fu_8050_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_301_fu_8016_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_297_fu_7982_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_293_fu_7942_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_address1 =  (sc_lv<10>) (tmp_19_fu_5439_p1.read());
    } else {
        weight_buf_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void mmult_hw::thread_weight_buf_3_ce0() {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage17_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage21_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage25_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage29_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage18_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage22_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage26_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage30_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage19_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage23_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage27_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage31_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage16_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage20_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage24_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage28_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_3_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_ce1() {
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage17_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage21_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage25_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage29_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage18_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage22_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage26_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage30_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage19_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage23_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage27_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage31_flag00011001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage16_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage20_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage24_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage28_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_3_ce1 = ap_const_logic_1;
    } else {
        weight_buf_3_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,3,3>(arrayNo_cast_cast_reg_9378.read(), ap_const_lv3_0) && 
         !esl_seteq<1,3,3>(arrayNo_cast_cast_reg_9378.read(), ap_const_lv3_1) && 
         !esl_seteq<1,3,3>(arrayNo_cast_cast_reg_9378.read(), ap_const_lv3_2))) {
        weight_buf_3_we0 = ap_const_logic_1;
    } else {
        weight_buf_3_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,3,3>(arrayNo_cast_cast_reg_9378.read(), ap_const_lv3_0) && 
         !esl_seteq<1,3,3>(arrayNo_cast_cast_reg_9378.read(), ap_const_lv3_1) && 
         !esl_seteq<1,3,3>(arrayNo_cast_cast_reg_9378.read(), ap_const_lv3_2))) {
        weight_buf_3_we1 = ap_const_logic_1;
    } else {
        weight_buf_3_we1 = ap_const_logic_0;
    }
}

}

