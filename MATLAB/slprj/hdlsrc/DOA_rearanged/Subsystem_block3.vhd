-- -------------------------------------------------------------
-- 
-- File Name: C:\Users\franc\OneDrive\Documents techniques\ETS\SONIA\Hydro software\Hydro_Update\slprj\hdlsrc\DOA_rearanged\Subsystem_block3.vhd
-- Created: 2021-06-21 21:49:40
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: Subsystem_block3
-- Source Path: DOA_rearanged/Signal Trigger/Fenetrage/Subsystem
-- Hierarchy Level: 3
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY Subsystem_block3 IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        Reset_1                           :   IN    std_logic;
        Enable                            :   IN    std_logic;
        Count                             :   OUT   std_logic_vector(15 DOWNTO 0)  -- uint16
        );
END Subsystem_block3;


ARCHITECTURE rtl OF Subsystem_block3 IS

  -- Signals
  SIGNAL Constant_out1                    : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL Delay_out1                       : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL Add_out1                         : unsigned(16 DOWNTO 0);  -- ufix17
  SIGNAL Compare_To_Constant_out1         : std_logic;
  SIGNAL Logical_Operator_out1            : std_logic;
  SIGNAL Product2_out1                    : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL Delay_delOut                     : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL Delay_ectrl                      : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL Delay_last_value                 : unsigned(15 DOWNTO 0);  -- uint16

BEGIN
  Constant_out1 <= to_unsigned(16#0001#, 16);

  Add_out1 <= resize(Constant_out1, 17) + resize(Delay_out1, 17);

  
  Compare_To_Constant_out1 <= '1' WHEN Delay_out1 <= to_unsigned(16#0100#, 16) ELSE
      '0';

  Logical_Operator_out1 <= Reset_1 AND Compare_To_Constant_out1;

  
  Product2_out1 <= resize(Add_out1, 16) WHEN Logical_Operator_out1 = '1' ELSE
      to_unsigned(16#00000#, 16);

  
  Delay_ectrl <= Delay_delOut WHEN Enable = '0' ELSE
      Product2_out1;

  Delay_lowered_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay_delOut <= to_unsigned(16#0000#, 16);
      ELSIF enb = '1' THEN
        Delay_delOut <= Delay_ectrl;
      END IF;
    END IF;
  END PROCESS Delay_lowered_process;


  Delay_bypass_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay_last_value <= to_unsigned(16#0000#, 16);
      ELSIF enb = '1' THEN
        Delay_last_value <= Delay_out1;
      END IF;
    END IF;
  END PROCESS Delay_bypass_process;


  
  Delay_out1 <= Delay_last_value WHEN Enable = '0' ELSE
      Delay_delOut;

  Count <= std_logic_vector(Delay_out1);

END rtl;
