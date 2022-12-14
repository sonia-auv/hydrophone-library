-- -------------------------------------------------------------
-- 
-- File Name: not-inv-matrix\hdlsrc\Test_DOA\SampleHold5.vhd
-- Created: 2022-07-02 22:34:29
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: SampleHold5
-- Source Path: Test_DOA/Maximum Hydro 1/SampleHold5
-- Hierarchy Level: 2
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY SampleHold5 IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        Trigger                           :   IN    std_logic;
        In2                               :   IN    std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
        alpha                             :   OUT   std_logic_vector(19 DOWNTO 0)  -- sfix20_En17
        );
END SampleHold5;


ARCHITECTURE rtl OF SampleHold5 IS

  -- Component Declarations
  COMPONENT Sample_and_Hold_block1
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          In_rsvd                         :   IN    std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
          Trigger                         :   IN    std_logic;
          alpha                           :   OUT   std_logic_vector(19 DOWNTO 0)  -- sfix20_En17
          );
  END COMPONENT;

  -- Component Configuration Statements
  FOR ALL : Sample_and_Hold_block1
    USE ENTITY work.Sample_and_Hold_block1(rtl);

  -- Signals
  SIGNAL Sample_and_Hold_out1             : std_logic_vector(19 DOWNTO 0);  -- ufix20

BEGIN
  u_Sample_and_Hold : Sample_and_Hold_block1
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              In_rsvd => In2,  -- sfix20_En17
              Trigger => Trigger,
              alpha => Sample_and_Hold_out1  -- sfix20_En17
              );

  alpha <= Sample_and_Hold_out1;

END rtl;

