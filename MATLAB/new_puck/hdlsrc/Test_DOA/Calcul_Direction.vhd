-- -------------------------------------------------------------
-- 
-- File Name: new_puck\hdlsrc\Test_DOA\Calcul_Direction.vhd
-- Created: 2022-04-28 11:14:20
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: Calcul_Direction
-- Source Path: Test_DOA/Calcul Direction
-- Hierarchy Level: 1
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;
USE work.Test_DOA_pkg.ALL;

ENTITY Calcul_Direction IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        Index                             :   IN    std_logic_vector(16 DOWNTO 0);  -- ufix17
        PhaseRef                          :   IN    std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
        Phase1                            :   IN    std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
        Phase2                            :   IN    std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
        Phase3                            :   IN    std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
        Trigger                           :   IN    std_logic;
        Frequence                         :   OUT   std_logic_vector(26 DOWNTO 0);  -- ufix27
        X                                 :   OUT   std_logic_vector(30 DOWNTO 0);  -- sfix31_En19
        Y                                 :   OUT   std_logic_vector(30 DOWNTO 0);  -- sfix31_En19
        Z                                 :   OUT   std_logic_vector(30 DOWNTO 0)  -- sfix31_En19
        );
END Calcul_Direction;


ARCHITECTURE rtl OF Calcul_Direction IS

  -- Signals
  SIGNAL enb_gated                        : std_logic;
  SIGNAL Trigger_delayed                  : std_logic;
  SIGNAL Trigger_emulated                 : std_logic;
  SIGNAL Index_unsigned                   : unsigned(16 DOWNTO 0);  -- ufix17
  SIGNAL Constant5_out1                   : unsigned(9 DOWNTO 0);  -- ufix10
  SIGNAL Product2_out1                    : unsigned(26 DOWNTO 0);  -- ufix27
  SIGNAL Delay3_out1                      : unsigned(26 DOWNTO 0);  -- ufix27
  SIGNAL Delay3_out1_bypass               : unsigned(26 DOWNTO 0);  -- ufix27
  SIGNAL Delay3_out1_last_value           : unsigned(26 DOWNTO 0);  -- ufix27
  SIGNAL c28_HydroPositionInverted_out1   : vector_of_signed15(0 TO 8);  -- sfix15_En7 [9]
  SIGNAL HydroPositionInverted_out1       : matrix_of_signed15(0 TO 2, 0 TO 2);  -- sfix15_En7 [3x3]
  SIGNAL HydroPositionInverted_out1t      : matrix_of_signed15(0 TO 2, 0 TO 2);  -- sfix15_En7 [3x3]
  SIGNAL HydroPositionInverted_out1t_0_2  : signed(14 DOWNTO 0);  -- sfix15_En7
  SIGNAL Phase3_signed                    : signed(19 DOWNTO 0);  -- sfix20_En17
  SIGNAL PhaseRef_signed                  : signed(19 DOWNTO 0);  -- sfix20_En17
  SIGNAL Subtract2_sub_cast               : signed(20 DOWNTO 0);  -- sfix21_En17
  SIGNAL Subtract2_sub_cast_1             : signed(20 DOWNTO 0);  -- sfix21_En17
  SIGNAL Subtract2_out1                   : signed(20 DOWNTO 0);  -- sfix21_En17
  SIGNAL Data_Type_Conversion4_out1       : signed(15 DOWNTO 0);  -- sfix16_En12
  SIGNAL HydroPositionInverted_out1t_0_1  : signed(14 DOWNTO 0);  -- sfix15_En7
  SIGNAL Phase2_signed                    : signed(19 DOWNTO 0);  -- sfix20_En17
  SIGNAL Subtract1_sub_cast               : signed(20 DOWNTO 0);  -- sfix21_En17
  SIGNAL Subtract1_sub_cast_1             : signed(20 DOWNTO 0);  -- sfix21_En17
  SIGNAL Subtract1_out1                   : signed(20 DOWNTO 0);  -- sfix21_En17
  SIGNAL Data_Type_Conversion3_out1       : signed(15 DOWNTO 0);  -- sfix16_En12
  SIGNAL tmp_MatrixMultiply1_dotp_1       : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL HydroPositionInverted_out1t_0_0  : signed(14 DOWNTO 0);  -- sfix15_En7
  SIGNAL Phase1_signed                    : signed(19 DOWNTO 0);  -- sfix20_En17
  SIGNAL Subtract_sub_cast                : signed(20 DOWNTO 0);  -- sfix21_En17
  SIGNAL Subtract_sub_cast_1              : signed(20 DOWNTO 0);  -- sfix21_En17
  SIGNAL Subtract_out1                    : signed(20 DOWNTO 0);  -- sfix21_En17
  SIGNAL Data_Type_Conversion2_out1       : signed(15 DOWNTO 0);  -- sfix16_En12
  SIGNAL tmp_MatrixMultiply1_dotp_2       : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL tmp_MatrixMultiply1_dotp_0       : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL sum_MatrixMultiply1_dotp_1       : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL MatrixMultiply1_0_0              : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL Delay1_out1                      : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL Delay1_out1_bypass               : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL Delay1_out1_last_value           : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL HydroPositionInverted_out1t_1_2  : signed(14 DOWNTO 0);  -- sfix15_En7
  SIGNAL HydroPositionInverted_out1t_1_1  : signed(14 DOWNTO 0);  -- sfix15_En7
  SIGNAL tmp_MatrixMultiply1_dotp_1_1     : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL HydroPositionInverted_out1t_1_0  : signed(14 DOWNTO 0);  -- sfix15_En7
  SIGNAL tmp_MatrixMultiply1_dotp_2_1     : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL tmp_MatrixMultiply1_dotp_0_1     : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL sum_MatrixMultiply1_dotp_1_1     : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL MatrixMultiply1_1_0              : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL Delay2_out1                      : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL Delay2_out1_bypass               : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL Delay2_out1_last_value           : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL HydroPositionInverted_out1t_2_2  : signed(14 DOWNTO 0);  -- sfix15_En7
  SIGNAL HydroPositionInverted_out1t_2_1  : signed(14 DOWNTO 0);  -- sfix15_En7
  SIGNAL tmp_MatrixMultiply1_dotp_1_2     : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL HydroPositionInverted_out1t_2_0  : signed(14 DOWNTO 0);  -- sfix15_En7
  SIGNAL tmp_MatrixMultiply1_dotp_2_2     : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL tmp_MatrixMultiply1_dotp_0_2     : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL sum_MatrixMultiply1_dotp_1_2     : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL MatrixMultiply1_2_0              : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL Delay4_out1                      : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL Delay4_out1_bypass               : signed(30 DOWNTO 0);  -- sfix31_En19
  SIGNAL Delay4_out1_last_value           : signed(30 DOWNTO 0);  -- sfix31_En19

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

  Index_unsigned <= unsigned(Index);

  Constant5_out1 <= to_unsigned(16#3E8#, 10);

  Product2_out1 <= Index_unsigned * Constant5_out1;

  Delay3_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay3_out1 <= to_unsigned(16#0000000#, 27);
      ELSIF enb_gated = '1' THEN
        Delay3_out1 <= Product2_out1;
      END IF;
    END IF;
  END PROCESS Delay3_process;


  Frequence_bypass_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay3_out1_last_value <= to_unsigned(16#0000000#, 27);
      ELSIF enb_gated = '1' THEN
        Delay3_out1_last_value <= Delay3_out1_bypass;
      END IF;
    END IF;
  END PROCESS Frequence_bypass_process;


  
  Delay3_out1_bypass <= Delay3_out1_last_value WHEN Trigger_emulated = '0' ELSE
      Delay3_out1;

  Frequence <= std_logic_vector(Delay3_out1_bypass);

  c28_HydroPositionInverted_out1(0) <= to_signed(16#0776#, 15);
  c28_HydroPositionInverted_out1(1) <= to_signed(16#1167#, 15);
  c28_HydroPositionInverted_out1(2) <= to_signed(16#2A4A#, 15);
  c28_HydroPositionInverted_out1(3) <= to_signed(16#1663#, 15);
  c28_HydroPositionInverted_out1(4) <= to_signed(16#0592#, 15);
  c28_HydroPositionInverted_out1(5) <= to_signed(-16#27CD#, 15);
  c28_HydroPositionInverted_out1(6) <= to_signed(16#0776#, 15);
  c28_HydroPositionInverted_out1(7) <= to_signed(-16#1D3D#, 15);
  c28_HydroPositionInverted_out1(8) <= to_signed(16#2A4A#, 15);

  c_output : PROCESS (c28_HydroPositionInverted_out1)
  BEGIN
    HydroPositionInverted_out1(0, 0) <= c28_HydroPositionInverted_out1(0);
    HydroPositionInverted_out1(1, 0) <= c28_HydroPositionInverted_out1(1);
    HydroPositionInverted_out1(2, 0) <= c28_HydroPositionInverted_out1(2);
    HydroPositionInverted_out1(0, 1) <= c28_HydroPositionInverted_out1(3);
    HydroPositionInverted_out1(1, 1) <= c28_HydroPositionInverted_out1(4);
    HydroPositionInverted_out1(2, 1) <= c28_HydroPositionInverted_out1(5);
    HydroPositionInverted_out1(0, 2) <= c28_HydroPositionInverted_out1(6);
    HydroPositionInverted_out1(1, 2) <= c28_HydroPositionInverted_out1(7);
    HydroPositionInverted_out1(2, 2) <= c28_HydroPositionInverted_out1(8);
  END PROCESS c_output;


  transpose_output : PROCESS (HydroPositionInverted_out1)
  BEGIN

    FOR t_1 IN 0 TO 2 LOOP
      FOR t_0 IN 0 TO 2 LOOP
        HydroPositionInverted_out1t(t_0, t_1) <= HydroPositionInverted_out1(t_1, t_0);
      END LOOP;
    END LOOP;

  END PROCESS transpose_output;


  HydroPositionInverted_out1t_0_2 <= HydroPositionInverted_out1t(2, 0);

  Phase3_signed <= signed(Phase3);

  PhaseRef_signed <= signed(PhaseRef);

  Subtract2_sub_cast <= resize(Phase3_signed, 21);
  Subtract2_sub_cast_1 <= resize(PhaseRef_signed, 21);
  Subtract2_out1 <= Subtract2_sub_cast - Subtract2_sub_cast_1;

  Data_Type_Conversion4_out1 <= Subtract2_out1(20 DOWNTO 5);

  HydroPositionInverted_out1t_0_1 <= HydroPositionInverted_out1t(1, 0);

  Phase2_signed <= signed(Phase2);

  Subtract1_sub_cast <= resize(Phase2_signed, 21);
  Subtract1_sub_cast_1 <= resize(PhaseRef_signed, 21);
  Subtract1_out1 <= Subtract1_sub_cast - Subtract1_sub_cast_1;

  Data_Type_Conversion3_out1 <= Subtract1_out1(20 DOWNTO 5);

  tmp_MatrixMultiply1_dotp_1 <= HydroPositionInverted_out1t_0_1 * Data_Type_Conversion3_out1;

  HydroPositionInverted_out1t_0_0 <= HydroPositionInverted_out1t(0, 0);

  Phase1_signed <= signed(Phase1);

  Subtract_sub_cast <= resize(Phase1_signed, 21);
  Subtract_sub_cast_1 <= resize(PhaseRef_signed, 21);
  Subtract_out1 <= Subtract_sub_cast - Subtract_sub_cast_1;

  Data_Type_Conversion2_out1 <= Subtract_out1(20 DOWNTO 5);

  tmp_MatrixMultiply1_dotp_2 <= HydroPositionInverted_out1t_0_2 * Data_Type_Conversion4_out1;

  tmp_MatrixMultiply1_dotp_0 <= HydroPositionInverted_out1t_0_0 * Data_Type_Conversion2_out1;

  sum_MatrixMultiply1_dotp_1 <= tmp_MatrixMultiply1_dotp_1 + tmp_MatrixMultiply1_dotp_0;

  MatrixMultiply1_0_0 <= tmp_MatrixMultiply1_dotp_2 + sum_MatrixMultiply1_dotp_1;

  Delay1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay1_out1 <= to_signed(16#00000000#, 31);
      ELSIF enb_gated = '1' THEN
        Delay1_out1 <= MatrixMultiply1_0_0;
      END IF;
    END IF;
  END PROCESS Delay1_process;


  X_bypass_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay1_out1_last_value <= to_signed(16#00000000#, 31);
      ELSIF enb_gated = '1' THEN
        Delay1_out1_last_value <= Delay1_out1_bypass;
      END IF;
    END IF;
  END PROCESS X_bypass_process;


  
  Delay1_out1_bypass <= Delay1_out1_last_value WHEN Trigger_emulated = '0' ELSE
      Delay1_out1;

  X <= std_logic_vector(Delay1_out1_bypass);

  HydroPositionInverted_out1t_1_2 <= HydroPositionInverted_out1t(2, 1);

  HydroPositionInverted_out1t_1_1 <= HydroPositionInverted_out1t(1, 1);

  tmp_MatrixMultiply1_dotp_1_1 <= HydroPositionInverted_out1t_1_1 * Data_Type_Conversion3_out1;

  HydroPositionInverted_out1t_1_0 <= HydroPositionInverted_out1t(0, 1);

  tmp_MatrixMultiply1_dotp_2_1 <= HydroPositionInverted_out1t_1_2 * Data_Type_Conversion4_out1;

  tmp_MatrixMultiply1_dotp_0_1 <= HydroPositionInverted_out1t_1_0 * Data_Type_Conversion2_out1;

  sum_MatrixMultiply1_dotp_1_1 <= tmp_MatrixMultiply1_dotp_1_1 + tmp_MatrixMultiply1_dotp_0_1;

  MatrixMultiply1_1_0 <= tmp_MatrixMultiply1_dotp_2_1 + sum_MatrixMultiply1_dotp_1_1;

  Delay2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay2_out1 <= to_signed(16#00000000#, 31);
      ELSIF enb_gated = '1' THEN
        Delay2_out1 <= MatrixMultiply1_1_0;
      END IF;
    END IF;
  END PROCESS Delay2_process;


  Y_bypass_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay2_out1_last_value <= to_signed(16#00000000#, 31);
      ELSIF enb_gated = '1' THEN
        Delay2_out1_last_value <= Delay2_out1_bypass;
      END IF;
    END IF;
  END PROCESS Y_bypass_process;


  
  Delay2_out1_bypass <= Delay2_out1_last_value WHEN Trigger_emulated = '0' ELSE
      Delay2_out1;

  Y <= std_logic_vector(Delay2_out1_bypass);

  HydroPositionInverted_out1t_2_2 <= HydroPositionInverted_out1t(2, 2);

  HydroPositionInverted_out1t_2_1 <= HydroPositionInverted_out1t(1, 2);

  tmp_MatrixMultiply1_dotp_1_2 <= HydroPositionInverted_out1t_2_1 * Data_Type_Conversion3_out1;

  HydroPositionInverted_out1t_2_0 <= HydroPositionInverted_out1t(0, 2);

  tmp_MatrixMultiply1_dotp_2_2 <= HydroPositionInverted_out1t_2_2 * Data_Type_Conversion4_out1;

  tmp_MatrixMultiply1_dotp_0_2 <= HydroPositionInverted_out1t_2_0 * Data_Type_Conversion2_out1;

  sum_MatrixMultiply1_dotp_1_2 <= tmp_MatrixMultiply1_dotp_1_2 + tmp_MatrixMultiply1_dotp_0_2;

  MatrixMultiply1_2_0 <= tmp_MatrixMultiply1_dotp_2_2 + sum_MatrixMultiply1_dotp_1_2;

  Delay4_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay4_out1 <= to_signed(16#00000000#, 31);
      ELSIF enb_gated = '1' THEN
        Delay4_out1 <= MatrixMultiply1_2_0;
      END IF;
    END IF;
  END PROCESS Delay4_process;


  Z_bypass_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay4_out1_last_value <= to_signed(16#00000000#, 31);
      ELSIF enb_gated = '1' THEN
        Delay4_out1_last_value <= Delay4_out1_bypass;
      END IF;
    END IF;
  END PROCESS Z_bypass_process;


  
  Delay4_out1_bypass <= Delay4_out1_last_value WHEN Trigger_emulated = '0' ELSE
      Delay4_out1;

  Z <= std_logic_vector(Delay4_out1_bypass);

END rtl;
