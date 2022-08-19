-- -------------------------------------------------------------
-- 
-- File Name: phase-out\hdlsrc\Test_DOA\MINRESRX2FFT_BTFSEL_block1.vhd
-- Created: 2022-07-10 22:01:29
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: MINRESRX2FFT_BTFSEL_block1
-- Source Path: Test_DOA/FFTs/FFT Hydro 3/FFT HDL Optimized/MINRESRX2FFT_BTFSEL
-- Hierarchy Level: 4
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY MINRESRX2FFT_BTFSEL_block1 IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        din_1_re                          :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        din_1_im                          :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        validIn                           :   IN    std_logic;
        rdy                               :   IN    std_logic;
        dMemOut1_re                       :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        dMemOut1_im                       :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        dMemOut2_re                       :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        dMemOut2_im                       :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        dMemOut_vld                       :   IN    std_logic;
        stage                             :   IN    std_logic_vector(2 DOWNTO 0);  -- ufix3
        initIC                            :   IN    std_logic;
        btfIn1_re                         :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
        btfIn1_im                         :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
        btfIn2_re                         :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
        btfIn2_im                         :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
        btfIn_vld                         :   OUT   std_logic
        );
END MINRESRX2FFT_BTFSEL_block1;


ARCHITECTURE rtl OF MINRESRX2FFT_BTFSEL_block1 IS

  -- Signals
  SIGNAL din_1_re_signed                  : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL din_1_im_signed                  : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL dMemOut1_re_signed               : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL dMemOut1_im_signed               : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL dMemOut2_re_signed               : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL dMemOut2_im_signed               : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL stage_unsigned                   : unsigned(2 DOWNTO 0);  -- ufix3
  SIGNAL minResRX2FFTBTFSEL_btfIn1Reg_re  : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_btfIn1Reg_im  : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_btfIn2Reg_re  : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_btfIn2Reg_im  : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_btfInReg_vld  : std_logic;
  SIGNAL minResRX2FFTBTFSEL_cnt           : unsigned(6 DOWNTO 0);  -- ufix7
  SIGNAL minResRX2FFTBTFSEL_cntMax        : unsigned(6 DOWNTO 0);  -- ufix7
  SIGNAL minResRX2FFTBTFSEL_muxSel        : std_logic;
  SIGNAL minResRX2FFTBTFSEL_dinReg1_re    : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dinReg1_im    : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dinReg2_re    : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dinReg2_im    : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dinReg3_re    : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dinReg3_im    : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dMemOut1Reg_re : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dMemOut1Reg_im : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dMemOut2Reg_re : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dMemOut2Reg_im : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dMemOutReg_vld : std_logic;
  SIGNAL minResRX2FFTBTFSEL_btfIn1Reg_re_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_btfIn1Reg_im_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_btfIn2Reg_re_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_btfIn2Reg_im_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_btfInReg_vld_next : std_logic;
  SIGNAL minResRX2FFTBTFSEL_cnt_next      : unsigned(6 DOWNTO 0);  -- ufix7
  SIGNAL minResRX2FFTBTFSEL_cntMax_next   : unsigned(6 DOWNTO 0);  -- ufix7
  SIGNAL minResRX2FFTBTFSEL_muxSel_next   : std_logic;
  SIGNAL minResRX2FFTBTFSEL_dinReg1_re_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dinReg1_im_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dinReg2_re_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dinReg2_im_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dinReg3_re_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dinReg3_im_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dMemOut1Reg_re_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dMemOut1Reg_im_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dMemOut2Reg_re_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dMemOut2Reg_im_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL minResRX2FFTBTFSEL_dMemOutReg_vld_next : std_logic;
  SIGNAL btfIn1_re_tmp                    : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL btfIn1_im_tmp                    : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL btfIn2_re_tmp                    : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL btfIn2_im_tmp                    : signed(16 DOWNTO 0);  -- sfix17

