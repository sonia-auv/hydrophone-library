-- -------------------------------------------------------------
-- 
-- File Name: new_puck\hdlsrc\Test_DOA\SampleHold.vhd
-- Created: 2022-04-28 11:14:20
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: SampleHold
-- Source Path: Test_DOA/FFTs/Trigger/SampleHold
-- Hierarchy Level: 3
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY SampleHold IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        Trigger                           :   IN    std_logic;
        In2                               :   IN    std_logic;
        alpha                             :   OUT   std_logic
        );
END SampleHold;


ARCHITECTURE rtl OF SampleHold IS

  -- Component Declarations
  COMPONENT Sample_and_Hold
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          In_rsvd                         :   IN    std_logic;
          Trigger                         :   IN    std_logic;
          alpha                           :   OUT   std_logic
          );
  END COMPONENT;

  -- Component Configuration Statements
  FOR ALL : Sample_and_Hold
    USE ENTITY work.Sample_and_Hold(rtl);

  -- Signals
  SIGNAL Sample_and_Hold_out1             : std_logic;

BEGIN
  u_Sample_and_Hold : Sample_and_Hold
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              In_rsvd => In2,
              Trigger => Trigger,
              alpha => Sample_and_Hold_out1
              );

  alpha <= Sample_and_Hold_out1;

END rtl;

