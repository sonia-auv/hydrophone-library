-- -------------------------------------------------------------
-- 
-- File Name: C:\Users\franc\OneDrive\Documents techniques\ETS\SONIA\Hydro software\Hydro_Update\slprj\hdlsrc\DOA_rearanged\Triggered_Subsystem1.vhd
-- Created: 2021-06-21 21:49:40
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: Triggered_Subsystem1
-- Source Path: DOA_rearanged/Subsystem4/Triggered Subsystem1
-- Hierarchy Level: 2
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY Triggered_Subsystem1 IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        Somme                             :   IN    std_logic_vector(26 DOWNTO 0);  -- sfix27_En8
        alphaValeur_Max                   :   IN    std_logic_vector(26 DOWNTO 0);  -- sfix27_En8
        SNR_Threshold                     :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
        Trigger                           :   IN    std_logic;
        SNR_check                         :   OUT   std_logic
        );
END Triggered_Subsystem1;


ARCHITECTURE rtl OF Triggered_Subsystem1 IS

  -- Signals
  SIGNAL Trigger_delayed                  : std_logic;
  SIGNAL Trigger_delayed_inverted         : std_logic;
  SIGNAL Trigger_emulated                 : std_logic;
  SIGNAL enb_gated                        : std_logic;
  SIGNAL Somme_signed                     : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL Somme_dtc                        : signed(27 DOWNTO 0);  -- sfix28_En8
  SIGNAL alphaValeur_Max_signed           : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL Divide_out1                      : signed(26 DOWNTO 0);  -- sfix27
  SIGNAL SNR_Threshold_unsigned           : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL Data_Type_Conversion_out1        : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL Relational_Operator_1_cast       : signed(34 DOWNTO 0);  -- sfix35_En8
  SIGNAL Relational_Operator_1_cast_1     : signed(34 DOWNTO 0);  -- sfix35_En8
  SIGNAL Relational_Operator_relop1       : std_logic;
  SIGNAL Relational_Operator_out1         : std_logic;
  SIGNAL Relational_Operator_out1_last_value : std_logic;

BEGIN
  Trigger_delay_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Trigger_delayed <= '1';
      ELSIF enb = '1' THEN
        Trigger_delayed <= Trigger;
      END IF;
    END IF;
  END PROCESS Trigger_delay_process;


  Trigger_delayed_inverted <=  NOT Trigger_delayed;

  Trigger_emulated <= Trigger_delayed_inverted AND Trigger;

  enb_gated <= Trigger_emulated AND enb;

  Somme_signed <= signed(Somme);

  Somme_dtc <= resize(Somme_signed, 28);

  alphaValeur_Max_signed <= signed(alphaValeur_Max);

  Divide_output : PROCESS (Somme_dtc, alphaValeur_Max_signed)
    VARIABLE c : signed(27 DOWNTO 0);
    VARIABLE div_temp : signed(27 DOWNTO 0);
  BEGIN
    div_temp := to_signed(16#0000000#, 28);
    IF alphaValeur_Max_signed = to_signed(16#0000000#, 27) THEN 
      IF Somme_dtc < to_signed(16#0000000#, 28) THEN 
        c := to_signed(-16#8000000#, 28);
      ELSE 
        c := to_signed(16#7FFFFFF#, 28);
      END IF;
    ELSE 
      div_temp := Somme_dtc / alphaValeur_Max_signed;
      c := div_temp;
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

  Relational_Operator_1_cast <= Divide_out1 & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0';
  Relational_Operator_1_cast_1 <= resize(Data_Type_Conversion_out1, 35);
  
  Relational_Operator_relop1 <= '1' WHEN Relational_Operator_1_cast >= Relational_Operator_1_cast_1 ELSE
      '0';

  out0_bypass_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Relational_Operator_out1_last_value <= '0';
      ELSIF enb_gated = '1' THEN
        Relational_Operator_out1_last_value <= Relational_Operator_out1;
      END IF;
    END IF;
  END PROCESS out0_bypass_process;


  
  Relational_Operator_out1 <= Relational_Operator_out1_last_value WHEN Trigger_emulated = '0' ELSE
      Relational_Operator_relop1;

  SNR_check <= Relational_Operator_out1;

END rtl;

