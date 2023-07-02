// -------------------------------------------------------------
// 
// File Name: hdl_prj\hdlsrc\pulse_detector_v4\FilterCoef_block.v
// Created: 2023-07-02 17:41:51
// 
// Generated by MATLAB 9.13 and HDL Coder 4.0
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: FilterCoef_block
// Source Path: pulse_detector_v4/Pulse Detector/Discrete FIR Filter/Filter/FilterCoef
// Hierarchy Level: 3
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module FilterCoef_block
          (CoefOutS_0,
           CoefOutS_1,
           CoefOutS_2,
           CoefOutS_3,
           CoefOutS_4,
           CoefOutS_5,
           CoefOutS_6,
           CoefOutS_7,
           CoefOutS_8,
           CoefOutS_9,
           CoefOutS_10,
           CoefOutS_11,
           CoefOutS_12,
           CoefOutS_13,
           CoefOutS_14,
           CoefOutS_15,
           CoefOutS_16,
           CoefOutS_17,
           CoefOutS_18,
           CoefOutS_19,
           CoefOutS_20,
           CoefOutS_21,
           CoefOutS_22,
           CoefOutS_23,
           CoefOutS_24,
           CoefOutS_25,
           CoefOutS_26,
           CoefOutS_27,
           CoefOutS_28,
           CoefOutS_29,
           CoefOutS_30,
           CoefOutS_31,
           CoefOutS_32,
           CoefOutS_33,
           CoefOutS_34,
           CoefOutS_35,
           CoefOutS_36,
           CoefOutS_37,
           CoefOutS_38,
           CoefOutS_39,
           CoefOutS_40,
           CoefOutS_41,
           CoefOutS_42,
           CoefOutS_43,
           CoefOutS_44,
           CoefOutS_45,
           CoefOutS_46,
           CoefOutS_47,
           CoefOutS_48,
           CoefOutS_49,
           CoefOutS_50,
           CoefOutS_51,
           CoefOutS_52,
           CoefOutS_53,
           CoefOutS_54,
           CoefOutS_55,
           CoefOutS_56,
           CoefOutS_57,
           CoefOutS_58,
           CoefOutS_59,
           CoefOutS_60,
           CoefOutS_61,
           CoefOutS_62,
           CoefOutS_63);


  output  signed [18:0] CoefOutS_0;  // sfix19_En23
  output  signed [18:0] CoefOutS_1;  // sfix19_En23
  output  signed [18:0] CoefOutS_2;  // sfix19_En23
  output  signed [18:0] CoefOutS_3;  // sfix19_En23
  output  signed [18:0] CoefOutS_4;  // sfix19_En23
  output  signed [18:0] CoefOutS_5;  // sfix19_En23
  output  signed [18:0] CoefOutS_6;  // sfix19_En23
  output  signed [18:0] CoefOutS_7;  // sfix19_En23
  output  signed [18:0] CoefOutS_8;  // sfix19_En23
  output  signed [18:0] CoefOutS_9;  // sfix19_En23
  output  signed [18:0] CoefOutS_10;  // sfix19_En23
  output  signed [18:0] CoefOutS_11;  // sfix19_En23
  output  signed [18:0] CoefOutS_12;  // sfix19_En23
  output  signed [18:0] CoefOutS_13;  // sfix19_En23
  output  signed [18:0] CoefOutS_14;  // sfix19_En23
  output  signed [18:0] CoefOutS_15;  // sfix19_En23
  output  signed [18:0] CoefOutS_16;  // sfix19_En23
  output  signed [18:0] CoefOutS_17;  // sfix19_En23
  output  signed [18:0] CoefOutS_18;  // sfix19_En23
  output  signed [18:0] CoefOutS_19;  // sfix19_En23
  output  signed [18:0] CoefOutS_20;  // sfix19_En23
  output  signed [18:0] CoefOutS_21;  // sfix19_En23
  output  signed [18:0] CoefOutS_22;  // sfix19_En23
  output  signed [18:0] CoefOutS_23;  // sfix19_En23
  output  signed [18:0] CoefOutS_24;  // sfix19_En23
  output  signed [18:0] CoefOutS_25;  // sfix19_En23
  output  signed [18:0] CoefOutS_26;  // sfix19_En23
  output  signed [18:0] CoefOutS_27;  // sfix19_En23
  output  signed [18:0] CoefOutS_28;  // sfix19_En23
  output  signed [18:0] CoefOutS_29;  // sfix19_En23
  output  signed [18:0] CoefOutS_30;  // sfix19_En23
  output  signed [18:0] CoefOutS_31;  // sfix19_En23
  output  signed [18:0] CoefOutS_32;  // sfix19_En23
  output  signed [18:0] CoefOutS_33;  // sfix19_En23
  output  signed [18:0] CoefOutS_34;  // sfix19_En23
  output  signed [18:0] CoefOutS_35;  // sfix19_En23
  output  signed [18:0] CoefOutS_36;  // sfix19_En23
  output  signed [18:0] CoefOutS_37;  // sfix19_En23
  output  signed [18:0] CoefOutS_38;  // sfix19_En23
  output  signed [18:0] CoefOutS_39;  // sfix19_En23
  output  signed [18:0] CoefOutS_40;  // sfix19_En23
  output  signed [18:0] CoefOutS_41;  // sfix19_En23
  output  signed [18:0] CoefOutS_42;  // sfix19_En23
  output  signed [18:0] CoefOutS_43;  // sfix19_En23
  output  signed [18:0] CoefOutS_44;  // sfix19_En23
  output  signed [18:0] CoefOutS_45;  // sfix19_En23
  output  signed [18:0] CoefOutS_46;  // sfix19_En23
  output  signed [18:0] CoefOutS_47;  // sfix19_En23
  output  signed [18:0] CoefOutS_48;  // sfix19_En23
  output  signed [18:0] CoefOutS_49;  // sfix19_En23
  output  signed [18:0] CoefOutS_50;  // sfix19_En23
  output  signed [18:0] CoefOutS_51;  // sfix19_En23
  output  signed [18:0] CoefOutS_52;  // sfix19_En23
  output  signed [18:0] CoefOutS_53;  // sfix19_En23
  output  signed [18:0] CoefOutS_54;  // sfix19_En23
  output  signed [18:0] CoefOutS_55;  // sfix19_En23
  output  signed [18:0] CoefOutS_56;  // sfix19_En23
  output  signed [18:0] CoefOutS_57;  // sfix19_En23
  output  signed [18:0] CoefOutS_58;  // sfix19_En23
  output  signed [18:0] CoefOutS_59;  // sfix19_En23
  output  signed [18:0] CoefOutS_60;  // sfix19_En23
  output  signed [18:0] CoefOutS_61;  // sfix19_En23
  output  signed [18:0] CoefOutS_62;  // sfix19_En23
  output  signed [18:0] CoefOutS_63;  // sfix19_En23


  wire signed [18:0] CoefData;  // sfix19_En23
  wire signed [18:0] CoefData_1;  // sfix19_En23
  wire signed [18:0] CoefData_2;  // sfix19_En23
  wire signed [18:0] CoefData_3;  // sfix19_En23
  wire signed [18:0] CoefData_4;  // sfix19_En23
  wire signed [18:0] CoefData_5;  // sfix19_En23
  wire signed [18:0] CoefData_6;  // sfix19_En23
  wire signed [18:0] CoefData_7;  // sfix19_En23
  wire signed [18:0] CoefData_8;  // sfix19_En23
  wire signed [18:0] CoefData_9;  // sfix19_En23
  wire signed [18:0] CoefData_10;  // sfix19_En23
  wire signed [18:0] CoefData_11;  // sfix19_En23
  wire signed [18:0] CoefData_12;  // sfix19_En23
  wire signed [18:0] CoefData_13;  // sfix19_En23
  wire signed [18:0] CoefData_14;  // sfix19_En23
  wire signed [18:0] CoefData_15;  // sfix19_En23
  wire signed [18:0] CoefData_16;  // sfix19_En23
  wire signed [18:0] CoefData_17;  // sfix19_En23
  wire signed [18:0] CoefData_18;  // sfix19_En23
  wire signed [18:0] CoefData_19;  // sfix19_En23
  wire signed [18:0] CoefData_20;  // sfix19_En23
  wire signed [18:0] CoefData_21;  // sfix19_En23
  wire signed [18:0] CoefData_22;  // sfix19_En23
  wire signed [18:0] CoefData_23;  // sfix19_En23
  wire signed [18:0] CoefData_24;  // sfix19_En23
  wire signed [18:0] CoefData_25;  // sfix19_En23
  wire signed [18:0] CoefData_26;  // sfix19_En23
  wire signed [18:0] CoefData_27;  // sfix19_En23
  wire signed [18:0] CoefData_28;  // sfix19_En23
  wire signed [18:0] CoefData_29;  // sfix19_En23
  wire signed [18:0] CoefData_30;  // sfix19_En23
  wire signed [18:0] CoefData_31;  // sfix19_En23
  wire signed [18:0] CoefData_32;  // sfix19_En23
  wire signed [18:0] CoefData_33;  // sfix19_En23
  wire signed [18:0] CoefData_34;  // sfix19_En23
  wire signed [18:0] CoefData_35;  // sfix19_En23
  wire signed [18:0] CoefData_36;  // sfix19_En23
  wire signed [18:0] CoefData_37;  // sfix19_En23
  wire signed [18:0] CoefData_38;  // sfix19_En23
  wire signed [18:0] CoefData_39;  // sfix19_En23
  wire signed [18:0] CoefData_40;  // sfix19_En23
  wire signed [18:0] CoefData_41;  // sfix19_En23
  wire signed [18:0] CoefData_42;  // sfix19_En23
  wire signed [18:0] CoefData_43;  // sfix19_En23
  wire signed [18:0] CoefData_44;  // sfix19_En23
  wire signed [18:0] CoefData_45;  // sfix19_En23
  wire signed [18:0] CoefData_46;  // sfix19_En23
  wire signed [18:0] CoefData_47;  // sfix19_En23
  wire signed [18:0] CoefData_48;  // sfix19_En23
  wire signed [18:0] CoefData_49;  // sfix19_En23
  wire signed [18:0] CoefData_50;  // sfix19_En23
  wire signed [18:0] CoefData_51;  // sfix19_En23
  wire signed [18:0] CoefData_52;  // sfix19_En23
  wire signed [18:0] CoefData_53;  // sfix19_En23
  wire signed [18:0] CoefData_54;  // sfix19_En23
  wire signed [18:0] CoefData_55;  // sfix19_En23
  wire signed [18:0] CoefData_56;  // sfix19_En23
  wire signed [18:0] CoefData_57;  // sfix19_En23
  wire signed [18:0] CoefData_58;  // sfix19_En23
  wire signed [18:0] CoefData_59;  // sfix19_En23
  wire signed [18:0] CoefData_60;  // sfix19_En23
  wire signed [18:0] CoefData_61;  // sfix19_En23
  wire signed [18:0] CoefData_62;  // sfix19_En23
  wire signed [18:0] CoefData_63;  // sfix19_En23


  // CoefReg_1
  assign CoefData = 19'sb1010111100011110010;



  assign CoefOutS_0 = CoefData;

  // CoefReg_2
  assign CoefData_1 = 19'sb1011110110100110011;



  assign CoefOutS_1 = CoefData_1;

  // CoefReg_3
  assign CoefData_2 = 19'sb0011110111101011010;



  assign CoefOutS_2 = CoefData_2;

  // CoefReg_4
  assign CoefData_3 = 19'sb1100000010000010111;



  assign CoefOutS_3 = CoefData_3;

  // CoefReg_5
  assign CoefData_4 = 19'sb0100100110011110100;



  assign CoefOutS_4 = CoefData_4;

  // CoefReg_6
  assign CoefData_5 = 19'sb1010100001001011110;



  assign CoefOutS_5 = CoefData_5;

  // CoefReg_7
  assign CoefData_6 = 19'sb0001001110000111101;



  assign CoefOutS_6 = CoefData_6;

  // CoefReg_8
  assign CoefData_7 = 19'sb0010110111110010110;



  assign CoefOutS_7 = CoefData_7;

  // CoefReg_9
  assign CoefData_8 = 19'sb1100000010101001010;



  assign CoefOutS_8 = CoefData_8;

  // CoefReg_10
  assign CoefData_9 = 19'sb0101101001110010000;



  assign CoefOutS_9 = CoefData_9;

  // CoefReg_11
  assign CoefData_10 = 19'sb0101011111111110011;



  assign CoefOutS_10 = CoefData_10;

  // CoefReg_12
  assign CoefData_11 = 19'sb1010011100011010101;



  assign CoefOutS_11 = CoefData_11;

  // CoefReg_13
  assign CoefData_12 = 19'sb1010101011001000110;



  assign CoefOutS_12 = CoefData_12;

  // CoefReg_14
  assign CoefData_13 = 19'sb0011010010111010010;



  assign CoefOutS_13 = CoefData_13;

  // CoefReg_15
  assign CoefData_14 = 19'sb1100000111101001100;



  assign CoefOutS_14 = CoefData_14;

  // CoefReg_16
  assign CoefData_15 = 19'sb1011000111101001010;



  assign CoefOutS_15 = CoefData_15;

  // CoefReg_17
  assign CoefData_16 = 19'sb1010011001001101000;



  assign CoefOutS_16 = CoefData_16;

  // CoefReg_18
  assign CoefData_17 = 19'sb1101100100101001011;



  assign CoefOutS_17 = CoefData_17;

  // CoefReg_19
  assign CoefData_18 = 19'sb1100010000111110111;



  assign CoefOutS_18 = CoefData_18;

  // CoefReg_20
  assign CoefData_19 = 19'sb0101001111000001100;



  assign CoefOutS_19 = CoefData_19;

  // CoefReg_21
  assign CoefData_20 = 19'sb1101010001111111000;



  assign CoefOutS_20 = CoefData_20;

  // CoefReg_22
  assign CoefData_21 = 19'sb1100011010001000101;



  assign CoefOutS_21 = CoefData_21;

  // CoefReg_23
  assign CoefData_22 = 19'sb1111110001000101100;



  assign CoefOutS_22 = CoefData_22;

  // CoefReg_24
  assign CoefData_23 = 19'sb1101110010110110000;



  assign CoefOutS_23 = CoefData_23;

  // CoefReg_25
  assign CoefData_24 = 19'sb0100110001000000001;



  assign CoefOutS_24 = CoefData_24;

  // CoefReg_26
  assign CoefData_25 = 19'sb0010100100110011111;



  assign CoefOutS_25 = CoefData_25;

  // CoefReg_27
  assign CoefData_26 = 19'sb0010000000110100110;



  assign CoefOutS_26 = CoefData_26;

  // CoefReg_28
  assign CoefData_27 = 19'sb1010111000010000001;



  assign CoefOutS_27 = CoefData_27;

  // CoefReg_29
  assign CoefData_28 = 19'sb1110001100110010110;



  assign CoefOutS_28 = CoefData_28;

  // CoefReg_30
  assign CoefData_29 = 19'sb0101100100100000010;



  assign CoefOutS_29 = CoefData_29;

  // CoefReg_31
  assign CoefData_30 = 19'sb0100111110100010000;



  assign CoefOutS_30 = CoefData_30;

  // CoefReg_32
  assign CoefData_31 = 19'sb0011010001001111110;



  assign CoefOutS_31 = CoefData_31;

  // CoefReg_33
  assign CoefData_32 = 19'sb0100101101110000100;



  assign CoefOutS_32 = CoefData_32;

  // CoefReg_34
  assign CoefData_33 = 19'sb1011000011111001011;



  assign CoefOutS_33 = CoefData_33;

  // CoefReg_35
  assign CoefData_34 = 19'sb0101011010111001101;



  assign CoefOutS_34 = CoefData_34;

  // CoefReg_36
  assign CoefData_35 = 19'sb1010011100100101000;



  assign CoefOutS_35 = CoefData_35;

  // CoefReg_37
  assign CoefData_36 = 19'sb1111011000111000111;



  assign CoefOutS_36 = CoefData_36;

  // CoefReg_38
  assign CoefData_37 = 19'sb1011110101001100100;



  assign CoefOutS_37 = CoefData_37;

  // CoefReg_39
  assign CoefData_38 = 19'sb1100001100101111111;



  assign CoefOutS_38 = CoefData_38;

  // CoefReg_40
  assign CoefData_39 = 19'sb1010101010011001110;



  assign CoefOutS_39 = CoefData_39;

  // CoefReg_41
  assign CoefData_40 = 19'sb0010000011001001001;



  assign CoefOutS_40 = CoefData_40;

  // CoefReg_42
  assign CoefData_41 = 19'sb1111000101011010010;



  assign CoefOutS_41 = CoefData_41;

  // CoefReg_43
  assign CoefData_42 = 19'sb0100110010100010110;



  assign CoefOutS_42 = CoefData_42;

  // CoefReg_44
  assign CoefData_43 = 19'sb1010011100101100011;



  assign CoefOutS_43 = CoefData_43;

  // CoefReg_45
  assign CoefData_44 = 19'sb0010110111010011001;



  assign CoefOutS_44 = CoefData_44;

  // CoefReg_46
  assign CoefData_45 = 19'sb1101001100000011000;



  assign CoefOutS_45 = CoefData_45;

  // CoefReg_47
  assign CoefData_46 = 19'sb0001011011101001111;



  assign CoefOutS_46 = CoefData_46;

  // CoefReg_48
  assign CoefData_47 = 19'sb1110010111001001110;



  assign CoefOutS_47 = CoefData_47;

  // CoefReg_49
  assign CoefData_48 = 19'sb0101101000000000010;



  assign CoefOutS_48 = CoefData_48;

  // CoefReg_50
  assign CoefData_49 = 19'sb1101011100001101010;



  assign CoefOutS_49 = CoefData_49;

  // CoefReg_51
  assign CoefData_50 = 19'sb1100011000100100100;



  assign CoefOutS_50 = CoefData_50;

  // CoefReg_52
  assign CoefData_51 = 19'sb0010110010101101111;



  assign CoefOutS_51 = CoefData_51;

  // CoefReg_53
  assign CoefData_52 = 19'sb0011001100100111000;



  assign CoefOutS_52 = CoefData_52;

  // CoefReg_54
  assign CoefData_53 = 19'sb0101100010011101110;



  assign CoefOutS_53 = CoefData_53;

  // CoefReg_55
  assign CoefData_54 = 19'sb0011000001110001101;



  assign CoefOutS_54 = CoefData_54;

  // CoefReg_56
  assign CoefData_55 = 19'sb0010110011011000111;



  assign CoefOutS_55 = CoefData_55;

  // CoefReg_57
  assign CoefData_56 = 19'sb1011000000101101000;



  assign CoefOutS_56 = CoefData_56;

  // CoefReg_58
  assign CoefData_57 = 19'sb0011001110010100000;



  assign CoefOutS_57 = CoefData_57;

  // CoefReg_59
  assign CoefData_58 = 19'sb0101100100101010011;



  assign CoefOutS_58 = CoefData_58;

  // CoefReg_60
  assign CoefData_59 = 19'sb1010010110010110010;



  assign CoefOutS_59 = CoefData_59;

  // CoefReg_61
  assign CoefData_60 = 19'sb0001010110011100111;



  assign CoefOutS_60 = CoefData_60;

  // CoefReg_62
  assign CoefData_61 = 19'sb0101101010000000110;



  assign CoefOutS_61 = CoefData_61;

  // CoefReg_63
  assign CoefData_62 = 19'sb0001000101100110111;



  assign CoefOutS_62 = CoefData_62;

  // CoefReg_64
  assign CoefData_63 = 19'sb1101111010001001000;



  assign CoefOutS_63 = CoefData_63;

endmodule  // FilterCoef_block

