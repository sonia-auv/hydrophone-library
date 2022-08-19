-- -------------------------------------------------------------
-- 
-- File Name: no_delay\hdlsrc\Test_DOA\Maximum_Hydro_Ref.vhd
-- Created: 2022-06-08 16:58:19
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: Maximum_Hydro_Ref
-- Source Path: Test_DOA/Maximum Hydro Ref
-- Hierarchy Level: 1
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;
USE work.Test_DOA_pkg.ALL;

ENTITY Maximum_Hydro_Ref IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        Signal_rsvd                       :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
        Phase                             :   IN    std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
        Valid_In                          :   IN    std_logic;
        Signal_Max                        :   OUT   std_logic_vector(17 DOWNTO 0);  -- sfix18
        Phase_Max                         :   OUT   std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
        Valid_Out                         :   OUT   std_logic;
        Index                             :   OUT   std_logic_vector(16 DOWNTO 0)  -- ufix17
        );
END Maximum_Hydro_Ref;


ARCHITECTURE rtl OF Maximum_Hydro_Ref IS

  -- Component Declarations
  COMPONENT Subsystem_block2
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          Enable_Reset                    :   IN    std_logic;
          Count                           :   OUT   std_logic_vector(16 DOWNTO 0)  -- ufix17
          );
  END COMPONENT;

  COMPONENT SampleHold_block
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          Trigger                         :   IN    std_logic;
          In2                             :   IN    std_logic_vector(17 DOWNTO 0);  -- sfix18
          alpha                           :   OUT   std_logic_vector(17 DOWNTO 0)  -- sfix18
          );
  END COMPONENT;

  COMPONENT SampleHold5
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          Trigger                         :   IN    std_logic;
          In2                             :   IN    std_logic_vector(19 DOWNTO 0);  -- sfix20_En17
          alpha                           :   OUT   std_logic_vector(19 DOWNTO 0)  -- sfix20_En17
          );
  END COMPONENT;

  COMPONENT SampleHold3
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          Trigger                         :   IN    std_logic;
          In2                             :   IN    std_logic_vector(16 DOWNTO 0);  -- ufix17
          alpha                           :   OUT   std_logic_vector(16 DOWNTO 0)  -- ufix17
          );
  END COMPONENT;

  -- Component Configuration Statements
  FOR ALL : Subsystem_block2
    USE ENTITY work.Subsystem_block2(rtl);

  FOR ALL : SampleHold_block
    USE ENTITY work.SampleHold_block(rtl);

  FOR ALL : SampleHold5
    USE ENTITY work.SampleHold5(rtl);

  FOR ALL : SampleHold3
    USE ENTITY work.SampleHold3(rtl);

  -- Signals
  SIGNAL Delay4_out1                      : std_logic;
  SIGNAL Logical_Operator_out1            : std_logic;
  SIGNAL Signal_signed                    : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL Delay5_out1                      : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL Delay1_out1                      : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL Relational_Operator_relop1       : std_logic;
  SIGNAL Constant1_out1                   : unsigned(5 DOWNTO 0);  -- ufix6
  SIGNAL Subsystem_out1                   : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL Subsystem_out1_unsigned          : unsigned(16 DOWNTO 0);  -- ufix17
  SIGNAL Relational_Operator3_relop1      : std_logic;
  SIGNAL Constant2_out1                   : unsigned(5 DOWNTO 0);  -- ufix6_En1
  SIGNAL Relational_Operator1_1_cast      : unsigned(17 DOWNTO 0);  -- ufix18_En1
  SIGNAL Relational_Operator1_1_cast_1    : unsigned(17 DOWNTO 0);  -- ufix18_En1
  SIGNAL Relational_Operator1_relop1      : std_logic;
  SIGNAL SampleHold_out1                  : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL SampleHold_out1_signed           : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL Product_out1                     : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL Delay3_out1                      : signed(17 DOWNTO 0);  -- sfix18
  SIGNAL Relational_Operator2_relop1      : std_logic;
  SIGNAL Logical_Operator1_out1           : std_logic;
  SIGNAL Logical_Operator2_out1           : std_logic;
  SIGNAL SampleHold2_out1                 : std_logic_vector(17 DOWNTO 0);  -- ufix18
  SIGNAL Phase_signed                     : signed(19 DOWNTO 0);  -- sfix20_En17
  SIGNAL Delay2_reg                       : vector_of_signed20(0 TO 1);  -- sfix20 [2]
  SIGNAL Delay2_out1                      : signed(19 DOWNTO 0);  -- sfix20_En17
  SIGNAL SampleHold5_out1                 : std_logic_vector(19 DOWNTO 0);  -- ufix20
  SIGNAL SampleHold6_out1                 : std_logic_vector(19 DOWNTO 0);  -- ufix20
  SIGNAL Constant3_out1                   : unsigned(5 DOWNTO 0);  -- ufix6
  SIGNAL Delay_out1                       : unsigned(16 DOWNTO 0);  -- ufix17
  SIGNAL SampleHold3_out1                 : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL SampleHold4_out1                 : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL SampleHold4_out1_unsigned        : unsigned(16 DOWNTO 0);  -- ufix17
  SIGNAL Relational_Operator4_relop1      : std_logic;
  SIGNAL Logical_Operator3_out1           : std_logic;

