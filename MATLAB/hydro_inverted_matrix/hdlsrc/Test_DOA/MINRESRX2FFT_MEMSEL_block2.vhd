-- -------------------------------------------------------------
-- 
-- File Name: hydro_inverted_matrix\hdlsrc\Test_DOA\MINRESRX2FFT_MEMSEL_block2.vhd
-- Created: 2022-04-11 19:01:34
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: MINRESRX2FFT_MEMSEL_block2
-- Source Path: Test_DOA/FFTs/FFT Hydro Ref/FFT HDL Optimized/MINRESRX2FFT_MEMSEL
-- Hierarchy Level: 4
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY MINRESRX2FFT_MEMSEL_block2 IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        btfOut1_re                        :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        btfOut1_im                        :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        btfOut2_re                        :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        btfOut2_im                        :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        btfOut_vld                        :   IN    std_logic;
        stage                             :   IN    std_logic_vector(2 DOWNTO 0);  -- ufix3
        initIC                            :   IN    std_logic;
        stgOut1_re                        :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
        stgOut1_im                        :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
        stgOut2_re                        :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
        stgOut2_im                        :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
        stgOut_vld                        :   OUT   std_logic
        );
END MINRESRX2FFT_MEMSEL_block2;


ARCHITECTURE rtl OF MINRESRX2FFT_MEMSEL_block2 IS

  -- Signals
  SIGNAL btfOut1_re_signed                : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL btfOut1_im_signed                : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL btfOut2_re_signed                : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL btfOut2_im_signed                : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL stage_unsigned                   : unsigned(2 DOWNTO 0);  -- ufix3
  SIGNAL MINRESRX2FFTMEMSEL_stgOut1Reg_re : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL MINRESRX2FFTMEMSEL_stgOut1Reg_im : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL MINRESRX2FFTMEMSEL_stgOut2Reg_re : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL MINRESRX2FFTMEMSEL_stgOut2Reg_im : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL MINRESRX2FFTMEMSEL_stgOutReg_vld : std_logic;
  SIGNAL MINRESRX2FFTMEMSEL_cnt           : unsigned(6 DOWNTO 0);  -- ufix7
  SIGNAL MINRESRX2FFTMEMSEL_cntMax        : unsigned(6 DOWNTO 0);  -- ufix7
  SIGNAL MINRESRX2FFTMEMSEL_muxSel        : std_logic;
  SIGNAL MINRESRX2FFTMEMSEL_stgOut1Reg_re_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL MINRESRX2FFTMEMSEL_stgOut1Reg_im_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL MINRESRX2FFTMEMSEL_stgOut2Reg_re_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL MINRESRX2FFTMEMSEL_stgOut2Reg_im_next : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL MINRESRX2FFTMEMSEL_stgOutReg_vld_next : std_logic;
  SIGNAL MINRESRX2FFTMEMSEL_cnt_next      : unsigned(6 DOWNTO 0);  -- ufix7
  SIGNAL MINRESRX2FFTMEMSEL_cntMax_next   : unsigned(6 DOWNTO 0);  -- ufix7
  SIGNAL MINRESRX2FFTMEMSEL_muxSel_next   : std_logic;
  SIGNAL stgOut1_re_tmp                   : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL stgOut1_im_tmp                   : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL stgOut2_re_tmp                   : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL stgOut2_im_tmp                   : signed(16 DOWNTO 0);  -- sfix17

