-- -------------------------------------------------------------
-- 
-- File Name: C:\Users\franc\OneDrive\Documents techniques\ETS\SONIA\Hydro software\Hydro_Update\slprj\hdlsrc\DOA_rearanged\Subsystem_block1.vhd
-- Created: 2021-06-21 21:49:40
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: Subsystem_block1
-- Source Path: DOA_rearanged/Maximum Hydro 3/Subsystem
-- Hierarchy Level: 2
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY Subsystem_block1 IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        Enable_Reset                      :   IN    std_logic;
        Count                             :   OUT   std_logic_vector(16 DOWNTO 0)  -- ufix17
        );
END Subsystem_block1;


ARCHITECTURE rtl OF Subsystem_block1 IS

  -- Signals
  SIGNAL Product2_out1                    : unsigned(16 DOWNTO 0);  -- ufix17
  SIGNAL Data_Type_Conversion1_out1       : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL Add_add_cast                     : unsigned(16 DOWNTO 0);  -- ufix17
  SIGNAL Add_out1                         : unsigned(16 DOWNTO 0);  -- ufix17
  SIGNAL Product2_out1_1                  : unsigned(16 DOWNTO 0);  -- ufix17

BEGIN
  Data_Type_Conversion1_out1 <= Product2_out1(15 DOWNTO 0);

  Add_add_cast <= '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & Enable_Reset;
  Add_out1 <= Add_add_cast + resize(Data_Type_Conversion1_out1, 17);

  
  Product2_out1_1 <= Add_out1 WHEN Enable_Reset = '1' ELSE
      to_unsigned(16#00000#, 17);

  PipelineRegister_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Product2_out1 <= to_unsigned(16#00000#, 17);
      ELSIF enb = '1' THEN
        Product2_out1 <= Product2_out1_1;
      END IF;
    END IF;
  END PROCESS PipelineRegister_process;


  Count <= std_logic_vector(Product2_out1);

END rtl;

