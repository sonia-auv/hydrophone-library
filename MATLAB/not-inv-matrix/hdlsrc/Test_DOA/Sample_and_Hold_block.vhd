-- -------------------------------------------------------------
-- 
-- File Name: not-inv-matrix\hdlsrc\Test_DOA\Sample_and_Hold_block.vhd
-- Created: 2022-07-02 22:34:29
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: Sample_and_Hold_block
-- Source Path: Test_DOA/Maximum Hydro 1/SampleHold/Sample and Hold
-- Hierarchy Level: 3
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY Sample_and_Hold_block IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        In_rsvd                           :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
        Trigger                           :   IN    std_logic;
        alpha                             :   OUT   std_logic_vector(17 DOWNTO 0)  -- sfix18
        );
END Sample_and_Hold_block;


ARCHITECTURE rtl OF Sample_and_Hold_block IS

  -- Signals
  SIGNAL enb_gated                        : std_logic;
  SIGNAL Trigger_delayed                  : std_logic;
  SIGNAL Trigger_emulated                 : std_logic;
  SIGNAL In_signed                        : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL In_bypass                        : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL In_last_value                    : signed(17 DOWNTO 0);  -- sfix18

BEGIN

  Trigger_delay_process: PROCESS (clk)
  BEGIN
    IF clk'event AND clk = '1' THEN
      IF reset = '1' THEN
        Trigger_delayed <= '0';
      ELSIF enb = '1' THEN
        Trigger_delayed <= Trigger;
      END IF;
    END IF;
  END PROCESS Trigger_delay_process;

  Trigger_emulated <= NOT Trigger AND Trigger_delayed;

  enb_gated <= Trigger_emulated AND enb;

  In_signed <= signed(In_rsvd);

  alpha_bypass_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        In_last_value <= to_signed(16#00000#, 18);
      ELSIF enb_gated = '1' THEN
        In_last_value <= In_bypass;
      END IF;
    END IF;
  END PROCESS alpha_bypass_process;


  
  In_bypass <= In_last_value WHEN Trigger_emulated = '0' ELSE
      In_signed;

  alpha <= std_logic_vector(In_bypass);

END rtl;

