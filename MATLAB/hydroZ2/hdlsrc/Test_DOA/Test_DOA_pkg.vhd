-- -------------------------------------------------------------
-- 
-- File Name: hydroZ2\hdlsrc\Test_DOA\Test_DOA_pkg.vhd
-- Created: 2022-04-10 13:32:07
-- 
-- Generated by MATLAB 9.9 and HDL Coder 3.17
-- 
-- -------------------------------------------------------------


LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

PACKAGE Test_DOA_pkg IS
  TYPE vector_of_signed15 IS ARRAY (NATURAL RANGE <>) OF signed(14 DOWNTO 0);
  TYPE matrix_of_signed15 IS ARRAY (NATURAL RANGE <>, NATURAL RANGE <>) OF signed(14 DOWNTO 0);
  TYPE vector_of_unsigned3 IS ARRAY (NATURAL RANGE <>) OF unsigned(2 DOWNTO 0);
  TYPE vector_of_signed17 IS ARRAY (NATURAL RANGE <>) OF signed(16 DOWNTO 0);
  TYPE vector_of_signed20 IS ARRAY (NATURAL RANGE <>) OF signed(19 DOWNTO 0);
END Test_DOA_pkg;

