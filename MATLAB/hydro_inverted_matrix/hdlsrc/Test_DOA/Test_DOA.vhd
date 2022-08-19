-- -------------------------------------------------------------
-- 
-- File Name: hydro_inverted_matrix\hdlsrc\Test_DOA\Test_DOA.vhd
-- Created: 2022-04-11 19:01:34
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- 
-- -------------------------------------------------------------
-- Rate and Clocking Details
-- -------------------------------------------------------------
-- Model base rate: 1e-07
-- Target subsystem base rate: 1e-07
-- 
-- 
-- Clock Enable  Sample Time
-- -------------------------------------------------------------
-- ce_out        1e-07
-- -------------------------------------------------------------
-- 
-- 
-- Output Signal                 Clock Enable  Sample Time
-- -------------------------------------------------------------
-- ValidOut                      ce_out        1e-07
-- Frequency                     ce_out        1e-07
-- Y                             ce_out        1e-07
-- X                             ce_out        1e-07
-- Debug                         ce_out        1e-07
-- Z                             ce_out        1e-07
-- -------------------------------------------------------------
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: Test_DOA
-- Source Path: Test_DOA
-- Hierarchy Level: 0
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY Test_DOA IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        clk_enable                        :   IN    std_logic;
        Canal1                            :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
        Canal2                            :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
        Canal3                            :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
        Canal4                            :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
        Enable                            :   IN    std_logic;
        HighThreshold                     :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
        SNR_Threshold                     :   IN    std_logic_vector(7 DOWNTO 0);  -- uint8
        LowThreshold                      :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
        ce_out                            :   OUT   std_logic;
        ValidOut                          :   OUT   std_logic;
        Frequency                         :   OUT   std_logic_vector(26 DOWNTO 0);  -- ufix27
        Y                                 :   OUT   std_logic_vector(30 DOWNTO 0);  -- sfix31_En19
        X                                 :   OUT   std_logic_vector(30 DOWNTO 0);  -- sfix31_En19
        Debug                             :   OUT   std_logic_vector(7 DOWNTO 0);  -- uint8
        Z                                 :   OUT   std_logic_vector(30 DOWNTO 0)  -- sfix31_En19
        );
END Test_DOA;


