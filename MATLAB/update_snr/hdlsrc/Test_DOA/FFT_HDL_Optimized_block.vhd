-- -------------------------------------------------------------
-- 
-- File Name: update_snr\hdlsrc\Test_DOA\FFT_HDL_Optimized_block.vhd
-- Created: 2022-06-02 22:44:38
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: FFT_HDL_Optimized_block
-- Source Path: Test_DOA/FFTs/FFT Hydro 2/FFT HDL Optimized
-- Hierarchy Level: 3
-- 
-- FFT HDL Optimized
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY FFT_HDL_Optimized_block IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        dataIn                            :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
        validIn                           :   IN    std_logic;
        dataOut_re                        :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
        dataOut_im                        :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
        validOut                          :   OUT   std_logic
        );
END FFT_HDL_Optimized_block;


ARCHITECTURE rtl OF FFT_HDL_Optimized_block IS

  -- Component Declarations
  COMPONENT TWDLROM_block
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          dMemOutDly_vld                  :   IN    std_logic;
          stage                           :   IN    std_logic_vector(2 DOWNTO 0);  -- ufix3
          initIC                          :   IN    std_logic;
          twdl_re                         :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17_En15
          twdl_im                         :   OUT   std_logic_vector(16 DOWNTO 0)  -- sfix17_En15
          );
  END COMPONENT;

  COMPONENT MINRESRX2FFT_MEMORY_block
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          dMemIn1_re                      :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          dMemIn1_im                      :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          dMemIn2_re                      :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          dMemIn2_im                      :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          wrEnb1                          :   IN    std_logic;
          wrEnb2                          :   IN    std_logic;
          wrEnb3                          :   IN    std_logic;
          rdEnb1                          :   IN    std_logic;
          rdEnb2                          :   IN    std_logic;
          rdEnb3                          :   IN    std_logic;
          stage                           :   IN    std_logic_vector(2 DOWNTO 0);  -- ufix3
          initIC                          :   IN    std_logic;
          unLoadPhase                     :   IN    std_logic;
          dMemOut1_re                     :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          dMemOut1_im                     :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          dMemOut2_re                     :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          dMemOut2_im                     :   OUT   std_logic_vector(16 DOWNTO 0)  -- sfix17
          );
  END COMPONENT;

  COMPONENT MINRESRX2FFT_BTFSEL_block
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          din_1_re                        :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          din_1_im                        :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          validIn                         :   IN    std_logic;
          rdy                             :   IN    std_logic;
          dMemOut1_re                     :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          dMemOut1_im                     :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          dMemOut2_re                     :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          dMemOut2_im                     :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          dMemOut_vld                     :   IN    std_logic;
          stage                           :   IN    std_logic_vector(2 DOWNTO 0);  -- ufix3
          initIC                          :   IN    std_logic;
          btfIn1_re                       :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          btfIn1_im                       :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          btfIn2_re                       :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          btfIn2_im                       :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          btfIn_vld                       :   OUT   std_logic
          );
  END COMPONENT;

  COMPONENT MINRESRX2_BUTTERFLY_block
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          btfIn1_re                       :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          btfIn1_im                       :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          btfIn2_re                       :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          btfIn2_im                       :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          btfIn_vld                       :   IN    std_logic;
          twdl_re                         :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17_En15
          twdl_im                         :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17_En15
          syncReset                       :   IN    std_logic;
          btfOut1_re                      :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          btfOut1_im                      :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          btfOut2_re                      :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          btfOut2_im                      :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          btfOut_vld                      :   OUT   std_logic
          );
  END COMPONENT;

  COMPONENT MINRESRX2FFT_MEMSEL_block
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          btfOut1_re                      :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          btfOut1_im                      :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          btfOut2_re                      :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          btfOut2_im                      :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          btfOut_vld                      :   IN    std_logic;
          stage                           :   IN    std_logic_vector(2 DOWNTO 0);  -- ufix3
          initIC                          :   IN    std_logic;
          stgOut1_re                      :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          stgOut1_im                      :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          stgOut2_re                      :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          stgOut2_im                      :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          stgOut_vld                      :   OUT   std_logic
          );
  END COMPONENT;

  COMPONENT MINRESRX2FFT_CTRL_block
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          din_1_re                        :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          din_1_im                        :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          validIn                         :   IN    std_logic;
          stgOut1_re                      :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          stgOut1_im                      :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          stgOut2_re                      :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          stgOut2_im                      :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          stgOut_vld                      :   IN    std_logic;
          dMemIn1_re                      :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          dMemIn1_im                      :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          dMemIn2_re                      :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          dMemIn2_im                      :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          wrEnb1                          :   OUT   std_logic;
          wrEnb2                          :   OUT   std_logic;
          wrEnb3                          :   OUT   std_logic;
          rdEnb1                          :   OUT   std_logic;
          rdEnb2                          :   OUT   std_logic;
          rdEnb3                          :   OUT   std_logic;
          dMemOut_vld                     :   OUT   std_logic;
          vldOut                          :   OUT   std_logic;
          stage                           :   OUT   std_logic_vector(2 DOWNTO 0);  -- ufix3
          rdy                             :   OUT   std_logic;
          initIC                          :   OUT   std_logic;
          unLoadPhase                     :   OUT   std_logic
          );
  END COMPONENT;

  COMPONENT MINRESRX2FFT_OUTMux_block
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          rdEnb1                          :   IN    std_logic;
          rdEnb2                          :   IN    std_logic;
          rdEnb3                          :   IN    std_logic;
          dMemOut1_re                     :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          dMemOut1_im                     :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          dMemOut2_re                     :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          dMemOut2_im                     :   IN    std_logic_vector(16 DOWNTO 0);  -- sfix17
          vldOut                          :   IN    std_logic;
          dOut_re                         :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          dOut_im                         :   OUT   std_logic_vector(16 DOWNTO 0);  -- sfix17
          dout_vld                        :   OUT   std_logic
          );
  END COMPONENT;

  -- Component Configuration Statements
  FOR ALL : TWDLROM_block
    USE ENTITY work.TWDLROM_block(rtl);

  FOR ALL : MINRESRX2FFT_MEMORY_block
    USE ENTITY work.MINRESRX2FFT_MEMORY_block(rtl);

  FOR ALL : MINRESRX2FFT_BTFSEL_block
    USE ENTITY work.MINRESRX2FFT_BTFSEL_block(rtl);

  FOR ALL : MINRESRX2_BUTTERFLY_block
    USE ENTITY work.MINRESRX2_BUTTERFLY_block(rtl);

  FOR ALL : MINRESRX2FFT_MEMSEL_block
    USE ENTITY work.MINRESRX2FFT_MEMSEL_block(rtl);

  FOR ALL : MINRESRX2FFT_CTRL_block
    USE ENTITY work.MINRESRX2FFT_CTRL_block(rtl);

  FOR ALL : MINRESRX2FFT_OUTMux_block
    USE ENTITY work.MINRESRX2FFT_OUTMux_block(rtl);

  -- Signals
  SIGNAL dataIn_unsigned                  : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL dtc_re                           : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL dtc_im                           : signed(16 DOWNTO 0);  -- sfix17
  SIGNAL syncReset                        : std_logic;
  SIGNAL dMemOut_vld                      : std_logic;
  SIGNAL dMemOutDly_vld                   : std_logic;
  SIGNAL stage                            : std_logic_vector(2 DOWNTO 0);  -- ufix3
  SIGNAL initIC                           : std_logic;
  SIGNAL twdl_re                          : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL twdl_im                          : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL dMemIn1_re                       : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL dMemIn1_im                       : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL dMemIn2_re                       : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL dMemIn2_im                       : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL wrEnb1                           : std_logic;
  SIGNAL wrEnb2                           : std_logic;
  SIGNAL wrEnb3                           : std_logic;
  SIGNAL rdEnb1                           : std_logic;
  SIGNAL rdEnb2                           : std_logic;
  SIGNAL rdEnb3                           : std_logic;
  SIGNAL unLoadPhase                      : std_logic;
  SIGNAL dMemOut1_re                      : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL dMemOut1_im                      : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL dMemOut2_re                      : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL dMemOut2_im                      : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL rdy                              : std_logic;
  SIGNAL btfIn1_re                        : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL btfIn1_im                        : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL btfIn2_re                        : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL btfIn2_im                        : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL btfIn_vld                        : std_logic;
  SIGNAL btfOut1_re                       : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL btfOut1_im                       : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL btfOut2_re                       : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL btfOut2_im                       : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL btfOut_vld                       : std_logic;
  SIGNAL stgOut1_re                       : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL stgOut1_im                       : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL stgOut2_re                       : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL stgOut2_im                       : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL stgOut_vld                       : std_logic;
  SIGNAL vldOut                           : std_logic;
  SIGNAL dOut_re                          : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL dOut_im                          : std_logic_vector(16 DOWNTO 0);  -- ufix17
  SIGNAL dout_vld                         : std_logic;

