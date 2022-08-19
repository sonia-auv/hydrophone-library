-- -------------------------------------------------------------
-- 
-- File Name: C:\Users\franc\OneDrive\Documents techniques\ETS\SONIA\Hydro software\Hydro_Update\slprj\hdlsrc\DOA_rearanged\Maximum_Hydro_1.vhd
-- Created: 2021-06-21 21:49:40
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: Maximum_Hydro_1
-- Source Path: DOA_rearanged/Maximum Hydro 1
-- Hierarchy Level: 1
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;
USE work.DOA_rearanged_pkg.ALL;

ENTITY Maximum_Hydro_1 IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        Signal_rsvd                       :   IN    std_logic_vector(26 DOWNTO 0);  -- sfix27_En8
        Phase                             :   IN    std_logic_vector(28 DOWNTO 0);  -- sfix29_En26
        Valid_In                          :   IN    std_logic;
        Phase_Max                         :   OUT   std_logic_vector(28 DOWNTO 0)  -- sfix29_En26
        );
END Maximum_Hydro_1;


ARCHITECTURE rtl OF Maximum_Hydro_1 IS

  -- Component Declarations
  COMPONENT Subsystem
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          Enable_Reset                    :   IN    std_logic;
          Count                           :   OUT   std_logic_vector(16 DOWNTO 0)  -- ufix17
          );
  END COMPONENT;

  COMPONENT Sample_and_Hold
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          In_rsvd                         :   IN    std_logic_vector(26 DOWNTO 0);  -- sfix27_En8
          Trigger                         :   IN    std_logic;
          alpha                           :   OUT   std_logic_vector(26 DOWNTO 0)  -- sfix27_En8
          );
  END COMPONENT;

  COMPONENT Sample_and_Hold4
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          In_rsvd                         :   IN    std_logic_vector(28 DOWNTO 0);  -- sfix29_En26
          Trigger                         :   IN    std_logic;
          alpha                           :   OUT   std_logic_vector(28 DOWNTO 0)  -- sfix29_En26
          );
  END COMPONENT;

  -- Component Configuration Statements
  FOR ALL : Subsystem
    USE ENTITY work.Subsystem(rtl);

  FOR ALL : Sample_and_Hold
    USE ENTITY work.Sample_and_Hold(rtl);

  FOR ALL : Sample_and_Hold4
    USE ENTITY work.Sample_and_Hold4(rtl);

  -- Signals
  SIGNAL Phase_signed                     : signed(28 DOWNTO 0);  -- sfix29_En26
  SIGNAL Delay2_reg                       : vector_of_signed29(0 TO 1);  -- sfix29 [2]
  SIGNAL Delay2_out1                      : signed(28 DOWNTO 0);  -- sfix29_En26
  SIGNAL Delay4_out1                      : std_logic;
  SIGNAL Signal_signed                    : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL Delay5_out1                      : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL Delay1_out1                      : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL Relational_Operator_relop1       : std_logic;
  SIGNAL Constant1_out1                   : unsigned(5 DOWNTO 0);  -- ufix6
  SIGNAL Subsystem_out1                   : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL Subsystem_out1_unsigned          : unsigned(16 DOWNTO 0);  -- ufix17
  SIGNAL Relational_Operator3_relop1      : std_logic;
  SIGNAL Constant2_out1                   : unsigned(5 DOWNTO 0);  -- ufix6_En1
  SIGNAL Logical_Operator_out1            : std_logic;
  SIGNAL Relational_Operator1_1_cast      : unsigned(17 DOWNTO 0);  -- ufix18_En1
  SIGNAL Relational_Operator1_1_cast_1    : unsigned(17 DOWNTO 0);  -- ufix18_En1
  SIGNAL Relational_Operator1_relop1      : std_logic;
  SIGNAL Logical_Operator2_out1           : std_logic;
  SIGNAL Sample_and_Hold_out1             : std_logic_vector(26 DOWNTO 0);  -- ufix27
  SIGNAL Sample_and_Hold_out1_signed      : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL Product_in0                      : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL Product_cast                     : signed(27 DOWNTO 0);  -- sfix28_En8
  SIGNAL Product_out1                     : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL Product_out1_1                   : signed(26 DOWNTO 0);  -- sfix27_En8
  SIGNAL Relational_Operator2_relop1      : std_logic;
  SIGNAL Logical_Operator1_out1           : std_logic;
  SIGNAL Sample_and_Hold4_out1            : std_logic_vector(28 DOWNTO 0);  -- ufix29
  SIGNAL Sample_and_Hold5_out1            : std_logic_vector(28 DOWNTO 0);  -- ufix29