ARCHITECTURE rtl OF Test_DOA IS

  -- Component Declarations
  COMPONENT FFTs
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          Canal1                          :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
          Canal2                          :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
          Canal3                          :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
          Canal4                          :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
          Enable                          :   IN    std_logic;
          HighThreshold                   :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
          LowThreshold                    :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
          Magnitude_Ref                   :   OUT   std_logic_vector(17 DOWNTO 0);  -- sfix18
          Phase_Ref                       :   OUT   std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
          Valid_out_Ref                   :   OUT   std_logic;
          Magnitude1                      :   OUT   std_logic_vector(17 DOWNTO 0);  -- sfix18
          Phase1                          :   OUT   std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
          Valid_out1                      :   OUT   std_logic;
          Magnitude2                      :   OUT   std_logic_vector(17 DOWNTO 0);  -- sfix18
          Phase2                          :   OUT   std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
          Valid_out2                      :   OUT   std_logic;
          Magnitude3                      :   OUT   std_logic_vector(17 DOWNTO 0);  -- sfix18
          Phase3                          :   OUT   std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
          Valid_out3                      :   OUT   std_logic
          );
  END COMPONENT;

  COMPONENT Maximum_Hydro_Ref
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          Signal_rsvd                     :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
          Phase                           :   IN    std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
          Valid_In                        :   IN    std_logic;
          Signal_Max                      :   OUT   std_logic_vector(17 DOWNTO 0);  -- sfix18
          Phase_Max                       :   OUT   std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
          Valid_Out                       :   OUT   std_logic;
          Index                           :   OUT   std_logic_vector(16 DOWNTO 0)  -- ufix17
          );
  END COMPONENT;

  COMPONENT SNR_Check
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          a                               :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
          validIn_sum                     :   IN    std_logic;
          alphaValue                      :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
          validIn_Max                     :   IN    std_logic;
          SNR_Threshold                   :   IN    std_logic_vector(7 DOWNTO 0);  -- uint8
          SNR_check_1                     :   OUT   std_logic;
          Debug                           :   OUT   std_logic_vector(7 DOWNTO 0)  -- uint8
          );
  END COMPONENT;

  COMPONENT Maximum_Hydro_1
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          Signal_rsvd                     :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
          Phase                           :   IN    std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
          Valid_In                        :   IN    std_logic;
          Phase_Max                       :   OUT   std_logic_vector(19 DOWNTO 0)  -- sfix20_En17
          );
  END COMPONENT;

  COMPONENT Maximum_Hydro_2
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          Signal_rsvd                     :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
          Phase                           :   IN    std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
          Valid_In                        :   IN    std_logic;
          Phase_Max                       :   OUT   std_logic_vector(19 DOWNTO 0)  -- sfix20_En17
          );
  END COMPONENT;

  COMPONENT Maximum_Hydro_3
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          Signal_rsvd                     :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
          Phase                           :   IN    std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
          Valid_In                        :   IN    std_logic;
          Phase_Max                       :   OUT   std_logic_vector(19 DOWNTO 0)  -- sfix20_En17
          );
  END COMPONENT;

  COMPONENT Calcul_Direction
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          Index                           :   IN    std_logic_vector(16 DOWNTO 0);  -- ufix17
          PhaseRef                        :   IN    std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
          Phase1                          :   IN    std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
          Phase2                          :   IN    std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
          Phase3                          :   IN    std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
          Trigger                         :   IN    std_logic;
          Frequence                       :   OUT   std_logic_vector(26 DOWNTO 0);  -- ufix27
          X                               :   OUT   std_logic_vector(30 DOWNTO 0);  -- sfix31_En19
          Y                               :   OUT   std_logic_vector(30 DOWNTO 0);  -- sfix31_En19
          Z                               :   OUT   std_logic_vector(30 DOWNTO 0)  -- sfix31_En19
          );
  END COMPONENT;

  -- Component Configuration Statements
  FOR ALL : FFTs
    USE ENTITY work.FFTs(rtl);

  FOR ALL : Maximum_Hydro_Ref
    USE ENTITY work.Maximum_Hydro_Ref(rtl);

  FOR ALL : SNR_Check
    USE ENTITY work.SNR_Check(rtl);

  FOR ALL : Maximum_Hydro_1
    USE ENTITY work.Maximum_Hydro_1(rtl);

  FOR ALL : Maximum_Hydro_2
    USE ENTITY work.Maximum_Hydro_2(rtl);

  FOR ALL : Maximum_Hydro_3
    USE ENTITY work.Maximum_Hydro_3(rtl);

  FOR ALL : Calcul_Direction
    USE ENTITY work.Calcul_Direction(rtl);

  -- Signals
  SIGNAL enb                              : std_logic;
  SIGNAL FFTs_out1                        : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL FFTs_out2                        : std_logic_vector(19 DOWNTO 0);  -- ufix20
  SIGNAL FFTs_out3                        : std_logic;
  SIGNAL FFTs_out4                        : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL FFTs_out5                        : std_logic_vector(19 DOWNTO 0);  -- ufix20
  SIGNAL FFTs_out6                        : std_logic;
  SIGNAL FFTs_out7                        : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL FFTs_out8                        : std_logic_vector(19 DOWNTO 0);  -- ufix20
  SIGNAL FFTs_out9                        : std_logic;
  SIGNAL FFTs_out10                       : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL FFTs_out11                       : std_logic_vector(19 DOWNTO 0);  -- ufix20
  SIGNAL FFTs_out12                       : std_logic;
  SIGNAL Maximum_Hydro_Ref_out1           : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL Maximum_Hydro_Ref_out2           : std_logic_vector(19 DOWNTO 0);  -- ufix20
  SIGNAL Maximum_Hydro_Ref_out3           : std_logic;
  SIGNAL Maximum_Hydro_Ref_out4           : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL SNR_Check_out1                   : std_logic;
  SIGNAL SNR_Check_out4                   : std_logic_vector(7 DOWNTO 0);  -- ufix8
  SIGNAL Delay_out1                       : std_logic;
  SIGNAL Maximum_Hydro_1_out2             : std_logic_vector(19 DOWNTO 0);  -- ufix20
  SIGNAL Maximum_Hydro_2_out2             : std_logic_vector(19 DOWNTO 0);  -- ufix20
  SIGNAL Maximum_Hydro_3_out2             : std_logic_vector(19 DOWNTO 0);  -- ufix20
  SIGNAL Calcul_Direction_out1            : std_logic_vector(26 DOWNTO 0);  -- ufix27
  SIGNAL Calcul_Direction_out2            : std_logic_vector(30 DOWNTO 0);  -- ufix31
  SIGNAL Calcul_Direction_out3            : std_logic_vector(30 DOWNTO 0);  -- ufix31
  SIGNAL Calcul_Direction_out4            : std_logic_vector(30 DOWNTO 0);  -- ufix31
  SIGNAL SNR_Check_out4_unsigned          : unsigned(7 DOWNTO 0);  -- uint8
  SIGNAL Delay1_out1                      : unsigned(7 DOWNTO 0);  -- uint8