BEGIN
  btfOut1_re_signed <= signed(btfOut1_re);

  btfOut1_im_signed <= signed(btfOut1_im);

  btfOut2_re_signed <= signed(btfOut2_re);

  btfOut2_im_signed <= signed(btfOut2_im);

  stage_unsigned <= unsigned(stage);

  -- MINRESRX2FFTMEMSEL
  MINRESRX2FFTMEMSEL_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        MINRESRX2FFTMEMSEL_stgOut1Reg_re <= to_signed(16#00000#, 17);
        MINRESRX2FFTMEMSEL_stgOut1Reg_im <= to_signed(16#00000#, 17);
        MINRESRX2FFTMEMSEL_stgOut2Reg_re <= to_signed(16#00000#, 17);
        MINRESRX2FFTMEMSEL_stgOut2Reg_im <= to_signed(16#00000#, 17);
        MINRESRX2FFTMEMSEL_cnt <= to_unsigned(16#00#, 7);
        MINRESRX2FFTMEMSEL_cntMax <= to_unsigned(16#00#, 7);
        MINRESRX2FFTMEMSEL_muxSel <= '0';
        MINRESRX2FFTMEMSEL_stgOutReg_vld <= '0';
      ELSIF enb = '1' THEN
        MINRESRX2FFTMEMSEL_stgOut1Reg_re <= MINRESRX2FFTMEMSEL_stgOut1Reg_re_next;
        MINRESRX2FFTMEMSEL_stgOut1Reg_im <= MINRESRX2FFTMEMSEL_stgOut1Reg_im_next;
        MINRESRX2FFTMEMSEL_stgOut2Reg_re <= MINRESRX2FFTMEMSEL_stgOut2Reg_re_next;
        MINRESRX2FFTMEMSEL_stgOut2Reg_im <= MINRESRX2FFTMEMSEL_stgOut2Reg_im_next;
        MINRESRX2FFTMEMSEL_stgOutReg_vld <= MINRESRX2FFTMEMSEL_stgOutReg_vld_next;
        MINRESRX2FFTMEMSEL_cnt <= MINRESRX2FFTMEMSEL_cnt_next;
        MINRESRX2FFTMEMSEL_cntMax <= MINRESRX2FFTMEMSEL_cntMax_next;
        MINRESRX2FFTMEMSEL_muxSel <= MINRESRX2FFTMEMSEL_muxSel_next;
      END IF;
    END IF;
  END PROCESS MINRESRX2FFTMEMSEL_process;

  MINRESRX2FFTMEMSEL_output : PROCESS (MINRESRX2FFTMEMSEL_cnt, MINRESRX2FFTMEMSEL_cntMax, MINRESRX2FFTMEMSEL_muxSel,
       MINRESRX2FFTMEMSEL_stgOut1Reg_im, MINRESRX2FFTMEMSEL_stgOut1Reg_re,
       MINRESRX2FFTMEMSEL_stgOut2Reg_im, MINRESRX2FFTMEMSEL_stgOut2Reg_re,
       MINRESRX2FFTMEMSEL_stgOutReg_vld, btfOut1_im_signed, btfOut1_re_signed,
       btfOut2_im_signed, btfOut2_re_signed, btfOut_vld, initIC,
       stage_unsigned)
  BEGIN
    MINRESRX2FFTMEMSEL_stgOut1Reg_re_next <= MINRESRX2FFTMEMSEL_stgOut1Reg_re;
    MINRESRX2FFTMEMSEL_stgOut1Reg_im_next <= MINRESRX2FFTMEMSEL_stgOut1Reg_im;
    MINRESRX2FFTMEMSEL_stgOut2Reg_re_next <= MINRESRX2FFTMEMSEL_stgOut2Reg_re;
    MINRESRX2FFTMEMSEL_stgOut2Reg_im_next <= MINRESRX2FFTMEMSEL_stgOut2Reg_im;
    MINRESRX2FFTMEMSEL_cnt_next <= MINRESRX2FFTMEMSEL_cnt;
    MINRESRX2FFTMEMSEL_cntMax_next <= MINRESRX2FFTMEMSEL_cntMax;
    MINRESRX2FFTMEMSEL_muxSel_next <= MINRESRX2FFTMEMSEL_muxSel;
    IF MINRESRX2FFTMEMSEL_muxSel = '1' THEN 
      MINRESRX2FFTMEMSEL_stgOut1Reg_re_next <= btfOut2_re_signed;
      MINRESRX2FFTMEMSEL_stgOut1Reg_im_next <= btfOut2_im_signed;
      MINRESRX2FFTMEMSEL_stgOut2Reg_re_next <= btfOut1_re_signed;
      MINRESRX2FFTMEMSEL_stgOut2Reg_im_next <= btfOut1_im_signed;
    ELSE 
      MINRESRX2FFTMEMSEL_stgOut1Reg_re_next <= btfOut1_re_signed;
      MINRESRX2FFTMEMSEL_stgOut1Reg_im_next <= btfOut1_im_signed;
      MINRESRX2FFTMEMSEL_stgOut2Reg_re_next <= btfOut2_re_signed;
      MINRESRX2FFTMEMSEL_stgOut2Reg_im_next <= btfOut2_im_signed;
    END IF;
    IF initIC = '1' THEN 
      MINRESRX2FFTMEMSEL_cnt_next <= to_unsigned(16#00#, 7);
      MINRESRX2FFTMEMSEL_muxSel_next <= '0';
      CASE stage_unsigned IS
        WHEN "000" =>
          MINRESRX2FFTMEMSEL_cntMax_next <= to_unsigned(16#3F#, 7);
        WHEN "111" =>
          MINRESRX2FFTMEMSEL_cntMax_next <= to_unsigned(16#7F#, 7);
        WHEN OTHERS => 
          MINRESRX2FFTMEMSEL_cntMax_next <= MINRESRX2FFTMEMSEL_cntMax srl 1;
      END CASE;
    ELSIF btfOut_vld = '1' THEN 
      IF MINRESRX2FFTMEMSEL_cnt = MINRESRX2FFTMEMSEL_cntMax THEN 
        MINRESRX2FFTMEMSEL_cnt_next <= to_unsigned(16#00#, 7);
        MINRESRX2FFTMEMSEL_muxSel_next <=  NOT MINRESRX2FFTMEMSEL_muxSel;
      ELSE 
        MINRESRX2FFTMEMSEL_cnt_next <= MINRESRX2FFTMEMSEL_cnt + to_unsigned(16#01#, 7);
      END IF;
    END IF;
    MINRESRX2FFTMEMSEL_stgOutReg_vld_next <= btfOut_vld;
    stgOut1_re_tmp <= MINRESRX2FFTMEMSEL_stgOut1Reg_re;
    stgOut1_im_tmp <= MINRESRX2FFTMEMSEL_stgOut1Reg_im;
    stgOut2_re_tmp <= MINRESRX2FFTMEMSEL_stgOut2Reg_re;
    stgOut2_im_tmp <= MINRESRX2FFTMEMSEL_stgOut2Reg_im;
    stgOut_vld <= MINRESRX2FFTMEMSEL_stgOutReg_vld;
  END PROCESS MINRESRX2FFTMEMSEL_output;


  stgOut1_re <= std_logic_vector(stgOut1_re_tmp);

  stgOut1_im <= std_logic_vector(stgOut1_im_tmp);

  stgOut2_re <= std_logic_vector(stgOut2_re_tmp);

  stgOut2_im <= std_logic_vector(stgOut2_im_tmp);

END rtl;

