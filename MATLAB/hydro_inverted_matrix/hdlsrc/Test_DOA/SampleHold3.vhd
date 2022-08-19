-- -------------------------------------------------------------
-- 
-- File Name: hydro_inverted_matrix\hdlsrc\Test_DOA\SampleHold3.vhd
-- Created: 2022-04-11 19:01:34
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: SampleHold3
-- Source Path: Test_DOA/Maximum Hydro 1/SampleHold3
-- Hierarchy Level: 2
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY SampleHold3 IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        Trigger                           :   IN    std_logic;
        In2                               :   IN    std_logic_vector(16 DOWNTO 0);  -- ufix17
        alpha                             :   OUT   std_logic_vector(16 DOWNTO 0)  -- ufix17
        );
END SampleHold3;


ARCHITECTURE rtl OF SampleHold3 IS

  -- Component Declarations
  COMPONENT Sample_and_Hold_block2
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          In_rsvd                         :   IN    std_logic_vector(16 DOWNTO 0);  -- ufix17
          Trigger                         :   IN    std_logic;
          alpha                           :   OUT   std_logic_vector(16 DOWNTO 0)  -- ufix17
          );
  END COMPONENT;

  -- Component Configuration Statements
  FOR ALL : Sample_and_Hold_block2
    USE ENTITY work.Sample_and_Hold_block2(rtl);

  -- Signals
  SIGNAL Sample_and_Hold_out1             : std_logic_vector(16 DOWNTO 0);  -- ufix17

BEGIN
  u_Sample_and_Hold : Sample_and_Hold_block2
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              In_rsvd => In2,  -- ufix17
              Trigger => Trigger,
              alpha => Sample_and_Hold_out1  -- ufix17
              );

  alpha <= Sample_and_Hold_out1;

END rtl;

