#ifndef RTW_HEADER_Simulation_DOA_rearanged_private_h_
#define RTW_HEADER_Simulation_DOA_rearanged_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "Simulation_DOA_rearanged.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)   if(!(ptr)) {\
  ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
  }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((ptr));\
  (ptr) = (NULL);\
  }
#else
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((void *)(ptr));\
  (ptr) = (NULL);\
  }
#endif
#endif
#ifndef UCHAR_MAX
#include <limits.h>
#endif
#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \Consider adjusting Test hardware word size settings on the \Hardware Implementation pane to match your compiler word sizes as \defined in limits.h of the compiler. Alternatively, you can \select the Test hardware is the same as production hardware option and \select the Enable portable word sizes option on the Code Generation > \Verification pane for ERT based targets, which will disable the \preprocessor word size checks.
#endif
#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \Consider adjusting Test hardware word size settings on the \Hardware Implementation pane to match your compiler word sizes as \defined in limits.h of the compiler. Alternatively, you can \select the Test hardware is the same as production hardware option and \select the Enable portable word sizes option on the Code Generation > \Verification pane for ERT based targets, which will disable the \preprocessor word size checks.
#endif
#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \Consider adjusting Test hardware word size settings on the \Hardware Implementation pane to match your compiler word sizes as \defined in limits.h of the compiler. Alternatively, you can \select the Test hardware is the same as production hardware option and \select the Enable portable word sizes option on the Code Generation > \Verification pane for ERT based targets, which will disable the \preprocessor word size checks.
#endif
#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \Consider adjusting Test hardware word size settings on the \Hardware Implementation pane to match your compiler word sizes as \defined in limits.h of the compiler. Alternatively, you can \select the Test hardware is the same as production hardware option and \select the Enable portable word sizes option on the Code Generation > \Verification pane for ERT based targets, which will disable the \preprocessor word size checks.
#endif
#ifndef rtInterpolate
#define rtInterpolate(v1,v2,f1,f2)   (((v1)==(v2))?((double)(v1)):  (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif
#ifndef rtRound
#define rtRound(v) ( ((v) >= 0) ?   muDoubleScalarFloor((v) + 0.5) :   muDoubleScalarCeil((v) - 0.5) )
#endif
extern void RandSrcInitState_GZ ( const uint32_T seed [ ] , uint32_T state [
] , int32_T nChans ) ; extern void RandSrcInitState_U_64 ( const uint32_T
seed [ ] , real_T state [ ] , int32_T nChans ) ; extern real_T
rt_sqrt_Us103En38_Yd_Id_f_s_snf ( const int128m_T u ) ; extern int32_T
rt_atan2_Us31En19_Ys31En28_f_pw_cordic11 ( int32_T u0 , int32_T u1 ) ; extern
void RandSrc_GZ_D ( real_T y [ ] , const real_T mean [ ] , int32_T meanLen ,
const real_T xstd [ ] , int32_T xstdLen , uint32_T state [ ] , int32_T nChans
, int32_T nSamps ) ; extern void RandSrc_U_D ( real_T y [ ] , const real_T
minVec [ ] , int32_T minLen , const real_T maxVec [ ] , int32_T maxLen ,
real_T state [ ] , int32_T nChans , int32_T nSamps ) ; extern void
uMultiWordMul ( const uint64_T u1 [ ] , int32_T n1 , const uint64_T u2 [ ] ,
int32_T n2 , uint64_T y [ ] , int32_T n ) ; extern void MultiWordSignedWrap (
const uint64_T u1 [ ] , int32_T n1 , uint32_T n2 , uint64_T y [ ] ) ; extern
void MultiWordSub ( const uint64_T u1 [ ] , const uint64_T u2 [ ] , uint64_T
y [ ] , int32_T n ) ; extern void uMultiWord2MultiWord ( const uint64_T u1 [
] , int32_T n1 , uint64_T y [ ] , int32_T n ) ; extern void uMultiWordShl (
const uint64_T u1 [ ] , int32_T n1 , uint32_T n2 , uint64_T y [ ] , int32_T n
) ; extern void sLong2MultiWord ( int64_T u , uint64_T y [ ] , int32_T n ) ;
extern real_T uMultiWord2Double ( const uint64_T u1 [ ] , int32_T n1 ,
int32_T e1 ) ; extern real_T sMultiWord2Double ( const uint64_T u1 [ ] ,
int32_T n1 , int32_T e1 ) ; extern boolean_T sMultiWordEq ( const uint64_T u1
[ ] , const uint64_T u2 [ ] , int32_T n ) ; extern int32_T sMultiWordCmp (
const uint64_T u1 [ ] , const uint64_T u2 [ ] , int32_T n ) ; extern void
e3o3wzmuod ( k5n2iqniel * localDW ) ; extern void orkrodumau ( k5n2iqniel *
localDW ) ; extern void ozbdkxqx4f ( cint32_T fu1agnhoed , boolean_T
a1bul1i5gj , k5n2iqniel * localDW ) ; extern void jrnktqme1n ( mv2oq2sioj *
localB , k5n2iqniel * localDW ) ; extern void j2f4wbcgvd ( ipackyuxas *
localDW ) ; extern void lf3htxmgjl ( ipackyuxas * localDW ) ; extern void
heye0xiyga ( uint32_T fu1agnhoed , boolean_T a1bul1i5gj , jvkwpsnmaz * localB
, ipackyuxas * localDW ) ; extern void lyyly4yad2 ( jvkwpsnmaz * localB ,
ipackyuxas * localDW ) ; extern void feadimwoyv ( lfyhdt5va3 * localB ,
gjtsy00uku * localP ) ; extern void otw02eo3ue ( boolean_T lqc0on2rff ,
int32_T jnsjurfvf5 , lfyhdt5va3 * localB , gsfhjkq4hi * localDW , o3mzjps5fh
* localZCE ) ; extern void cjjohoq4av ( avj4altxjx * localB , oynqt3hp52 *
localP ) ; extern void n014eikjcj ( boolean_T lkeikevwks , uint32_T
gxm3se2pve , avj4altxjx * localB , hb15msapyk * localDW , evomlss35w *
localZCE ) ; extern void iistrscvzn ( kfcqi4nahv * localB , gykc2zimmf *
localP ) ; extern void jgkqqwc2m5 ( boolean_T g0cnwbk4ir , int32_T l1dkzv4ouj
, kfcqi4nahv * localB , f20m3ibsya * localDW , mnrtw12u1h * localZCE ) ;
extern void i1dgnkmamr ( k5z5fbyjsj * localB , nyewzoecvi * localP ) ; extern
void nirnnu0kb5 ( boolean_T no2zkbgqww , uint32_T npczzug2e3 , k5z5fbyjsj *
localB , piwynay3gv * localDW , jacsthzjcr * localZCE ) ; extern void
dnxy44omtu ( biek11azsp * localB , jbke1kw2fs * localP ) ; extern void
aqmj5gejll ( boolean_T pgldjvasg2 , int32_T fjvosblyya , biek11azsp * localB
, mnzjnnyijt * localDW , gwub40ffk2 * localZCE ) ;
#if defined(MULTITASKING)
#error Model (Simulation_DOA_rearanged) was built in \SingleTasking solver mode, however the MULTITASKING define is \present. If you have multitasking (e.g. -DMT or -DMULTITASKING) \defined on the Code Generation page of Simulation parameter dialog, please \remove it and on the Solver page, select solver mode \MultiTasking. If the Simulation parameter dialog is configured \correctly, please verify that your template makefile is \configured correctly.
#endif
#endif
