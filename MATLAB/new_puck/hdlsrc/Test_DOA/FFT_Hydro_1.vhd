-- -------------------------------------------------------------
-- 
-- File Name: new_puck\hdlsrc\Test_DOA\FFT_Hydro_1.vhd
-- Created: 2022-04-28 11:14:20
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: FFT_Hydro_1
-- Source Path: Test_DOA/FFTs/FFT Hydro 1
-- Hierarchy Level: 2
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY FFT_Hydro_1 IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        Data                              :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
        Valid_in                          :   IN    std_logic;
        Magnitude                         :   OUT   std_logic_vector(17 DOWNTO 0);  -- sfix18
        Phase                             :   OUT   std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
        Valid_out                         :   OUT   std_logic
        );
END FFT_Hydro_1;


ARCHITECTURE rtl OF FFT_Hydro_1 IS

  -- Component Declarations
  COMPONENT FFT_HDL_Optimized
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          dataIn                          :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
          validIn                         :   IN    std_logic;
          dataOut_re                      :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          dataOut_im                      :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          validOut                        :   OUT   std_logic
          );
  END COMPONENT;

  COMPONENT HDL_CMA_core
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          In_re                           :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          In_im                           :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          validIn                         :   IN    std_logic;
          magnitude                       :   OUT   std_logic_vector(17 DOWNTO 0);  -- sfix18
          angle                           :   OUT   std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
          validOut                        :   OUT   std_logic
          );
  END COMPONENT;

  -- Component Configuration Statements
  FOR ALL : FFT_HDL_Optimized
    USE ENTITY work.FFT_HDL_Optimized(rtl);

  FOR ALL : HDL_CMA_core
    USE ENTITY work.HDL_CMA_core(rtl);

  -- Signals
  SIGNAL FFT_HDL_Optimized_out1_re        : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL FFT_HDL_Optimized_out1_im        : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL FFT_HDL_Optimized_out3           : std_logic;
  SIGNAL Complex_to_Magnitude_Angle_HDL_Optimized_out1 : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL Complex_to_Magnitude_Angle_HDL_Optimized_out2 : std_logic_vector(19 DOWNTO 0);  -- ufix20
  SIGNAL Complex_to_Magnitude_Angle_HDL_Optimized_out3 : std_logic;

BEGIN
  u_FFT_HDL_Optimized : FFT_HDL_Optimized
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              dataIn => Data,  -- uint16
              validIn => Valid_in,
              dataOut_re => FFT_HDL_Optimized_out1_re,  -- sfix17
              dataOut_im => FFT_HDL_Optimized_out1_im,  -- sfix17
              validOut => FFT_HDL_Optimized_out3
              );

  u_Complex_to_Magnitude_Angle_HDL_Optimized : HDL_CMA_core
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              In_re => FFT_HDL_Optimized_out1_re,  -- sfix17
              In_im => FFT_HDL_Optimized_out1_im,  -- sfix17
              validIn => FFT_HDL_Optimized_out3,
              magnitude => Complex_to_Magnitude_Angle_HDL_Optimized_out1,  -- sfix18
              angle => Complex_to_Magnitude_Angle_HDL_Optimized_out2,  -- sfix20_En17
              validOut => Complex_to_Magnitude_Angle_HDL_Optimized_out3
              );

  Magnitude <= Complex_to_Magnitude_Angle_HDL_Optimized_out1;

  Phase <= Complex_to_Magnitude_Angle_HDL_Optimized_out2;

  Valid_out <= Complex_to_Magnitude_Angle_HDL_Optimized_out3;

END rtl;

