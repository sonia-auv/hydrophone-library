-- -------------------------------------------------------------
-- 
-- File Name: C:\Users\franc\OneDrive\Documents techniques\ETS\SONIA\Hydro software\Hydro_Update\slprj\hdlsrc\DOA_rearanged\Quadrant_Mapper_block2.vhd
-- Created: 2021-06-21 21:49:40
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: Quadrant_Mapper_block2
-- Source Path: DOA_rearanged/FFT Hydro Ref/HDL_CMA_core/Quadrant_Mapper
-- Hierarchy Level: 3
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY Quadrant_Mapper_block2 IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        xin                               :   IN    std_logic_vector(26 DOWNTO 0);  -- sfix27_En8
        yin                               :   IN    std_logic_vector(26 DOWNTO 0);  -- sfix27_En8
        xout                              :   OUT   std_logic_vector(26 DOWNTO 0);  -- sfix27_En8
        yout                              :   OUT   std_logic_vector(26 DOWNTO 0);  -- sfix27_En8
        QA_Control                        :   OUT   std_logic_vector(2 DOWNTO 0)  -- ufix3
        );
END Quadrant_Mapper_block2;


ARCHITECTURE rtl OF Quadrant_Mapper_block2 IS

  -- Signals
  SIGNAL xin_signed                       : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL abs_y                            : signed(27 DOWNTO 0);  -- sfix28_En8
  SIGNAL abs_cast                         : signed(27 DOWNTO 0);  -- sfix28_En8
  SIGNAL xAbs                             : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL xAbsReg                          : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL yin_signed                       : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL abs_y_1                          : signed(27 DOWNTO 0);  -- sfix28_En8
  SIGNAL abs_cast_1                       : signed(27 DOWNTO 0);  -- sfix28_En8
  SIGNAL yAbs                             : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL yAbsReg                          : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL relop_relop1                     : std_logic;
  SIGNAL xout_1                           : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL yout_1                           : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL in1reg                           : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL zeros                            : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL relop_relop1_1                   : std_logic;
  SIGNAL in2reg                           : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL relop_relop1_2                   : std_logic;
  SIGNAL qcControl                        : unsigned(2 DOWNTO 0);  -- ufix3

BEGIN
  xin_signed <= signed(xin);

  abs_cast <= resize(xin_signed, 28);
  
  abs_y <=  - (abs_cast) WHEN xin_signed < to_signed(16#0000000#, 27) ELSE
      resize(xin_signed, 28);
  xAbs <= abs_y(26 DOWNTO 0);

  DelayxAbs_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        xAbsReg <= to_signed(16#0000000#, 27);
      ELSIF enb = '1' THEN
        xAbsReg <= xAbs;
      END IF;
    END IF;
  END PROCESS DelayxAbs_process;


  yin_signed <= signed(yin);

  abs_cast_1 <= resize(yin_signed, 28);
  
  abs_y_1 <=  - (abs_cast_1) WHEN yin_signed < to_signed(16#0000000#, 27) ELSE
      resize(yin_signed, 28);
  yAbs <= abs_y_1(26 DOWNTO 0);

  DelayyAbs_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        yAbsReg <= to_signed(16#0000000#, 27);
      ELSIF enb = '1' THEN
        yAbsReg <= yAbs;
      END IF;
    END IF;
  END PROCESS DelayyAbs_process;


  
  relop_relop1 <= '1' WHEN xAbsReg > yAbsReg ELSE
      '0';

  
  xout_1 <= yAbsReg WHEN relop_relop1 = '0' ELSE
      xAbsReg;

  xout <= std_logic_vector(xout_1);

  
  yout_1 <= xAbsReg WHEN relop_relop1 = '0' ELSE
      yAbsReg;

  yout <= std_logic_vector(yout_1);

  Delayin1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        in1reg <= to_signed(16#0000000#, 27);
      ELSIF enb = '1' THEN
        in1reg <= xin_signed;
      END IF;
    END IF;
  END PROCESS Delayin1_process;


  zeros <= to_signed(16#0000000#, 27);

  
  relop_relop1_1 <= '1' WHEN in1reg < zeros ELSE
      '0';

  Delayin2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        in2reg <= to_signed(16#0000000#, 27);
      ELSIF enb = '1' THEN
        in2reg <= yin_signed;
      END IF;
    END IF;
  END PROCESS Delayin2_process;


  
  relop_relop1_2 <= '1' WHEN in2reg < zeros ELSE
      '0';

  qcControl <= unsigned'(relop_relop1 & relop_relop1_1 & relop_relop1_2);

  QA_Control <= std_logic_vector(qcControl);

END rtl;

