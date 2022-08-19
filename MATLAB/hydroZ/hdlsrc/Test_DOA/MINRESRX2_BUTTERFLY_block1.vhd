-- -------------------------------------------------------------
-- 
-- File Name: hydroZ\hdlsrc\Test_DOA\MINRESRX2_BUTTERFLY_block1.vhd
-- Created: 2022-04-09 18:48:15
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: MINRESRX2_BUTTERFLY_block1
-- Source Path: Test_DOA/FFTs/FFT Hydro 3/FFT HDL Optimized/MINRESRX2_BUTTERFLY
-- Hierarchy Level: 4
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;
USE work.Test_DOA_pkg.ALL;

ENTITY MINRESRX2_BUTTERFLY_block1 IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        btfIn1_re                         :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        btfIn1_im                         :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        btfIn2_re                         :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        btfIn2_im                         :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        btfIn_vld                         :   IN    std_logic;
        twdl_re                           :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17_En15
        twdl_im                           :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17_En15
        syncReset                         :   IN    std_logic;
        btfOut1_re                        :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
        btfOut1_im                        :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
        btfOut2_re                        :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
        btfOut2_im                        :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
        btfOut_vld                        :   OUT   std_logic
        );
END MINRESRX2_BUTTERFLY_block1;


ARCHITECTURE rtl OF MINRESRX2_BUTTERFLY_block1 IS

  -- Component Declarations
  COMPONENT Complex3Multiply_block1
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          din2Dly_re                      :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          din2Dly_im                      :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          din2Dly_vld                     :   IN    std_logic;
          twdl_re                         :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17_En15
          twdl_im                         :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17_En15
          syncReset                       :   IN    std_logic;
          dinXTwdl_re                     :   OUT   std_logic_vector(34 DOWNTO 0);  -- sfix35_En15
          dinXTwdl_im                     :   OUT   std_logic_vector(34 DOWNTO 0);  -- sfix35_En15
          dinXTwdl_vld                    :   OUT   std_logic
          );
  END COMPONENT;

  -- Component Configuration Statements
  FOR ALL : Complex3Multiply_block1
    USE ENTITY work.Complex3Multiply_block1(rtl);

  -- Signals
  SIGNAL btfIn2_re_signed                 : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL btfIn2_im_signed                 : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL intdelay_reg                     : vector_of_signed17(0 TO 1);  -- sfix17 [2]
  SIGNAL din2Dly_re                       : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL intdelay_reg_1                   : vector_of_signed17(0 TO 1);  -- sfix17 [2]
  SIGNAL din2Dly_im                       : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL intdelay_reg_2                   : std_logic_vector(0 TO 1);  -- ufix1 [2]
  SIGNAL din2Dly_vld                      : std_logic;
  SIGNAL dinXTwdl_re                      : std_logic_vector(34 DOWNTO 0);  -- ufix35
  SIGNAL dinXTwdl_im                      : std_logic_vector(34 DOWNTO 0);  -- ufix35
  SIGNAL dinXTwdl_vld                     : std_logic;
  SIGNAL dinXTwdl_re_signed               : signed(34 DOWNTO 0);  -- sfix35_En15
  SIGNAL dinXTwdl_im_signed               : signed(34 DOWNTO 0);  -- sfix35_En15
  SIGNAL btfIn1_re_signed                 : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL intdelay_reg_3                   : vector_of_signed17(0 TO 7);  -- sfix17 [8]
  SIGNAL din1Dly_re                       : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL btfIn1_im_signed                 : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL intdelay_reg_4                   : vector_of_signed17(0 TO 7);  -- sfix17 [8]
  SIGNAL din1Dly_im                       : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL intdelay_reg_5                   : std_logic_vector(0 TO 7);  -- ufix1 [8]
  SIGNAL din1Dly_vld                      : std_logic;
  SIGNAL minResRX2FFTButterfly_add1_re    : signed(35 DOWNTO 0);  -- sfix36
  SIGNAL minResRX2FFTButterfly_add1_im    : signed(35 DOWNTO 0);  -- sfix36
  SIGNAL minResRX2FFTButterfly_sub1_re    : signed(35 DOWNTO 0);  -- sfix36
  SIGNAL minResRX2FFTButterfly_sub1_im    : signed(35 DOWNTO 0);  -- sfix36
  SIGNAL minResRX2FFTButterfly_vld_reg    : std_logic;
  SIGNAL minResRX2FFTButterfly_add1_cast_re : signed(35 DOWNTO 0);  -- sfix36
  SIGNAL minResRX2FFTButterfly_add1_cast_im : signed(35 DOWNTO 0);  -- sfix36
  SIGNAL minResRX2FFTButterfly_sub1_cast_re : signed(35 DOWNTO 0);  -- sfix36
  SIGNAL minResRX2FFTButterfly_sub1_cast_im : signed(35 DOWNTO 0);  -- sfix36
  SIGNAL minResRX2FFTButterfly_add1_re_next : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL minResRX2FFTButterfly_add1_im_next : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL minResRX2FFTButterfly_sub1_re_next : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL minResRX2FFTButterfly_sub1_im_next : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL minResRX2FFTButterfly_add1_cast_re_next : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL minResRX2FFTButterfly_add1_cast_im_next : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL minResRX2FFTButterfly_sub1_cast_re_next : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL minResRX2FFTButterfly_sub1_cast_im_next : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL minResRX2FFTButterfly_add_cast   : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL minResRX2FFTButterfly_add_cast_1 : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL minResRX2FFTButterfly_add_cast_2 : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL minResRX2FFTButterfly_add_cast_3 : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL minResRX2FFTButterfly_sub_cast   : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL minResRX2FFTButterfly_sub_cast_1 : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL minResRX2FFTButterfly_sub_cast_2 : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL minResRX2FFTButterfly_sub_cast_3 : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL btfOut1FP_re                     : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL btfOut1FP_im                     : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL btfOut2FP_re                     : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL btfOut2FP_im                     : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL btfOut1_re_tmp                   : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL btfOut1_im_tmp                   : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL btfOut2_re_tmp                   : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL btfOut2_im_tmp                   : signed(16 DOWNTO 0);  -- sfix17

