-- -------------------------------------------------------------
-- 
-- File Name: rot_x\hdlsrc\Test_DOA\Subsystem.vhd
-- Created: 2022-06-08 14:13:23
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: Subsystem
-- Source Path: Test_DOA/Maximum Hydro 1/Subsystem
-- Hierarchy Level: 2
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY Subsystem IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        Enable_Reset                      :   IN    std_logic;
        Count                             :   OUT   std_logic_vector(16 DOWNTO 0)  -- ufix17
        );
END Subsystem;


ARCHITECTURE rtl OF Subsystem IS

  -- Signals
  SIGNAL Delay_out1                       : unsigned(16 DOWNTO 0);  -- ufix17
  SIGNAL Data_Type_Conversion1_out1       : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL Add_add_cast                     : unsigned(16 DOWNTO 0);  -- ufix17
  SIGNAL Add_out1                         : unsigned(16 DOWNTO 0);  -- ufix17
  SIGNAL Product2_out1                    : unsigned(16 DOWNTO 0);  -- ufix17

BEGIN
  Data_Type_Conversion1_out1 <= Delay_out1(15 DOWNTO 0);

  Add_add_cast <= '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & Enable_Reset;
  Add_out1 <= Add_add_cast + resize(Data_Type_Conversion1_out1, 17);

  
  Product2_out1 <= Add_out1 WHEN Enable_Reset = '1' ELSE
      to_unsigned(16#00000#, 17);

  Delay_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay_out1 <= to_unsigned(16#00000#, 17);
      ELSIF enb = '1' THEN
        Delay_out1 <= Product2_out1;
      END IF;
    END IF;
  END PROCESS Delay_process;


  Count <= std_logic_vector(Delay_out1);

END rtl;