BEGIN
  u_MinResRX2FFT_TWDLROM : TWDLROM_block
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              dMemOutDly_vld => dMemOutDly_vld,
              stage => stage,  -- ufix3
              initIC => initIC,
              twdl_re => twdl_re,  -- sfix17_En15
              twdl_im => twdl_im  -- sfix17_En15
              );

  u_MinResRX2FFT_MEMORY : MINRESRX2FFT_MEMORY_block
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              dMemIn1_re => dMemIn1_re,  -- sfix17
              dMemIn1_im => dMemIn1_im,  -- sfix17
              dMemIn2_re => dMemIn2_re,  -- sfix17
              dMemIn2_im => dMemIn2_im,  -- sfix17
              wrEnb1 => wrEnb1,
              wrEnb2 => wrEnb2,
              wrEnb3 => wrEnb3,
              rdEnb1 => rdEnb1,
              rdEnb2 => rdEnb2,
              rdEnb3 => rdEnb3,
              stage => stage,  -- ufix3
              initIC => initIC,
              unLoadPhase => unLoadPhase,
              dMemOut1_re => dMemOut1_re,  -- sfix17
              dMemOut1_im => dMemOut1_im,  -- sfix17
              dMemOut2_re => dMemOut2_re,  -- sfix17
              dMemOut2_im => dMemOut2_im  -- sfix17
              );

  u_MinResRX2FFT_BTFSEL : MINRESRX2FFT_BTFSEL_block
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              din_1_re => std_logic_vector(dtc_re),  -- sfix17
              din_1_im => std_logic_vector(dtc_im),  -- sfix17
              validIn => validIn,
              rdy => rdy,
              dMemOut1_re => dMemOut1_re,  -- sfix17
              dMemOut1_im => dMemOut1_im,  -- sfix17
              dMemOut2_re => dMemOut2_re,  -- sfix17
              dMemOut2_im => dMemOut2_im,  -- sfix17
              dMemOut_vld => dMemOut_vld,
              stage => stage,  -- ufix3
              initIC => initIC,
              btfIn1_re => btfIn1_re,  -- sfix17
              btfIn1_im => btfIn1_im,  -- sfix17
              btfIn2_re => btfIn2_re,  -- sfix17
              btfIn2_im => btfIn2_im,  -- sfix17
              btfIn_vld => btfIn_vld
              );

  u_MinResRX2FFT_BUTTERFLY : MINRESRX2_BUTTERFLY_block
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              btfIn1_re => btfIn1_re,  -- sfix17
              btfIn1_im => btfIn1_im,  -- sfix17
              btfIn2_re => btfIn2_re,  -- sfix17
              btfIn2_im => btfIn2_im,  -- sfix17
              btfIn_vld => btfIn_vld,
              twdl_re => twdl_re,  -- sfix17_En15
              twdl_im => twdl_im,  -- sfix17_En15
              syncReset => syncReset,
              btfOut1_re => btfOut1_re,  -- sfix17
              btfOut1_im => btfOut1_im,  -- sfix17
              btfOut2_re => btfOut2_re,  -- sfix17
              btfOut2_im => btfOut2_im,  -- sfix17
              btfOut_vld => btfOut_vld
              );

  u_MinResRX2FFT_MEMSEL : MINRESRX2FFT_MEMSEL_block
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              btfOut1_re => btfOut1_re,  -- sfix17
              btfOut1_im => btfOut1_im,  -- sfix17
              btfOut2_re => btfOut2_re,  -- sfix17
              btfOut2_im => btfOut2_im,  -- sfix17
              btfOut_vld => btfOut_vld,
              stage => stage,  -- ufix3
              initIC => initIC,
              stgOut1_re => stgOut1_re,  -- sfix17
              stgOut1_im => stgOut1_im,  -- sfix17
              stgOut2_re => stgOut2_re,  -- sfix17
              stgOut2_im => stgOut2_im,  -- sfix17
              stgOut_vld => stgOut_vld
              );

  u_MinResRX2FFT_CTRL : MINRESRX2FFT_CTRL_block
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              din_1_re => std_logic_vector(dtc_re),  -- sfix17
              din_1_im => std_logic_vector(dtc_im),  -- sfix17
              validIn => validIn,
              stgOut1_re => stgOut1_re,  -- sfix17
              stgOut1_im => stgOut1_im,  -- sfix17
              stgOut2_re => stgOut2_re,  -- sfix17
              stgOut2_im => stgOut2_im,  -- sfix17
              stgOut_vld => stgOut_vld,
              dMemIn1_re => dMemIn1_re,  -- sfix17
              dMemIn1_im => dMemIn1_im,  -- sfix17
              dMemIn2_re => dMemIn2_re,  -- sfix17
              dMemIn2_im => dMemIn2_im,  -- sfix17
              wrEnb1 => wrEnb1,
              wrEnb2 => wrEnb2,
              wrEnb3 => wrEnb3,
              rdEnb1 => rdEnb1,
              rdEnb2 => rdEnb2,
              rdEnb3 => rdEnb3,
              dMemOut_vld => dMemOut_vld,
              vldOut => vldOut,
              stage => stage,  -- ufix3
              rdy => rdy,
              initIC => initIC,
              unLoadPhase => unLoadPhase
              );

  u_MinResRX2FFT_OUTMUX : MINRESRX2FFT_OUTMux_block
    PORT MAP( clk => clk,
              reset => reset,
              enb => enb,
              rdEnb1 => rdEnb1,
              rdEnb2 => rdEnb2,
              rdEnb3 => rdEnb3,
              dMemOut1_re => dMemOut1_re,  -- sfix17
              dMemOut1_im => dMemOut1_im,  -- sfix17
              dMemOut2_re => dMemOut2_re,  -- sfix17
              dMemOut2_im => dMemOut2_im,  -- sfix17
              vldOut => vldOut,
              dOut_re => dOut_re,  -- sfix17
              dOut_im => dOut_im,  -- sfix17
              dout_vld => dout_vld
              );

  dataIn_unsigned <= unsigned(dataIn);

  dtc_re <= signed(resize(dataIn_unsigned, 17));

  dtc_im <= to_signed(16#00000#, 17);

  syncReset <= '0';

  intdelay_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        dMemOutDly_vld <= '0';
      ELSIF enb = '1' THEN
        IF syncReset = '1' THEN
          dMemOutDly_vld <= '0';
        ELSE 
          dMemOutDly_vld <= dMemOut_vld;
        END IF;
      END IF;
    END IF;
  END PROCESS intdelay_process;


  dataOut_re <= dOut_re;

  dataOut_im <= dOut_im;

  validOut <= dout_vld;

END rtl;

