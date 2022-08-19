-- -------------------------------------------------------------
-- 
-- File Name: new_puck\hdlsrc\Test_DOA\Quadrant_Correction.vhd
-- Created: 2022-04-28 11:14:20
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: Quadrant_Correction
-- Source Path: Test_DOA/FFTs/FFT Hydro 1/HDL_CMA_core/Quadrant_Correction
-- Hierarchy Level: 4
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY Quadrant_Correction IS
  PORT( zin                               :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18_En17
        QA_Control                        :   IN    std_logic_vector(2 DOWNTO 0);  -- ufix3
        zout                              :   OUT   std_logic_vector(19 DOWNTO 0)  -- sfix20_En17
        );
END Quadrant_Correction;


ARCHITECTURE rtl OF Quadrant_Correction IS

  -- Signals
  SIGNAL QA_Control_unsigned              : unsigned(2 DOWNTO 0);  -- ufix3
  SIGNAL xyNegative                       : unsigned(1 DOWNTO 0);  -- ufix2
  SIGNAL AbsRel                           : std_logic;  -- ufix1
  SIGNAL pidivtwo                         : signed(19 DOWNTO 0);  -- sfix20_En17
  SIGNAL zin_signed                       : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL zCast                            : signed(19 DOWNTO 0);  -- sfix20_En17
  SIGNAL pivdivtwosubout                  : signed(19 DOWNTO 0);  -- sfix20_En17
  SIGNAL mux1out                          : signed(19 DOWNTO 0);  -- sfix20_En17
  SIGNAL Negation_cast                    : signed(20 DOWNTO 0);  -- sfix21_En17
  SIGNAL Negation_cast_1                  : signed(20 DOWNTO 0);  -- sfix21_En17
  SIGNAL Negation_cast_2                  : signed(21 DOWNTO 0);  -- sfix22_En17
  SIGNAL mux1out_negate                   : signed(19 DOWNTO 0);  -- sfix20_En17
  SIGNAL pionepos                         : signed(19 DOWNTO 0);  -- sfix20_En17
  SIGNAL pi_subtraction                   : signed(19 DOWNTO 0);  -- sfix20_En17
  SIGNAL pioneneg                         : signed(19 DOWNTO 0);  -- sfix20_En17
  SIGNAL negpi_addition                   : signed(19 DOWNTO 0);  -- sfix20_En17
  SIGNAL mux2out                          : signed(19 DOWNTO 0);  -- sfix20_En17

BEGIN
  QA_Control_unsigned <= unsigned(QA_Control);

  xyNegative <= QA_Control_unsigned(1 DOWNTO 0);

  AbsRel <= QA_Control_unsigned(2);

  pidivtwo <= to_signed(16#3243F#, 20);

  zin_signed <= signed(zin);

  zCast <= resize(zin_signed, 20);

  pivdivtwosubout <= pidivtwo - zCast;

  
  mux1out <= pivdivtwosubout WHEN AbsRel = '0' ELSE
      zCast;

  Negation_cast <= resize(mux1out, 21);
  Negation_cast_1 <=  - (Negation_cast);
  Negation_cast_2 <= resize(Negation_cast_1, 22);
  mux1out_negate <= Negation_cast_2(19 DOWNTO 0);

  pionepos <= to_signed(16#6487E#, 20);

  pi_subtraction <= pionepos - mux1out;

  pioneneg <= to_signed(-16#6487F#, 20);

  negpi_addition <= pioneneg + mux1out;

  
  mux2out <= mux1out WHEN xyNegative = to_unsigned(16#0#, 2) ELSE
      mux1out_negate WHEN xyNegative = to_unsigned(16#1#, 2) ELSE
      pi_subtraction WHEN xyNegative = to_unsigned(16#2#, 2) ELSE
      negpi_addition;

  zout <= std_logic_vector(mux2out);

END rtl;