BEGIN
  din_1_re_signed <= signed(din_1_re);

  din_1_im_signed <= signed(din_1_im);

  dMemOut1_re_signed <= signed(dMemOut1_re);

  dMemOut1_im_signed <= signed(dMemOut1_im);

  dMemOut2_re_signed <= signed(dMemOut2_re);

  dMemOut2_im_signed <= signed(dMemOut2_im);

  stage_unsigned <= unsigned(stage);

  -- minResRX2FFTBTFSEL
  minResRX2FFTBTFSEL_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        minResRX2FFTBTFSEL_btfIn1Reg_re <= to_signed(16#00000#, 17);
        minResRX2FFTBTFSEL_btfIn1Reg_im <= to_signed(16#00000#, 17);
        minResRX2FFTBTFSEL_btfIn2Reg_re <= to_signed(16#00000#, 17);
        minResRX2FFTBTFSEL_btfIn2Reg_im <= to_signed(16#00000#, 17);
        minResRX2FFTBTFSEL_dinReg1_re <= to_signed(16#00000#, 17);
        minResRX2FFTBTFSEL_dinReg1_im <= to_signed(16#00000#, 17);
        minResRX2FFTBTFSEL_dinReg2_re <= to_signed(16#00000#, 17);
        minResRX2FFTBTFSEL_dinReg2_im <= to_signed(16#00000#, 17);
        minResRX2FFTBTFSEL_dinReg3_re <= to_signed(16#00000#, 17);
        minResRX2FFTBTFSEL_dinReg3_im <= to_signed(16#00000#, 17);
        minResRX2FFTBTFSEL_dMemOut1Reg_re <= to_signed(16#00000#, 17);
        minResRX2FFTBTFSEL_dMemOut1Reg_im <= to_signed(16#00000#, 17);
        minResRX2FFTBTFSEL_dMemOut2Reg_re <= to_signed(16#00000#, 17);
        minResRX2FFTBTFSEL_dMemOut2Reg_im <= to_signed(16#00000#, 17);
        minResRX2FFTBTFSEL_cnt <= to_unsigned(16#00#, 7);
        minResRX2FFTBTFSEL_cntMax <= to_unsigned(16#00#, 7);
        minResRX2FFTBTFSEL_muxSel <= '0';
        minResRX2FFTBTFSEL_btfInReg_vld <= '0';
        minResRX2FFTBTFSEL_dMemOutReg_vld <= '0';
      ELSIF enb = '1' THEN
        minResRX2FFTBTFSEL_btfIn1Reg_re <= minResRX2FFTBTFSEL_btfIn1Reg_re_next;
        minResRX2FFTBTFSEL_btfIn1Reg_im <= minResRX2FFTBTFSEL_btfIn1Reg_im_next;
        minResRX2FFTBTFSEL_btfIn2Reg_re <= minResRX2FFTBTFSEL_btfIn2Reg_re_next;
        minResRX2FFTBTFSEL_btfIn2Reg_im <= minResRX2FFTBTFSEL_btfIn2Reg_im_next;
        minResRX2FFTBTFSEL_btfInReg_vld <= minResRX2FFTBTFSEL_btfInReg_vld_next;
        minResRX2FFTBTFSEL_cnt <= minResRX2FFTBTFSEL_cnt_next;
        minResRX2FFTBTFSEL_cntMax <= minResRX2FFTBTFSEL_cntMax_next;
        minResRX2FFTBTFSEL_muxSel <= minResRX2FFTBTFSEL_muxSel_next;
        minResRX2FFTBTFSEL_dinReg1_re <= minResRX2FFTBTFSEL_dinReg1_re_next;
        minResRX2FFTBTFSEL_dinReg1_im <= minResRX2FFTBTFSEL_dinReg1_im_next;
        minResRX2FFTBTFSEL_dinReg2_re <= minResRX2FFTBTFSEL_dinReg2_re_next;
        minResRX2FFTBTFSEL_dinReg2_im <= minResRX2FFTBTFSEL_dinReg2_im_next;
        minResRX2FFTBTFSEL_dinReg3_re <= minResRX2FFTBTFSEL_dinReg3_re_next;
        minResRX2FFTBTFSEL_dinReg3_im <= minResRX2FFTBTFSEL_dinReg3_im_next;
        minResRX2FFTBTFSEL_dMemOut1Reg_re <= minResRX2FFTBTFSEL_dMemOut1Reg_re_next;
        minResRX2FFTBTFSEL_dMemOut1Reg_im <= minResRX2FFTBTFSEL_dMemOut1Reg_im_next;
        minResRX2FFTBTFSEL_dMemOut2Reg_re <= minResRX2FFTBTFSEL_dMemOut2Reg_re_next;
        minResRX2FFTBTFSEL_dMemOut2Reg_im <= minResRX2FFTBTFSEL_dMemOut2Reg_im_next;
        minResRX2FFTBTFSEL_dMemOutReg_vld <= minResRX2FFTBTFSEL_dMemOutReg_vld_next;
      END IF;
    END IF;
  END PROCESS minResRX2FFTBTFSEL_process;

  minResRX2FFTBTFSEL_output : PROCESS (dMemOut1_im_signed, dMemOut1_re_signed, dMemOut2_im_signed, dMemOut2_re_signed,
       dMemOut_vld, din_1_im_signed, din_1_re_signed, initIC,
       minResRX2FFTBTFSEL_btfIn1Reg_im, minResRX2FFTBTFSEL_btfIn1Reg_re,
       minResRX2FFTBTFSEL_btfIn2Reg_im, minResRX2FFTBTFSEL_btfIn2Reg_re,
       minResRX2FFTBTFSEL_btfInReg_vld, minResRX2FFTBTFSEL_cnt,
       minResRX2FFTBTFSEL_cntMax, minResRX2FFTBTFSEL_dMemOut1Reg_im,
       minResRX2FFTBTFSEL_dMemOut1Reg_re, minResRX2FFTBTFSEL_dMemOut2Reg_im,
       minResRX2FFTBTFSEL_dMemOut2Reg_re, minResRX2FFTBTFSEL_dMemOutReg_vld,
       minResRX2FFTBTFSEL_dinReg1_im, minResRX2FFTBTFSEL_dinReg1_re,
       minResRX2FFTBTFSEL_dinReg2_im, minResRX2FFTBTFSEL_dinReg2_re,
       minResRX2FFTBTFSEL_dinReg3_im, minResRX2FFTBTFSEL_dinReg3_re,
       minResRX2FFTBTFSEL_muxSel, stage_unsigned)
  BEGIN
    minResRX2FFTBTFSEL_btfIn1Reg_re_next <= minResRX2FFTBTFSEL_btfIn1Reg_re;
    minResRX2FFTBTFSEL_btfIn1Reg_im_next <= minResRX2FFTBTFSEL_btfIn1Reg_im;
    minResRX2FFTBTFSEL_btfIn2Reg_re_next <= minResRX2FFTBTFSEL_btfIn2Reg_re;
    minResRX2FFTBTFSEL_btfIn2Reg_im_next <= minResRX2FFTBTFSEL_btfIn2Reg_im;
    minResRX2FFTBTFSEL_cnt_next <= minResRX2FFTBTFSEL_cnt;
    minResRX2FFTBTFSEL_cntMax_next <= minResRX2FFTBTFSEL_cntMax;
    minResRX2FFTBTFSEL_muxSel_next <= minResRX2FFTBTFSEL_muxSel;
    CASE stage_unsigned IS
      WHEN "000" =>
        minResRX2FFTBTFSEL_btfIn1Reg_re_next <= minResRX2FFTBTFSEL_dMemOut1Reg_re;
        minResRX2FFTBTFSEL_btfIn1Reg_im_next <= minResRX2FFTBTFSEL_dMemOut1Reg_im;
        minResRX2FFTBTFSEL_btfIn2Reg_re_next <= minResRX2FFTBTFSEL_dinReg3_re;
        minResRX2FFTBTFSEL_btfIn2Reg_im_next <= minResRX2FFTBTFSEL_dinReg3_im;
      WHEN OTHERS => 
        IF minResRX2FFTBTFSEL_muxSel = '1' THEN 
          minResRX2FFTBTFSEL_btfIn1Reg_re_next <= minResRX2FFTBTFSEL_dMemOut2Reg_re;
          minResRX2FFTBTFSEL_btfIn1Reg_im_next <= minResRX2FFTBTFSEL_dMemOut2Reg_im;
          minResRX2FFTBTFSEL_btfIn2Reg_re_next <= minResRX2FFTBTFSEL_dMemOut1Reg_re;
          minResRX2FFTBTFSEL_btfIn2Reg_im_next <= minResRX2FFTBTFSEL_dMemOut1Reg_im;
        ELSE 
          minResRX2FFTBTFSEL_btfIn1Reg_re_next <= minResRX2FFTBTFSEL_dMemOut1Reg_re;
          minResRX2FFTBTFSEL_btfIn1Reg_im_next <= minResRX2FFTBTFSEL_dMemOut1Reg_im;
          minResRX2FFTBTFSEL_btfIn2Reg_re_next <= minResRX2FFTBTFSEL_dMemOut2Reg_re;
          minResRX2FFTBTFSEL_btfIn2Reg_im_next <= minResRX2FFTBTFSEL_dMemOut2Reg_im;
        END IF;
    END CASE;
    minResRX2FFTBTFSEL_dinReg3_re_next <= minResRX2FFTBTFSEL_dinReg2_re;
    minResRX2FFTBTFSEL_dinReg2_re_next <= minResRX2FFTBTFSEL_dinReg1_re;
    minResRX2FFTBTFSEL_dinReg1_re_next <= din_1_re_signed;
    minResRX2FFTBTFSEL_dinReg3_im_next <= minResRX2FFTBTFSEL_dinReg2_im;
    minResRX2FFTBTFSEL_dinReg2_im_next <= minResRX2FFTBTFSEL_dinReg1_im;
    minResRX2FFTBTFSEL_dinReg1_im_next <= din_1_im_signed;
    IF initIC = '1' THEN 
      minResRX2FFTBTFSEL_cnt_next <= to_unsigned(16#00#, 7);
      minResRX2FFTBTFSEL_muxSel_next <= '0';
      CASE stage_unsigned IS
        WHEN "000" =>
          minResRX2FFTBTFSEL_cntMax_next <= to_unsigned(16#7F#, 7);
        WHEN OTHERS => 
          minResRX2FFTBTFSEL_cntMax_next <= minResRX2FFTBTFSEL_cntMax srl 1;
      END CASE;
    ELSIF minResRX2FFTBTFSEL_dMemOutReg_vld = '1' THEN 
      IF minResRX2FFTBTFSEL_cnt = minResRX2FFTBTFSEL_cntMax THEN 
        minResRX2FFTBTFSEL_cnt_next <= to_unsigned(16#00#, 7);
        minResRX2FFTBTFSEL_muxSel_next <=  NOT minResRX2FFTBTFSEL_muxSel;
      ELSE 
        minResRX2FFTBTFSEL_cnt_next <= minResRX2FFTBTFSEL_cnt + to_unsigned(16#01#, 7);
      END IF;
    END IF;
    minResRX2FFTBTFSEL_btfInReg_vld_next <= minResRX2FFTBTFSEL_dMemOutReg_vld;
    minResRX2FFTBTFSEL_dMemOutReg_vld_next <= dMemOut_vld;
    minResRX2FFTBTFSEL_dMemOut1Reg_re_next <= dMemOut1_re_signed;
    minResRX2FFTBTFSEL_dMemOut1Reg_im_next <= dMemOut1_im_signed;
    minResRX2FFTBTFSEL_dMemOut2Reg_re_next <= dMemOut2_re_signed;
    minResRX2FFTBTFSEL_dMemOut2Reg_im_next <= dMemOut2_im_signed;
    btfIn1_re_tmp <= minResRX2FFTBTFSEL_btfIn1Reg_re;
    btfIn1_im_tmp <= minResRX2FFTBTFSEL_btfIn1Reg_im;
    btfIn2_re_tmp <= minResRX2FFTBTFSEL_btfIn2Reg_re;
    btfIn2_im_tmp <= minResRX2FFTBTFSEL_btfIn2Reg_im;
    btfIn_vld <= minResRX2FFTBTFSEL_btfInReg_vld;
  END PROCESS minResRX2FFTBTFSEL_output;


  btfIn1_re <= std_logic_vector(btfIn1_re_tmp);

  btfIn1_im <= std_logic_vector(btfIn1_im_tmp);

  btfIn2_re <= std_logic_vector(btfIn2_re_tmp);

  btfIn2_im <= std_logic_vector(btfIn2_im_tmp);

END rtl;