BEGIN
  -- Index minimum
  -- 
  -- Index maximum
  -- 
  -- Limiter la recherche
  -- entre fréquences valides
  -- 
  -- Différent de l'index
  -- maximum

  u_Subsystem : Subsystem_block2
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              Enable_Reset => Delay4_out1,
              Count => Subsystem_out1  -- ufix17
              );

  u_SampleHold : SampleHold_block
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              Trigger => Logical_Operator2_out1,
              In2 => std_logic_vector(Delay1_out1),  -- sfix18
              alpha => SampleHold_out1  -- sfix18
              );

  u_SampleHold2 : SampleHold_block
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              Trigger => Delay4_out1,
              In2 => SampleHold_out1,  -- sfix18
              alpha => SampleHold2_out1  -- sfix18
              );

  u_SampleHold5 : SampleHold5
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              Trigger => Logical_Operator2_out1,
              In2 => std_logic_vector(Delay2_out1),  -- sfix20_En17
              alpha => SampleHold5_out1  -- sfix20_En17
              );

  u_SampleHold6 : SampleHold5
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              Trigger => Delay4_out1,
              In2 => SampleHold5_out1,  -- sfix20_En17
              alpha => SampleHold6_out1  -- sfix20_En17
              );

  u_SampleHold3 : SampleHold3
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              Trigger => Logical_Operator2_out1,
              In2 => std_logic_vector(Delay_out1),  -- ufix17
              alpha => SampleHold3_out1  -- ufix17
              );

  u_SampleHold4 : SampleHold3
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              Trigger => Delay4_out1,
              In2 => SampleHold3_out1,  -- ufix17
              alpha => SampleHold4_out1  -- ufix17
              );

  Delay4_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay4_out1 <= '0';
      ELSIF enb = '1' THEN
        Delay4_out1 <= Valid_In;
      END IF;
    END IF;
  END PROCESS Delay4_process;


  Logical_Operator_out1 <=  NOT Delay4_out1;

  Signal_signed <= signed(Signal_rsvd);

  Delay5_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay5_out1 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        Delay5_out1 <= Signal_signed;
      END IF;
    END IF;
  END PROCESS Delay5_process;


  Delay1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay1_out1 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        Delay1_out1 <= Delay5_out1;
      END IF;
    END IF;
  END PROCESS Delay1_process;


  
  Relational_Operator_relop1 <= '1' WHEN Delay5_out1 > Delay1_out1 ELSE
      '0';

  Constant1_out1 <= to_unsigned(16#2D#, 6);

  Subsystem_out1_unsigned <= unsigned(Subsystem_out1);

  
  Relational_Operator3_relop1 <= '1' WHEN resize(Constant1_out1, 17) >= Subsystem_out1_unsigned ELSE
      '0';

  Constant2_out1 <= to_unsigned(16#28#, 6);

  Relational_Operator1_1_cast <= Subsystem_out1_unsigned & '0';
  Relational_Operator1_1_cast_1 <= resize(Constant2_out1, 18);
  
  Relational_Operator1_relop1 <= '1' WHEN Relational_Operator1_1_cast >= Relational_Operator1_1_cast_1 ELSE
      '0';

  SampleHold_out1_signed <= signed(SampleHold_out1);

  
  Product_out1 <= SampleHold_out1_signed WHEN Delay4_out1 = '1' ELSE
      to_signed(16#00000#, 18);

  Delay3_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay3_out1 <= to_signed(16#00000#, 18);
      ELSIF enb = '1' THEN
        Delay3_out1 <= Product_out1;
      END IF;
    END IF;
  END PROCESS Delay3_process;


  
  Relational_Operator2_relop1 <= '1' WHEN Delay3_out1 < Delay5_out1 ELSE
      '0';

  Logical_Operator1_out1 <= Relational_Operator1_relop1 AND (Relational_Operator3_relop1 AND (Relational_Operator2_relop1 AND Relational_Operator_relop1));

  Logical_Operator2_out1 <= Logical_Operator_out1 OR Logical_Operator1_out1;

  Phase_signed <= signed(Phase);

  Delay2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay2_reg <= (OTHERS => to_signed(16#00000#, 20));
      ELSIF enb = '1' THEN
        Delay2_reg(0) <= Phase_signed;
        Delay2_reg(1) <= Delay2_reg(0);
      END IF;
    END IF;
  END PROCESS Delay2_process;

  Delay2_out1 <= Delay2_reg(1);

  Constant3_out1 <= to_unsigned(16#2D#, 6);

  Delay_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay_out1 <= to_unsigned(16#00000#, 17);
      ELSIF enb = '1' THEN
        Delay_out1 <= Subsystem_out1_unsigned;
      END IF;
    END IF;
  END PROCESS Delay_process;


  SampleHold4_out1_unsigned <= unsigned(SampleHold4_out1);

  
  Relational_Operator4_relop1 <= '1' WHEN resize(Constant3_out1, 17) /= SampleHold4_out1_unsigned ELSE
      '0';

  Logical_Operator3_out1 <= Logical_Operator_out1 AND Relational_Operator4_relop1;

  Signal_Max <= SampleHold2_out1;

  Phase_Max <= SampleHold6_out1;

  Valid_Out <= Logical_Operator3_out1;

  Index <= SampleHold4_out1;

END rtl;

