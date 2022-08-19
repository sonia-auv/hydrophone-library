-- -------------------------------------------------------------
-- 
-- File Name: update_snr\hdlsrc\Test_DOA\CordicKernelMag_block2.vhd
-- Created: 2022-06-02 22:44:38
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: CordicKernelMag_block2
-- Source Path: Test_DOA/FFTs/FFT Hydro Ref/HDL_CMA_core/CordicKernelMag
-- Hierarchy Level: 4
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY CordicKernelMag_block2 IS
  PORT( xin                               :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
        yin                               :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
        zin                               :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18_En17
        lut_value                         :   IN    std_logic_vector(16 DOWNTO 0);  -- ufix17_En17
        idx                               :   IN    std_logic_vector(4 DOWNTO 0);  -- ufix5
        xout                              :   OUT   std_logic_vector(17 DOWNTO 0);  -- sfix18
        yout                              :   OUT   std_logic_vector(17 DOWNTO 0);  -- sfix18
        zout                              :   OUT   std_logic_vector(17 DOWNTO 0)  -- sfix18_En17
        );
END CordicKernelMag_block2;


ARCHITECTURE rtl OF CordicKernelMag_block2 IS

  -- Signals
  SIGNAL yin_signed                       : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yLessThanZero                    : std_logic;
  SIGNAL xin_signed                       : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL idx_unsigned                     : unsigned(4 DOWNTO 0);  -- ufix5
  SIGNAL yShifted                         : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL xout2                            : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL xout1                            : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL xout_tmp                         : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL xShifted                         : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yout2                            : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yout1                            : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yout_tmp                         : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zin_signed                       : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL lut_value_unsigned               : unsigned(16 DOWNTO 0);  -- ufix17_En17
  SIGNAL ZAdder_add_cast                  : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL zout2                            : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL ZSub_sub_cast                    : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL zout1                            : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL zout_tmp                         : signed(17 DOWNTO 0);  -- sfix18_En17

BEGIN
  yin_signed <= signed(yin);

  
  yLessThanZero <= '1' WHEN yin_signed < to_signed(16#00000#, 18) ELSE
      '0';

  xin_signed <= signed(xin);

  idx_unsigned <= unsigned(idx);

  yShifted <= SHIFT_RIGHT(yin_signed, to_integer(idx_unsigned));

  xout2 <= xin_signed + yShifted;

  xout1 <= xin_signed - yShifted;

  
  xout_tmp <= xout2 WHEN yLessThanZero = '0' ELSE
      xout1;

  xout <= std_logic_vector(xout_tmp);

  xShifted <= SHIFT_RIGHT(xin_signed, to_integer(idx_unsigned));

  yout2 <= yin_signed - xShifted;

  yout1 <= yin_signed + xShifted;

  
  yout_tmp <= yout2 WHEN yLessThanZero = '0' ELSE
      yout1;

  yout <= std_logic_vector(yout_tmp);

  zin_signed <= signed(zin);

  lut_value_unsigned <= unsigned(lut_value);

  ZAdder_add_cast <= signed(resize(lut_value_unsigned, 18));
  zout2 <= zin_signed + ZAdder_add_cast;

  ZSub_sub_cast <= signed(resize(lut_value_unsigned, 18));
  zout1 <= zin_signed - ZSub_sub_cast;

  
  zout_tmp <= zout2 WHEN yLessThanZero = '0' ELSE
      zout1;

  zout <= std_logic_vector(zout_tmp);

END rtl;

