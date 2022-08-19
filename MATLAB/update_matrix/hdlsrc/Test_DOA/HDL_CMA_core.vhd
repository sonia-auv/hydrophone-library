-- -------------------------------------------------------------
-- 
-- File Name: update_matrix\hdlsrc\Test_DOA\HDL_CMA_core.vhd
-- Created: 2022-06-02 22:46:35
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: HDL_CMA_core
-- Source Path: Test_DOA/FFTs/FFT Hydro 1/HDL_CMA_core
-- Hierarchy Level: 3
-- 
-- Complex to Magnitude-Angle HDL Optimized
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;
USE work.Test_DOA_pkg.ALL;

ENTITY HDL_CMA_core IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        In_re                             :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        In_im                             :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
        validIn                           :   IN    std_logic;
        magnitude                         :   OUT   std_logic_vector(17 DOWNTO 0);  -- sfix18
        angle                             :   OUT   std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
        validOut                          :   OUT   std_logic
        );
END HDL_CMA_core;


ARCHITECTURE rtl OF HDL_CMA_core IS

  -- Component Declarations
  COMPONENT Quadrant_Mapper
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          xin                             :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
          yin                             :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
          xout                            :   OUT   std_logic_vector(17 DOWNTO 0);  -- sfix18
          yout                            :   OUT   std_logic_vector(17 DOWNTO 0);  -- sfix18
          QA_Control                      :   OUT   std_logic_vector(2 DOWNTO 0)  -- ufix3
          );
  END COMPONENT;

  COMPONENT CordicKernelMag
    PORT( xin                             :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
          yin                             :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
          zin                             :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18_En17
          lut_value                       :   IN    std_logic_vector(16 DOWNTO 0);  -- ufix17_En17
          idx                             :   IN    std_logic_vector(4 DOWNTO 0);  -- ufix5
          xout                            :   OUT   std_logic_vector(17 DOWNTO 0);  -- sfix18
          yout                            :   OUT   std_logic_vector(17 DOWNTO 0);  -- sfix18
          zout                            :   OUT   std_logic_vector(17 DOWNTO 0)  -- sfix18_En17
          );
  END COMPONENT;

  COMPONENT Quadrant_Correction
    PORT( zin                             :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18_En17
          QA_Control                      :   IN    std_logic_vector(2 DOWNTO 0);  -- ufix3
          zout                            :   OUT   std_logic_vector(19 DOWNTO 0)  -- sfix20_En17
          );
  END COMPONENT;

  -- Component Configuration Statements
  FOR ALL : Quadrant_Mapper
    USE ENTITY work.Quadrant_Mapper(rtl);

  FOR ALL : CordicKernelMag
    USE ENTITY work.CordicKernelMag(rtl);

  FOR ALL : Quadrant_Correction
    USE ENTITY work.Quadrant_Correction(rtl);

  -- Signals
  SIGNAL Delay_ValidIn_reg                : std_logic_vector(0 TO 14);  -- ufix1 [15]
  SIGNAL ValidOutDelayed                  : std_logic;
  SIGNAL reset_outval                     : std_logic;
  SIGNAL In_re_signed                     : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL In_im_signed                     : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL qMapReal                         : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL qMapImag                         : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL In1Register                      : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL In2Register                      : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL XQMapped                         : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL yQMapped                         : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL ControlQC                        : std_logic_vector(2 DOWNTO 0);  -- ufix3
  SIGNAL XQMapped_signed                  : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yQMapped_signed                  : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL xin1                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yin1                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zin1                             : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL lut_value1                       : unsigned(16 DOWNTO 0);  -- ufix17_En17
  SIGNAL shift1                           : unsigned(4 DOWNTO 0);  -- ufix5
  SIGNAL xout1                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL yout1                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL zout1                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL xout1_signed                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yout1_signed                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zout1_signed                     : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL xin2                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yin2                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zin2                             : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL lut_value2                       : unsigned(16 DOWNTO 0);  -- ufix17_En17
  SIGNAL shift2                           : unsigned(4 DOWNTO 0);  -- ufix5
  SIGNAL xout2                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL yout2                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL zout2                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL xout2_signed                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yout2_signed                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zout2_signed                     : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL xin3                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yin3                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zin3                             : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL lut_value3                       : unsigned(16 DOWNTO 0);  -- ufix17_En17
  SIGNAL shift3                           : unsigned(4 DOWNTO 0);  -- ufix5
  SIGNAL xout3                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL yout3                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL zout3                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL xout3_signed                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yout3_signed                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zout3_signed                     : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL xin4                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yin4                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zin4                             : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL lut_value4                       : unsigned(16 DOWNTO 0);  -- ufix17_En17
  SIGNAL shift4                           : unsigned(4 DOWNTO 0);  -- ufix5
  SIGNAL xout4                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL yout4                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL zout4                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL xout4_signed                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yout4_signed                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zout4_signed                     : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL xin5                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yin5                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zin5                             : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL lut_value5                       : unsigned(16 DOWNTO 0);  -- ufix17_En17
  SIGNAL shift5                           : unsigned(4 DOWNTO 0);  -- ufix5
  SIGNAL xout5                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL yout5                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL zout5                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL xout5_signed                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yout5_signed                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zout5_signed                     : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL xin6                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yin6                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zin6                             : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL lut_value6                       : unsigned(16 DOWNTO 0);  -- ufix17_En17
  SIGNAL shift6                           : unsigned(4 DOWNTO 0);  -- ufix5
  SIGNAL xout6                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL yout6                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL zout6                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL xout6_signed                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yout6_signed                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zout6_signed                     : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL xin7                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yin7                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zin7                             : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL lut_value7                       : unsigned(16 DOWNTO 0);  -- ufix17_En17
  SIGNAL shift7                           : unsigned(4 DOWNTO 0);  -- ufix5
  SIGNAL xout7                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL yout7                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL zout7                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL xout7_signed                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yout7_signed                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zout7_signed                     : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL xin8                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yin8                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zin8                             : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL lut_value8                       : unsigned(16 DOWNTO 0);  -- ufix17_En17
  SIGNAL shift8                           : unsigned(4 DOWNTO 0);  -- ufix5
  SIGNAL xout8                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL yout8                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL zout8                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL xout8_signed                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yout8_signed                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zout8_signed                     : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL xin9                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yin9                             : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zin9                             : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL lut_value9                       : unsigned(16 DOWNTO 0);  -- ufix17_En17
  SIGNAL shift9                           : unsigned(4 DOWNTO 0);  -- ufix5
  SIGNAL xout9                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL yout9                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL zout9                            : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL xout9_signed                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yout9_signed                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zout9_signed                     : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL xin10                            : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yin10                            : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zin10                            : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL lut_value10                      : unsigned(16 DOWNTO 0);  -- ufix17_En17
  SIGNAL shift10                          : unsigned(4 DOWNTO 0);  -- ufix5
  SIGNAL xout10                           : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL yout10                           : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL zout10                           : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL xout10_signed                    : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yout10_signed                    : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zout10_signed                    : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL xin11                            : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yin11                            : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zin11                            : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL lut_value11                      : unsigned(16 DOWNTO 0);  -- ufix17_En17
  SIGNAL shift11                          : unsigned(4 DOWNTO 0);  -- ufix5
  SIGNAL xout11                           : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL yout11                           : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL zout11                           : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL xout11_signed                    : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yout11_signed                    : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zout11_signed                    : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL xin12                            : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL yin12                            : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zin12                            : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL lut_value12                      : unsigned(16 DOWNTO 0);  -- ufix17_En17
  SIGNAL shift12                          : unsigned(4 DOWNTO 0);  -- ufix5
  SIGNAL xout12                           : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL yout12                           : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL zout12                           : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL xout12_signed                    : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL xin13                            : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL CSD_Gain_Factor_mul_temp         : signed(33 DOWNTO 0);  -- sfix34_En15
  SIGNAL CSD_Gain_Factor_cast             : signed(32 DOWNTO 0);  -- sfix33_En15
  SIGNAL xoutscaled                       : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zeroC                            : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL outSwitchMag                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL xin14                            : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL zout12_signed                    : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL ControlQC_unsigned               : unsigned(2 DOWNTO 0);  -- ufix3
  SIGNAL zin13                            : signed(17 DOWNTO 0);  -- sfix18_En17
  SIGNAL DelayQC_Control_reg              : vector_of_unsigned3(0 TO 12);  -- ufix3 [13]
  SIGNAL ControlQCDelay                   : unsigned(2 DOWNTO 0);  -- ufix3
  SIGNAL zout_corrected                   : std_logic_vector(19 DOWNTO 0);  -- ufix20
  SIGNAL zout_corrected_signed            : signed(19 DOWNTO 0);  -- sfix20_En17
  SIGNAL zeroCA                           : signed(19 DOWNTO 0);  -- sfix20_En17
  SIGNAL outSwitchAng                     : signed(19 DOWNTO 0);  -- sfix20_En17
  SIGNAL zout_corrected_1                 : signed(19 DOWNTO 0);  -- sfix20_En17

