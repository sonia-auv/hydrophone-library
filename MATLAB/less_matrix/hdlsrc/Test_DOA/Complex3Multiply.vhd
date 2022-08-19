-- -------------------------------------------------------------
-- 
-- File Name: less_matrix\hdlsrc\Test_DOA\Complex3Multiply.vhd
-- Created: 2022-06-08 17:00:41
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: Complex3Multiply
-- Source Path: Test_DOA/FFTs/FFT Hydro 1/FFT HDL Optimized/MINRESRX2_BUTTERFLY/Complex3Multiply
-- Hierarchy Level: 5
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY Complex3Multiply IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        din2Dly_re                        :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        din2Dly_im                        :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        din2Dly_vld                       :   IN    std_logic;
        twdl_re                           :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17_En15
        twdl_im                           :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17_En15
        syncReset                         :   IN    std_logic;
        dinXTwdl_re                       :   OUT   std_logic_vector(34 DOWNTO 0);  -- sfix35_En15
        dinXTwdl_im                       :   OUT   std_logic_vector(34 DOWNTO 0);  -- sfix35_En15
        dinXTwdl_vld                      :   OUT   std_logic
        );
END Complex3Multiply;


ARCHITECTURE rtl OF Complex3Multiply IS

  -- Signals
  SIGNAL din2Dly_re_signed                : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL din_re_reg                       : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL din2Dly_im_signed                : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL din_im_reg                       : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL din_sum                          : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL twdl_re_signed                   : signed(16 DOWNTO 0);  -- sfix17_En15
  SIGNAL twdl_re_reg                      : signed(16 DOWNTO 0);  -- sfix17_En15
  SIGNAL twdl_im_signed                   : signed(16 DOWNTO 0);  -- sfix17_En15
  SIGNAL twdl_im_reg                      : signed(16 DOWNTO 0);  -- sfix17_En15
  SIGNAL adder_add_cast                   : signed(17 DOWNTO 0);  -- sfix18_En15
  SIGNAL adder_add_cast_1                 : signed(17 DOWNTO 0);  -- sfix18_En15
  SIGNAL twdl_sum                         : signed(17 DOWNTO 0);  -- sfix18_En15
  SIGNAL Complex3Multiply_din1_re_pipe1   : signed(16 DOWNTO 0) := to_signed(16#00000#, 17);  -- sfix17
  SIGNAL Complex3Multiply_din1_im_pipe1   : signed(16 DOWNTO 0) := to_signed(16#00000#, 17);  -- sfix17
  SIGNAL Complex3Multiply_din1_sum_pipe1  : signed(17 DOWNTO 0) := to_signed(16#00000#, 18);  -- sfix18
  SIGNAL Complex3Multiply_prodOfRe_pipe1  : signed(33 DOWNTO 0) := to_signed(0, 34);  -- sfix34
  SIGNAL Complex3Multiply_ProdOfIm_pipe1  : signed(33 DOWNTO 0) := to_signed(0, 34);  -- sfix34
  SIGNAL Complex3Multiply_prodOfSum_pipe1 : signed(35 DOWNTO 0) := to_signed(0, 36);  -- sfix36
  SIGNAL Complex3Multiply_twiddle_re_pipe1 : signed(16 DOWNTO 0) := to_signed(16#00000#, 17);  -- sfix17
  SIGNAL Complex3Multiply_twiddle_im_pipe1 : signed(16 DOWNTO 0) := to_signed(16#00000#, 17);  -- sfix17
  SIGNAL Complex3Multiply_twiddle_sum_pipe1 : signed(17 DOWNTO 0) := to_signed(16#00000#, 18);  -- sfix18
  SIGNAL prodOfRe                         : signed(33 DOWNTO 0) := to_signed(0, 34);  -- sfix34_En15
  SIGNAL prodOfIm                         : signed(33 DOWNTO 0) := to_signed(0, 34);  -- sfix34_En15
  SIGNAL prodOfSum                        : signed(35 DOWNTO 0) := to_signed(0, 36);  -- sfix36_En15
  SIGNAL din_vld_dly1                     : std_logic;
  SIGNAL din_vld_dly2                     : std_logic;
  SIGNAL din_vld_dly3                     : std_logic;
  SIGNAL prod_vld                         : std_logic;
  SIGNAL Complex3Add_tmpResult_reg        : signed(35 DOWNTO 0);  -- sfix36
  SIGNAL Complex3Add_multRes_re_reg1      : signed(34 DOWNTO 0);  -- sfix35
  SIGNAL Complex3Add_multRes_re_reg2      : signed(34 DOWNTO 0);  -- sfix35
  SIGNAL Complex3Add_multRes_im_reg       : signed(36 DOWNTO 0);  -- sfix37
  SIGNAL Complex3Add_prod_vld_reg1        : std_logic;
  SIGNAL Complex3Add_prodOfSum_reg        : signed(35 DOWNTO 0);  -- sfix36
  SIGNAL Complex3Add_tmpResult_reg_next   : signed(35 DOWNTO 0);  -- sfix36_En15
  SIGNAL Complex3Add_multRes_re_reg1_next : signed(34 DOWNTO 0);  -- sfix35_En15
  SIGNAL Complex3Add_multRes_re_reg2_next : signed(34 DOWNTO 0);  -- sfix35_En15
  SIGNAL Complex3Add_multRes_im_reg_next  : signed(36 DOWNTO 0);  -- sfix37_En15
  SIGNAL Complex3Add_sub_cast             : signed(34 DOWNTO 0);  -- sfix35_En15
  SIGNAL Complex3Add_sub_cast_1           : signed(34 DOWNTO 0);  -- sfix35_En15
  SIGNAL Complex3Add_sub_cast_2           : signed(36 DOWNTO 0);  -- sfix37_En15
  SIGNAL Complex3Add_sub_cast_3           : signed(36 DOWNTO 0);  -- sfix37_En15
  SIGNAL Complex3Add_add_cast             : signed(34 DOWNTO 0);  -- sfix35_En15
  SIGNAL Complex3Add_add_cast_1           : signed(34 DOWNTO 0);  -- sfix35_En15
  SIGNAL Complex3Add_add_temp             : signed(34 DOWNTO 0);  -- sfix35_En15
  SIGNAL multResFP_re                     : signed(34 DOWNTO 0);  -- sfix35_En15
  SIGNAL multResFP_im                     : signed(36 DOWNTO 0);  -- sfix37_En15
  SIGNAL dinXTwdl_im_tmp                  : signed(34 DOWNTO 0);  -- sfix35_En15

BEGIN
  din2Dly_re_signed <= signed(din2Dly_re);

  intdelay_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        din_re_reg <= to_signed(16#00000#, 17);
      ELSIF enb = '1' THEN
        IF syncReset = '1' THEN
          din_re_reg <= to_signed(16#00000#, 17);
        ELSE 
          din_re_reg <= din2Dly_re_signed;
        END IF;
      END IF;
    END IF;
  END PROCESS intdelay_process;


  din2Dly_im_signed <= signed(din2Dly_im);

  intdelay_1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        din_im_reg <= to_signed(16#00000#, 17);
      ELSIF enb = '1' THEN
        IF syncReset = '1' THEN
          din_im_reg <= to_signed(16#00000#, 17);
        ELSE 
          din_im_reg <= din2Dly_im_signed;
        END IF;
      END IF;
    END IF;
  END PROCESS intdelay_1_process;


  din_sum <= resize(din_re_reg, 18) + resize(din_im_reg, 18);

  twdl_re_signed <= signed(twdl_re);

  intdelay_2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        twdl_re_reg <= to_signed(16#00000#, 17);
      ELSIF enb = '1' THEN
        IF syncReset = '1' THEN
          twdl_re_reg <= to_signed(16#00000#, 17);
        ELSE 
          twdl_re_reg <= twdl_re_signed;
        END IF;
      END IF;
    END IF;
  END PROCESS intdelay_2_process;


  twdl_im_signed <= signed(twdl_im);

  intdelay_3_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        twdl_im_reg <= to_signed(16#00000#, 17);
      ELSIF enb = '1' THEN
        IF syncReset = '1' THEN
          twdl_im_reg <= to_signed(16#00000#, 17);
        ELSE 
          twdl_im_reg <= twdl_im_signed;
        END IF;
      END IF;
    END IF;
  END PROCESS intdelay_3_process;


  adder_add_cast <= resize(twdl_re_reg, 18);
  adder_add_cast_1 <= resize(twdl_im_reg, 18);
  twdl_sum <= adder_add_cast + adder_add_cast_1;

  -- Complex3Multiply
  Complex3Multiply_1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF enb = '1' THEN
        prodOfRe <= Complex3Multiply_prodOfRe_pipe1;
        prodOfIm <= Complex3Multiply_ProdOfIm_pipe1;
        prodOfSum <= Complex3Multiply_prodOfSum_pipe1;
        Complex3Multiply_prodOfRe_pipe1 <= Complex3Multiply_din1_re_pipe1 * Complex3Multiply_twiddle_re_pipe1;
        Complex3Multiply_ProdOfIm_pipe1 <= Complex3Multiply_din1_im_pipe1 * Complex3Multiply_twiddle_im_pipe1;
        Complex3Multiply_prodOfSum_pipe1 <= Complex3Multiply_din1_sum_pipe1 * Complex3Multiply_twiddle_sum_pipe1;
        Complex3Multiply_twiddle_re_pipe1 <= twdl_re_reg;
        Complex3Multiply_twiddle_im_pipe1 <= twdl_im_reg;
        Complex3Multiply_twiddle_sum_pipe1 <= twdl_sum;
        Complex3Multiply_din1_re_pipe1 <= din_re_reg;
        Complex3Multiply_din1_im_pipe1 <= din_im_reg;
        Complex3Multiply_din1_sum_pipe1 <= din_sum;
      END IF;
    END IF;
  END PROCESS Complex3Multiply_1_process;


  intdelay_4_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        din_vld_dly1 <= '0';
      ELSIF enb = '1' THEN
        din_vld_dly1 <= din2Dly_vld;
      END IF;
    END IF;
  END PROCESS intdelay_4_process;


  intdelay_5_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        din_vld_dly2 <= '0';
      ELSIF enb = '1' THEN
        din_vld_dly2 <= din_vld_dly1;
      END IF;
    END IF;
  END PROCESS intdelay_5_process;


  intdelay_6_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        din_vld_dly3 <= '0';
      ELSIF enb = '1' THEN
        din_vld_dly3 <= din_vld_dly2;
      END IF;
    END IF;
  END PROCESS intdelay_6_process;


  intdelay_7_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        prod_vld <= '0';
      ELSIF enb = '1' THEN
        prod_vld <= din_vld_dly3;
      END IF;
    END IF;
  END PROCESS intdelay_7_process;


  -- Complex3Add
  Complex3Add_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Complex3Add_prodOfSum_reg <= to_signed(0, 36);
        Complex3Add_tmpResult_reg <= to_signed(0, 36);
        Complex3Add_multRes_re_reg1 <= to_signed(0, 35);
        Complex3Add_multRes_re_reg2 <= to_signed(0, 35);
        Complex3Add_multRes_im_reg <= to_signed(0, 37);
        Complex3Add_prod_vld_reg1 <= '0';
        dinXTwdl_vld <= '0';
      ELSIF enb = '1' THEN
        Complex3Add_tmpResult_reg <= Complex3Add_tmpResult_reg_next;
        Complex3Add_multRes_re_reg1 <= Complex3Add_multRes_re_reg1_next;
        Complex3Add_multRes_re_reg2 <= Complex3Add_multRes_re_reg2_next;
        Complex3Add_multRes_im_reg <= Complex3Add_multRes_im_reg_next;
        Complex3Add_prodOfSum_reg <= prodOfSum;
        dinXTwdl_vld <= Complex3Add_prod_vld_reg1;
        Complex3Add_prod_vld_reg1 <= prod_vld;
      END IF;
    END IF;
  END PROCESS Complex3Add_process;

  Complex3Add_multRes_re_reg2_next <= Complex3Add_multRes_re_reg1;
  Complex3Add_sub_cast <= resize(prodOfRe, 35);
  Complex3Add_sub_cast_1 <= resize(prodOfIm, 35);
  Complex3Add_multRes_re_reg1_next <= Complex3Add_sub_cast - Complex3Add_sub_cast_1;
  Complex3Add_sub_cast_2 <= resize(Complex3Add_prodOfSum_reg, 37);
  Complex3Add_sub_cast_3 <= resize(Complex3Add_tmpResult_reg, 37);
  Complex3Add_multRes_im_reg_next <= Complex3Add_sub_cast_2 - Complex3Add_sub_cast_3;
  Complex3Add_add_cast <= resize(prodOfRe, 35);
  Complex3Add_add_cast_1 <= resize(prodOfIm, 35);
  Complex3Add_add_temp <= Complex3Add_add_cast + Complex3Add_add_cast_1;
  Complex3Add_tmpResult_reg_next <= resize(Complex3Add_add_temp, 36);
  multResFP_re <= Complex3Add_multRes_re_reg2;
  multResFP_im <= Complex3Add_multRes_im_reg;

  dinXTwdl_re <= std_logic_vector(multResFP_re);

  dinXTwdl_im_tmp <= multResFP_im(34 DOWNTO 0);

  dinXTwdl_im <= std_logic_vector(dinXTwdl_im_tmp);

END rtl;

