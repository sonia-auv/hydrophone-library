-- -------------------------------------------------------------
-- 
-- File Name: update_snr\hdlsrc\Test_DOA\Quadrant_Mapper.vhd
-- Created: 2022-06-02 22:44:38
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: Quadrant_Mapper
-- Source Path: Test_DOA/FFTs/FFT Hydro 1/HDL_CMA_core/Quadrant_Mapper
-- Hierarchy Level: 4
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY Quadrant_Mapper IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        xin                               :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
        yin                               :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
        xout                              :   OUT   std_logic_vector(17 DOWNTO 0);  -- sfix18
        yout                              :   OUT   std_logic_vector(17 DOWNTO 0);  -- sfix18
        QA_Control                        :   OUT   std_logic_vector(2 DOWNTO 0)  -- ufix3
        );
END Quadrant_Mapper;


ARCHITECTURE rtl OF Quadrant_Mapper IS

  -- Signals
  SIGNAL xin_signed                       : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL abs_y                            : signed(18 DOWNTO 0);  -- sfix19
  SIGNAL xAbs                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL xAbsReg                          : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yin_signed                       : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL abs_y_1                          : signed(18 DOWNTO 0);  -- sfix19
  SIGNAL yAbs                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yAbsReg                          : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL relop_relop1                     : std_logic;
  SIGNAL xout_tmp                         : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yout_tmp                         : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL in1reg                           : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zeros                            : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL relop_relop1_1                   : std_logic;
  SIGNAL in2reg                           : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL relop_relop1_2                   : std_logic;
  SIGNAL qcControl                        : unsigned(2 DOWNTO 0);  -- ufix3

BEGIN
  xin_signed <= signed(xin);

  
  abs_y <=  - (resize(xin_signed, 19)) WHEN xin_signed < to_signed(16#00000#, 18) ELSE
      resize(xin_signed, 19);
  xAbs <= abs_y(17 DOWNTO 0);

  DelayxAbs_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        xAbsReg <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        xAbsReg <= xAbs;
      END IF;
    END IF;
  END PROCESS DelayxAbs_process;


  yin_signed <= signed(yin);

  
  abs_y_1 <=  - (resize(yin_signed, 19)) WHEN yin_signed < to_signed(16#00000#, 18) ELSE
      resize(yin_signed, 19);
  yAbs <= abs_y_1(17 DOWNTO 0);

  DelayyAbs_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        yAbsReg <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        yAbsReg <= yAbs;
      END IF;
    END IF;
  END PROCESS DelayyAbs_process;


  
  relop_relop1 <= '1' WHEN xAbsReg > yAbsReg ELSE
      '0';

  
  xout_tmp <= yAbsReg WHEN relop_relop1 = '0' ELSE
      xAbsReg;

  xout <= std_logic_vector(xout_tmp);

  
  yout_tmp <= xAbsReg WHEN relop_relop1 = '0' ELSE
      yAbsReg;

  yout <= std_logic_vector(yout_tmp);

  Delayin1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        in1reg <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        in1reg <= xin_signed;
      END IF;
    END IF;
  END PROCESS Delayin1_process;


  zeros <= to_signed(16#00000#, 18);

  
  relop_relop1_1 <= '1' WHEN in1reg < zeros ELSE
      '0';

  Delayin2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        in2reg <= to_signed(16#00000#, 18);
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

