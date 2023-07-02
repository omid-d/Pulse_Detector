// -------------------------------------------------------------
// 
// File Name: hdl_prj\hdlsrc\pulse_detector_v4\Local_Peak.v
// Created: 2023-07-02 17:41:51
// 
// Generated by MATLAB 9.13 and HDL Coder 4.0
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: Local_Peak
// Source Path: pulse_detector_v4/Pulse Detector/Local Peak
// Hierarchy Level: 1
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module Local_Peak
          (clk,
           reset,
           enb,
           mag_sq_out,
           MidSample,
           detected);


  input   clk;
  input   reset;
  input   enb;
  input   signed [17:0] mag_sq_out;  // sfix18_En11
  output  signed [17:0] MidSample;  // sfix18_En11
  output  detected;


  wire signed [17:0] Constant_out1;  // sfix18_En11
  reg signed [17:0] Tapped_Delay_reg [0:10];  // sfix18 [11]
  wire signed [17:0] Tapped_Delay_reg_next [0:10];  // sfix18_En11 [11]
  wire signed [17:0] Tapped_Delay_out1 [0:10];  // sfix18_En11 [11]


  assign Constant_out1 = 18'sb000000000000111101;



  always @(posedge clk)
    begin : Tapped_Delay_process
      if (reset == 1'b1) begin
        Tapped_Delay_reg[0] <= 18'sb000000000000000000;
        Tapped_Delay_reg[1] <= 18'sb000000000000000000;
        Tapped_Delay_reg[2] <= 18'sb000000000000000000;
        Tapped_Delay_reg[3] <= 18'sb000000000000000000;
        Tapped_Delay_reg[4] <= 18'sb000000000000000000;
        Tapped_Delay_reg[5] <= 18'sb000000000000000000;
        Tapped_Delay_reg[6] <= 18'sb000000000000000000;
        Tapped_Delay_reg[7] <= 18'sb000000000000000000;
        Tapped_Delay_reg[8] <= 18'sb000000000000000000;
        Tapped_Delay_reg[9] <= 18'sb000000000000000000;
        Tapped_Delay_reg[10] <= 18'sb000000000000000000;
      end
      else begin
        if (enb) begin
          Tapped_Delay_reg[0] <= Tapped_Delay_reg_next[0];
          Tapped_Delay_reg[1] <= Tapped_Delay_reg_next[1];
          Tapped_Delay_reg[2] <= Tapped_Delay_reg_next[2];
          Tapped_Delay_reg[3] <= Tapped_Delay_reg_next[3];
          Tapped_Delay_reg[4] <= Tapped_Delay_reg_next[4];
          Tapped_Delay_reg[5] <= Tapped_Delay_reg_next[5];
          Tapped_Delay_reg[6] <= Tapped_Delay_reg_next[6];
          Tapped_Delay_reg[7] <= Tapped_Delay_reg_next[7];
          Tapped_Delay_reg[8] <= Tapped_Delay_reg_next[8];
          Tapped_Delay_reg[9] <= Tapped_Delay_reg_next[9];
          Tapped_Delay_reg[10] <= Tapped_Delay_reg_next[10];
        end
      end
    end

  assign Tapped_Delay_out1[0] = Tapped_Delay_reg[0];
  assign Tapped_Delay_out1[1] = Tapped_Delay_reg[1];
  assign Tapped_Delay_out1[2] = Tapped_Delay_reg[2];
  assign Tapped_Delay_out1[3] = Tapped_Delay_reg[3];
  assign Tapped_Delay_out1[4] = Tapped_Delay_reg[4];
  assign Tapped_Delay_out1[5] = Tapped_Delay_reg[5];
  assign Tapped_Delay_out1[6] = Tapped_Delay_reg[6];
  assign Tapped_Delay_out1[7] = Tapped_Delay_reg[7];
  assign Tapped_Delay_out1[8] = Tapped_Delay_reg[8];
  assign Tapped_Delay_out1[9] = Tapped_Delay_reg[9];
  assign Tapped_Delay_out1[10] = Tapped_Delay_reg[10];
  assign Tapped_Delay_reg_next[0] = Tapped_Delay_reg[1];
  assign Tapped_Delay_reg_next[1] = Tapped_Delay_reg[2];
  assign Tapped_Delay_reg_next[2] = Tapped_Delay_reg[3];
  assign Tapped_Delay_reg_next[3] = Tapped_Delay_reg[4];
  assign Tapped_Delay_reg_next[4] = Tapped_Delay_reg[5];
  assign Tapped_Delay_reg_next[5] = Tapped_Delay_reg[6];
  assign Tapped_Delay_reg_next[6] = Tapped_Delay_reg[7];
  assign Tapped_Delay_reg_next[7] = Tapped_Delay_reg[8];
  assign Tapped_Delay_reg_next[8] = Tapped_Delay_reg[9];
  assign Tapped_Delay_reg_next[9] = Tapped_Delay_reg[10];
  assign Tapped_Delay_reg_next[10] = mag_sq_out;



  MATLAB_Function u_MATLAB_Function (.threshold(Constant_out1),  // sfix18_En11
                                     .DataBuff_0(Tapped_Delay_out1[0]),  // sfix18_En11
                                     .DataBuff_1(Tapped_Delay_out1[1]),  // sfix18_En11
                                     .DataBuff_2(Tapped_Delay_out1[2]),  // sfix18_En11
                                     .DataBuff_3(Tapped_Delay_out1[3]),  // sfix18_En11
                                     .DataBuff_4(Tapped_Delay_out1[4]),  // sfix18_En11
                                     .DataBuff_5(Tapped_Delay_out1[5]),  // sfix18_En11
                                     .DataBuff_6(Tapped_Delay_out1[6]),  // sfix18_En11
                                     .DataBuff_7(Tapped_Delay_out1[7]),  // sfix18_En11
                                     .DataBuff_8(Tapped_Delay_out1[8]),  // sfix18_En11
                                     .DataBuff_9(Tapped_Delay_out1[9]),  // sfix18_En11
                                     .DataBuff_10(Tapped_Delay_out1[10]),  // sfix18_En11
                                     .MidSample(MidSample),  // sfix18_En11
                                     .detected(detected)
                                     );

endmodule  // Local_Peak