BEGIN
  u_FFTs : FFTs
    PORT MAP( clk => clk,
              reset => reset,
              enb => clk_enable,
              Canal1 => Canal1,  -- uint16
              Canal2 => Canal2,  -- uint16
              Canal3 => Canal3,  -- uint16
              Canal4 => Canal4,  -- uint16
              Enable => Enable,
              HighThreshold => HighThreshold,  -- uint16
              LowThreshold => LowThreshold,  -- uint16
              Magnitude_Ref => FFTs_out1,  -- sfix18
              Phase_Ref => FFTs_out2,  -- sfix20_En17
              Valid_out_Ref => FFTs_out3,
              Magnitude1 => FFTs_out4,  -- sfix18
              Phase1 => FFTs_out5,  -- sfix20_En17
              Valid_out1 => FFTs_out6,
              Magnitude2 => FFTs_out7,  -- sfix18
              Phase2 => FFTs_out8,  -- sfix20_En17
              Valid_out2 => FFTs_out9,
              Magnitude3 => FFTs_out10,  -- sfix18
              Phase3 => FFTs_out11,  -- sfix20_En17
              Valid_out3 => FFTs_out12
              );

  u_Maximum_Hydro_Ref : Maximum_Hydro_Ref
    PORT MAP( clk => clk,
              reset => reset,
              enb => clk_enable,
              Signal_rsvd => FFTs_out1,  -- sfix18
              Phase => FFTs_out2,  -- sfix20_En17
              Valid_In => FFTs_out3,
              Signal_Max => Maximum_Hydro_Ref_out1,  -- sfix18
              Phase_Max => Maximum_Hydro_Ref_out2,  -- sfix20_En17
              Valid_Out => Maximum_Hydro_Ref_out3,
              Index => Maximum_Hydro_Ref_out4  -- ufix17
              );

  u_SNR_Check : SNR_Check
    PORT MAP( clk => clk,
              reset => reset,
              enb => clk_enable,
              a => FFTs_out1,  -- sfix18
              validIn_sum => FFTs_out3,
              alphaValue => Maximum_Hydro_Ref_out1,  -- sfix18
              validIn_Max => Maximum_Hydro_Ref_out3,
              SNR_Threshold => SNR_Threshold,  -- uint8
              SNR_check_1 => SNR_Check_out1,
              Debug => SNR_Check_out4  -- uint8
              );

  u_Maximum_Hydro_1 : Maximum_Hydro_1
    PORT MAP( clk => clk,
              reset => reset,
              enb => clk_enable,
              Signal_rsvd => FFTs_out4,  -- sfix18
              Phase => FFTs_out5,  -- sfix20_En17
              Valid_In => FFTs_out6,
              Phase_Max => Maximum_Hydro_1_out2  -- sfix20_En17
              );

  u_Maximum_Hydro_2 : Maximum_Hydro_2
    PORT MAP( clk => clk,
              reset => reset,
              enb => clk_enable,
              Signal_rsvd => FFTs_out7,  -- sfix18
              Phase => FFTs_out8,  -- sfix20_En17
              Valid_In => FFTs_out9,
              Phase_Max => Maximum_Hydro_2_out2  -- sfix20_En17
              );

  u_Maximum_Hydro_3 : Maximum_Hydro_3
    PORT MAP( clk => clk,
              reset => reset,
              enb => clk_enable,
              Signal_rsvd => FFTs_out10,  -- sfix18
              Phase => FFTs_out11,  -- sfix20_En17
              Valid_In => FFTs_out12,
              Phase_Max => Maximum_Hydro_3_out2  -- sfix20_En17
              );

  u_Calcul_Direction : Calcul_Direction
    PORT MAP( clk => clk,
              reset => reset,
              enb => clk_enable,
              Index => Maximum_Hydro_Ref_out4,  -- ufix17
              PhaseRef => Maximum_Hydro_Ref_out2,  -- sfix20_En17
              Phase1 => Maximum_Hydro_1_out2,  -- sfix20_En17
              Phase2 => Maximum_Hydro_2_out2,  -- sfix20_En17
              Phase3 => Maximum_Hydro_3_out2,  -- sfix20_En17
              Trigger => SNR_Check_out1,
              Frequence => Calcul_Direction_out1,  -- ufix27
              X => Calcul_Direction_out2,  -- sfix31_En19
              Y => Calcul_Direction_out3,  -- sfix31_En19
              Z => Calcul_Direction_out4  -- sfix31_En19
              );

  enb <= clk_enable;

  Delay_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay_out1 <= '0';
      ELSIF enb = '1' THEN
        Delay_out1 <= SNR_Check_out1;
      END IF;
    END IF;
  END PROCESS Delay_process;


  SNR_Check_out4_unsigned <= unsigned(SNR_Check_out4);

  Delay1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay1_out1 <= to_unsigned(16#00#, 8);
      ELSIF enb = '1' THEN
        Delay1_out1 <= SNR_Check_out4_unsigned;
      END IF;
    END IF;
  END PROCESS Delay1_process;


  Debug <= std_logic_vector(Delay1_out1);

  ce_out <= clk_enable;

  ValidOut <= Delay_out1;

  Frequency <= Calcul_Direction_out1;

  Y <= Calcul_Direction_out3;

  X <= Calcul_Direction_out2;

  Z <= Calcul_Direction_out4;

END rtl;

