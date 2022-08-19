-- -------------------------------------------------------------
-- 
-- File Name: rot_x\hdlsrc\Test_DOA\SNR_Check.vhd
-- Created: 2022-06-08 14:13:23
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: SNR_Check
-- Source Path: Test_DOA/SNR Check
-- Hierarchy Level: 1
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY SNR_Check IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        a                                 :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
        validIn_sum                       :   IN    std_logic;
        alphaValue                        :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
        validIn_Max                       :   IN    std_logic;
        SNR_Threshold                     :   IN    std_logic_vector(7 DOWNTO 0);  -- uint8
        SNR_check_1                       :   OUT   std_logic;
        SNR                               :   OUT   std_logic_vector(15 DOWNTO 0)  -- uint16
        );
END SNR_Check;


ARCHITECTURE rtl OF SNR_Check IS

  -- Component Declarations
  COMPONENT Division
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          Somme                           :   IN    std_logic_vector(26 DOWNTO 0);  -- sfix27_En8
          alphaValeur_Max                 :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
          SNR_Threshold                   :   IN    std_logic_vector(7 DOWNTO 0);  -- uint8
          Trigger                         :   IN    std_logic;
          SNR_check                       :   OUT   std_logic;
          SNR                             :   OUT   std_logic_vector(15 DOWNTO 0)  -- uint16
          );
  END COMPONENT;

  -- Component Configuration Statements
  FOR ALL : Division
    USE ENTITY work.Division(rtl);

  -- Signals
  SIGNAL Multiply_Accumulate_counter_out  : unsigned(8 DOWNTO 0);  -- ufix9
  SIGNAL s                                : std_logic;
  SIGNAL Multiply_Accumulate_and1_out     : std_logic;
  SIGNAL switch_compare_1                 : std_logic;
  SIGNAL s_1                              : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL Multiply_Accumulate_not1_out     : std_logic;
  SIGNAL switch_compare_1_1               : std_logic;
  SIGNAL a_signed                         : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL s_2                              : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL Multiply_Accumulate_input_mux_out : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL Constant1_out1                   : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL Multiply_Accumulate_multiply_out : signed(35 DOWNTO 0);  -- sfix36
  SIGNAL Multiply_Accumulate_out1         : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL Multiply_Accumulate_add_fb_in    : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL Multiply_Accumulate_add_add_cast : signed(44 DOWNTO 0);  -- sfix45_En8
  SIGNAL Multiply_Accumulate_add_add_cast_1 : signed(44 DOWNTO 0);  -- sfix45_En8
  SIGNAL Multiply_Accumulate_add_add_temp : signed(44 DOWNTO 0);  -- sfix45_En8
  SIGNAL Multiply_Accumulate_multiplyAdd_out : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL Logical_Operator1_out1           : std_logic;
  SIGNAL s_3                              : std_logic;
  SIGNAL Multiply_Accumulate_and2_out     : std_logic;
  SIGNAL Multiply_Accumulate_out2         : std_logic;
  SIGNAL Logical_Operator_out1            : std_logic;
  SIGNAL Division_out1                    : std_logic;
  SIGNAL Division_out2                    : std_logic_vector(15 DOWNTO 0);  -- ufix16
  SIGNAL Delay1_out1                      : std_logic;
  SIGNAL Logical_Operator2_out1           : std_logic;
  SIGNAL Delay_reg                        : std_logic_vector(0 TO 1);  -- ufix1 [2]
  SIGNAL Delay_out1                       : std_logic;

  ATTRIBUTE use_dsp : string;

  ATTRIBUTE use_dsp OF Multiply_Accumulate_multiply_out : SIGNAL IS "yes";

