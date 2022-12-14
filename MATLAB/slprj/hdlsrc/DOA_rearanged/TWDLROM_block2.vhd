-- -------------------------------------------------------------
-- 
-- File Name: C:\Users\franc\OneDrive\Documents techniques\ETS\SONIA\Hydro software\Hydro_Update\slprj\hdlsrc\DOA_rearanged\TWDLROM_block2.vhd
-- Created: 2021-06-21 21:49:40
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: TWDLROM_block2
-- Source Path: DOA_rearanged/FFT Hydro Ref/FFT HDL Optimized/TWDLROM
-- Hierarchy Level: 3
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;
USE work.DOA_rearanged_pkg.ALL;

ENTITY TWDLROM_block2 IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        dMemOutDly_vld                    :   IN    std_logic;
        stage                             :   IN    std_logic_vector(2 DOWNTO 0);  -- ufix3
        initIC                            :   IN    std_logic;
        twdl_re                           :   OUT   std_logic_vector(25 DOWNTO 0);  -- sfix26_En24
        twdl_im                           :   OUT   std_logic_vector(25 DOWNTO 0)  -- sfix26_En24
        );
END TWDLROM_block2;


ARCHITECTURE rtl OF TWDLROM_block2 IS

  -- Constants
  CONSTANT Twiddle_re_table_data          : vector_of_signed26(0 TO 31) := 
    (to_signed(16#1000000#, 26), to_signed(16#0FFEC43#, 26), to_signed(16#0FFB10F#, 26),
     to_signed(16#0FF4E6D#, 26), to_signed(16#0FEC46D#, 26), to_signed(16#0FE1324#, 26),
     to_signed(16#0FD3AAC#, 26), to_signed(16#0FC3B28#, 26), to_signed(16#0FB14BE#, 26),
     to_signed(16#0F9C79D#, 26), to_signed(16#0F853F8#, 26), to_signed(16#0F6BA07#, 26),
     to_signed(16#0F4FA0B#, 26), to_signed(16#0F31447#, 26), to_signed(16#0F10908#, 26),
     to_signed(16#0EED89E#, 26), to_signed(16#0EC835E#, 26), to_signed(16#0EA09A7#, 26),
     to_signed(16#0E76BD8#, 26), to_signed(16#0E4AA59#, 26), to_signed(16#0E1C598#, 26),
     to_signed(16#0DEBE05#, 26), to_signed(16#0DB941A#, 26), to_signed(16#0D84853#, 26),
     to_signed(16#0D4DB31#, 26), to_signed(16#0D14D3D#, 26), to_signed(16#0CD9F02#, 26),
     to_signed(16#0C9D112#, 26), to_signed(16#0C5E403#, 26), to_signed(16#0C1D870#, 26),
     to_signed(16#0BDAEF9#, 26), to_signed(16#0B96842#, 26));  -- sfix26 [32]
  CONSTANT Twiddle_im_table_data          : vector_of_signed26(0 TO 31) := 
    (to_signed(16#0000000#, 26), to_signed(-16#0064855#, 26), to_signed(-16#00C8FB3#, 26),
     to_signed(-16#012D521#, 26), to_signed(-16#01917A7#, 26), to_signed(-16#01F564E#, 26),
     to_signed(-16#0259021#, 26), to_signed(-16#02BC429#, 26), to_signed(-16#031F170#, 26),
     to_signed(-16#0381705#, 26), to_signed(-16#03E33F3#, 26), to_signed(-16#044474A#, 26),
     to_signed(-16#04A5019#, 26), to_signed(-16#0504D72#, 26), to_signed(-16#0563E6A#, 26),
     to_signed(-16#05C2215#, 26), to_signed(-16#061F78B#, 26), to_signed(-16#067BDE5#, 26),
     to_signed(-16#06D7440#, 26), to_signed(-16#07319BA#, 26), to_signed(-16#078AD75#, 26),
     to_signed(-16#07E2E93#, 26), to_signed(-16#0839C3D#, 26), to_signed(-16#088F59B#, 26),
     to_signed(-16#08E39DA#, 26), to_signed(-16#093682A#, 26), to_signed(-16#0987FC0#, 26),
     to_signed(-16#09D7FD1#, 26), to_signed(-16#0A26799#, 26), to_signed(-16#0A73656#, 26),
     to_signed(-16#0ABEB4A#, 26), to_signed(-16#0B085BB#, 26));  -- sfix26 [32]

  -- Functions
  -- HDLCODER_TO_STDLOGIC 
  FUNCTION hdlcoder_to_stdlogic(arg: boolean) RETURN std_logic IS
  BEGIN
    IF arg THEN
      RETURN '1';
    ELSE
      RETURN '0';
    END IF;
  END FUNCTION;


  -- Signals
  SIGNAL stage_unsigned                   : unsigned(2 DOWNTO 0);  -- ufix3
  SIGNAL minResRX2FFTTwdlMapping_baseAddr : unsigned(6 DOWNTO 0);  -- ufix7
  SIGNAL minResRX2FFTTwdlMapping_cnt      : unsigned(6 DOWNTO 0);  -- ufix7
  SIGNAL minResRX2FFTTwdlMapping_octantReg1 : unsigned(2 DOWNTO 0);  -- ufix3
  SIGNAL minResRX2FFTTwdlMapping_twdlAddr_raw : unsigned(7 DOWNTO 0);  -- ufix8
  SIGNAL minResRX2FFTTwdlMapping_twdlAddrMap : unsigned(4 DOWNTO 0);  -- ufix5
  SIGNAL minResRX2FFTTwdlMapping_twdl45Reg : std_logic;
  SIGNAL minResRX2FFTTwdlMapping_dvldReg1 : std_logic;
  SIGNAL minResRX2FFTTwdlMapping_dvldReg2 : std_logic;
  SIGNAL minResRX2FFTTwdlMapping_maxCnt   : unsigned(6 DOWNTO 0);  -- ufix7
  SIGNAL minResRX2FFTTwdlMapping_baseAddr_next : unsigned(6 DOWNTO 0);  -- ufix7
  SIGNAL minResRX2FFTTwdlMapping_cnt_next : unsigned(6 DOWNTO 0);  -- ufix7
  SIGNAL minResRX2FFTTwdlMapping_octantReg1_next : unsigned(2 DOWNTO 0);  -- ufix3
  SIGNAL minResRX2FFTTwdlMapping_twdlAddr_raw_next : unsigned(7 DOWNTO 0);  -- ufix8
  SIGNAL minResRX2FFTTwdlMapping_twdlAddrMap_next : unsigned(4 DOWNTO 0);  -- ufix5
  SIGNAL minResRX2FFTTwdlMapping_twdl45Reg_next : std_logic;
  SIGNAL minResRX2FFTTwdlMapping_dvldReg1_next : std_logic;
  SIGNAL minResRX2FFTTwdlMapping_dvldReg2_next : std_logic;
  SIGNAL minResRX2FFTTwdlMapping_maxCnt_next : unsigned(6 DOWNTO 0);  -- ufix7
  SIGNAL twdlAddr                         : unsigned(4 DOWNTO 0);  -- ufix5
  SIGNAL twdlAddrVld                      : std_logic;
  SIGNAL twdlOctant                       : unsigned(2 DOWNTO 0);  -- ufix3
  SIGNAL twdl45                           : std_logic;
  SIGNAL twiddleS_re                      : signed(25 DOWNTO 0);  -- sfix26_En24
  SIGNAL twiddleReg_re                    : signed(25 DOWNTO 0);  -- sfix26_En24
  SIGNAL twiddleS_im                      : signed(25 DOWNTO 0);  -- sfix26_En24
  SIGNAL twiddleReg_im                    : signed(25 DOWNTO 0);  -- sfix26_En24
  SIGNAL twdlOctantReg                    : unsigned(2 DOWNTO 0);  -- ufix3
  SIGNAL twdl45Reg                        : std_logic;
  SIGNAL twdl_re_tmp                      : signed(25 DOWNTO 0);  -- sfix26_En24
  SIGNAL twdl_im_tmp                      : signed(25 DOWNTO 0);  -- sfix26_En24

BEGIN
  stage_unsigned <= unsigned(stage);

  -- minResRX2FFTTwdlMapping
  minResRX2FFTTwdlMapping_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        minResRX2FFTTwdlMapping_octantReg1 <= to_unsigned(16#0#, 3);
        minResRX2FFTTwdlMapping_twdlAddr_raw <= to_unsigned(16#00#, 8);
        minResRX2FFTTwdlMapping_twdlAddrMap <= to_unsigned(16#00#, 5);
        minResRX2FFTTwdlMapping_twdl45Reg <= '0';
        minResRX2FFTTwdlMapping_dvldReg1 <= '0';
        minResRX2FFTTwdlMapping_dvldReg2 <= '0';
        minResRX2FFTTwdlMapping_baseAddr <= to_unsigned(16#00#, 7);
        minResRX2FFTTwdlMapping_cnt <= to_unsigned(16#7F#, 7);
        minResRX2FFTTwdlMapping_maxCnt <= to_unsigned(16#00#, 7);
      ELSIF enb = '1' THEN
        minResRX2FFTTwdlMapping_baseAddr <= minResRX2FFTTwdlMapping_baseAddr_next;
        minResRX2FFTTwdlMapping_cnt <= minResRX2FFTTwdlMapping_cnt_next;
        minResRX2FFTTwdlMapping_octantReg1 <= minResRX2FFTTwdlMapping_octantReg1_next;
        minResRX2FFTTwdlMapping_twdlAddr_raw <= minResRX2FFTTwdlMapping_twdlAddr_raw_next;
        minResRX2FFTTwdlMapping_twdlAddrMap <= minResRX2FFTTwdlMapping_twdlAddrMap_next;
        minResRX2FFTTwdlMapping_twdl45Reg <= minResRX2FFTTwdlMapping_twdl45Reg_next;
        minResRX2FFTTwdlMapping_dvldReg1 <= minResRX2FFTTwdlMapping_dvldReg1_next;
        minResRX2FFTTwdlMapping_dvldReg2 <= minResRX2FFTTwdlMapping_dvldReg2_next;
        minResRX2FFTTwdlMapping_maxCnt <= minResRX2FFTTwdlMapping_maxCnt_next;
      END IF;
    END IF;
  END PROCESS minResRX2FFTTwdlMapping_process;

  minResRX2FFTTwdlMapping_output : PROCESS (dMemOutDly_vld, initIC, minResRX2FFTTwdlMapping_baseAddr,
       minResRX2FFTTwdlMapping_cnt, minResRX2FFTTwdlMapping_dvldReg1,
       minResRX2FFTTwdlMapping_dvldReg2, minResRX2FFTTwdlMapping_maxCnt,
       minResRX2FFTTwdlMapping_octantReg1, minResRX2FFTTwdlMapping_twdl45Reg,
       minResRX2FFTTwdlMapping_twdlAddrMap,
       minResRX2FFTTwdlMapping_twdlAddr_raw, stage_unsigned)
    VARIABLE octant : unsigned(2 DOWNTO 0);
    VARIABLE sub_cast : signed(17 DOWNTO 0);
    VARIABLE sub_temp : signed(17 DOWNTO 0);
    VARIABLE sub_cast_0 : signed(9 DOWNTO 0);
    VARIABLE sub_temp_0 : signed(9 DOWNTO 0);
    VARIABLE sub_cast_1 : signed(9 DOWNTO 0);
    VARIABLE sub_temp_1 : signed(9 DOWNTO 0);
    VARIABLE sub_cast_2 : signed(17 DOWNTO 0);
    VARIABLE sub_temp_2 : signed(17 DOWNTO 0);
    VARIABLE sub_cast_3 : signed(17 DOWNTO 0);
    VARIABLE sub_temp_3 : signed(17 DOWNTO 0);
  BEGIN
    sub_temp := to_signed(16#00000#, 18);
    sub_temp_0 := to_signed(16#000#, 10);
    sub_temp_1 := to_signed(16#000#, 10);
    sub_temp_2 := to_signed(16#00000#, 18);
    sub_temp_3 := to_signed(16#00000#, 18);
    sub_cast := to_signed(16#00000#, 18);
    sub_cast_0 := to_signed(16#000#, 10);
    sub_cast_1 := to_signed(16#000#, 10);
    sub_cast_2 := to_signed(16#00000#, 18);
    sub_cast_3 := to_signed(16#00000#, 18);
    minResRX2FFTTwdlMapping_baseAddr_next <= minResRX2FFTTwdlMapping_baseAddr;
    minResRX2FFTTwdlMapping_cnt_next <= minResRX2FFTTwdlMapping_cnt;
    minResRX2FFTTwdlMapping_twdlAddrMap_next <= minResRX2FFTTwdlMapping_twdlAddrMap;
    minResRX2FFTTwdlMapping_twdl45Reg_next <= minResRX2FFTTwdlMapping_twdl45Reg;
    minResRX2FFTTwdlMapping_maxCnt_next <= minResRX2FFTTwdlMapping_maxCnt;
    minResRX2FFTTwdlMapping_dvldReg2_next <= minResRX2FFTTwdlMapping_dvldReg1;
    minResRX2FFTTwdlMapping_dvldReg1_next <= dMemOutDly_vld;
    CASE minResRX2FFTTwdlMapping_twdlAddr_raw IS
      WHEN "00100000" =>
        octant := to_unsigned(16#0#, 3);
        minResRX2FFTTwdlMapping_twdl45Reg_next <= '1';
      WHEN "01000000" =>
        octant := to_unsigned(16#1#, 3);
        minResRX2FFTTwdlMapping_twdl45Reg_next <= '0';
      WHEN "01100000" =>
        octant := to_unsigned(16#2#, 3);
        minResRX2FFTTwdlMapping_twdl45Reg_next <= '1';
      WHEN "10000000" =>
        octant := to_unsigned(16#3#, 3);
        minResRX2FFTTwdlMapping_twdl45Reg_next <= '0';
      WHEN "10100000" =>
        octant := to_unsigned(16#4#, 3);
        minResRX2FFTTwdlMapping_twdl45Reg_next <= '1';
      WHEN OTHERS => 
        octant := minResRX2FFTTwdlMapping_twdlAddr_raw(7 DOWNTO 5);
        minResRX2FFTTwdlMapping_twdl45Reg_next <= '0';
    END CASE;
    minResRX2FFTTwdlMapping_octantReg1_next <= octant;
    CASE octant IS
      WHEN "000" =>
        minResRX2FFTTwdlMapping_twdlAddrMap_next <= minResRX2FFTTwdlMapping_twdlAddr_raw(4 DOWNTO 0);
      WHEN "001" =>
        sub_cast_0 := signed(resize(minResRX2FFTTwdlMapping_twdlAddr_raw, 10));
        sub_temp_0 := to_signed(16#040#, 10) - sub_cast_0;
        minResRX2FFTTwdlMapping_twdlAddrMap_next <= unsigned(sub_temp_0(4 DOWNTO 0));
      WHEN "010" =>
        sub_cast_1 := signed(resize(minResRX2FFTTwdlMapping_twdlAddr_raw, 10));
        sub_temp_1 := sub_cast_1 - to_signed(16#040#, 10);
        minResRX2FFTTwdlMapping_twdlAddrMap_next <= unsigned(sub_temp_1(4 DOWNTO 0));
      WHEN "011" =>
        sub_cast_2 := signed(resize(minResRX2FFTTwdlMapping_twdlAddr_raw & '0' & '0' & '0' & '0' & '0', 18));
        sub_temp_2 := to_signed(16#01000#, 18) - sub_cast_2;
        minResRX2FFTTwdlMapping_twdlAddrMap_next <= unsigned(sub_temp_2(9 DOWNTO 5));
      WHEN "100" =>
        sub_cast_3 := signed(resize(minResRX2FFTTwdlMapping_twdlAddr_raw & '0' & '0' & '0' & '0' & '0', 18));
        sub_temp_3 := sub_cast_3 - to_signed(16#01000#, 18);
        minResRX2FFTTwdlMapping_twdlAddrMap_next <= unsigned(sub_temp_3(9 DOWNTO 5));
      WHEN OTHERS => 
        sub_cast := signed(resize(minResRX2FFTTwdlMapping_twdlAddr_raw & '0' & '0' & '0' & '0' & '0', 18));
        sub_temp := to_signed(16#01800#, 18) - sub_cast;
        minResRX2FFTTwdlMapping_twdlAddrMap_next <= unsigned(sub_temp(9 DOWNTO 5));
    END CASE;
    minResRX2FFTTwdlMapping_twdlAddr_raw_next <= resize(unsigned'(minResRX2FFTTwdlMapping_baseAddr(0) & minResRX2FFTTwdlMapping_baseAddr(1) & minResRX2FFTTwdlMapping_baseAddr(2) & minResRX2FFTTwdlMapping_baseAddr(3) & minResRX2FFTTwdlMapping_baseAddr(4) & minResRX2FFTTwdlMapping_baseAddr(5) & minResRX2FFTTwdlMapping_baseAddr(6)), 8);
    IF ( NOT initIC) = '1' THEN 
      IF (dMemOutDly_vld AND hdlcoder_to_stdlogic(minResRX2FFTTwdlMapping_cnt = to_unsigned(16#00#, 7))) = '1' THEN 
        minResRX2FFTTwdlMapping_baseAddr_next <= minResRX2FFTTwdlMapping_baseAddr + to_unsigned(16#01#, 7);
      END IF;
    ELSE 
      minResRX2FFTTwdlMapping_baseAddr_next <= to_unsigned(16#00#, 7);
    END IF;
    IF ( NOT initIC) = '1' THEN 
      IF dMemOutDly_vld = '1' THEN 
        IF minResRX2FFTTwdlMapping_cnt = to_unsigned(16#00#, 7) THEN 
          minResRX2FFTTwdlMapping_cnt_next <= minResRX2FFTTwdlMapping_maxCnt;
        ELSE 
          minResRX2FFTTwdlMapping_cnt_next <= minResRX2FFTTwdlMapping_cnt - to_unsigned(16#01#, 7);
        END IF;
      END IF;
    ELSIF stage_unsigned = to_unsigned(16#0#, 3) THEN 
      minResRX2FFTTwdlMapping_maxCnt_next <= to_unsigned(16#7F#, 7);
      minResRX2FFTTwdlMapping_cnt_next <= to_unsigned(16#7F#, 7);
    ELSE 
      minResRX2FFTTwdlMapping_cnt_next <= minResRX2FFTTwdlMapping_maxCnt srl 1;
      minResRX2FFTTwdlMapping_maxCnt_next <= minResRX2FFTTwdlMapping_maxCnt srl 1;
    END IF;
    twdlAddr <= minResRX2FFTTwdlMapping_twdlAddrMap;
    twdlAddrVld <= minResRX2FFTTwdlMapping_dvldReg2;
    twdlOctant <= minResRX2FFTTwdlMapping_octantReg1;
    twdl45 <= minResRX2FFTTwdlMapping_twdl45Reg;
  END PROCESS minResRX2FFTTwdlMapping_output;


  -- Twiddle ROM1
  twiddleS_re <= Twiddle_re_table_data(to_integer(twdlAddr));

  TWIDDLEROM_RE_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        twiddleReg_re <= to_signed(16#0000000#, 26);
      ELSIF enb = '1' THEN
        twiddleReg_re <= twiddleS_re;
      END IF;
    END IF;
  END PROCESS TWIDDLEROM_RE_process;


  -- Twiddle ROM2
  twiddleS_im <= Twiddle_im_table_data(to_integer(twdlAddr));

  TWIDDLEROM_IM_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        twiddleReg_im <= to_signed(16#0000000#, 26);
      ELSIF enb = '1' THEN
        twiddleReg_im <= twiddleS_im;
      END IF;
    END IF;
  END PROCESS TWIDDLEROM_IM_process;


  intdelay_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        twdlOctantReg <= to_unsigned(16#0#, 3);
      ELSIF enb = '1' THEN
        twdlOctantReg <= twdlOctant;
      END IF;
    END IF;
  END PROCESS intdelay_process;


  intdelay_1_process : PROCESS (clk)
  BEGIN
    IF clk'EVENT AND clk = '1' THEN
      IF reset = '1' THEN
        twdl45Reg <= '0';
      ELSIF enb = '1' THEN
        twdl45Reg <= twdl45;
      END IF;
    END IF;
  END PROCESS intdelay_1_process;


  -- Radix22TwdlOctCorr
  Radix22TwdlOctCorr_output : PROCESS (twdl45Reg, twdlOctantReg, twiddleReg_im, twiddleReg_re)
    VARIABLE twdlIn_re : signed(25 DOWNTO 0);
    VARIABLE twdlIn_im : signed(25 DOWNTO 0);
    VARIABLE cast : signed(26 DOWNTO 0);
    VARIABLE cast_0 : signed(26 DOWNTO 0);
    VARIABLE cast_1 : signed(26 DOWNTO 0);
    VARIABLE cast_2 : signed(26 DOWNTO 0);
    VARIABLE cast_3 : signed(26 DOWNTO 0);
    VARIABLE cast_4 : signed(26 DOWNTO 0);
    VARIABLE cast_5 : signed(26 DOWNTO 0);
    VARIABLE cast_6 : signed(26 DOWNTO 0);
    VARIABLE cast_7 : signed(26 DOWNTO 0);
    VARIABLE cast_8 : signed(26 DOWNTO 0);
    VARIABLE cast_9 : signed(26 DOWNTO 0);
    VARIABLE cast_10 : signed(26 DOWNTO 0);
  BEGIN
    cast_0 := to_signed(16#0000000#, 27);
    cast_2 := to_signed(16#0000000#, 27);
    cast_4 := to_signed(16#0000000#, 27);
    cast_6 := to_signed(16#0000000#, 27);
    cast_8 := to_signed(16#0000000#, 27);
    cast_10 := to_signed(16#0000000#, 27);
    cast := to_signed(16#0000000#, 27);
    cast_1 := to_signed(16#0000000#, 27);
    cast_3 := to_signed(16#0000000#, 27);
    cast_5 := to_signed(16#0000000#, 27);
    cast_7 := to_signed(16#0000000#, 27);
    cast_9 := to_signed(16#0000000#, 27);
    twdlIn_re := twiddleReg_re;
    twdlIn_im := twiddleReg_im;
    IF twdl45Reg = '1' THEN 
      CASE twdlOctantReg IS
        WHEN "000" =>
          twdlIn_re := to_signed(16#0B504F3#, 26);
          twdlIn_im := to_signed(-16#0B504F3#, 26);
        WHEN "010" =>
          twdlIn_re := to_signed(-16#0B504F3#, 26);
          twdlIn_im := to_signed(-16#0B504F3#, 26);
        WHEN "100" =>
          twdlIn_re := to_signed(-16#0B504F3#, 26);
          twdlIn_im := to_signed(16#0B504F3#, 26);
        WHEN OTHERS => 
          twdlIn_re := to_signed(16#0B504F3#, 26);
          twdlIn_im := to_signed(-16#0B504F3#, 26);
      END CASE;
    ELSE 
      CASE twdlOctantReg IS
        WHEN "000" =>
          NULL;
        WHEN "001" =>
          cast := resize(twiddleReg_im, 27);
          cast_0 :=  - (cast);
          twdlIn_re := cast_0(25 DOWNTO 0);
          cast_5 := resize(twiddleReg_re, 27);
          cast_6 :=  - (cast_5);
          twdlIn_im := cast_6(25 DOWNTO 0);
        WHEN "010" =>
          twdlIn_re := twiddleReg_im;
          cast_7 := resize(twiddleReg_re, 27);
          cast_8 :=  - (cast_7);
          twdlIn_im := cast_8(25 DOWNTO 0);
        WHEN "011" =>
          cast_1 := resize(twiddleReg_re, 27);
          cast_2 :=  - (cast_1);
          twdlIn_re := cast_2(25 DOWNTO 0);
          twdlIn_im := twiddleReg_im;
        WHEN "100" =>
          cast_3 := resize(twiddleReg_re, 27);
          cast_4 :=  - (cast_3);
          twdlIn_re := cast_4(25 DOWNTO 0);
          cast_9 := resize(twiddleReg_im, 27);
          cast_10 :=  - (cast_9);
          twdlIn_im := cast_10(25 DOWNTO 0);
        WHEN OTHERS => 
          twdlIn_re := twiddleReg_im;
          twdlIn_im := twiddleReg_re;
      END CASE;
    END IF;
    twdl_re_tmp <= twdlIn_re;
    twdl_im_tmp <= twdlIn_im;
  END PROCESS Radix22TwdlOctCorr_output;


  twdl_re <= std_logic_vector(twdl_re_tmp);

  twdl_im <= std_logic_vector(twdl_im_tmp);

END rtl;