BEGIN
  u_MUL3 : Complex3Multiply_block1
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              din2Dly_re => std_logic_vector(din2Dly_re),  -- sfix17
              din2Dly_im => std_logic_vector(din2Dly_im),  -- sfix17
              din2Dly_vld => din2Dly_vld,
              twdl_re => twdl_re,  -- sfix17_En15
              twdl_im => twdl_im,  -- sfix17_En15
              syncReset => syncReset,
              dinXTwdl_re => dinXTwdl_re,  -- sfix35_En15
              dinXTwdl_im => dinXTwdl_im,  -- sfix35_En15
              dinXTwdl_vld => dinXTwdl_vld
              );

  btfIn2_re_signed <= signed(btfIn2_re);

  btfIn2_im_signed <= signed(btfIn2_im);

  intdelay_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        intdelay_reg <= (OTHERS => to_signed(16#00000#, 17));
      ELSIF enb = '1' THEN
        intdelay_reg(0) <= btfIn2_re_signed;
        intdelay_reg(1) <= intdelay_reg(0);
      END IF;
    END IF;
  END PROCESS intdelay_process;

  din2Dly_re <= intdelay_reg(1);

  intdelay_1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        intdelay_reg_1 <= (OTHERS => to_signed(16#00000#, 17));
      ELSIF enb = '1' THEN
        intdelay_reg_1(0) <= btfIn2_im_signed;
        intdelay_reg_1(1) <= intdelay_reg_1(0);
      END IF;
    END IF;
  END PROCESS intdelay_1_process;

  din2Dly_im <= intdelay_reg_1(1);

  intdelay_2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        intdelay_reg_2 <= (OTHERS => '0');
      ELSIF enb = '1' THEN
        intdelay_reg_2(0) <= btfIn_vld;
        intdelay_reg_2(1) <= intdelay_reg_2(0);
      END IF;
    END IF;
  END PROCESS intdelay_2_process;

  din2Dly_vld <= intdelay_reg_2(1);

  dinXTwdl_re_signed <= signed(dinXTwdl_re);

  dinXTwdl_im_signed <= signed(dinXTwdl_im);

  btfIn1_re_signed <= signed(btfIn1_re);

  intdelay_3_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        intdelay_reg_3 <= (OTHERS => to_signed(16#00000#, 17));
      ELSIF enb = '1' THEN
        intdelay_reg_3(0) <= btfIn1_re_signed;
        intdelay_reg_3(1 TO 7) <= intdelay_reg_3(0 TO 6);
      END IF;
    END IF;
  END PROCESS intdelay_3_process;

  din1Dly_re <= intdelay_reg_3(7);

  btfIn1_im_signed <= signed(btfIn1_im);

  intdelay_4_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        intdelay_reg_4 <= (OTHERS => to_signed(16#00000#, 17));
      ELSIF enb = '1' THEN
        intdelay_reg_4(0) <= btfIn1_im_signed;
        intdelay_reg_4(1 TO 7) <= intdelay_reg_4(0 TO 6);
      END IF;
    END IF;
  END PROCESS intdelay_4_process;

  din1Dly_im <= intdelay_reg_4(7);

  intdelay_5_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        intdelay_reg_5 <= (OTHERS => '0');
      ELSIF enb = '1' THEN
        intdelay_reg_5(0) <= btfIn_vld;
        intdelay_reg_5(1 TO 7) <= intdelay_reg_5(0 TO 6);
      END IF;
    END IF;
  END PROCESS intdelay_5_process;

  din1Dly_vld <= intdelay_reg_5(7);

  -- minResRX2FFTButterfly
  minResRX2FFTButterfly_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        minResRX2FFTButterfly_add1_re <= to_signed(0, 36);
        minResRX2FFTButterfly_add1_im <= to_signed(0, 36);
        minResRX2FFTButterfly_sub1_re <= to_signed(0, 36);
        minResRX2FFTButterfly_sub1_im <= to_signed(0, 36);
        minResRX2FFTButterfly_add1_cast_re <= to_signed(0, 36);
        minResRX2FFTButterfly_add1_cast_im <= to_signed(0, 36);
        minResRX2FFTButterfly_sub1_cast_re <= to_signed(0, 36);
        minResRX2FFTButterfly_sub1_cast_im <= to_signed(0, 36);
        minResRX2FFTButterfly_vld_reg <= '0';
        btfOut_vld <= '0';
      ELSIF enb = '1' THEN
        minResRX2FFTButterfly_add1_re <= minResRX2FFTButterfly_add1_re_next;
        minResRX2FFTButterfly_add1_im <= minResRX2FFTButterfly_add1_im_next;
        minResRX2FFTButterfly_sub1_re <= minResRX2FFTButterfly_sub1_re_next;
        minResRX2FFTButterfly_sub1_im <= minResRX2FFTButterfly_sub1_im_next;
        minResRX2FFTButterfly_add1_cast_re <= minResRX2FFTButterfly_add1_cast_re_next;
        minResRX2FFTButterfly_add1_cast_im <= minResRX2FFTButterfly_add1_cast_im_next;
        minResRX2FFTButterfly_sub1_cast_re <= minResRX2FFTButterfly_sub1_cast_re_next;
        minResRX2FFTButterfly_sub1_cast_im <= minResRX2FFTButterfly_sub1_cast_im_next;
        btfOut_vld <= minResRX2FFTButterfly_vld_reg;
        minResRX2FFTButterfly_vld_reg <= din1Dly_vld;
      END IF;
    END IF;
  END PROCESS minResRX2FFTButterfly_process;

  minResRX2FFTButterfly_add1_cast_re_next <= minResRX2FFTButterfly_add1_re;
  minResRX2FFTButterfly_add1_cast_im_next <= minResRX2FFTButterfly_add1_im;
  minResRX2FFTButterfly_sub1_cast_re_next <= minResRX2FFTButterfly_sub1_re;
  minResRX2FFTButterfly_sub1_cast_im_next <= minResRX2FFTButterfly_sub1_im;
  minResRX2FFTButterfly_add_cast <= resize(din1Dly_re & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0', 36);
  minResRX2FFTButterfly_add_cast_1 <= resize(dinXTwdl_re_signed, 36);
  minResRX2FFTButterfly_add1_re_next <= minResRX2FFTButterfly_add_cast + minResRX2FFTButterfly_add_cast_1;
  minResRX2FFTButterfly_add_cast_2 <= resize(din1Dly_im & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0', 36);
  minResRX2FFTButterfly_add_cast_3 <= resize(dinXTwdl_im_signed, 36);
  minResRX2FFTButterfly_add1_im_next <= minResRX2FFTButterfly_add_cast_2 + minResRX2FFTButterfly_add_cast_3;
  minResRX2FFTButterfly_sub_cast <= resize(din1Dly_re & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0', 36);
  minResRX2FFTButterfly_sub_cast_1 <= resize(dinXTwdl_re_signed, 36);
  minResRX2FFTButterfly_sub1_re_next <= minResRX2FFTButterfly_sub_cast - minResRX2FFTButterfly_sub_cast_1;
  minResRX2FFTButterfly_sub_cast_2 <= resize(din1Dly_im & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0', 36);
  minResRX2FFTButterfly_sub_cast_3 <= resize(dinXTwdl_im_signed, 36);
  minResRX2FFTButterfly_sub1_im_next <= minResRX2FFTButterfly_sub_cast_2 - minResRX2FFTButterfly_sub_cast_3;
  btfOut1FP_re <= SHIFT_RIGHT(minResRX2FFTButterfly_add1_cast_re, 1);
  btfOut1FP_im <= SHIFT_RIGHT(minResRX2FFTButterfly_add1_cast_im, 1);
  btfOut2FP_re <= SHIFT_RIGHT(minResRX2FFTButterfly_sub1_cast_re, 1);
  btfOut2FP_im <= SHIFT_RIGHT(minResRX2FFTButterfly_sub1_cast_im, 1);

  btfOut1_re_tmp <= btfOut1FP_re(31 DOWNTO 15);

  btfOut1_re <= std_logic_vector(btfOut1_re_tmp);

  btfOut1_im_tmp <= btfOut1FP_im(31 DOWNTO 15);

  btfOut1_im <= std_logic_vector(btfOut1_im_tmp);

  btfOut2_re_tmp <= btfOut2FP_re(31 DOWNTO 15);

  btfOut2_re <= std_logic_vector(btfOut2_re_tmp);

  btfOut2_im_tmp <= btfOut2FP_im(31 DOWNTO 15);

  btfOut2_im <= std_logic_vector(btfOut2_im_tmp);

END rtl;