BEGIN
  -- Index minimum
  -- 
  -- Index maximum
  -- 
  -- Limiter la recherche
  -- entre fr�quences valides
  -- 
  -- Diff�rent de l'index
  -- maximum

  u_Subsystem : Subsystem
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              Enable_Reset => Delay4_out1,
              Count => Subsystem_out1  -- ufix17
              );

  u_Sample_and_Hold : Sample_and_Hold
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              In_rsvd => std_logic_vector(Delay1_out1),  -- sfix27_En8
              Trigger => Logical_Operator2_out1,
              alpha => Sample_and_Hold_out1  -- sfix27_En8
              );

  u_Sample_and_Hold4 : Sample_and_Hold4
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              In_rsvd => std_logic_vector(Delay2_out1),  -- sfix29_En26
              Trigger => Logical_Operator2_out1,
              alpha => Sample_and_Hold4_out1  -- sfix29_En26
              );

  u_Sample_and_Hold5 : Sample_and_Hold4
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              In_rsvd => Sample_and_Hold4_out1,  -- sfix29_En26
              Trigger => Delay4_out1,
              alpha => Sample_and_Hold5_out1  -- sfix29_En26
              );

  Phase_signed <= signed(Phase);

  Delay2_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay2_reg <= (OTHERS => to_signed(16#00000000#, 29));
      ELSIF enb = '1' THEN
        Delay2_reg(0) <= Phase_signed;
        Delay2_reg(1) <= Delay2_reg(0);
      END IF;
    END IF;
  END PROCESS Delay2_process;

  Delay2_out1 <= Delay2_reg(1);

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


  Signal_signed <= signed(Signal_rsvd);

  Delay5_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay5_out1 <= to_signed(16#0000000#, 27);
      ELSIF enb = '1' THEN
        Delay5_out1 <= Signal_signed;
      END IF;
    END IF;
  END PROCESS Delay5_process;


  Delay1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Delay1_out1 <= to_signed(16#0000000#, 27);
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

  Logical_Operator_out1 <=  NOT Delay4_out1;

  Relational_Operator1_1_cast <= Subsystem_out1_unsigned & '0';
  Relational_Operator1_1_cast_1 <= resize(Constant2_out1, 18);
  
  Relational_Operator1_relop1 <= '1' WHEN Relational_Operator1_1_cast >= Relational_Operator1_1_cast_1 ELSE
      '0';

  Sample_and_Hold_out1_signed <= signed(Sample_and_Hold_out1);

  
  Product_in0 <= Sample_and_Hold_out1_signed WHEN Delay4_out1 = '1' ELSE
      to_signed(16#0000000#, 27);
  Product_cast <= resize(Product_in0, 28);
  Product_out1 <= Product_cast(26 DOWNTO 0);

  PipelineRegister_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        Product_out1_1 <= to_signed(16#0000000#, 27);
      ELSIF enb = '1' THEN
        Product_out1_1 <= Product_out1;
      END IF;
    END IF;
  END PROCESS PipelineRegister_process;


  
  Relational_Operator2_relop1 <= '1' WHEN Product_out1_1 < Delay5_out1 ELSE
      '0';

  Logical_Operator1_out1 <= Relational_Operator1_relop1 AND (Relational_Operator3_relop1 AND (Relational_Operator2_relop1 AND Relational_Operator_relop1));

  Logical_Operator2_out1 <= Logical_Operator_out1 OR Logical_Operator1_out1;

  Phase_Max <= Sample_and_Hold5_out1;

END rtl;

