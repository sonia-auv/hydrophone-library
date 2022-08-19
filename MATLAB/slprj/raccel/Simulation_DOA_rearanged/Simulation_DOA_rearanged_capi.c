#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Simulation_DOA_rearanged_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#ifndef SS_INT64
#define SS_INT64  46
#endif
#ifndef SS_UINT64
#define SS_UINT64  47
#endif
#else
#include "builtin_typeid_types.h"
#include "Simulation_DOA_rearanged.h"
#include "Simulation_DOA_rearanged_capi.h"
#include "Simulation_DOA_rearanged_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 1 , 0 } , { 1 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)" ) , TARGET_STRING ( "" )
, 1 , 1 , 0 , 2 , 0 } , { 2 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)" ) , TARGET_STRING ( "" )
, 2 , 2 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Constant1" ) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0
, 1 } , { 4 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Data Type Conversion10" ) , TARGET_STRING ( "" ) ,
0 , 3 , 0 , 0 , 2 } , { 5 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Data Type Conversion11" ) , TARGET_STRING ( "" ) ,
0 , 3 , 0 , 0 , 2 } , { 6 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Data Type Conversion12" ) , TARGET_STRING ( "" ) ,
0 , 3 , 0 , 0 , 2 } , { 7 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Data Type Conversion13" ) , TARGET_STRING ( "" ) ,
0 , 4 , 0 , 0 , 1 } , { 8 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Data Type Conversion5" ) , TARGET_STRING ( "" ) , 0
, 3 , 0 , 0 , 1 } , { 9 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Data Type Conversion6" ) , TARGET_STRING ( "" ) , 0
, 3 , 0 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Data Type Conversion7" ) , TARGET_STRING ( "" ) , 0
, 3 , 0 , 0 , 1 } , { 11 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Data Type Conversion8" ) , TARGET_STRING ( "" ) , 0
, 3 , 0 , 0 , 1 } , { 12 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Data Type Conversion9" ) , TARGET_STRING ( "" ) , 0
, 3 , 0 , 0 , 2 } , { 13 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/From Workspace" ) , TARGET_STRING ( "" ) , 0 , 2 ,
0 , 0 , 2 } , { 14 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/From Workspace1" ) , TARGET_STRING ( "" ) , 0 , 2 ,
0 , 0 , 2 } , { 15 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/From Workspace2" ) , TARGET_STRING ( "" ) , 0 , 2 ,
0 , 0 , 2 } , { 16 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/From Workspace3" ) , TARGET_STRING ( "" ) , 0 , 2 ,
0 , 0 , 2 } , { 17 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/From Workspace4" ) , TARGET_STRING ( "" ) , 0 , 2 ,
0 , 0 , 1 } , { 18 , 0 , TARGET_STRING ( "Simulation_DOA_rearanged/Product" )
, TARGET_STRING ( "" ) , 0 , 1 , 0 , 3 , 1 } , { 19 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Product1" ) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 3
, 1 } , { 20 , 0 , TARGET_STRING ( "Simulation_DOA_rearanged/Product2" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 3 , 1 } , { 21 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Product3" ) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 3
, 1 } , { 22 , 0 , TARGET_STRING ( "Simulation_DOA_rearanged/Add" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 1 } , { 23 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Switch" ) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 ,
1 } , { 24 , 0 , TARGET_STRING ( "Simulation_DOA_rearanged/Switch1" ) ,
TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 1 } , { 25 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Switch2" ) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 ,
1 } , { 26 , 0 , TARGET_STRING ( "Simulation_DOA_rearanged/Switch3" ) ,
TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 1 } , { 27 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Switch4" ) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 ,
1 } , { 28 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Vector Concatenate" ) ,
TARGET_STRING ( "" ) , 0 , 5 , 1 , 4 , 0 } , { 29 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Constant2" ) ,
TARGET_STRING ( "" ) , 0 , 5 , 2 , 5 , 3 } , { 30 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Data Type Conversion" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 0 } , { 31 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Data Type Conversion1" )
, TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 0 } , { 32 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Data Type Conversion10" )
, TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 0 } , { 33 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Data Type Conversion11" )
, TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 0 } , { 34 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Data Type Conversion2" )
, TARGET_STRING ( "" ) , 0 , 5 , 0 , 4 , 0 } , { 35 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Data Type Conversion3" )
, TARGET_STRING ( "" ) , 0 , 5 , 0 , 4 , 0 } , { 36 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Data Type Conversion4" )
, TARGET_STRING ( "" ) , 0 , 5 , 0 , 4 , 0 } , { 37 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Data Type Conversion5" )
, TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 0 } , { 38 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Data Type Conversion6" )
, TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 0 } , { 39 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Data Type Conversion7" )
, TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 0 } , { 40 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Data Type Conversion8" )
, TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 0 } , { 41 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Data Type Conversion9" )
, TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 0 } , { 42 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Square" ) , TARGET_STRING
( "" ) , 0 , 7 , 0 , 6 , 0 } , { 43 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Square1" ) ,
TARGET_STRING ( "" ) , 0 , 8 , 0 , 7 , 0 } , { 44 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Square2" ) ,
TARGET_STRING ( "" ) , 0 , 8 , 0 , 7 , 0 } , { 45 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Divide1" ) ,
TARGET_STRING ( "" ) , 0 , 9 , 0 , 8 , 0 } , { 46 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Divide3" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 0 } , { 47 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/MatrixMultiply" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 9 , 0 } , { 48 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Product2" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 2 , 0 } , { 49 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Product5" ) ,
TARGET_STRING ( "" ) , 0 , 9 , 0 , 8 , 0 } , { 50 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Subtract" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 10 , 0 } , { 51 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Subtract1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 10 , 0 } , { 52 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Subtract2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 10 , 0 } , { 53 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Subtract3" ) ,
TARGET_STRING ( "" ) , 0 , 10 , 0 , 11 , 0 } , { 54 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Subtract4" ) ,
TARGET_STRING ( "" ) , 0 , 11 , 0 , 12 , 0 } , { 55 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Atan" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 1 , 0 } , { 56 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Atan2" ) , TARGET_STRING
( "" ) , 0 , 2 , 0 , 0 , 0 } , { 57 , 1 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Sqrt" ) , TARGET_STRING (
"" ) , 0 , 2 , 0 , 0 , 0 } , { 58 , 2 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro 1/Complex to Magnitude-Angle HDL Optimized"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 1 } , { 59 , 2 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro 1/Complex to Magnitude-Angle HDL Optimized"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 14 , 1 } , { 60 , 2 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro 1/Complex to Magnitude-Angle HDL Optimized"
) , TARGET_STRING ( "" ) , 2 , 4 , 0 , 0 , 1 } , { 61 , 3 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro 1/FFT HDL Optimized" ) , TARGET_STRING (
"" ) , 0 , 12 , 0 , 15 , 1 } , { 62 , 3 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro 1/FFT HDL Optimized" ) , TARGET_STRING (
"" ) , 1 , 4 , 0 , 0 , 1 } , { 63 , 3 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro 1/FFT HDL Optimized" ) , TARGET_STRING (
"" ) , 2 , 4 , 0 , 0 , 1 } , { 64 , 3 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro 1/FFT HDL Optimized" ) , TARGET_STRING (
"" ) , 3 , 4 , 0 , 0 , 1 } , { 65 , 4 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro 2/Complex to Magnitude-Angle HDL Optimized"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 1 } , { 66 , 4 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro 2/Complex to Magnitude-Angle HDL Optimized"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 14 , 1 } , { 67 , 4 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro 2/Complex to Magnitude-Angle HDL Optimized"
) , TARGET_STRING ( "" ) , 2 , 4 , 0 , 0 , 1 } , { 68 , 5 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro 2/FFT HDL Optimized" ) , TARGET_STRING (
"" ) , 0 , 12 , 0 , 15 , 1 } , { 69 , 5 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro 2/FFT HDL Optimized" ) , TARGET_STRING (
"" ) , 1 , 4 , 0 , 0 , 1 } , { 70 , 5 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro 2/FFT HDL Optimized" ) , TARGET_STRING (
"" ) , 2 , 4 , 0 , 0 , 1 } , { 71 , 6 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro 3/Complex to Magnitude-Angle HDL Optimized"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 1 } , { 72 , 6 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro 3/Complex to Magnitude-Angle HDL Optimized"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 14 , 1 } , { 73 , 6 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro 3/Complex to Magnitude-Angle HDL Optimized"
) , TARGET_STRING ( "" ) , 2 , 4 , 0 , 0 , 1 } , { 74 , 7 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro 3/FFT HDL Optimized" ) , TARGET_STRING (
"" ) , 0 , 12 , 0 , 15 , 1 } , { 75 , 7 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro 3/FFT HDL Optimized" ) , TARGET_STRING (
"" ) , 1 , 4 , 0 , 0 , 1 } , { 76 , 7 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro 3/FFT HDL Optimized" ) , TARGET_STRING (
"" ) , 2 , 4 , 0 , 0 , 1 } , { 77 , 8 , TARGET_STRING (
 "Simulation_DOA_rearanged/FFT Hydro Ref/Complex to Magnitude-Angle HDL Optimized"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 1 } , { 78 , 8 , TARGET_STRING (
 "Simulation_DOA_rearanged/FFT Hydro Ref/Complex to Magnitude-Angle HDL Optimized"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 14 , 1 } , { 79 , 8 , TARGET_STRING (
 "Simulation_DOA_rearanged/FFT Hydro Ref/Complex to Magnitude-Angle HDL Optimized"
) , TARGET_STRING ( "" ) , 2 , 4 , 0 , 0 , 1 } , { 80 , 9 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro Ref/FFT HDL Optimized" ) , TARGET_STRING
( "" ) , 0 , 12 , 0 , 15 , 1 } , { 81 , 9 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro Ref/FFT HDL Optimized" ) , TARGET_STRING
( "" ) , 1 , 4 , 0 , 0 , 1 } , { 82 , 9 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro Ref/FFT HDL Optimized" ) , TARGET_STRING
( "" ) , 2 , 4 , 0 , 0 , 1 } , { 83 , 9 , TARGET_STRING (
"Simulation_DOA_rearanged/FFT Hydro Ref/FFT HDL Optimized" ) , TARGET_STRING
( "" ) , 3 , 4 , 0 , 0 , 1 } , { 84 , 10 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem1" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 13 , 0 } , { 85 , 12 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem2" ) , TARGET_STRING ( ""
) , 0 , 1 , 0 , 16 , 0 } , { 86 , 14 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem3" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 14 , 0 } , { 87 , 16 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem4" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 13 , 0 } , { 88 , 18 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem5" ) , TARGET_STRING ( ""
) , 0 , 1 , 0 , 16 , 0 } , { 89 , 20 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem6" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 14 , 0 } , { 90 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Logical Operator" ) , TARGET_STRING
( "" ) , 0 , 4 , 0 , 0 , 1 } , { 91 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Logical Operator1" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 92 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Logical Operator2" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 93 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Logical Operator3" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 94 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Product" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 13 , 1 } , { 95 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Relational Operator" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 96 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Relational Operator1" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 97 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Relational Operator2" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 98 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Relational Operator3" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 99 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Relational Operator4" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 100 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Delay" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 16 , 1 } , { 101 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Delay1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 13 , 1 } , { 102 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Delay2" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 14 , 1 } , { 103 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Delay3" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 13 , 1 } , { 104 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Delay4" ) , TARGET_STRING ( "" ) ,
0 , 4 , 0 , 0 , 1 } , { 105 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Delay5" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 13 , 1 } , { 106 , 22 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem1" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 13 , 0 } , { 107 , 24 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem2" ) , TARGET_STRING ( ""
) , 0 , 1 , 0 , 16 , 0 } , { 108 , 26 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem3" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 14 , 0 } , { 109 , 28 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem4" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 13 , 0 } , { 110 , 30 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem5" ) , TARGET_STRING ( ""
) , 0 , 1 , 0 , 16 , 0 } , { 111 , 32 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem6" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 14 , 0 } , { 112 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Logical Operator" ) , TARGET_STRING
( "" ) , 0 , 4 , 0 , 0 , 1 } , { 113 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Logical Operator1" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 114 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Logical Operator2" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 115 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Logical Operator3" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 116 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Product" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 13 , 1 } , { 117 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Relational Operator" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 118 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Relational Operator1" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 119 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Relational Operator2" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 120 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Relational Operator3" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 121 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Relational Operator4" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 122 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Delay" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 16 , 1 } , { 123 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Delay1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 13 , 1 } , { 124 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Delay2" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 14 , 1 } , { 125 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Delay3" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 13 , 1 } , { 126 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Delay4" ) , TARGET_STRING ( "" ) ,
0 , 4 , 0 , 0 , 1 } , { 127 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Delay5" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 13 , 1 } , { 128 , 34 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem1" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 13 , 0 } , { 129 , 36 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem2" ) , TARGET_STRING ( ""
) , 0 , 1 , 0 , 16 , 0 } , { 130 , 38 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem3" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 14 , 0 } , { 131 , 40 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem4" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 13 , 0 } , { 132 , 42 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem5" ) , TARGET_STRING ( ""
) , 0 , 1 , 0 , 16 , 0 } , { 133 , 44 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem6" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 14 , 0 } , { 134 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Logical Operator" ) , TARGET_STRING
( "" ) , 0 , 4 , 0 , 0 , 1 } , { 135 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Logical Operator1" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 136 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Logical Operator2" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 137 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Logical Operator3" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 138 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Product" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 13 , 1 } , { 139 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Relational Operator" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 140 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Relational Operator1" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 141 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Relational Operator2" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 142 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Relational Operator3" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 143 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Relational Operator4" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 144 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Delay" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 16 , 1 } , { 145 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Delay1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 13 , 1 } , { 146 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Delay2" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 14 , 1 } , { 147 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Delay3" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 13 , 1 } , { 148 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Delay4" ) , TARGET_STRING ( "" ) ,
0 , 4 , 0 , 0 , 1 } , { 149 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Delay5" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 13 , 1 } , { 150 , 46 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem1" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 13 , 0 } , { 151 , 48 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem2" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 16 , 0 } , { 152 , 50 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem3" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 14 , 0 } , { 153 , 52 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem4" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 13 , 0 } , { 154 , 54 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem5" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 16 , 0 } , { 155 , 56 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem6" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 14 , 0 } , { 156 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Logical Operator" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 157 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Logical Operator1" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 158 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Logical Operator2" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 159 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Logical Operator3" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 160 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Product" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 13 , 1 } , { 161 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Relational Operator" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 162 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Relational Operator1" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 163 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Relational Operator2" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 164 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Relational Operator3" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 165 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Relational Operator4" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 166 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Delay" ) , TARGET_STRING ( "" ) ,
0 , 1 , 0 , 16 , 1 } , { 167 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Delay1" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 13 , 1 } , { 168 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Delay2" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 14 , 1 } , { 169 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Delay3" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 13 , 1 } , { 170 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Delay4" ) , TARGET_STRING ( "" )
, 0 , 4 , 0 , 0 , 1 } , { 171 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Delay5" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 13 , 1 } , { 172 , 58 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/SampleHold" ) , TARGET_STRING ( "" )
, 0 , 4 , 0 , 0 , 0 } , { 173 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/Logical Operator" ) , TARGET_STRING
( "" ) , 0 , 4 , 0 , 0 , 1 } , { 174 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/Logical Operator1" ) , TARGET_STRING
( "" ) , 0 , 4 , 0 , 0 , 1 } , { 175 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/Logical Operator2" ) , TARGET_STRING
( "" ) , 0 , 4 , 0 , 0 , 1 } , { 176 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/Relational Operator" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 177 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/Delay" ) , TARGET_STRING ( "" ) , 0
, 4 , 0 , 0 , 1 } , { 178 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 2 } , { 179 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator1" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 2 } , { 180 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator2" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 2 } , { 181 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator3" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 2 } , { 182 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/From Workspace" ) , TARGET_STRING (
"Signal ref" ) , 0 , 2 , 0 , 0 , 2 } , { 183 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/From Workspace1" ) , TARGET_STRING (
"Signal 1" ) , 0 , 2 , 0 , 0 , 2 } , { 184 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/From Workspace2" ) , TARGET_STRING (
"Signal 2" ) , 0 , 2 , 0 , 0 , 2 } , { 185 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/From Workspace3" ) , TARGET_STRING (
"Signal 3" ) , 0 , 2 , 0 , 0 , 2 } , { 186 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Divide" ) , TARGET_STRING ( "" ) , 0 , 2
, 0 , 0 , 1 } , { 187 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Divide1" ) , TARGET_STRING ( "" ) , 0 ,
2 , 0 , 0 , 1 } , { 188 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Divide2" ) , TARGET_STRING ( "" ) , 0 ,
2 , 0 , 0 , 1 } , { 189 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Divide3" ) , TARGET_STRING ( "" ) , 0 ,
2 , 0 , 0 , 1 } , { 190 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Product1" ) , TARGET_STRING (
"Signal ref" ) , 0 , 2 , 0 , 0 , 1 } , { 191 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Product2" ) , TARGET_STRING (
"Signal ref" ) , 0 , 2 , 0 , 0 , 1 } , { 192 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Product3" ) , TARGET_STRING (
"Signal ref" ) , 0 , 2 , 0 , 0 , 1 } , { 193 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Product4" ) , TARGET_STRING (
"Signal ref" ) , 0 , 2 , 0 , 0 , 2 } , { 194 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Product5" ) , TARGET_STRING ( "Signal 1"
) , 0 , 2 , 0 , 0 , 2 } , { 195 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Product6" ) , TARGET_STRING ( "Signal 2"
) , 0 , 2 , 0 , 0 , 2 } , { 196 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Product7" ) , TARGET_STRING ( "Signal 3"
) , 0 , 2 , 0 , 0 , 2 } , { 197 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Product8" ) , TARGET_STRING (
"Signal ref" ) , 0 , 2 , 0 , 0 , 1 } , { 198 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Round" ) , TARGET_STRING (
"CAN Hydro Ref" ) , 0 , 2 , 0 , 0 , 1 } , { 199 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Round1" ) , TARGET_STRING (
"CAN Hydro 1" ) , 0 , 2 , 0 , 0 , 1 } , { 200 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Round2" ) , TARGET_STRING (
"CAN Hydro 2" ) , 0 , 2 , 0 , 0 , 1 } , { 201 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Round3" ) , TARGET_STRING (
"CAN Hydro 3" ) , 0 , 2 , 0 , 0 , 1 } , { 202 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 1 Gaussian" ) , TARGET_STRING ( ""
) , 0 , 2 , 0 , 0 , 2 } , { 203 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 1 Uniform" ) , TARGET_STRING ( ""
) , 0 , 2 , 0 , 0 , 2 } , { 204 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 2 Gaussian" ) , TARGET_STRING ( ""
) , 0 , 2 , 0 , 0 , 2 } , { 205 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 2 Uniform" ) , TARGET_STRING ( ""
) , 0 , 2 , 0 , 0 , 2 } , { 206 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 3 Gaussian" ) , TARGET_STRING ( ""
) , 0 , 2 , 0 , 0 , 2 } , { 207 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 3 Uniform" ) , TARGET_STRING ( ""
) , 0 , 2 , 0 , 0 , 2 } , { 208 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro Ref Gaussian" ) , TARGET_STRING (
"" ) , 0 , 2 , 0 , 0 , 2 } , { 209 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro Ref Uniform" ) , TARGET_STRING (
"" ) , 0 , 2 , 0 , 0 , 2 } , { 210 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Add" ) , TARGET_STRING ( "" ) , 0 , 2 ,
0 , 0 , 1 } , { 211 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Add1" ) , TARGET_STRING ( "" ) , 0 , 2 ,
0 , 0 , 1 } , { 212 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Add2" ) , TARGET_STRING ( "" ) , 0 , 2 ,
0 , 0 , 1 } , { 213 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Add3" ) , TARGET_STRING ( "" ) , 0 , 2 ,
0 , 0 , 1 } , { 214 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Add4" ) , TARGET_STRING ( "" ) , 0 , 2 ,
0 , 0 , 1 } , { 215 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Add5" ) , TARGET_STRING ( "" ) , 0 , 2 ,
0 , 0 , 1 } , { 216 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Add6" ) , TARGET_STRING ( "" ) , 0 , 2 ,
0 , 0 , 1 } , { 217 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Add7" ) , TARGET_STRING ( "" ) , 0 , 2 ,
0 , 0 , 1 } , { 218 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Switch" ) , TARGET_STRING (
"Bruit canal ref" ) , 0 , 2 , 0 , 0 , 1 } , { 219 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Switch1" ) , TARGET_STRING (
"Bruit canal 1" ) , 0 , 2 , 0 , 0 , 1 } , { 220 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Switch2" ) , TARGET_STRING (
"Bruit canal 2" ) , 0 , 2 , 0 , 0 , 1 } , { 221 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Switch3" ) , TARGET_STRING (
"Bruit canal 3" ) , 0 , 2 , 0 , 0 , 1 } , { 222 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Switch4" ) , TARGET_STRING ( "" ) , 0 ,
2 , 0 , 0 , 1 } , { 223 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Switch5" ) , TARGET_STRING ( "" ) , 0 ,
2 , 0 , 0 , 1 } , { 224 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Switch6" ) , TARGET_STRING ( "" ) , 0 ,
2 , 0 , 0 , 1 } , { 225 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Switch7" ) , TARGET_STRING ( "" ) , 0 ,
2 , 0 , 0 , 1 } , { 226 , 60 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem4/Triggered Subsystem1" ) , TARGET_STRING
( "" ) , 0 , 4 , 0 , 0 , 0 } , { 227 , 60 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem4/Triggered Subsystem1" ) , TARGET_STRING
( "" ) , 1 , 0 , 0 , 17 , 0 } , { 228 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem4/Logical Operator" ) , TARGET_STRING ( ""
) , 0 , 4 , 0 , 0 , 1 } , { 229 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem4/Logical Operator1" ) , TARGET_STRING (
"" ) , 0 , 4 , 0 , 0 , 1 } , { 230 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem4/Logical Operator2" ) , TARGET_STRING (
"" ) , 0 , 4 , 0 , 0 , 1 } , { 231 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem4/Delay" ) , TARGET_STRING ( "" ) , 0 , 4
, 0 , 0 , 1 } , { 232 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem4/Delay1" ) , TARGET_STRING ( "" ) , 0 , 4
, 0 , 0 , 1 } , { 233 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem/Data Type Conversion1" )
, TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 1 } , { 234 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem/Product2" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 1 } , { 235 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem/Add" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 16 , 1 } , { 236 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem/Delay" ) , TARGET_STRING
( "" ) , 0 , 1 , 0 , 16 , 1 } , { 237 , 10 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem1/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 0 } , { 238 , 12 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem2/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 0 } , { 239 , 14 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem3/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 14 , 0 } , { 240 , 16 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem4/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 0 } , { 241 , 18 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem5/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 0 } , { 242 , 20 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem6/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 14 , 0 } , { 243 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem/Data Type Conversion1" )
, TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 1 } , { 244 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem/Product2" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 1 } , { 245 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem/Add" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 16 , 1 } , { 246 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem/Delay" ) , TARGET_STRING
( "" ) , 0 , 1 , 0 , 16 , 1 } , { 247 , 22 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem1/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 0 } , { 248 , 24 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem2/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 0 } , { 249 , 26 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem3/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 14 , 0 } , { 250 , 28 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem4/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 0 } , { 251 , 30 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem5/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 0 } , { 252 , 32 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem6/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 14 , 0 } , { 253 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem/Data Type Conversion1" )
, TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 1 } , { 254 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem/Product2" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 1 } , { 255 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem/Add" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 16 , 1 } , { 256 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem/Delay" ) , TARGET_STRING
( "" ) , 0 , 1 , 0 , 16 , 1 } , { 257 , 34 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem1/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 0 } , { 258 , 36 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem2/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 0 } , { 259 , 38 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem3/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 14 , 0 } , { 260 , 40 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem4/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 0 } , { 261 , 42 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem5/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 0 } , { 262 , 44 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem6/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 14 , 0 } , { 263 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem/Data Type Conversion1"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 1 } , { 264 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem/Product2" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 1 } , { 265 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem/Add" ) , TARGET_STRING
( "" ) , 0 , 1 , 0 , 16 , 1 } , { 266 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem/Delay" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 1 } , { 267 , 46 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem1/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 0 } , { 268 , 48 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem2/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 0 } , { 269 , 50 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem3/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 14 , 0 } , { 270 , 52 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem4/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 0 } , { 271 , 54 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem5/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 0 } , { 272 , 56 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem6/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 14 , 0 } , { 273 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/Fenetrage/Switch" ) , TARGET_STRING
( "" ) , 0 , 3 , 0 , 0 , 1 } , { 274 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/Fenetrage/Direct Lookup Table (n-D)"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 18 , 1 } , { 275 , 58 , TARGET_STRING
( "Simulation_DOA_rearanged/Signal Trigger/SampleHold/Sample and Hold" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 0 } , { 276 , 60 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem4/Triggered Subsystem1/Data Type Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 0 } , { 277 , 60 , TARGET_STRING
( "Simulation_DOA_rearanged/Subsystem4/Triggered Subsystem1/Divide" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 17 , 0 } , { 278 , 60 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem4/Triggered Subsystem1/Relational Operator"
) , TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 0 } , { 279 , 10 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem1/Sample and Hold/In" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 0 } , { 280 , 12 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem2/Sample and Hold/In" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 0 } , { 281 , 14 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem3/Sample and Hold/In" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 14 , 0 } , { 282 , 16 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem4/Sample and Hold/In" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 0 } , { 283 , 18 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem5/Sample and Hold/In" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 0 } , { 284 , 20 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem6/Sample and Hold/In" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 14 , 0 } , { 285 , 22 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem1/Sample and Hold/In" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 0 } , { 286 , 24 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem2/Sample and Hold/In" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 0 } , { 287 , 26 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem3/Sample and Hold/In" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 14 , 0 } , { 288 , 28 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem4/Sample and Hold/In" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 0 } , { 289 , 30 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem5/Sample and Hold/In" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 0 } , { 290 , 32 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem6/Sample and Hold/In" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 14 , 0 } , { 291 , 34 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem1/Sample and Hold/In" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 0 } , { 292 , 36 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem2/Sample and Hold/In" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 0 } , { 293 , 38 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem3/Sample and Hold/In" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 14 , 0 } , { 294 , 40 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem4/Sample and Hold/In" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 0 } , { 295 , 42 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem5/Sample and Hold/In" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 0 } , { 296 , 44 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem6/Sample and Hold/In" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 14 , 0 } , { 297 , 46 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem1/Sample and Hold/In" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 0 } , { 298 , 48 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem2/Sample and Hold/In" )
, TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 0 } , { 299 , 50 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem3/Sample and Hold/In" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 14 , 0 } , { 300 , 52 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem4/Sample and Hold/In" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 0 } , { 301 , 54 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem5/Sample and Hold/In" )
, TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 0 } , { 302 , 56 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem6/Sample and Hold/In" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 14 , 0 } , { 303 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Signal Trigger/Fenetrage/Counter/Data Type Conversion1"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 1 } , { 304 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/Fenetrage/Counter/Logical Operator"
) , TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 305 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/Fenetrage/Counter/Product2" ) ,
TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 1 } , { 306 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/Fenetrage/Counter/Add" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 16 , 1 } , { 307 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/Fenetrage/Counter/Switch" ) ,
TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 1 } , { 308 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/Fenetrage/Counter/Delay" ) ,
TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 1 } , { 309 , 58 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/SampleHold/Sample and Hold/In" ) ,
TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 0 } , { 310 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Logical Operator"
) , TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 311 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Logical Operator1"
) , TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 312 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Logical Operator2"
) , TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 313 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/feedback_mux"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 1 } , { 314 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/input_mux"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 1 } , { 315 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Delay3"
) , TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 316 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Delay4"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 19 , 1 } , { 317 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Delay5"
) , TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 318 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/accumulator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 1 } , { 319 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Signal Trigger/Fenetrage/Counter/Compare To Constant/Compare"
) , TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 320 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Compare To Constant1/Compare"
) , TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 321 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Compare To Constant2/Compare"
) , TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 322 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/DT_convert"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 19 , 1 } , { 323 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/DT_convert1"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 19 , 1 } , { 324 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Relational Operator"
) , TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 325 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Switch_dir"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 19 , 1 } , { 326 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Switch_enb"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 19 , 1 } , { 327 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Switch_load"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 19 , 1 } , { 328 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Switch_max"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 19 , 1 } , { 329 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Switch_reset"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 19 , 1 } , { 330 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Switch_type"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 19 , 1 } , { 331 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Count_reg"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 19 , 1 } , { 332 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Multiply-Add/Product"
) , TARGET_STRING ( "" ) , 0 , 13 , 0 , 20 , 1 } , { 333 , 0 , TARGET_STRING
(
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Multiply-Add/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 13 , 1 } , { 334 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Add_wrap/Add"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 21 , 1 } , { 335 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Add_wrap/Wrap"
) , TARGET_STRING ( "" ) , 0 , 5 , 0 , 22 , 1 } , { 336 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Add_wrap/Switch_wrap"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 19 , 1 } , { 337 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Dir_logic/Logical Operator"
) , TARGET_STRING ( "" ) , 0 , 4 , 0 , 0 , 1 } , { 338 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Sub_wrap/Add"
) , TARGET_STRING ( "" ) , 0 , 5 , 0 , 23 , 1 } , { 339 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Sub_wrap/Wrap"
) , TARGET_STRING ( "" ) , 0 , 5 , 0 , 22 , 1 } , { 340 , 0 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Sub_wrap/Switch_wrap"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 19 , 1 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 341 , TARGET_STRING (
"Simulation_DOA_rearanged/Constant1" ) , TARGET_STRING ( "Value" ) , 3 , 0 ,
0 } , { 342 , TARGET_STRING ( "Simulation_DOA_rearanged/Constant2" ) ,
TARGET_STRING ( "Value" ) , 3 , 0 , 0 } , { 343 , TARGET_STRING (
"Simulation_DOA_rearanged/Constant5" ) , TARGET_STRING ( "Value" ) , 2 , 0 ,
0 } , { 344 , TARGET_STRING ( "Simulation_DOA_rearanged/From Workspace" ) ,
TARGET_STRING ( "Time0" ) , 2 , 4 , 0 } , { 345 , TARGET_STRING (
"Simulation_DOA_rearanged/From Workspace" ) , TARGET_STRING ( "Data0" ) , 2 ,
4 , 0 } , { 346 , TARGET_STRING ( "Simulation_DOA_rearanged/From Workspace1"
) , TARGET_STRING ( "Time0" ) , 2 , 4 , 0 } , { 347 , TARGET_STRING (
"Simulation_DOA_rearanged/From Workspace1" ) , TARGET_STRING ( "Data0" ) , 2
, 4 , 0 } , { 348 , TARGET_STRING (
"Simulation_DOA_rearanged/From Workspace2" ) , TARGET_STRING ( "Time0" ) , 2
, 4 , 0 } , { 349 , TARGET_STRING (
"Simulation_DOA_rearanged/From Workspace2" ) , TARGET_STRING ( "Data0" ) , 2
, 4 , 0 } , { 350 , TARGET_STRING (
"Simulation_DOA_rearanged/From Workspace3" ) , TARGET_STRING ( "Time0" ) , 2
, 4 , 0 } , { 351 , TARGET_STRING (
"Simulation_DOA_rearanged/From Workspace3" ) , TARGET_STRING ( "Data0" ) , 2
, 4 , 0 } , { 352 , TARGET_STRING (
"Simulation_DOA_rearanged/From Workspace4" ) , TARGET_STRING ( "Time0" ) , 2
, 5 , 0 } , { 353 , TARGET_STRING (
"Simulation_DOA_rearanged/From Workspace4" ) , TARGET_STRING ( "Data0" ) , 2
, 5 , 0 } , { 354 , TARGET_STRING ( "Simulation_DOA_rearanged/Switch" ) ,
TARGET_STRING ( "Threshold" ) , 0 , 0 , 1 } , { 355 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Heading" ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 1 } , { 356 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Fréquence" ) ,
TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 2 } , { 357 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Elevation" ) ,
TARGET_STRING ( "InitialOutput" ) , 2 , 0 , 0 } , { 358 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Constant1" ) ,
TARGET_STRING ( "Value" ) , 14 , 0 , 24 } , { 359 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Constant10" ) ,
TARGET_STRING ( "Value" ) , 3 , 0 , 25 } , { 360 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Constant2" ) ,
TARGET_STRING ( "Value" ) , 5 , 2 , 5 } , { 361 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Constant5" ) ,
TARGET_STRING ( "Value" ) , 3 , 0 , 21 } , { 362 , TARGET_STRING (
"Simulation_DOA_rearanged/Calcul Direction (tested)/Constant6" ) ,
TARGET_STRING ( "Value" ) , 5 , 6 , 5 } , { 363 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Constant1" ) , TARGET_STRING (
"Value" ) , 14 , 0 , 26 } , { 364 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Constant2" ) , TARGET_STRING (
"Value" ) , 14 , 0 , 27 } , { 365 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Constant3" ) , TARGET_STRING (
"Value" ) , 14 , 0 , 26 } , { 366 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Delay" ) , TARGET_STRING (
"InitialCondition" ) , 1 , 0 , 16 } , { 367 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Delay1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 13 } , { 368 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Delay2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 14 } , { 369 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Delay3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 13 } , { 370 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Delay4" ) , TARGET_STRING (
"InitialCondition" ) , 4 , 0 , 0 } , { 371 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Delay5" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 13 } , { 372 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Constant1" ) , TARGET_STRING (
"Value" ) , 14 , 0 , 26 } , { 373 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Constant2" ) , TARGET_STRING (
"Value" ) , 14 , 0 , 27 } , { 374 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Constant3" ) , TARGET_STRING (
"Value" ) , 14 , 0 , 26 } , { 375 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Delay" ) , TARGET_STRING (
"InitialCondition" ) , 1 , 0 , 16 } , { 376 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Delay1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 13 } , { 377 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Delay2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 14 } , { 378 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Delay3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 13 } , { 379 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Delay4" ) , TARGET_STRING (
"InitialCondition" ) , 4 , 0 , 0 } , { 380 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Delay5" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 13 } , { 381 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Constant1" ) , TARGET_STRING (
"Value" ) , 14 , 0 , 26 } , { 382 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Constant2" ) , TARGET_STRING (
"Value" ) , 14 , 0 , 27 } , { 383 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Constant3" ) , TARGET_STRING (
"Value" ) , 14 , 0 , 26 } , { 384 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Delay" ) , TARGET_STRING (
"InitialCondition" ) , 1 , 0 , 16 } , { 385 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Delay1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 13 } , { 386 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Delay2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 14 } , { 387 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Delay3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 13 } , { 388 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Delay4" ) , TARGET_STRING (
"InitialCondition" ) , 4 , 0 , 0 } , { 389 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Delay5" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 13 } , { 390 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Constant1" ) , TARGET_STRING (
"Value" ) , 14 , 0 , 26 } , { 391 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Constant2" ) , TARGET_STRING (
"Value" ) , 14 , 0 , 27 } , { 392 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Constant3" ) , TARGET_STRING (
"Value" ) , 14 , 0 , 26 } , { 393 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Delay" ) , TARGET_STRING (
"InitialCondition" ) , 1 , 0 , 16 } , { 394 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Delay1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 13 } , { 395 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Delay2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 14 } , { 396 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Delay3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 13 } , { 397 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Delay4" ) , TARGET_STRING (
"InitialCondition" ) , 4 , 0 , 0 } , { 398 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Delay5" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 13 } , { 399 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/Delay" ) , TARGET_STRING (
"InitialCondition" ) , 4 , 0 , 0 } , { 400 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Constant10" ) , TARGET_STRING ( "Value"
) , 2 , 0 , 0 } , { 401 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Constant11" ) , TARGET_STRING ( "Value"
) , 2 , 0 , 0 } , { 402 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Constant12" ) , TARGET_STRING ( "Value"
) , 2 , 0 , 0 } , { 403 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Constant13" ) , TARGET_STRING ( "Value"
) , 2 , 0 , 0 } , { 404 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Constant14" ) , TARGET_STRING ( "Value"
) , 2 , 0 , 0 } , { 405 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Constant15" ) , TARGET_STRING ( "Value"
) , 2 , 0 , 0 } , { 406 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Constant16" ) , TARGET_STRING ( "Value"
) , 2 , 0 , 0 } , { 407 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Constant17" ) , TARGET_STRING ( "Value"
) , 2 , 0 , 0 } , { 408 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Constant18" ) , TARGET_STRING ( "Value"
) , 2 , 0 , 0 } , { 409 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Constant19" ) , TARGET_STRING ( "Value"
) , 2 , 0 , 0 } , { 410 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Constant8" ) , TARGET_STRING ( "Value" )
, 2 , 0 , 0 } , { 411 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Constant9" ) , TARGET_STRING ( "Value" )
, 2 , 0 , 0 } , { 412 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator" ) ,
TARGET_STRING ( "Amplitude" ) , 2 , 0 , 0 } , { 413 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator" ) ,
TARGET_STRING ( "Period" ) , 2 , 0 , 0 } , { 414 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator" ) ,
TARGET_STRING ( "PulseWidth" ) , 2 , 0 , 0 } , { 415 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator" ) ,
TARGET_STRING ( "PhaseDelay" ) , 2 , 0 , 0 } , { 416 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator1" ) ,
TARGET_STRING ( "Amplitude" ) , 2 , 0 , 0 } , { 417 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator1" ) ,
TARGET_STRING ( "Period" ) , 2 , 0 , 0 } , { 418 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator1" ) ,
TARGET_STRING ( "PulseWidth" ) , 2 , 0 , 0 } , { 419 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator1" ) ,
TARGET_STRING ( "PhaseDelay" ) , 2 , 0 , 0 } , { 420 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator2" ) ,
TARGET_STRING ( "Amplitude" ) , 2 , 0 , 0 } , { 421 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator2" ) ,
TARGET_STRING ( "Period" ) , 2 , 0 , 0 } , { 422 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator2" ) ,
TARGET_STRING ( "PulseWidth" ) , 2 , 0 , 0 } , { 423 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator2" ) ,
TARGET_STRING ( "PhaseDelay" ) , 2 , 0 , 0 } , { 424 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator3" ) ,
TARGET_STRING ( "Amplitude" ) , 2 , 0 , 0 } , { 425 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator3" ) ,
TARGET_STRING ( "Period" ) , 2 , 0 , 0 } , { 426 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator3" ) ,
TARGET_STRING ( "PulseWidth" ) , 2 , 0 , 0 } , { 427 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Discrete Pulse Generator3" ) ,
TARGET_STRING ( "PhaseDelay" ) , 2 , 0 , 0 } , { 428 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/From Workspace" ) , TARGET_STRING (
"Time0" ) , 2 , 7 , 0 } , { 429 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/From Workspace" ) , TARGET_STRING (
"Data0" ) , 2 , 7 , 0 } , { 430 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/From Workspace1" ) , TARGET_STRING (
"Time0" ) , 2 , 7 , 0 } , { 431 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/From Workspace1" ) , TARGET_STRING (
"Data0" ) , 2 , 7 , 0 } , { 432 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/From Workspace2" ) , TARGET_STRING (
"Time0" ) , 2 , 7 , 0 } , { 433 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/From Workspace2" ) , TARGET_STRING (
"Data0" ) , 2 , 7 , 0 } , { 434 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/From Workspace3" ) , TARGET_STRING (
"Time0" ) , 2 , 7 , 0 } , { 435 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/From Workspace3" ) , TARGET_STRING (
"Data0" ) , 2 , 7 , 0 } , { 436 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 1 Gaussian" ) , TARGET_STRING (
"MeanVal" ) , 2 , 0 , 0 } , { 437 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 1 Gaussian" ) , TARGET_STRING (
"VarianceRTP" ) , 2 , 0 , 0 } , { 438 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 1 Uniform" ) , TARGET_STRING (
"MinVal" ) , 2 , 0 , 0 } , { 439 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 1 Uniform" ) , TARGET_STRING (
"MaxVal" ) , 2 , 0 , 0 } , { 440 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 1 Uniform" ) , TARGET_STRING (
"rawSeed" ) , 1 , 0 , 0 } , { 441 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 2 Gaussian" ) , TARGET_STRING (
"MeanVal" ) , 2 , 0 , 0 } , { 442 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 2 Gaussian" ) , TARGET_STRING (
"VarianceRTP" ) , 2 , 0 , 0 } , { 443 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 2 Uniform" ) , TARGET_STRING (
"MinVal" ) , 2 , 0 , 0 } , { 444 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 2 Uniform" ) , TARGET_STRING (
"MaxVal" ) , 2 , 0 , 0 } , { 445 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 2 Uniform" ) , TARGET_STRING (
"rawSeed" ) , 1 , 0 , 0 } , { 446 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 3 Gaussian" ) , TARGET_STRING (
"MeanVal" ) , 2 , 0 , 0 } , { 447 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 3 Gaussian" ) , TARGET_STRING (
"VarianceRTP" ) , 2 , 0 , 0 } , { 448 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 3 Uniform" ) , TARGET_STRING (
"MinVal" ) , 2 , 0 , 0 } , { 449 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 3 Uniform" ) , TARGET_STRING (
"MaxVal" ) , 2 , 0 , 0 } , { 450 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro 3 Uniform" ) , TARGET_STRING (
"rawSeed" ) , 1 , 0 , 0 } , { 451 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro Ref Gaussian" ) , TARGET_STRING (
"MeanVal" ) , 2 , 0 , 0 } , { 452 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro Ref Gaussian" ) , TARGET_STRING (
"VarianceRTP" ) , 2 , 0 , 0 } , { 453 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro Ref Uniform" ) , TARGET_STRING (
"MinVal" ) , 2 , 0 , 0 } , { 454 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro Ref Uniform" ) , TARGET_STRING (
"MaxVal" ) , 2 , 0 , 0 } , { 455 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem3/Hydro Ref Uniform" ) , TARGET_STRING (
"rawSeed" ) , 1 , 0 , 0 } , { 456 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate" ) , TARGET_STRING (
"num_samples" ) , 3 , 0 , 19 } , { 457 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem4/Constant1" ) , TARGET_STRING ( "Value" )
, 0 , 0 , 13 } , { 458 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem4/Delay" ) , TARGET_STRING (
"InitialCondition" ) , 4 , 0 , 0 } , { 459 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem4/Delay1" ) , TARGET_STRING (
"InitialCondition" ) , 4 , 0 , 0 } , { 460 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem/Delay" ) , TARGET_STRING
( "InitialCondition" ) , 1 , 0 , 16 } , { 461 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem/Delay" ) , TARGET_STRING
( "InitialCondition" ) , 1 , 0 , 16 } , { 462 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem/Delay" ) , TARGET_STRING
( "InitialCondition" ) , 1 , 0 , 16 } , { 463 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem/Delay" ) ,
TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 16 } , { 464 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/Fenetrage/Constant" ) ,
TARGET_STRING ( "Value" ) , 3 , 0 , 0 } , { 465 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/Fenetrage/Direct Lookup Table (n-D)"
) , TARGET_STRING ( "DiagnosticForOutOfRangeInput" ) , 14 , 0 , 0 } , { 466 ,
TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem4/Triggered Subsystem1/SNR check" ) ,
TARGET_STRING ( "InitialOutput" ) , 4 , 0 , 0 } , { 467 , TARGET_STRING (
"Simulation_DOA_rearanged/Subsystem4/Triggered Subsystem1/Debug" ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 17 } , { 468 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem1/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 13 } , { 469 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem2/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 16 } , { 470 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem3/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 14 } , { 471 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem4/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 13 } , { 472 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem5/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 16 } , { 473 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem6/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 14 } , { 474 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem1/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 13 } , { 475 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem2/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 16 } , { 476 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem3/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 14 } , { 477 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem4/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 13 } , { 478 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem5/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 16 } , { 479 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem6/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 14 } , { 480 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem1/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 13 } , { 481 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem2/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 16 } , { 482 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem3/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 14 } , { 483 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem4/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 13 } , { 484 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem5/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 16 } , { 485 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem6/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 14 } , { 486 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem1/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 13 } , { 487 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem2/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 16 } , { 488 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem3/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 14 } , { 489 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem4/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 13 } , { 490 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem5/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 16 } , { 491 , TARGET_STRING (
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem6/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 14 } , { 492 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/Fenetrage/Counter/Constant" ) ,
TARGET_STRING ( "Value" ) , 3 , 0 , 0 } , { 493 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/Fenetrage/Counter/Constant1" ) ,
TARGET_STRING ( "Value" ) , 3 , 0 , 0 } , { 494 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/Fenetrage/Counter/Delay" ) ,
TARGET_STRING ( "InitialCondition" ) , 3 , 0 , 0 } , { 495 , TARGET_STRING (
"Simulation_DOA_rearanged/Signal Trigger/SampleHold/Sample and Hold/ " ) ,
TARGET_STRING ( "InitialOutput" ) , 4 , 0 , 0 } , { 496 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Compare To Constant2"
) , TARGET_STRING ( "const" ) , 3 , 0 , 19 } , { 497 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter"
) , TARGET_STRING ( "CountStep" ) , 2 , 0 , 0 } , { 498 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 13 } , { 499 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/const_initValue"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 13 } , { 500 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Delay3"
) , TARGET_STRING ( "InitialCondition" ) , 4 , 0 , 0 } , { 501 ,
TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Delay4"
) , TARGET_STRING ( "InitialCondition" ) , 3 , 0 , 19 } , { 502 ,
TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Delay5"
) , TARGET_STRING ( "InitialCondition" ) , 4 , 0 , 0 } , { 503 ,
TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/accumulator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 13 } , { 504 ,
TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Constant"
) , TARGET_STRING ( "Value" ) , 3 , 0 , 19 } , { 505 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Free_running_or_modulo"
) , TARGET_STRING ( "Value" ) , 4 , 0 , 0 } , { 506 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/From_value"
) , TARGET_STRING ( "Value" ) , 3 , 0 , 19 } , { 507 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Init_value"
) , TARGET_STRING ( "Value" ) , 3 , 0 , 19 } , { 508 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Step_value"
) , TARGET_STRING ( "Value" ) , 3 , 0 , 19 } , { 509 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/const_dir"
) , TARGET_STRING ( "Value" ) , 4 , 0 , 0 } , { 510 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/const_load"
) , TARGET_STRING ( "Value" ) , 4 , 0 , 0 } , { 511 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/const_load_val"
) , TARGET_STRING ( "Value" ) , 3 , 0 , 19 } , { 512 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/const_rst"
) , TARGET_STRING ( "Value" ) , 4 , 0 , 0 } , { 513 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Count_reg"
) , TARGET_STRING ( "InitialCondition" ) , 3 , 0 , 19 } , { 514 ,
TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Add_wrap/Mod_value"
) , TARGET_STRING ( "Value" ) , 3 , 0 , 21 } , { 515 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Add_wrap/Switch_wrap"
) , TARGET_STRING ( "Threshold" ) , 3 , 0 , 21 } , { 516 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Sub_wrap/Mod_value"
) , TARGET_STRING ( "Value" ) , 3 , 0 , 21 } , { 517 , TARGET_STRING (
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Sub_wrap/Switch_wrap"
) , TARGET_STRING ( "Threshold" ) , 5 , 0 , 23 } , { 0 , ( NULL ) , ( NULL )
, 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals
rtRootOutputs [ ] = { { 518 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/SNR_Check" ) , TARGET_STRING ( "" ) , 1 , 4 , 0 , 0
, 1 } , { 519 , 0 , TARGET_STRING ( "Simulation_DOA_rearanged/Heading" ) ,
TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 1 } , { 520 , 0 , TARGET_STRING (
"Simulation_DOA_rearanged/Frequency" ) , TARGET_STRING ( "" ) , 3 , 1 , 0 , 0
, 1 } , { 521 , 0 , TARGET_STRING ( "Simulation_DOA_rearanged/Elevation" ) ,
TARGET_STRING ( "" ) , 4 , 2 , 0 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 522 , TARGET_STRING ( "noise_type" ) , 2 , 0 , 0
} , { 523 , TARGET_STRING ( "randSeed1" ) , 1 , 0 , 0 } , { 524 ,
TARGET_STRING ( "randSeed2" ) , 1 , 0 , 0 } , { 525 , TARGET_STRING (
"randSeed3" ) , 1 , 0 , 0 } , { 526 , TARGET_STRING ( "randSeed4" ) , 1 , 0 ,
0 } , { 527 , TARGET_STRING ( "Coeff_han" ) , 3 , 8 , 18 } , { 528 ,
TARGET_STRING ( "FFT_LENGTH" ) , 3 , 0 , 0 } , { 529 , TARGET_STRING (
"noise_on_off" ) , 4 , 0 , 0 } , { 530 , TARGET_STRING ( "runSim" ) , 4 , 0 ,
0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . dzolba3omv , & rtB . j5nnsx2ha4 ,
& rtB . fjeujynzc4 , & rtB . cmlf145r3w , & rtB . o5uklvuyrd , & rtB .
iyg2osseov , & rtB . cotk5hq3pn , & rtB . noriyy1yxf , & rtB . d3kur0pryu , &
rtB . ltoa54ba3c , & rtB . irewvzta1j , & rtB . ahhsj5tl3f , & rtB .
cwy2gix3yr , & rtB . cfkib4snni , & rtB . pdhm5ddrn5 , & rtB . ai0nkoyyzf , &
rtB . fmn5g1jnc1 , & rtB . mom23gv2k5 , & rtB . bns15ue0h0 , & rtB .
fajrh5ebvm , & rtB . cv0ayzwsev , & rtB . nux3tj1dsw , & rtB . h0wwdil5ui , &
rtB . pz0khc11b5 , & rtB . e3pd2awld2 , & rtB . gpngzfzm5o , & rtB .
g5oqteomrh , & rtB . p5ltyme4ou , & rtB . ezsbqyvnan [ 0 ] , & rtB .
h2gdavdf12 [ 0 ] , & rtB . mqo1g135dm , & rtB . bl0nn1bu04 , & rtB .
pbeelgvdyf , & rtB . dnyct00tit , & rtB . ezsbqyvnan [ 0 ] , ( & rtB .
ezsbqyvnan [ 0 ] + 1 ) , ( & rtB . ezsbqyvnan [ 0 ] + 2 ) , & rtB .
mjw0pogy4h , & rtB . cfsq0ynnzy , & rtB . fy0onvvx1m , & rtB . diytyms0az , &
rtB . jwjh4vm5vv , & rtB . axdfvwdyot , & rtB . dsfwlmxmgm , & rtB .
ghr21v0y4h , & rtB . ephpqceyqu , & rtB . h5qnu5edjj , & rtB . bceyt2gezt [ 0
] , & rtB . j5nnsx2ha4 , & rtB . c0xui1wk2i , & rtB . n5cj2elrim , & rtB .
kjjdd01ek3 , & rtB . gcx3vvlv01 , & rtB . lmktwyzsxa , & rtB . oh0heldnt4 , &
rtB . dzolba3omv , & rtB . fjeujynzc4 , & rtB . o5vvxznplh , & rtB .
bsxi2ox2mt , & rtB . l5kufayq12 , & rtB . gpz2elpgqi , & rtB . hliq0objjz .
re , & rtB . kp4so2pt2n , & rtB . kf1wm1zuum , & rtB . edeyixszm5 , & rtB .
jrnktqme1n3b . jla3h5bfbz , & rtB . jrnktqme1n3b . bmorkd0dzv , & rtB .
jrnktqme1n3b . fmynalp5d2 , & rtB . lyyly4yad2e2 . pmfcpbeq12 . re , & rtB .
lyyly4yad2e2 . prus50oyah , & rtB . lyyly4yad2e2 . fv5wzqs0g4 , & rtB .
jrnktqme1n3b1 . jla3h5bfbz , & rtB . jrnktqme1n3b1 . bmorkd0dzv , & rtB .
jrnktqme1n3b1 . fmynalp5d2 , & rtB . lyyly4yad2e2d . pmfcpbeq12 . re , & rtB
. lyyly4yad2e2d . prus50oyah , & rtB . lyyly4yad2e2d . fv5wzqs0g4 , & rtB .
cjalrq1zug , & rtB . mawtkveb0c , & rtB . bek0af0j1j , & rtB . oqnpxh1nf0 .
re , & rtB . cczpwym0xn , & rtB . mxy1hkdva5 , & rtB . mcdt4kjdw0 , & rtB .
otw02eo3ue3 . emcuycy0pw , & rtB . n014eikjcjy . pp2wmkmgqd , & rtB .
jgkqqwc2m5a . cxqjp3z5g0 , & rtB . hamu3nooom . emcuycy0pw , & rtB .
nirnnu0kb5e . djc2e4rqrh , & rtB . aqmj5gejllk . owi3gr0gl5 , & rtB .
pb4ejhsyzn , & rtB . eq3toms2v4 , & rtB . megyurvikr , & rtB . i4usrn1mnq , &
rtB . ajxn3billg , & rtB . dbaeye23k3 , & rtB . ckkbsg4b5s , & rtB .
pr5qzbgply , & rtB . p1zaumnujz , & rtB . g5wlvxxevf , & rtB . kj5cas4vsk , &
rtB . br33n3ewpf , & rtB . hjj4qeyaab , & rtB . ldkcvoyc05 , & rtB .
ih3p5u1r2h , & rtB . k2i5ljo21q , & rtB . etzyrbzjj0 . emcuycy0pw , & rtB .
fhzqhbrdcr . pp2wmkmgqd , & rtB . hvquu0midq . cxqjp3z5g0 , & rtB .
hsz3hkboep . emcuycy0pw , & rtB . ppbi33hazt . djc2e4rqrh , & rtB .
eygzwxr3yp . owi3gr0gl5 , & rtB . m31yfjfxst , & rtB . cdo1t005p0 , & rtB .
okhmnm0uka , & rtB . jwsp2nls1p , & rtB . a0rmql43dv , & rtB . cj5quyrcyv , &
rtB . bhcd2cpqy3 , & rtB . jzseladqz5 , & rtB . nal2meeth1 , & rtB .
oa3yjyv5sa , & rtB . jgkc41e1ur , & rtB . gzmx0g2ql4 , & rtB . mdp1adv1zf , &
rtB . acpkfkvmlz , & rtB . nvwgj11js1 , & rtB . k2e4mtxz0f , & rtB .
gqsds1azit . emcuycy0pw , & rtB . jesurwi24z . pp2wmkmgqd , & rtB .
gis5nx3d51 . cxqjp3z5g0 , & rtB . kcj1xw2fyj . emcuycy0pw , & rtB .
ifacholhbj . djc2e4rqrh , & rtB . ep4zp2asi5 . owi3gr0gl5 , & rtB .
othlvy4lcm , & rtB . jz5sra12na , & rtB . j4zso4cshe , & rtB . i2rtlw2sff , &
rtB . h5gmicptzc , & rtB . haeikw2v0u , & rtB . azomz2512x , & rtB .
cf2yz3yij0 , & rtB . h4gt1s2quy , & rtB . ogwvvk0sds , & rtB . p4prxjmuld , &
rtB . hweouvpzaf , & rtB . nyoa5rvtc2 , & rtB . nvqsjvsh1e , & rtB .
fwqhnxdxba , & rtB . orlyixhwdt , & rtB . kwch3e15c1 . emcuycy0pw , & rtB .
l4kbtxpaxe . pp2wmkmgqd , & rtB . kb0c50ld2h . cxqjp3z5g0 , & rtB .
crejvlo0y5 . emcuycy0pw , & rtB . popnzdb3ry . djc2e4rqrh , & rtB .
kpjzhjqrqw . owi3gr0gl5 , & rtB . ays0cxwjgc , & rtB . cnf1xgsxjm , & rtB .
iddapcucwk , & rtB . ezmjk2o1s1 , & rtB . ninnovw2gl , & rtB . be0433drgy , &
rtB . a42sd0byju , & rtB . aocicufjnb , & rtB . nvp5saf4vt , & rtB .
h5p1p3zh3a , & rtB . im2uw1tffv , & rtB . hwoxkcxmnw , & rtB . hffhj2j3tb , &
rtB . hespxibzur , & rtB . e4uxf3jebt , & rtB . mmfoimpc5s , & rtB .
dzkfl5rhnk , & rtB . gfkap4zouj , & rtB . byriipp1p3 , & rtB . ly4h0bwdnm , &
rtB . lljj4opukd , & rtB . p1qhdkmp1e , & rtB . aeamlgo5gw , & rtB .
aq5pk0b3dg , & rtB . oxdfqwae0k , & rtB . fytjznpmnc , & rtB . otre0btlht , &
rtB . fw0ry5jnvj , & rtB . lknmgvjqgn , & rtB . d2sirds33k , & rtB .
nexgq2cuwu , & rtB . c0bjpvlg5a , & rtB . bnjhosy04c , & rtB . bspaznhyu3 , &
rtB . mhihwha20c , & rtB . kdy34jl3d0 , & rtB . f3kqzrcgy4 , & rtB .
lv4vwau52m , & rtB . o1yqldlqxa , & rtB . onjsdyh32p , & rtB . fcpveaaqxk , &
rtB . l2uvxsydr5 , & rtB . h3ybus3uc4 , & rtB . jiv0ptzxj3 , & rtB .
e5l3jz4xat , & rtB . m1qpxl0jpv , & rtB . geaxy0tifm , & rtB . fwsifagno3 , &
rtB . ftprthij4n , & rtB . j1lgr3ytyp , & rtB . fqf5psyxso , & rtB .
kt03sbrd2l , & rtB . cnsob1xib2 , & rtB . fisoyvpapb , & rtB . pseuhan1y2 , &
rtB . frlnsjjc1e , & rtB . hju5mvez0a , & rtB . cs0uc5ej5i , & rtB .
lh4yuikz0y , & rtB . kizepetnhb , & rtB . kn5tnjdgbo , & rtB . o4oi1jwcpq , &
rtB . eulypohvkk , & rtB . a520fdraqw , & rtB . c4cuktnwdp , & rtB .
hapqonhpcl , & rtB . fjgn2cj4vb , & rtB . m2nqhnhosf , & rtB . mkm0lv1mks , &
rtB . n1elti22an , & rtB . ap04dfb20d , & rtB . lil4t41v4y , & rtB .
jntqx3sul1 , & rtB . n23gjpdnyb , & rtB . irohinrqyf , & rtB . bxwcxvlcty , &
rtB . klpuetkq5g , & rtB . phdru50zsj , & rtB . pomjv0rtxv , & rtB .
h53jwoi45y , & rtB . lgkhemwe21 , & rtB . otw02eo3ue3 . emcuycy0pw , & rtB .
n014eikjcjy . pp2wmkmgqd , & rtB . jgkqqwc2m5a . cxqjp3z5g0 , & rtB .
hamu3nooom . emcuycy0pw , & rtB . nirnnu0kb5e . djc2e4rqrh , & rtB .
aqmj5gejllk . owi3gr0gl5 , & rtB . iyafkvctqt , & rtB . l21b1nezu4 , & rtB .
f14fitok5v , & rtB . i0htefbuzq , & rtB . etzyrbzjj0 . emcuycy0pw , & rtB .
fhzqhbrdcr . pp2wmkmgqd , & rtB . hvquu0midq . cxqjp3z5g0 , & rtB .
hsz3hkboep . emcuycy0pw , & rtB . ppbi33hazt . djc2e4rqrh , & rtB .
eygzwxr3yp . owi3gr0gl5 , & rtB . ntkpejjap3 , & rtB . elhihgd2gr , & rtB .
jkzyotkqdr , & rtB . mira15b04v , & rtB . gqsds1azit . emcuycy0pw , & rtB .
jesurwi24z . pp2wmkmgqd , & rtB . gis5nx3d51 . cxqjp3z5g0 , & rtB .
kcj1xw2fyj . emcuycy0pw , & rtB . ifacholhbj . djc2e4rqrh , & rtB .
ep4zp2asi5 . owi3gr0gl5 , & rtB . deg3k52snr , & rtB . mq5r0xffei , & rtB .
fm1pdhccer , & rtB . ac44xbjyzx , & rtB . kwch3e15c1 . emcuycy0pw , & rtB .
l4kbtxpaxe . pp2wmkmgqd , & rtB . kb0c50ld2h . cxqjp3z5g0 , & rtB .
crejvlo0y5 . emcuycy0pw , & rtB . popnzdb3ry . djc2e4rqrh , & rtB .
kpjzhjqrqw . owi3gr0gl5 , & rtB . ci0kd5qanr , & rtB . pmcmjq0wty , & rtB .
dzkfl5rhnk , & rtB . pyovfatmru , & rtB . lil4t41v4y , & rtB . ap04dfb20d , &
rtB . otw02eo3ue3 . emcuycy0pw , & rtB . n014eikjcjy . pp2wmkmgqd , & rtB .
jgkqqwc2m5a . cxqjp3z5g0 , & rtB . hamu3nooom . emcuycy0pw , & rtB .
nirnnu0kb5e . djc2e4rqrh , & rtB . aqmj5gejllk . owi3gr0gl5 , & rtB .
etzyrbzjj0 . emcuycy0pw , & rtB . fhzqhbrdcr . pp2wmkmgqd , & rtB .
hvquu0midq . cxqjp3z5g0 , & rtB . hsz3hkboep . emcuycy0pw , & rtB .
ppbi33hazt . djc2e4rqrh , & rtB . eygzwxr3yp . owi3gr0gl5 , & rtB .
gqsds1azit . emcuycy0pw , & rtB . jesurwi24z . pp2wmkmgqd , & rtB .
gis5nx3d51 . cxqjp3z5g0 , & rtB . kcj1xw2fyj . emcuycy0pw , & rtB .
ifacholhbj . djc2e4rqrh , & rtB . ep4zp2asi5 . owi3gr0gl5 , & rtB .
kwch3e15c1 . emcuycy0pw , & rtB . l4kbtxpaxe . pp2wmkmgqd , & rtB .
kb0c50ld2h . cxqjp3z5g0 , & rtB . crejvlo0y5 . emcuycy0pw , & rtB .
popnzdb3ry . djc2e4rqrh , & rtB . kpjzhjqrqw . owi3gr0gl5 , & rtB .
lpicjg4fyq , & rtB . mypgjf3jml , & rtB . of3umjp2za , & rtB . hbweu1k1mv , &
rtB . fxnfbtjkqf , & rtB . gnegcolamm , & rtB . dzkfl5rhnk , & rtB .
cxxjjwrqch , & rtB . mvtbzy4kxz , & rtB . edhhzwakxu , & rtB . gimf3q1muu , &
rtB . l45rxbwf2o , & rtB . ocrom13v4d , & rtB . bk1jemzwgb , & rtB .
magvavcslg , & rtB . iklzpkjqsn , & rtB . aud13svlct , & rtB . oiwmfmahct , &
rtB . gbblvn3zyv , & rtB . g5u5xbo0h3 , & rtB . mbob4csy5h , & rtB .
lb2k1x1ogu , & rtB . kxwhxhizh0 , & rtB . dfuxydpjaq , & rtB . pjkv5aehah , &
rtB . db3qfnh4gl , & rtB . gsl3xqnnpl , & rtB . gcxcrfqzbn , & rtB .
fpfftzsohz , & rtB . c1az4ldf0t , & rtB . e1opwguyzb , & rtB . f0zeyhioe2 , &
rtB . agxl0jnck4 , & rtB . naosxvvjkq , & rtB . k1ggl1xgfz , & rtB .
jct14c5au5 , & rtB . bmycztu53b , & rtB . bnss3gxib0 , & rtP .
Constant1_Value_bfosepbrju , & rtP . Constant2_Value_jbobxqjm0i , & rtP .
Constant5_Value , & rtP . FromWorkspace_Time0 [ 0 ] , & rtP .
FromWorkspace_Data0 [ 0 ] , & rtP . FromWorkspace1_Time0 [ 0 ] , & rtP .
FromWorkspace1_Data0 [ 0 ] , & rtP . FromWorkspace2_Time0 [ 0 ] , & rtP .
FromWorkspace2_Data0 [ 0 ] , & rtP . FromWorkspace3_Time0 [ 0 ] , & rtP .
FromWorkspace3_Data0 [ 0 ] , & rtP . FromWorkspace4_Time0 [ 0 ] , & rtP .
FromWorkspace4_Data0 [ 0 ] , & rtP . Switch_Threshold , & rtP . Heading_Y0 ,
& rtP . Frquence_Y0 , & rtP . Elevation_Y0 , & rtP .
Constant1_Value_eeh12bmm2g , & rtP . Constant10_Value_jsm3u35ioa , & rtP .
Constant2_Value [ 0 ] , & rtP . Constant5_Value_m1sv0yladi , & rtP .
Constant6_Value [ 0 ] , & rtP . Constant1_Value_b1zttvkvok , & rtP .
Constant2_Value_l5zecvkn2f , & rtP . Constant3_Value , & rtP .
Delay_InitialCondition_cx2vyd0dua , & rtP .
Delay1_InitialCondition_k0qiqlztjz , & rtP .
Delay2_InitialCondition_bdi2hgqnsd , & rtP .
Delay3_InitialCondition_pickqde1ag , & rtP .
Delay4_InitialCondition_lmewri3pdc , & rtP .
Delay5_InitialCondition_ik0uapiiiu , & rtP . Constant1_Value_aczkv0m5ge , &
rtP . Constant2_Value_kgtjfzvqpt , & rtP . Constant3_Value_jqozwsnzwm , & rtP
. Delay_InitialCondition_bw4pyzqhu0 , & rtP .
Delay1_InitialCondition_anmb4aswmb , & rtP .
Delay2_InitialCondition_gawb3gb4t4 , & rtP .
Delay3_InitialCondition_k1euoqie50 , & rtP .
Delay4_InitialCondition_f1j4135pnp , & rtP .
Delay5_InitialCondition_m2inlzix1d , & rtP . Constant1_Value_himxnbpp2r , &
rtP . Constant2_Value_fbnqm44bzy , & rtP . Constant3_Value_ds12tuqxh5 , & rtP
. Delay_InitialCondition_jlvaialaps , & rtP .
Delay1_InitialCondition_lvsyliwo3l , & rtP .
Delay2_InitialCondition_jnqe2wfvxz , & rtP .
Delay3_InitialCondition_prak4zttvc , & rtP .
Delay4_InitialCondition_mudvlctgst , & rtP .
Delay5_InitialCondition_m0hyxmjxie , & rtP . Constant1_Value_nlf2bzkh50 , &
rtP . Constant2_Value_gobzdswdh5 , & rtP . Constant3_Value_oxgyqblygx , & rtP
. Delay_InitialCondition_bnlicvg4x5 , & rtP . Delay1_InitialCondition , & rtP
. Delay2_InitialCondition , & rtP . Delay3_InitialCondition , & rtP .
Delay4_InitialCondition_lo5wt5wsup , & rtP . Delay5_InitialCondition , & rtP
. Delay_InitialCondition_jfvt1t4w5q , & rtP . Constant10_Value , & rtP .
Constant11_Value , & rtP . Constant12_Value , & rtP . Constant13_Value , &
rtP . Constant14_Value , & rtP . Constant15_Value , & rtP . Constant16_Value
, & rtP . Constant17_Value , & rtP . Constant18_Value , & rtP .
Constant19_Value , & rtP . Constant8_Value , & rtP . Constant9_Value , & rtP
. DiscretePulseGenerator_Amp , & rtP . DiscretePulseGenerator_Period , & rtP
. DiscretePulseGenerator_Duty , & rtP . DiscretePulseGenerator_PhaseDelay , &
rtP . DiscretePulseGenerator1_Amp , & rtP . DiscretePulseGenerator1_Period ,
& rtP . DiscretePulseGenerator1_Duty , & rtP .
DiscretePulseGenerator1_PhaseDelay , & rtP . DiscretePulseGenerator2_Amp , &
rtP . DiscretePulseGenerator2_Period , & rtP . DiscretePulseGenerator2_Duty ,
& rtP . DiscretePulseGenerator2_PhaseDelay , & rtP .
DiscretePulseGenerator3_Amp , & rtP . DiscretePulseGenerator3_Period , & rtP
. DiscretePulseGenerator3_Duty , & rtP . DiscretePulseGenerator3_PhaseDelay ,
& rtP . FromWorkspace_Time0_ptk5nrwdws [ 0 ] , & rtP .
FromWorkspace_Data0_i5gvxdearu [ 0 ] , & rtP .
FromWorkspace1_Time0_jkinope2nl [ 0 ] , & rtP .
FromWorkspace1_Data0_nosxsmx3gj [ 0 ] , & rtP .
FromWorkspace2_Time0_hiuucoxmdi [ 0 ] , & rtP .
FromWorkspace2_Data0_oj3slyh5nl [ 0 ] , & rtP .
FromWorkspace3_Time0_hcdwgnsiex [ 0 ] , & rtP .
FromWorkspace3_Data0_g4i3qf1zgi [ 0 ] , & rtP . Hydro1Gaussian_MeanVal , &
rtP . Hydro1Gaussian_VarianceRTP , & rtP . Hydro1Uniform_MinVal , & rtP .
Hydro1Uniform_MaxVal , & rtP . Hydro1Uniform_rawSeed , & rtP .
Hydro2Gaussian_MeanVal , & rtP . Hydro2Gaussian_VarianceRTP , & rtP .
Hydro2Uniform_MinVal , & rtP . Hydro2Uniform_MaxVal , & rtP .
Hydro2Uniform_rawSeed , & rtP . Hydro3Gaussian_MeanVal , & rtP .
Hydro3Gaussian_VarianceRTP , & rtP . Hydro3Uniform_MinVal , & rtP .
Hydro3Uniform_MaxVal , & rtP . Hydro3Uniform_rawSeed , & rtP .
HydroRefGaussian_MeanVal , & rtP . HydroRefGaussian_VarianceRTP , & rtP .
HydroRefUniform_MinVal , & rtP . HydroRefUniform_MaxVal , & rtP .
HydroRefUniform_rawSeed , & rtP . MultiplyAccumulate_num_samples , & rtP .
Constant1_Value , & rtP . Delay_InitialCondition_ltuwqrdhlx , & rtP .
Delay1_InitialCondition_lcwjl5um2b , & rtP .
Delay_InitialCondition_hj3wqbizb5 , & rtP . Delay_InitialCondition_nyvai1lye2
, & rtP . Delay_InitialCondition_niqoq5ke02 , & rtP . Delay_InitialCondition
, & rtP . Constant_Value_k2m2r1p0jl , & rtP .
DirectLookupTablenD_DiagnosticForOutOfRangeInput , & rtP . SNRcheck_Y0 , &
rtP . Debug_Y0 , & rtP . otw02eo3ue3 . _Y0 , & rtP . n014eikjcjy . _Y0 , &
rtP . jgkqqwc2m5a . _Y0 , & rtP . hamu3nooom . _Y0 , & rtP . nirnnu0kb5e .
_Y0 , & rtP . aqmj5gejllk . _Y0 , & rtP . etzyrbzjj0 . _Y0 , & rtP .
fhzqhbrdcr . _Y0 , & rtP . hvquu0midq . _Y0 , & rtP . hsz3hkboep . _Y0 , &
rtP . ppbi33hazt . _Y0 , & rtP . eygzwxr3yp . _Y0 , & rtP . gqsds1azit . _Y0
, & rtP . jesurwi24z . _Y0 , & rtP . gis5nx3d51 . _Y0 , & rtP . kcj1xw2fyj .
_Y0 , & rtP . ifacholhbj . _Y0 , & rtP . ep4zp2asi5 . _Y0 , & rtP .
kwch3e15c1 . _Y0 , & rtP . l4kbtxpaxe . _Y0 , & rtP . kb0c50ld2h . _Y0 , &
rtP . crejvlo0y5 . _Y0 , & rtP . popnzdb3ry . _Y0 , & rtP . kpjzhjqrqw . _Y0
, & rtP . Constant_Value_c3xhjopelp , & rtP . Constant1_Value_d2ev0f3vow , &
rtP . Delay_InitialCondition_orxywa3mun , & rtP . _Y0 , & rtP .
CompareToConstant2_const , & rtP . Counter_CountStep , & rtP . Constant_Value
, & rtP . const_initValue_Value , & rtP . Delay3_InitialCondition_mbrzy231ng
, & rtP . Delay4_InitialCondition , & rtP .
Delay5_InitialCondition_lqhfqdrstc , & rtP . accumulator_InitialCondition , &
rtP . Constant_Value_gcf3fdx4dg , & rtP . Free_running_or_modulo_Value , &
rtP . From_value_Value , & rtP . Init_value_Value , & rtP . Step_value_Value
, & rtP . const_dir_Value , & rtP . const_load_Value , & rtP .
const_load_val_Value , & rtP . const_rst_Value , & rtP .
Count_reg_InitialCondition , & rtP . Mod_value_Value , & rtP .
Switch_wrap_Threshold_nwklm2s0m1 , & rtP . Mod_value_Value_a0wdzolmlj , & rtP
. Switch_wrap_Threshold , & rtY . lhka424xlu , & rtY . glxdkvsqpv , & rtY .
aflkhcj12l , & rtY . oknxod1xye , & rtP . noise_type , & rtP . randSeed1 , &
rtP . randSeed2 , & rtP . randSeed3 , & rtP . randSeed4 , & rtP . Coeff_han [
0 ] , & rtP . FFT_LENGTH , & rtP . noise_on_off , & rtP . runSim , } ; static
int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "int" ,
"int32_T" , 0 , 0 , sizeof ( int32_T ) , SS_INT32 , 0 , 0 , 0 } , {
"unsigned int" , "uint32_T" , 0 , 0 , sizeof ( uint32_T ) , SS_UINT32 , 0 , 0
, 0 } , { "double" , "real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0
, 0 } , { "unsigned short" , "uint16_T" , 0 , 0 , sizeof ( uint16_T ) ,
SS_UINT16 , 0 , 0 , 0 } , { "unsigned char" , "boolean_T" , 0 , 0 , sizeof (
boolean_T ) , SS_BOOLEAN , 0 , 0 , 0 } , { "short" , "int16_T" , 0 , 0 ,
sizeof ( int16_T ) , SS_INT16 , 0 , 0 , 0 } , { "numeric" , "uint64_T" , 0 ,
0 , sizeof ( uint64_T ) , SS_UINT64 , 0 , 0 , 0 } , { "struct" , "uint128m_T"
, 1 , 1 , sizeof ( uint128m_T ) , SS_STRUCT , 0 , 0 , 0 } , { "numeric" ,
"int64_T" , 0 , 0 , sizeof ( int64_T ) , SS_INT64 , 0 , 0 , 0 } , { "numeric"
, "uint64_T" , 0 , 0 , sizeof ( uint64_T ) , SS_UINT64 , 0 , 0 , 0 } , {
"struct" , "int128m_T" , 1 , 2 , sizeof ( int128m_T ) , SS_STRUCT , 0 , 0 , 0
} , { "struct" , "int128m_T" , 1 , 2 , sizeof ( int128m_T ) , SS_STRUCT , 0 ,
0 , 0 } , { "struct" , "cint32_T" , 0 , 0 , sizeof ( cint32_T ) , SS_INT32 ,
1 , 0 , 0 } , { "numeric" , "int64_T" , 0 , 0 , sizeof ( int64_T ) , SS_INT64
, 0 , 0 , 0 } , { "unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) ,
SS_UINT8 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , { "chunks" , rt_offsetof ( uint128m_T , chunks ) , 6 , 3 , 0 }
, { "chunks" , rt_offsetof ( int128m_T , chunks ) , 6 , 3 , 0 } } ; static
const rtwCAPI_DimensionMap rtDimensionMap [ ] = { { rtwCAPI_SCALAR , 0 , 2 ,
0 } , { rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR ,
4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , { rtwCAPI_VECTOR , 8 , 2 , 0 }
, { rtwCAPI_VECTOR , 10 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 12 , 2 , 0 }
, { rtwCAPI_VECTOR , 14 , 2 , 0 } , { rtwCAPI_VECTOR , 16 , 2 , 0 } } ;
static const uint_T rtDimensionArray [ ] = { 1 , 1 , 3 , 1 , 2 , 2 , 2 , 1 ,
36449 , 1 , 728980 , 1 , 3 , 3 , 64000 , 1 , 256 , 1 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 , 1.0 , 1.953125E-7 , 3.90625E-6 } ; static
const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , { ( const void * ) & rtcapiStoredFloats
[ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 31 , - 28 , 1 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 27 , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 25 , - 8 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 16 , - 12 , 1 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 15 , - 7 , 1 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 68 , - 6 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 62 , - 38 , 1 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 34 , - 3 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 31 , - 19 , 1 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 30 , - 26 , 1 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 102 , - 38 , 1 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 103 , - 38 , 1 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 27 , - 8 , 1 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 29 , - 26 , 1 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 26 , - 8 , 1 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 17 , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 27 , 0 , 1 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 9 , - 8 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 9 , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 54 , - 16 , 1 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 10 , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 12 , 0 , 1 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 10 , 0 , 1 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 7 , - 3 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 11 , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 6 , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 6 , - 1 , 0 } } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( NULL ) , ( NULL ) , - 1 , 0
} , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( const void * ) & rtcapiStoredFloats
[ 3 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 1 , 0 } , { ( NULL ) ,
( NULL ) , 2 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 341 , rtRootInputs , 0 , rtRootOutputs , 4 } , {
rtBlockParameters , 177 , rtModelParameters , 9 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 3229635691U , 895491095U , 1600266565U ,
2963355993U } , ( NULL ) , 0 , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
Simulation_DOA_rearanged_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Simulation_DOA_rearanged_InitializeDataMapInfo ( void ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Simulation_DOA_rearanged_host_InitializeDataMapInfo (
Simulation_DOA_rearanged_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
