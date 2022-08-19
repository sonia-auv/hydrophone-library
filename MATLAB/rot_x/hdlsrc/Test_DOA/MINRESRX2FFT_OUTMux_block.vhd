-- -------------------------------------------------------------
-- 
-- File Name: rot_x\hdlsrc\Test_DOA\MINRESRX2FFT_OUTMux_block.vhd
-- Created: 2022-06-08 14:13:23
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: MINRESRX2FFT_OUTMux_block
-- Source Path: Test_DOA/FFTs/FFT Hydro 2/FFT HDL Optimized/MINRESRX2FFT_OUTMux
-- Hierarchy Level: 4
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY MINRESRX2FFT_OUTMux_block IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        rdEnb1                            :   IN    std_logic;
        rdEnb2                            :   IN    std_logic;
        rdEnb3                            :   IN    std_logic;
        dMemOut1_re                       :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        dMemOut1_im                       :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        dMemOut2_re                       :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        dMemOut2_im                       :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        vldOut                            :   IN    std_logic;
        dOut_re                           :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
        dOut_im                           :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
        dout_vld                          :   OUT   std_logic
        );
END MINRESRX2FFT_OUTMux_block;


ARCHITECTURE rtl OF MINRESRX2FFT_OUTMux_block IS

  -- Signals
  SIGNAL dMemOut1_re_signed               : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL dMemOut1_im_signed               : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL dMemOut2_re_signed               : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL dMemOut2_im_signed               : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTOutMux_doutReg_re    : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTOutMux_doutReg_im    : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTOutMux_doutReg_vld   : std_logic;
  SIGNAL minResRX2FFTOutMux_rdEnb1Dly     : std_logic;
  SIGNAL minResRX2FFTOutMux_rdEnb2Dly     : std_logic;
  SIGNAL minResRX2FFTOutMux_rdEnb3Dly     : std_logic;
  SIGNAL minResRX2FFTOutMux_doutReg_re_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTOutMux_doutReg_im_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTOutMux_doutReg_vld_next : std_logic;
  SIGNAL minResRX2FFTOutMux_rdEnb1Dly_next : std_logic;
  SIGNAL minResRX2FFTOutMux_rdEnb2Dly_next : std_logic;
  SIGNAL minResRX2FFTOutMux_rdEnb3Dly_next : std_logic;
  SIGNAL dOut_re_tmp                      : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL dOut_im_tmp                      : signed(16 DOWNTO 0);  -- sfix17

BEGIN
  dMemOut1_re_signed <= signed(dMemOut1_re);

  dMemOut1_im_signed <= signed(dMemOut1_im);

  dMemOut2_re_signed <= signed(dMemOut2_re);

  dMemOut2_im_signed <= signed(dMemOut2_im);

  -- minResRX2FFTOutMux
  minResRX2FFTOutMux_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        minResRX2FFTOutMux_doutReg_re <= to_signed(16#00000#, 17);
        minResRX2FFTOutMux_doutReg_im <= to_signed(16#00000#, 17);
        minResRX2FFTOutMux_doutReg_vld <= '0';
        minResRX2FFTOutMux_rdEnb1Dly <= '0';
        minResRX2FFTOutMux_rdEnb2Dly <= '0';
        minResRX2FFTOutMux_rdEnb3Dly <= '0';
      ELSIF enb = '1' THEN
        minResRX2FFTOutMux_doutReg_re <= minResRX2FFTOutMux_doutReg_re_next;
        minResRX2FFTOutMux_doutReg_im <= minResRX2FFTOutMux_doutReg_im_next;
        minResRX2FFTOutMux_doutReg_vld <= minResRX2FFTOutMux_doutReg_vld_next;
        minResRX2FFTOutMux_rdEnb1Dly <= minResRX2FFTOutMux_rdEnb1Dly_next;
        minResRX2FFTOutMux_rdEnb2Dly <= minResRX2FFTOutMux_rdEnb2Dly_next;
        minResRX2FFTOutMux_rdEnb3Dly <= minResRX2FFTOutMux_rdEnb3Dly_next;
      END IF;
    END IF;
  END PROCESS minResRX2FFTOutMux_process;

  minResRX2FFTOutMux_output : PROCESS (dMemOut1_im_signed, dMemOut1_re_signed, dMemOut2_im_signed, dMemOut2_re_signed,
       minResRX2FFTOutMux_doutReg_im, minResRX2FFTOutMux_doutReg_re,
       minResRX2FFTOutMux_doutReg_vld, minResRX2FFTOutMux_rdEnb1Dly,
       minResRX2FFTOutMux_rdEnb2Dly, minResRX2FFTOutMux_rdEnb3Dly, rdEnb1,
       rdEnb2, rdEnb3, vldOut)
  BEGIN
    minResRX2FFTOutMux_doutReg_re_next <= minResRX2FFTOutMux_doutReg_re;
    minResRX2FFTOutMux_doutReg_im_next <= minResRX2FFTOutMux_doutReg_im;
    minResRX2FFTOutMux_doutReg_vld_next <= minResRX2FFTOutMux_doutReg_vld;
    IF vldOut = '1' THEN 
      minResRX2FFTOutMux_doutReg_vld_next <= '1';
      IF (minResRX2FFTOutMux_rdEnb2Dly OR minResRX2FFTOutMux_rdEnb3Dly) = '1' THEN 
        minResRX2FFTOutMux_doutReg_re_next <= dMemOut2_re_signed;
        minResRX2FFTOutMux_doutReg_im_next <= dMemOut2_im_signed;
      ELSIF minResRX2FFTOutMux_rdEnb1Dly = '1' THEN 
        minResRX2FFTOutMux_doutReg_re_next <= dMemOut1_re_signed;
        minResRX2FFTOutMux_doutReg_im_next <= dMemOut1_im_signed;
      ELSE 
        minResRX2FFTOutMux_doutReg_vld_next <= '0';
      END IF;
    ELSE 
      minResRX2FFTOutMux_doutReg_vld_next <= '0';
    END IF;
    minResRX2FFTOutMux_rdEnb1Dly_next <= rdEnb1;
    minResRX2FFTOutMux_rdEnb2Dly_next <= rdEnb2;
    minResRX2FFTOutMux_rdEnb3Dly_next <= rdEnb3;
    dOut_re_tmp <= minResRX2FFTOutMux_doutReg_re;
    dOut_im_tmp <= minResRX2FFTOutMux_doutReg_im;
    dout_vld <= minResRX2FFTOutMux_doutReg_vld;
  END PROCESS minResRX2FFTOutMux_output;


  dOut_re <= std_logic_vector(dOut_re_tmp);

  dOut_im <= std_logic_vector(dOut_im_tmp);

END rtl;

