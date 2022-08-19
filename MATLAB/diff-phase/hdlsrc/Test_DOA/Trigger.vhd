-- -------------------------------------------------------------
-- 
-- File Name: diff-phase\hdlsrc\Test_DOA\Trigger.vhd
-- Created: 2022-07-04 20:03:20
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: Trigger
-- Source Path: Test_DOA/FFTs/Trigger
-- Hierarchy Level: 2
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY Trigger IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        Canal1                            :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
        HighThreshold                     :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
        isReady                           :   IN    std_logic;
        Enable                            :   IN    std_logic;
        LowThreshold                      :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
        Ready                             :   OUT   std_logic
        );
END Trigger;


ARCHITECTURE rtl OF Trigger IS

  -- Component Declarations
  COMPONENT SampleHold
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          Trigger                         :   IN    std_logic;
          In2                             :   IN    std_logic;
          alpha                           :   OUT   std_logic
          );
  END COMPONENT;

  -- Component Configuration Statements
  FOR ALL : SampleHold
    USE ENTITY work.SampleHold(rtl);

  -- Signals
  SIGNAL Canal1_unsigned                  : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL LowThreshold_unsigned            : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL Relational_Operator1_relop1      : std_logic;
  SIGNAL HighThreshold_unsigned           : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL Relational_Operator_relop1       : std_logic;
  SIGNAL Logical_Operator4_out1           : std_logic;
  SIGNAL Logical_Operator1_out1           : std_logic;
  SIGNAL Logical_Operator_out1            : std_logic;
  SIGNAL SampleHold_out1                  : std_logic;
  SIGNAL Logical_Operator2_out1           : std_logic;

BEGIN
  u_SampleHold : SampleHold
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              Trigger => Logical_Operator_out1,
              In2 => isReady,
              alpha => SampleHold_out1
              );

  Canal1_unsigned <= unsigned(Canal1);

  LowThreshold_unsigned <= unsigned(LowThreshold);

  
  Relational_Operator1_relop1 <= '1' WHEN Canal1_unsigned <= LowThreshold_unsigned ELSE
      '0';

  HighThreshold_unsigned <= unsigned(HighThreshold);

  
  Relational_Operator_relop1 <= '1' WHEN Canal1_unsigned >= HighThreshold_unsigned ELSE
      '0';

  Logical_Operator4_out1 <= Relational_Operator1_relop1 OR Relational_Operator_relop1;

  Logical_Operator1_out1 <=  NOT isReady;

  Logical_Operator_out1 <= Logical_Operator4_out1 XOR Logical_Operator1_out1;

  Logical_Operator2_out1 <= SampleHold_out1 AND Enable;

  Ready <= Logical_Operator2_out1;

END rtl;