BEGIN
  u_Division : Division
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              Somme => std_logic_vector(Multiply_Accumulate_out1),  -- sfix27_En8
              alphaValeur_Max => alphaValue,  -- sfix18
              SNR_Threshold => SNR_Threshold,  -- uint8
              Trigger => Logical_Operator_out1,
              SNR_check => Division_out1,
              SNR => Division_out2  -- uint16
              );

  -- Count limited, Unsigned Counter
  --  initial value   = 1
  --  step value      = 1
  --  count to value  = 256
  Multiply_Accumulate_counter_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Multiply_Accumulate_counter_out <= to_unsigned(16#001#, 9);
      ELSIF enb = '1' THEN
        IF validIn_sum = '1' THEN 
          IF Multiply_Accumulate_counter_out >= to_unsigned(16#100#, 9) THEN 
            Multiply_Accumulate_counter_out <= to_unsigned(16#001#, 9);
          ELSE 
            Multiply_Accumulate_counter_out <= Multiply_Accumulate_counter_out + to_unsigned(16#001#, 9);
          END IF;
        END IF;
      END IF;
    END IF;
  END PROCESS Multiply_Accumulate_counter_process;


  
  s <= '1' WHEN Multiply_Accumulate_counter_out = to_unsigned(16#001#, 9) ELSE
      '0';

  Multiply_Accumulate_and1_out <= validIn_sum AND s;

  
  switch_compare_1 <= '1' WHEN Multiply_Accumulate_and1_out > '0' ELSE
      '0';

  s_1 <= to_signed(16#0000000#, 27);

  Multiply_Accumulate_not1_out <=  NOT validIn_sum;

  
  switch_compare_1_1 <= '1' WHEN Multiply_Accumulate_not1_out > '0' ELSE
      '0';

  a_signed <= signed(a);

  s_2 <= to_signed(16#00000#, 18);

  
  Multiply_Accumulate_input_mux_out <= a_signed WHEN switch_compare_1_1 = '0' ELSE
      s_2;

  Constant1_out1 <= to_signed(16#00001#, 18);

  Multiply_Accumulate_multiply_out <= Multiply_Accumulate_input_mux_out * Constant1_out1;

  
  Multiply_Accumulate_add_fb_in <= Multiply_Accumulate_out1 WHEN switch_compare_1 = '0' ELSE
      s_1;

  Multiply_Accumulate_add_add_cast <= resize(Multiply_Accumulate_add_fb_in, 45);
  Multiply_Accumulate_add_add_cast_1 <= resize(Multiply_Accumulate_multiply_out & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0', 45);
  Multiply_Accumulate_add_add_temp <= Multiply_Accumulate_add_add_cast + Multiply_Accumulate_add_add_cast_1;
  Multiply_Accumulate_multiplyAdd_out <= Multiply_Accumulate_add_add_temp(26 DOWNTO 0);

  Multiply_Accumulate_delay_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Multiply_Accumulate_out1 <= to_signed(16#0000000#, 27);
      ELSIF enb = '1' THEN
        Multiply_Accumulate_out1 <= Multiply_Accumulate_multiplyAdd_out;
      END IF;
    END IF;
  END PROCESS Multiply_Accumulate_delay_process;


  Logical_Operator1_out1 <=  NOT validIn_Max;

  
  s_3 <= '1' WHEN Multiply_Accumulate_counter_out = to_unsigned(16#100#, 9) ELSE
      '0';

  Multiply_Accumulate_and2_out <= validIn_sum AND s_3;

  Multiply_Accumulate_delay_endout_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Multiply_Accumulate_out2 <= '0';
      ELSIF enb = '1' THEN
        Multiply_Accumulate_out2 <= Multiply_Accumulate_and2_out;
      END IF;
    END IF;
  END PROCESS Multiply_Accumulate_delay_endout_process;


  Logical_Operator_out1 <= Logical_Operator1_out1 AND Multiply_Accumulate_out2;

  Delay1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay1_out1 <= '0';
      ELSIF enb = '1' THEN
        Delay1_out1 <= Logical_Operator_out1;
      END IF;
    END IF;
  END PROCESS Delay1_process;


  Logical_Operator2_out1 <= Division_out1 AND Delay1_out1;

  Delay_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay_reg <= (OTHERS => '0');
      ELSIF enb = '1' THEN
        Delay_reg(0) <= Logical_Operator2_out1;
        Delay_reg(1) <= Delay_reg(0);
      END IF;
    END IF;
  END PROCESS Delay_process;

  Delay_out1 <= Delay_reg(1);

  SNR_check_1 <= Delay_out1;

  SNR <= Division_out2;

END rtl;