BEGIN
  u_QuadrantMapper : Quadrant_Mapper
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              xin => std_logic_vector(In1Register),  -- sfix18
              yin => std_logic_vector(In2Register),  -- sfix18
              xout => XQMapped,  -- sfix18
              yout => yQMapped,  -- sfix18
              QA_Control => ControlQC  -- ufix3
              );

  u_Iteration : CordicKernelMag
    PORT MAP( xin => std_logic_vector(xin1),  -- sfix18
              yin => std_logic_vector(yin1),  -- sfix18
              zin => std_logic_vector(zin1),  -- sfix18_En17
              lut_value => std_logic_vector(lut_value1),  -- ufix17_En17
              idx => std_logic_vector(shift1),  -- ufix5
              xout => xout1,  -- sfix18
              yout => yout1,  -- sfix18
              zout => zout1  -- sfix18_En17
              );

  u_Iteration_1 : CordicKernelMag
    PORT MAP( xin => std_logic_vector(xin2),  -- sfix18
              yin => std_logic_vector(yin2),  -- sfix18
              zin => std_logic_vector(zin2),  -- sfix18_En17
              lut_value => std_logic_vector(lut_value2),  -- ufix17_En17
              idx => std_logic_vector(shift2),  -- ufix5
              xout => xout2,  -- sfix18
              yout => yout2,  -- sfix18
              zout => zout2  -- sfix18_En17
              );

  u_Iteration_2 : CordicKernelMag
    PORT MAP( xin => std_logic_vector(xin3),  -- sfix18
              yin => std_logic_vector(yin3),  -- sfix18
              zin => std_logic_vector(zin3),  -- sfix18_En17
              lut_value => std_logic_vector(lut_value3),  -- ufix17_En17
              idx => std_logic_vector(shift3),  -- ufix5
              xout => xout3,  -- sfix18
              yout => yout3,  -- sfix18
              zout => zout3  -- sfix18_En17
              );

  u_Iteration_3 : CordicKernelMag
    PORT MAP( xin => std_logic_vector(xin4),  -- sfix18
              yin => std_logic_vector(yin4),  -- sfix18
              zin => std_logic_vector(zin4),  -- sfix18_En17
              lut_value => std_logic_vector(lut_value4),  -- ufix17_En17
              idx => std_logic_vector(shift4),  -- ufix5
              xout => xout4,  -- sfix18
              yout => yout4,  -- sfix18
              zout => zout4  -- sfix18_En17
              );

  u_Iteration_4 : CordicKernelMag
    PORT MAP( xin => std_logic_vector(xin5),  -- sfix18
              yin => std_logic_vector(yin5),  -- sfix18
              zin => std_logic_vector(zin5),  -- sfix18_En17
              lut_value => std_logic_vector(lut_value5),  -- ufix17_En17
              idx => std_logic_vector(shift5),  -- ufix5
              xout => xout5,  -- sfix18
              yout => yout5,  -- sfix18
              zout => zout5  -- sfix18_En17
              );

  u_Iteration_5 : CordicKernelMag
    PORT MAP( xin => std_logic_vector(xin6),  -- sfix18
              yin => std_logic_vector(yin6),  -- sfix18
              zin => std_logic_vector(zin6),  -- sfix18_En17
              lut_value => std_logic_vector(lut_value6),  -- ufix17_En17
              idx => std_logic_vector(shift6),  -- ufix5
              xout => xout6,  -- sfix18
              yout => yout6,  -- sfix18
              zout => zout6  -- sfix18_En17
              );

  u_Iteration_6 : CordicKernelMag
    PORT MAP( xin => std_logic_vector(xin7),  -- sfix18
              yin => std_logic_vector(yin7),  -- sfix18
              zin => std_logic_vector(zin7),  -- sfix18_En17
              lut_value => std_logic_vector(lut_value7),  -- ufix17_En17
              idx => std_logic_vector(shift7),  -- ufix5
              xout => xout7,  -- sfix18
              yout => yout7,  -- sfix18
              zout => zout7  -- sfix18_En17
              );

  u_Iteration_7 : CordicKernelMag
    PORT MAP( xin => std_logic_vector(xin8),  -- sfix18
              yin => std_logic_vector(yin8),  -- sfix18
              zin => std_logic_vector(zin8),  -- sfix18_En17
              lut_value => std_logic_vector(lut_value8),  -- ufix17_En17
              idx => std_logic_vector(shift8),  -- ufix5
              xout => xout8,  -- sfix18
              yout => yout8,  -- sfix18
              zout => zout8  -- sfix18_En17
              );

  u_Iteration_8 : CordicKernelMag
    PORT MAP( xin => std_logic_vector(xin9),  -- sfix18
              yin => std_logic_vector(yin9),  -- sfix18
              zin => std_logic_vector(zin9),  -- sfix18_En17
              lut_value => std_logic_vector(lut_value9),  -- ufix17_En17
              idx => std_logic_vector(shift9),  -- ufix5
              xout => xout9,  -- sfix18
              yout => yout9,  -- sfix18
              zout => zout9  -- sfix18_En17
              );

  u_Iteration_9 : CordicKernelMag
    PORT MAP( xin => std_logic_vector(xin10),  -- sfix18
              yin => std_logic_vector(yin10),  -- sfix18
              zin => std_logic_vector(zin10),  -- sfix18_En17
              lut_value => std_logic_vector(lut_value10),  -- ufix17_En17
              idx => std_logic_vector(shift10),  -- ufix5
              xout => xout10,  -- sfix18
              yout => yout10,  -- sfix18
              zout => zout10  -- sfix18_En17
              );

  u_Iteration_10 : CordicKernelMag
    PORT MAP( xin => std_logic_vector(xin11),  -- sfix18
              yin => std_logic_vector(yin11),  -- sfix18
              zin => std_logic_vector(zin11),  -- sfix18_En17
              lut_value => std_logic_vector(lut_value11),  -- ufix17_En17
              idx => std_logic_vector(shift11),  -- ufix5
              xout => xout11,  -- sfix18
              yout => yout11,  -- sfix18
              zout => zout11  -- sfix18_En17
              );

  u_Iteration_11 : CordicKernelMag
    PORT MAP( xin => std_logic_vector(xin12),  -- sfix18
              yin => std_logic_vector(yin12),  -- sfix18
              zin => std_logic_vector(zin12),  -- sfix18_En17
              lut_value => std_logic_vector(lut_value12),  -- ufix17_En17
              idx => std_logic_vector(shift12),  -- ufix5
              xout => xout12,  -- sfix18
              yout => yout12,  -- sfix18
              zout => zout12  -- sfix18_En17
              );

  u_QuadrantCorrection : Quadrant_Correction
    PORT MAP( zin => std_logic_vector(zin13),  -- sfix18_En17
              QA_Control => std_logic_vector(ControlQCDelay),  -- ufix3
              zout => zout_corrected  -- sfix20_En17
              );

  Delay_ValidIn_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay_ValidIn_reg <= (OTHERS => '0');
      ELSIF enb = '1' THEN
        Delay_ValidIn_reg(0) <= validIn;
        Delay_ValidIn_reg(1 TO 14) <= Delay_ValidIn_reg(0 TO 13);
      END IF;
    END IF;
  END PROCESS Delay_ValidIn_process;

  ValidOutDelayed <= Delay_ValidIn_reg(14);

  reset_outval <=  NOT ValidOutDelayed;

  In_re_signed <= signed(In_re);

  qMapReal <= resize(In_re_signed, 18);

  In_im_signed <= signed(In_im);

  qMapImag <= resize(In_im_signed, 18);

  DelayRealInput_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        In1Register <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        In1Register <= qMapReal;
      END IF;
    END IF;
  END PROCESS DelayRealInput_process;


  DelayImagInput_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        In2Register <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        In2Register <= qMapImag;
      END IF;
    END IF;
  END PROCESS DelayImagInput_process;


  XQMapped_signed <= signed(XQMapped);

  yQMapped_signed <= signed(yQMapped);

  DelayQuadMapper1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        xin1 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        xin1 <= XQMapped_signed;
      END IF;
    END IF;
  END PROCESS DelayQuadMapper1_process;


  DelayQuadMapper2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        yin1 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        yin1 <= yQMapped_signed;
      END IF;
    END IF;
  END PROCESS DelayQuadMapper2_process;


  zin1 <= to_signed(16#00000#, 18);

  lut_value1 <= to_unsigned(16#0ED63#, 17);

  shift1 <= to_unsigned(16#01#, 5);

  xout1_signed <= signed(xout1);

  yout1_signed <= signed(yout1);

  zout1_signed <= signed(zout1);

  Pipeline1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        xin2 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        xin2 <= xout1_signed;
      END IF;
    END IF;
  END PROCESS Pipeline1_process;


  Pipeline1_1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        yin2 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        yin2 <= yout1_signed;
      END IF;
    END IF;
  END PROCESS Pipeline1_1_process;


  Pipeline1_2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        zin2 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        zin2 <= zout1_signed;
      END IF;
    END IF;
  END PROCESS Pipeline1_2_process;


  lut_value2 <= to_unsigned(16#07D6E#, 17);

  shift2 <= to_unsigned(16#02#, 5);

  xout2_signed <= signed(xout2);

  yout2_signed <= signed(yout2);

  zout2_signed <= signed(zout2);

  Pipeline2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        xin3 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        xin3 <= xout2_signed;
      END IF;
    END IF;
  END PROCESS Pipeline2_process;


  Pipeline2_1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        yin3 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        yin3 <= yout2_signed;
      END IF;
    END IF;
  END PROCESS Pipeline2_1_process;


  Pipeline2_2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        zin3 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        zin3 <= zout2_signed;
      END IF;
    END IF;
  END PROCESS Pipeline2_2_process;


  lut_value3 <= to_unsigned(16#03FAB#, 17);

  shift3 <= to_unsigned(16#03#, 5);

  xout3_signed <= signed(xout3);

  yout3_signed <= signed(yout3);

  zout3_signed <= signed(zout3);

  Pipeline3_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        xin4 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        xin4 <= xout3_signed;
      END IF;
    END IF;
  END PROCESS Pipeline3_process;


  Pipeline3_1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        yin4 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        yin4 <= yout3_signed;
      END IF;
    END IF;
  END PROCESS Pipeline3_1_process;


  Pipeline3_2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        zin4 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        zin4 <= zout3_signed;
      END IF;
    END IF;
  END PROCESS Pipeline3_2_process;


  lut_value4 <= to_unsigned(16#01FF5#, 17);

  shift4 <= to_unsigned(16#04#, 5);

  xout4_signed <= signed(xout4);

  yout4_signed <= signed(yout4);

  zout4_signed <= signed(zout4);

  Pipeline4_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        xin5 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        xin5 <= xout4_signed;
      END IF;
    END IF;
  END PROCESS Pipeline4_process;


  Pipeline4_1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        yin5 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        yin5 <= yout4_signed;
      END IF;
    END IF;
  END PROCESS Pipeline4_1_process;


  Pipeline4_2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        zin5 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        zin5 <= zout4_signed;
      END IF;
    END IF;
  END PROCESS Pipeline4_2_process;


  lut_value5 <= to_unsigned(16#00FFF#, 17);

  shift5 <= to_unsigned(16#05#, 5);

  xout5_signed <= signed(xout5);

  yout5_signed <= signed(yout5);

  zout5_signed <= signed(zout5);

  Pipeline5_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        xin6 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        xin6 <= xout5_signed;
      END IF;
    END IF;
  END PROCESS Pipeline5_process;


  Pipeline5_1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        yin6 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        yin6 <= yout5_signed;
      END IF;
    END IF;
  END PROCESS Pipeline5_1_process;


  Pipeline5_2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        zin6 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        zin6 <= zout5_signed;
      END IF;
    END IF;
  END PROCESS Pipeline5_2_process;


  lut_value6 <= to_unsigned(16#00800#, 17);

  shift6 <= to_unsigned(16#06#, 5);

  xout6_signed <= signed(xout6);

  yout6_signed <= signed(yout6);

  zout6_signed <= signed(zout6);

  Pipeline6_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        xin7 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        xin7 <= xout6_signed;
      END IF;
    END IF;
  END PROCESS Pipeline6_process;


  Pipeline6_1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        yin7 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        yin7 <= yout6_signed;
      END IF;
    END IF;
  END PROCESS Pipeline6_1_process;


  Pipeline6_2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        zin7 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        zin7 <= zout6_signed;
      END IF;
    END IF;
  END PROCESS Pipeline6_2_process;


  lut_value7 <= to_unsigned(16#00400#, 17);

  shift7 <= to_unsigned(16#07#, 5);

  xout7_signed <= signed(xout7);

  yout7_signed <= signed(yout7);

  zout7_signed <= signed(zout7);

  Pipeline7_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        xin8 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        xin8 <= xout7_signed;
      END IF;
    END IF;
  END PROCESS Pipeline7_process;


  Pipeline7_1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        yin8 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        yin8 <= yout7_signed;
      END IF;
    END IF;
  END PROCESS Pipeline7_1_process;


  Pipeline7_2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        zin8 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        zin8 <= zout7_signed;
      END IF;
    END IF;
  END PROCESS Pipeline7_2_process;


  lut_value8 <= to_unsigned(16#00200#, 17);

  shift8 <= to_unsigned(16#08#, 5);

  xout8_signed <= signed(xout8);

  yout8_signed <= signed(yout8);

  zout8_signed <= signed(zout8);

  Pipeline8_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        xin9 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        xin9 <= xout8_signed;
      END IF;
    END IF;
  END PROCESS Pipeline8_process;


  Pipeline8_1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        yin9 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        yin9 <= yout8_signed;
      END IF;
    END IF;
  END PROCESS Pipeline8_1_process;


  Pipeline8_2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        zin9 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        zin9 <= zout8_signed;
      END IF;
    END IF;
  END PROCESS Pipeline8_2_process;


  lut_value9 <= to_unsigned(16#00100#, 17);

  shift9 <= to_unsigned(16#09#, 5);

  xout9_signed <= signed(xout9);

  yout9_signed <= signed(yout9);

  zout9_signed <= signed(zout9);

  Pipeline9_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        xin10 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        xin10 <= xout9_signed;
      END IF;
    END IF;
  END PROCESS Pipeline9_process;


  Pipeline9_1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        yin10 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        yin10 <= yout9_signed;
      END IF;
    END IF;
  END PROCESS Pipeline9_1_process;


  Pipeline9_2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        zin10 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        zin10 <= zout9_signed;
      END IF;
    END IF;
  END PROCESS Pipeline9_2_process;


  lut_value10 <= to_unsigned(16#00080#, 17);

  shift10 <= to_unsigned(16#0A#, 5);

  xout10_signed <= signed(xout10);

  yout10_signed <= signed(yout10);

  zout10_signed <= signed(zout10);

  Pipeline10_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        xin11 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        xin11 <= xout10_signed;
      END IF;
    END IF;
  END PROCESS Pipeline10_process;


  Pipeline10_1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        yin11 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        yin11 <= yout10_signed;
      END IF;
    END IF;
  END PROCESS Pipeline10_1_process;


  Pipeline10_2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        zin11 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        zin11 <= zout10_signed;
      END IF;
    END IF;
  END PROCESS Pipeline10_2_process;


  lut_value11 <= to_unsigned(16#00040#, 17);

  shift11 <= to_unsigned(16#0B#, 5);

  xout11_signed <= signed(xout11);

  yout11_signed <= signed(yout11);

  zout11_signed <= signed(zout11);

  Pipeline11_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        xin12 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        xin12 <= xout11_signed;
      END IF;
    END IF;
  END PROCESS Pipeline11_process;


  Pipeline11_1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        yin12 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        yin12 <= yout11_signed;
      END IF;
    END IF;
  END PROCESS Pipeline11_1_process;


  Pipeline11_2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        zin12 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        zin12 <= zout11_signed;
      END IF;
    END IF;
  END PROCESS Pipeline11_2_process;


  lut_value12 <= to_unsigned(16#00020#, 17);

  shift12 <= to_unsigned(16#0C#, 5);

  xout12_signed <= signed(xout12);

  Pipeline12_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        xin13 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        xin13 <= xout12_signed;
      END IF;
    END IF;
  END PROCESS Pipeline12_process;


  -- CSD Encoding (28141) : 1001'001'00001'01'01; Cost (Adders) = 5
  CSD_Gain_Factor_mul_temp <= ((((resize(xin13 & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0', 34) - resize(xin13 & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0', 34)) - resize(xin13 & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0', 34)) - resize(xin13 & '0' & '0' & '0' & '0', 34)) - resize(xin13 & '0' & '0', 34)) + resize(xin13, 34);
  CSD_Gain_Factor_cast <= CSD_Gain_Factor_mul_temp(32 DOWNTO 0);
  xoutscaled <= CSD_Gain_Factor_cast(32 DOWNTO 15);

  zeroC <= to_signed(16#00000#, 18);

  
  outSwitchMag <= xoutscaled WHEN reset_outval = '0' ELSE
      zeroC;

  Output_Register_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        xin14 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        xin14 <= outSwitchMag;
      END IF;
    END IF;
  END PROCESS Output_Register_process;


  magnitude <= std_logic_vector(xin14);

  zout12_signed <= signed(zout12);

  ControlQC_unsigned <= unsigned(ControlQC);

  Pipeline12_1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        zin13 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        zin13 <= zout12_signed;
      END IF;
    END IF;
  END PROCESS Pipeline12_1_process;


  DelayQC_Control_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        DelayQC_Control_reg <= (OTHERS => to_unsigned(16#0#, 3));
      ELSIF enb = '1' THEN
        DelayQC_Control_reg(0) <= ControlQC_unsigned;
        DelayQC_Control_reg(1 TO 12) <= DelayQC_Control_reg(0 TO 11);
      END IF;
    END IF;
  END PROCESS DelayQC_Control_process;

  ControlQCDelay <= DelayQC_Control_reg(12);

  zout_corrected_signed <= signed(zout_corrected);

  zeroCA <= to_signed(16#00000#, 20);

  
  outSwitchAng <= zout_corrected_signed WHEN reset_outval = '0' ELSE
      zeroCA;

  Output_Register_1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        zout_corrected_1 <= to_signed(16#00000#, 20);
      ELSIF enb = '1' THEN
        zout_corrected_1 <= outSwitchAng;
      END IF;
    END IF;
  END PROCESS Output_Register_1_process;


  angle <= std_logic_vector(zout_corrected_1);

  DelayValidOut_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        validOut <= '0';
      ELSIF enb = '1' THEN
        validOut <= ValidOutDelayed;
      END IF;
    END IF;
  END PROCESS DelayValidOut_process;


END rtl;

