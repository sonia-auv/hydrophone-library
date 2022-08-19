-- -------------------------------------------------------------
-- 
-- File Name: index-test\hdlsrc\Test_DOA\Division.vhd
-- Created: 2022-07-15 15:32:39
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: Division
-- Source Path: Test_DOA/SNR Check/Division
-- Hierarchy Level: 2
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY Division IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        Somme                             :   IN    std_logic_vector(26 DOWNTO 0);  -- sfix27_En8
        alphaValeur_Max                   :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
        SNR_Threshold                     :   IN    std_logic_vector(7 DOWNTO 0);  -- uint8
        Trigger                           :   IN    std_logic;
        SNR_check                         :   OUT   std_logic;
        SNR                               :   OUT   std_logic_vector(15 DOWNTO 0)  -- uint16
        );
END Division;


ARCHITECTURE rtl OF Division IS

  -- Signals
  SIGNAL enb_gated                        : std_logic;
  SIGNAL Trigger_delayed                  : std_logic;
  SIGNAL Trigger_emulated                 : std_logic;
  SIGNAL Somme_signed                     : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL Somme_dtc                        : signed(27 DOWNTO 0);  -- sfix28_En8
  SIGNAL alphaValeur_Max_signed           : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL Divide_out1                      : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL SNR_Threshold_unsigned           : unsigned(7 DOWNTO 0);  -- uint8
  SIGNAL Data_Type_Conversion_out1        : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL Relational_Operator_relop1       : std_logic;
  SIGNAL Delay1_out1                      : std_logic;
  SIGNAL Delay1_out1_bypass               : std_logic;
  SIGNAL Delay1_out1_last_value           : std_logic;
  SIGNAL Data_Type_Conversion1_out1       : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL Delay_out1                       : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL Delay_out1_bypass                : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL Delay_out1_last_value            : unsigned(15 DOWNTO 0);  -- uint16

BEGIN

  Trigger_delay_process: PROCESS (clk)
  BEGIN
    IF clk'event AND clk = '1' THEN
      IF reset = '1' THEN
        Trigger_delayed <= '1';
      ELSIF enb = '1' THEN
        Trigger_delayed <= Trigger;
      END IF;
    END IF;
  END PROCESS Trigger_delay_process;

  Trigger_emulated <= NOT Trigger_delayed AND Trigger;

  enb_gated <= Trigger_emulated AND enb;

  Somme_signed <= signed(Somme);

  Somme_dtc <= resize(Somme_signed, 28);

  alphaValeur_Max_signed <= signed(alphaValeur_Max);

  Divide_output : PROCESS (Somme_dtc, alphaValeur_Max_signed)
    VARIABLE c : signed(27 DOWNTO 0);
    VARIABLE div_temp : signed(28 DOWNTO 0);
    VARIABLE cast : signed(28 DOWNTO 0);
  BEGIN
    div_temp := to_signed(16#00000000#, 29);
    cast := to_signed(16#00000000#, 29);
    IF alphaValeur_Max_signed = to_signed(16#00000#, 18) THEN 
      IF Somme_dtc < to_signed(16#0000000#, 28) THEN 
        c := to_signed(-16#8000000#, 28);
      ELSE 
        c := to_signed(16#7FFFFFF#, 28);
      END IF;
    ELSE 
      cast := resize(Somme_dtc, 29);
      div_temp := cast / alphaValeur_Max_signed;
      IF (div_temp(28) = '0') AND (div_temp(27) /= '0') THEN 
        c := X"7FFFFFF";
      ELSIF (div_temp(28) = '1') AND (div_temp(27) /= '1') THEN 
        c := X"8000000";
      ELSE 
        c := div_temp(27 DOWNTO 0);
      END IF;
    END IF;
    IF (c(27) = '0') AND (c(26) /= '0') THEN 
      Divide_out1 <= "011111111111111111111111111";
    ELSIF (c(27) = '1') AND (c(26) /= '1') THEN 
      Divide_out1 <= "100000000000000000000000000";
    ELSE 
      Divide_out1 <= c(26 DOWNTO 0);
    END IF;
  END PROCESS Divide_output;


  SNR_Threshold_unsigned <= unsigned(SNR_Threshold);

  Data_Type_Conversion_out1 <= signed(resize(SNR_Threshold_unsigned & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0', 27));

  
  Relational_Operator_relop1 <= '1' WHEN Divide_out1 >= Data_Type_Conversion_out1 ELSE
      '0';

  Delay1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay1_out1 <= '0';
      ELSIF enb_gated = '1' THEN
        Delay1_out1 <= Relational_Operator_relop1;
      END IF;
    END IF;
  END PROCESS Delay1_process;


  SNR_check_bypass_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay1_out1_last_value <= '0';
      ELSIF enb_gated = '1' THEN
        Delay1_out1_last_value <= Delay1_out1_bypass;
      END IF;
    END IF;
  END PROCESS SNR_check_bypass_process;


  
  Delay1_out1_bypass <= Delay1_out1_last_value WHEN Trigger_emulated = '0' ELSE
      Delay1_out1;

  Data_Type_Conversion1_out1 <= unsigned(Divide_out1(23 DOWNTO 8));

  Delay_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay_out1 <= to_unsigned(16#0000#, 16);
      ELSIF enb_gated = '1' THEN
        Delay_out1 <= Data_Type_Conversion1_out1;
      END IF;
    END IF;
  END PROCESS Delay_process;


  SNR_bypass_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay_out1_last_value <= to_unsigned(16#0000#, 16);
      ELSIF enb_gated = '1' THEN
        Delay_out1_last_value <= Delay_out1_bypass;
      END IF;
    END IF;
  END PROCESS SNR_bypass_process;


  
  Delay_out1_bypass <= Delay_out1_last_value WHEN Trigger_emulated = '0' ELSE
      Delay_out1;

  SNR <= std_logic_vector(Delay_out1_bypass);

  SNR_check <= Delay1_out1_bypass;

END rtl;
