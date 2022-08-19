#include "rt_logging_mmi.h"
#include "Simulation_DOA_rearanged_capi.h"
#include <math.h>
#include "Simulation_DOA_rearanged.h"
#include "Simulation_DOA_rearanged_private.h"
#include "Simulation_DOA_rearanged_dt.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 9 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "10.2 (R2020b) 29-Jul-2020" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; } B rtB
; DW rtDW ; PrevZCX rtPrevZCX ; ExtY rtY ; static SimStruct model_S ;
SimStruct * const rtS = & model_S ; static void bokqdhayet ( jwzaobjvlz * obj
) ; static void dkhi5t5mjs ( jwzaobjvlz * obj ) ; static void bokqdhayetn (
iqgjshdk3v * obj ) ; static void kxq23lzego ( iqgjshdk3v * obj ) ; static
boolean_T cwmh5crioz ( void ) ; static void aj5xjnxfwl ( iqgjshdk3v * obj ,
boolean_T validIn ) ; static void atzf2lpdwh ( real_T sampleIndex_data [ ] ,
int32_T sampleIndex_size [ 2 ] ) ; static void jfrffxxzpj ( const iqgjshdk3v
* obj , const cint32_T twiddleTable [ 2 ] , real_T twiddleIndex , int32_T *
wr , int32_T * wi ) ; static void atzf2lpdwhj ( real_T sampleIndex_data [ ] ,
int32_T sampleIndex_size [ 2 ] ) ; static void jfrffxxzpjz ( const iqgjshdk3v
* obj , const cint32_T twiddleTable [ 4 ] , real_T twiddleIndex , int32_T *
wr , int32_T * wi ) ; static void olfl4t3yzz ( iqgjshdk3v * obj , int64_T X_p
, int64_T Y , int64_T U , int64_T V , real_T stage ) ; static void
atzf2lpdwhju ( real_T sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] )
; static void jfrffxxzpjzz ( const iqgjshdk3v * obj , const cint32_T
twiddleTable [ 8 ] , real_T twiddleIndex , int32_T * wr , int32_T * wi ) ;
static void atzf2lpdwhjup ( real_T sampleIndex_data [ ] , int32_T
sampleIndex_size [ 2 ] ) ; static void jfrffxxzpjzze ( const iqgjshdk3v * obj
, const cint32_T twiddleTable [ 16 ] , real_T twiddleIndex , int32_T * wr ,
int32_T * wi ) ; static void atzf2lpdwhjupt ( real_T sampleIndex_data [ ] ,
int32_T sampleIndex_size [ 2 ] ) ; static void jfrffxxzpjzzeu ( const
iqgjshdk3v * obj , const cint32_T twiddleTable [ 32 ] , real_T twiddleIndex ,
int32_T * wr , int32_T * wi ) ; static void atzf2lpdwhjuptt ( real_T
sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) ; static void
jfrffxxzpjzzeun ( const iqgjshdk3v * obj , const cint32_T twiddleTable [ 64 ]
, real_T twiddleIndex , int32_T * wr , int32_T * wi ) ; static void
ixsba1g2i0 ( const iqgjshdk3v * obj , const cint32_T twiddleTable [ 128 ] ,
real_T twiddleIndex , int32_T * wr , int32_T * wi ) ; static real_T
ngkznh1nn4 ( real_T in , const real_T bitReverseTable [ 256 ] ) ; static void
ad3chnj3y1 ( iqgjshdk3v * obj , const int32_T dataIn_re [ 256 ] , const
int32_T dataIn_im [ 256 ] , int32_T dout_re [ 256 ] , int32_T dout_im [ 256 ]
) ; static void kmrgv451we ( iqgjshdk3v * obj , uint32_T varargin_1 ,
boolean_T varargin_2 , jvkwpsnmaz * localB ) ; static void f3f13aoaly (
jwzaobjvlz * obj ) ; static void f3f13aoalyr ( iqgjshdk3v * obj ) ; static
void ovh3t030ey ( jwzaobjvlz * obj ) ; static void eqfgxr42k2 ( iqgjshdk3v *
obj ) ; static boolean_T nkknxdq4xa ( void ) ; static void fwo3b3wody (
iqgjshdk3v * obj , boolean_T validIn ) ; static void fyddyxd02u ( iqgjshdk3v
* obj , int64_T X_e , int64_T Y , int64_T U , int64_T V , real_T stage ) ;
static void bhx1u2umch ( real_T sampleIndex_data [ ] , int32_T
sampleIndex_size [ 2 ] ) ; static void apwjsepibm ( const iqgjshdk3v * obj ,
const cint32_T twiddleTable [ 2 ] , real_T twiddleIndex , int32_T * wr ,
int32_T * wi ) ; static void bhx1u2umchr ( real_T sampleIndex_data [ ] ,
int32_T sampleIndex_size [ 2 ] ) ; static void apwjsepibmu ( const iqgjshdk3v
* obj , const cint32_T twiddleTable [ 4 ] , real_T twiddleIndex , int32_T *
wr , int32_T * wi ) ; static void bhx1u2umchrs ( real_T sampleIndex_data [ ]
, int32_T sampleIndex_size [ 2 ] ) ; static void apwjsepibmuv ( const
iqgjshdk3v * obj , const cint32_T twiddleTable [ 8 ] , real_T twiddleIndex ,
int32_T * wr , int32_T * wi ) ; static void bhx1u2umchrsc ( real_T
sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) ; static void
apwjsepibmuvg ( const iqgjshdk3v * obj , const cint32_T twiddleTable [ 16 ] ,
real_T twiddleIndex , int32_T * wr , int32_T * wi ) ; static void
bhx1u2umchrsc0 ( real_T sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ]
) ; static void apwjsepibmuvg3 ( const iqgjshdk3v * obj , const cint32_T
twiddleTable [ 32 ] , real_T twiddleIndex , int32_T * wr , int32_T * wi ) ;
static void bhx1u2umchrsc0e ( real_T sampleIndex_data [ ] , int32_T
sampleIndex_size [ 2 ] ) ; static void apwjsepibmuvg3y ( const iqgjshdk3v *
obj , const cint32_T twiddleTable [ 64 ] , real_T twiddleIndex , int32_T * wr
, int32_T * wi ) ; static void ksvcsjhygl ( const iqgjshdk3v * obj , const
cint32_T twiddleTable [ 128 ] , real_T twiddleIndex , int32_T * wr , int32_T
* wi ) ; static real_T edlzhlng3g ( real_T in , const real_T bitReverseTable
[ 256 ] ) ; static void ldjqx24n40 ( iqgjshdk3v * obj , const int32_T
dataIn_re [ 256 ] , const int32_T dataIn_im [ 256 ] , int32_T dout_re [ 256 ]
, int32_T dout_im [ 256 ] ) ; static void nfj5chyldu ( iqgjshdk3v * obj ,
uint32_T varargin_1 , boolean_T varargin_2 ) ; void uMultiWordMul ( const
uint64_T u1 [ ] , int32_T n1 , const uint64_T u2 [ ] , int32_T n2 , uint64_T
y [ ] , int32_T n ) { uint64_T a0 ; uint64_T a1 ; uint64_T b1 ; uint64_T cb ;
uint64_T u1i ; uint64_T w01 ; uint64_T w10 ; uint64_T yk ; int32_T i ;
int32_T j ; int32_T k ; int32_T ni ; for ( k = 0 ; k < n ; k ++ ) { y [ k ] =
0ULL ; } for ( i = 0 ; i < n1 ; i ++ ) { cb = 0ULL ; u1i = u1 [ i ] ; a1 =
u1i >> 32U ; a0 = u1i & 4294967295ULL ; ni = n - i ; ni = n2 <= ni ? n2 : ni
; k = i ; for ( j = 0 ; j < ni ; j ++ ) { u1i = u2 [ j ] ; b1 = u1i >> 32U ;
u1i &= 4294967295ULL ; w10 = a1 * u1i ; w01 = a0 * b1 ; yk = y [ k ] + cb ;
cb = ( uint64_T ) ( yk < cb ) ; u1i *= a0 ; yk += u1i ; cb += ( yk < u1i ) ;
u1i = w10 << 32U ; yk += u1i ; cb += ( yk < u1i ) ; u1i = w01 << 32U ; yk +=
u1i ; cb += ( yk < u1i ) ; y [ k ] = yk ; cb += w10 >> 32U ; cb += w01 >> 32U
; cb += a1 * b1 ; k ++ ; } if ( k < n ) { y [ k ] = cb ; } } } void
MultiWordSignedWrap ( const uint64_T u1 [ ] , int32_T n1 , uint32_T n2 ,
uint64_T y [ ] ) { uint64_T mask ; uint64_T ys ; int32_T i ; int32_T n1m1 ;
n1m1 = n1 - 1 ; for ( i = 0 ; i < n1m1 ; i ++ ) { y [ i ] = u1 [ i ] ; } mask
= 1ULL << ( 63U - n2 ) ; ys = ( u1 [ n1 - 1 ] & mask ) != 0ULL ? MAX_uint64_T
: 0ULL ; mask = ( mask << 1U ) - 1ULL ; y [ n1 - 1 ] = ( u1 [ n1 - 1 ] & mask
) | ( ~ mask & ys ) ; } void MultiWordSub ( const uint64_T u1 [ ] , const
uint64_T u2 [ ] , uint64_T y [ ] , int32_T n ) { uint64_T borrow = 0ULL ;
uint64_T u1i ; uint64_T yi ; int32_T i ; for ( i = 0 ; i < n ; i ++ ) { u1i =
u1 [ i ] ; yi = ( u1i - u2 [ i ] ) - borrow ; y [ i ] = yi ; borrow = borrow
!= 0ULL ? ( uint64_T ) ( yi >= u1i ) : ( uint64_T ) ( yi > u1i ) ; } } void
uMultiWord2MultiWord ( const uint64_T u1 [ ] , int32_T n1 , uint64_T y [ ] ,
int32_T n ) { int32_T i ; int32_T nm ; nm = n1 < n ? n1 : n ; for ( i = 0 ; i
< nm ; i ++ ) { y [ i ] = u1 [ i ] ; } if ( n > n1 ) { for ( i = nm ; i < n ;
i ++ ) { y [ i ] = 0ULL ; } } } void uMultiWordShl ( const uint64_T u1 [ ] ,
int32_T n1 , uint32_T n2 , uint64_T y [ ] , int32_T n ) { uint64_T u1i ;
uint64_T yi ; uint64_T ys ; int32_T i ; int32_T nb ; int32_T nc ; uint32_T nl
; nb = ( int32_T ) ( n2 >> 6 ) ; ys = ( u1 [ n1 - 1 ] &
9223372036854775808ULL ) != 0ULL ? MAX_uint64_T : 0ULL ; nc = nb > n ? n : nb
; u1i = 0ULL ; for ( i = 0 ; i < nc ; i ++ ) { y [ i ] = 0ULL ; } if ( nb < n
) { nl = n2 - ( ( uint32_T ) nb << 6 ) ; nb += n1 ; if ( nb > n ) { nb = n ;
} nb -= i ; if ( nl > 0U ) { for ( nc = 0 ; nc < nb ; nc ++ ) { yi = u1i >> (
64U - nl ) ; u1i = u1 [ nc ] ; y [ i ] = u1i << nl | yi ; i ++ ; } if ( i < n
) { y [ i ] = u1i >> ( 64U - nl ) | ys << nl ; i ++ ; } } else { for ( nc = 0
; nc < nb ; nc ++ ) { y [ i ] = u1 [ nc ] ; i ++ ; } } } while ( i < n ) { y
[ i ] = ys ; i ++ ; } } void sLong2MultiWord ( int64_T u , uint64_T y [ ] ,
int32_T n ) { uint64_T yi ; int32_T i ; y [ 0 ] = ( uint64_T ) u ; yi = u <
0LL ? MAX_uint64_T : 0ULL ; for ( i = 1 ; i < n ; i ++ ) { y [ i ] = yi ; } }
real_T uMultiWord2Double ( const uint64_T u1 [ ] , int32_T n1 , int32_T e1 )
{ real_T y ; int32_T exp_p ; int32_T i ; y = 0.0 ; exp_p = e1 ; for ( i = 0 ;
i < n1 ; i ++ ) { y += ldexp ( ( real_T ) u1 [ i ] , exp_p ) ; exp_p += 64 ;
} return y ; } real_T sMultiWord2Double ( const uint64_T u1 [ ] , int32_T n1
, int32_T e1 ) { real_T y ; uint64_T cb ; uint64_T u1i ; int32_T exp_e ;
int32_T i ; y = 0.0 ; exp_e = e1 ; if ( ( u1 [ n1 - 1 ] &
9223372036854775808ULL ) != 0ULL ) { cb = 1ULL ; for ( i = 0 ; i < n1 ; i ++
) { u1i = ~ u1 [ i ] ; cb += u1i ; y -= ldexp ( ( real_T ) cb , exp_e ) ; cb
= ( uint64_T ) ( cb < u1i ) ; exp_e += 64 ; } } else { for ( i = 0 ; i < n1 ;
i ++ ) { y += ldexp ( ( real_T ) u1 [ i ] , exp_e ) ; exp_e += 64 ; } }
return y ; } boolean_T sMultiWordEq ( const uint64_T u1 [ ] , const uint64_T
u2 [ ] , int32_T n ) { return sMultiWordCmp ( u1 , u2 , n ) == 0 ; } int32_T
sMultiWordCmp ( const uint64_T u1 [ ] , const uint64_T u2 [ ] , int32_T n ) {
uint64_T su1 ; uint64_T u2i ; int32_T i ; int32_T y ; su1 = u1 [ n - 1 ] &
9223372036854775808ULL ; if ( ( u2 [ n - 1 ] & 9223372036854775808ULL ) !=
su1 ) { y = su1 != 0ULL ? - 1 : 1 ; } else { y = 0 ; i = n ; while ( ( y == 0
) && ( i > 0 ) ) { i -- ; su1 = u1 [ i ] ; u2i = u2 [ i ] ; if ( su1 != u2i )
{ y = su1 > u2i ? 1 : - 1 ; } } } return y ; } static void bokqdhayet (
jwzaobjvlz * obj ) { jwzaobjvlz * obj_e ; jwzaobjvlz * obj_p ; int32_T i ;
obj -> isInitialized = 1 ; obj_p = obj ; obj_e = obj_p ; for ( i = 0 ; i < 14
; i ++ ) { obj_e -> xPipeline [ i ] = 0 ; } for ( i = 0 ; i < 14 ; i ++ ) {
obj_e -> yPipeline [ i ] = 0 ; } obj_e -> pPostScale = 0 ; obj_e ->
pXAbsolute = 0 ; obj_e -> pYAbsolute = 0 ; for ( i = 0 ; i < 14 ; i ++ ) {
obj_e -> zPipeline [ i ] = 0 ; } obj_e -> pQuadrantOut = 0 ; obj_e ->
pPipeout = 0 ; for ( i = 0 ; i < 14 ; i ++ ) { obj_e -> pXYReversed [ i ] =
0U ; } for ( i = 0 ; i < 17 ; i ++ ) { obj_e -> validPipeline [ i ] = false ;
} for ( i = 0 ; i < 14 ; i ++ ) { obj_e -> pQuadrantIn [ i ] = 0U ; } obj_p
-> realInReg [ 0 ] = 0 ; obj_p -> realInReg [ 1 ] = 0 ; obj_p -> realInReg [
2 ] = 0 ; obj_p -> imagInReg [ 0 ] = 0 ; obj_p -> imagInReg [ 1 ] = 0 ; obj_p
-> imagInReg [ 2 ] = 0 ; } static void dkhi5t5mjs ( jwzaobjvlz * obj ) {
int32_T i ; for ( i = 0 ; i < 14 ; i ++ ) { obj -> xPipeline [ i ] = 0 ; obj
-> yPipeline [ i ] = 0 ; obj -> zPipeline [ i ] = 0 ; } for ( i = 0 ; i < 17
; i ++ ) { obj -> validPipeline [ i ] = false ; } obj -> pPostScale = 0 ; for
( i = 0 ; i < 14 ; i ++ ) { obj -> pQuadrantIn [ i ] = 0U ; obj ->
pXYReversed [ i ] = 0U ; } obj -> pQuadrantOut = 0 ; obj -> pPipeout = 0 ;
obj -> pXAbsolute = 0 ; obj -> pYAbsolute = 0 ; obj -> realInReg [ 0 ] = 0 ;
obj -> imagInReg [ 0 ] = 0 ; obj -> realInReg [ 1 ] = 0 ; obj -> imagInReg [
1 ] = 0 ; obj -> realInReg [ 2 ] = 0 ; obj -> imagInReg [ 2 ] = 0 ; } void
e3o3wzmuod ( k5n2iqniel * localDW ) { jwzaobjvlz * obj ; obj = & localDW ->
a5tso3rzwb ; dkhi5t5mjs ( obj ) ; } void orkrodumau ( k5n2iqniel * localDW )
{ jwzaobjvlz * b_obj ; b_obj = & localDW -> a5tso3rzwb ; b_obj ->
isInitialized = 0 ; localDW -> i5l1aq2a5d = true ; bokqdhayet ( & localDW ->
a5tso3rzwb ) ; } void jrnktqme1n ( mv2oq2sioj * localB , k5n2iqniel * localDW
) { jwzaobjvlz * obj ; int32_T b_varargout_1 ; int32_T b_varargout_2 ;
boolean_T b_varargout_3 ; obj = & localDW -> a5tso3rzwb ; b_varargout_1 = obj
-> pPostScale ; b_varargout_2 = obj -> pQuadrantOut ; b_varargout_3 = obj ->
validPipeline [ 16 ] ; localB -> jla3h5bfbz = b_varargout_1 ; localB ->
bmorkd0dzv = b_varargout_2 ; localB -> fmynalp5d2 = b_varargout_3 ; } void
ozbdkxqx4f ( cint32_T fu1agnhoed , boolean_T a1bul1i5gj , k5n2iqniel *
localDW ) { static const uint32_T tmp [ 12 ] = { 31114864U , 16440240U ,
8345322U , 4188855U , 2096470U , 1048491U , 524277U , 262143U , 131072U ,
65536U , 32768U , 16384U } ; jwzaobjvlz * obj ; jwzaobjvlz * obj_p ; cint32_T
u0 ; int64_T c ; int32_T obj_m [ 13 ] ; int32_T c_e ; int32_T c_p ; int32_T
obj_idx_1 ; int32_T rt_shift ; int32_T y ; int32_T y_p ; uint32_T b0 ;
uint8_T obj_e [ 13 ] ; uint8_T a0 ; boolean_T obj_i [ 16 ] ; boolean_T flag ;
boolean_T guard1 = false ; boolean_T guard2 = false ; boolean_T guard3 =
false ; u0 . re = fu1agnhoed . re ; u0 . im = fu1agnhoed . im ; obj = &
localDW -> a5tso3rzwb ; obj_p = obj ; flag = ( obj_p -> isInitialized == 1 )
; if ( ! flag ) { obj_p = obj ; bokqdhayet ( obj_p ) ; dkhi5t5mjs ( obj_p ) ;
} obj -> validPipeline [ 0 ] = a1bul1i5gj ; for ( y_p = 0 ; y_p < 13 ; y_p ++
) { obj_e [ y_p ] = obj -> pQuadrantIn [ y_p ] ; } for ( y_p = 0 ; y_p < 13 ;
y_p ++ ) { obj -> pQuadrantIn [ ( y_p + 2 ) - 1 ] = obj_e [ y_p ] ; } for (
y_p = 0 ; y_p < 13 ; y_p ++ ) { obj_e [ y_p ] = obj -> pXYReversed [ y_p ] ;
} for ( y_p = 0 ; y_p < 13 ; y_p ++ ) { obj -> pXYReversed [ ( y_p + 2 ) - 1
] = obj_e [ y_p ] ; } for ( y_p = 0 ; y_p < 16 ; y_p ++ ) { obj_i [ y_p ] =
obj -> validPipeline [ y_p ] ; } for ( y_p = 0 ; y_p < 16 ; y_p ++ ) { obj ->
validPipeline [ ( y_p + 2 ) - 1 ] = obj_i [ y_p ] ; } for ( y_p = 0 ; y_p <
13 ; y_p ++ ) { obj_m [ y_p ] = obj -> xPipeline [ y_p ] ; } for ( y_p = 0 ;
y_p < 13 ; y_p ++ ) { obj -> xPipeline [ ( y_p + 2 ) - 1 ] = obj_m [ y_p ] ;
} for ( y_p = 0 ; y_p < 13 ; y_p ++ ) { obj_m [ y_p ] = obj -> yPipeline [
y_p ] ; } for ( y_p = 0 ; y_p < 13 ; y_p ++ ) { obj -> yPipeline [ ( y_p + 2
) - 1 ] = obj_m [ y_p ] ; } for ( y_p = 0 ; y_p < 13 ; y_p ++ ) { obj_m [ y_p
] = obj -> zPipeline [ y_p ] ; } for ( y_p = 0 ; y_p < 13 ; y_p ++ ) { obj ->
zPipeline [ ( y_p + 2 ) - 1 ] = obj_m [ y_p ] ; } y_p = obj -> realInReg [ 1
] ; obj_idx_1 = obj -> realInReg [ 2 ] ; obj -> realInReg [ 0 ] = y_p ; obj
-> realInReg [ 1 ] = obj_idx_1 ; y_p = obj -> imagInReg [ 1 ] ; obj_idx_1 =
obj -> imagInReg [ 2 ] ; obj -> imagInReg [ 0 ] = y_p ; obj -> imagInReg [ 1
] = obj_idx_1 ; obj -> realInReg [ 2 ] = u0 . re ; obj -> imagInReg [ 2 ] =
u0 . im ; obj_p = obj ; obj_idx_1 = obj -> realInReg [ 0 ] ; y = obj ->
imagInReg [ 0 ] ; obj_p -> pXAbsolute = obj_idx_1 ; c_e = obj_p -> pXAbsolute
; flag = ( c_e < 0 ) ; if ( flag ) { y_p = - c_e ; y_p = ( y_p & 134217728U )
!= 0U ? y_p | - 134217728 : y_p & 134217727 ; } else { y_p = c_e ; } obj_p ->
pXAbsolute = y_p ; obj_p -> pYAbsolute = y ; c_e = obj_p -> pYAbsolute ; flag
= ( c_e < 0 ) ; if ( flag ) { y_p = - c_e ; y_p = ( y_p & 134217728U ) != 0U
? y_p | - 134217728 : y_p & 134217727 ; } else { y_p = c_e ; } obj_p ->
pYAbsolute = y_p ; flag = ( obj_idx_1 < 0 ) ; guard1 = false ; guard2 = false
; guard3 = false ; if ( flag ) { flag = ( y < 0 ) ; if ( flag ) { obj_p ->
pQuadrantIn [ 0 ] = 2U ; } else { guard3 = true ; } } else { guard3 = true ;
} if ( guard3 ) { flag = ( obj_idx_1 >= 0 ) ; if ( flag ) { flag = ( y < 0 )
; if ( flag ) { obj_p -> pQuadrantIn [ 0 ] = 1U ; } else { guard2 = true ; }
} else { guard2 = true ; } } if ( guard2 ) { flag = ( obj_idx_1 < 0 ) ; if (
flag ) { flag = ( y >= 0 ) ; if ( flag ) { obj_p -> pQuadrantIn [ 0 ] = 3U ;
} else { guard1 = true ; } } else { guard1 = true ; } } if ( guard1 ) { flag
= ( obj_idx_1 >= 0 ) ; if ( flag ) { flag = ( y >= 0 ) ; if ( flag ) { obj_p
-> pQuadrantIn [ 0 ] = 0U ; } else { obj_p -> pQuadrantIn [ 0 ] = 0U ; } }
else { obj_p -> pQuadrantIn [ 0 ] = 0U ; } } c_e = obj_p -> pXAbsolute ; y_p
= obj_p -> pYAbsolute ; flag = ( c_e > y_p ) ; if ( flag ) { obj_p ->
pXYReversed [ 0 ] = 0U ; y_p = obj_p -> pXAbsolute ; obj_p -> xPipeline [ 0 ]
= ( y_p & 67108864U ) != 0U ? y_p | - 67108864 : y_p & 67108863 ; y_p = obj_p
-> pYAbsolute ; obj_p -> yPipeline [ 0 ] = ( y_p & 67108864U ) != 0U ? y_p |
- 67108864 : y_p & 67108863 ; } else { obj_p -> pXYReversed [ 0 ] = 1U ; y_p
= obj_p -> pYAbsolute ; obj_p -> xPipeline [ 0 ] = ( y_p & 67108864U ) != 0U
? y_p | - 67108864 : y_p & 67108863 ; y_p = obj_p -> pXAbsolute ; obj_p ->
yPipeline [ 0 ] = ( y_p & 67108864U ) != 0U ? y_p | - 67108864 : y_p &
67108863 ; } obj_p -> zPipeline [ 0 ] = 0 ; for ( obj_idx_1 = 0 ; obj_idx_1 <
12 ; obj_idx_1 ++ ) { y = obj_idx_1 + 2 ; rt_shift = y - 1 ; obj_p = obj ;
c_e = obj_p -> yPipeline [ y - 1 ] ; y_p = c_e >> rt_shift ; c_p = ( y_p &
67108864U ) != 0U ? y_p | - 67108864 : y_p & 67108863 ; c_e = obj_p ->
xPipeline [ y - 1 ] ; y_p = c_e >> rt_shift ; c_e = ( y_p & 67108864U ) != 0U
? y_p | - 67108864 : y_p & 67108863 ; y_p = obj_p -> yPipeline [ y - 1 ] ;
flag = ( y_p < 0 ) ; if ( flag ) { y_p = obj_p -> xPipeline [ y - 1 ] ; y_p
-= c_p ; y_p = ( y_p & 134217728U ) != 0U ? y_p | - 134217728 : y_p &
134217727 ; obj_p -> xPipeline [ y - 1 ] = ( y_p & 67108864U ) != 0U ? y_p |
- 67108864 : y_p & 67108863 ; y_p = obj_p -> yPipeline [ y - 1 ] ; y_p += c_e
; y_p = ( y_p & 134217728U ) != 0U ? y_p | - 134217728 : y_p & 134217727 ;
obj_p -> yPipeline [ y - 1 ] = ( y_p & 67108864U ) != 0U ? y_p | - 67108864 :
y_p & 67108863 ; y_p = obj_p -> zPipeline [ y - 1 ] ; b0 = tmp [ y - 2 ] ;
y_p -= ( int32_T ) b0 ; c_e = ( y_p & 268435456U ) != 0U ? y_p | - 268435456
: y_p & 268435455 ; obj_p -> zPipeline [ y - 1 ] = ( c_e & 67108864U ) != 0U
? c_e | - 67108864 : c_e & 67108863 ; } else { y_p = obj_p -> xPipeline [ y -
1 ] ; y_p += c_p ; y_p = ( y_p & 134217728U ) != 0U ? y_p | - 134217728 : y_p
& 134217727 ; obj_p -> xPipeline [ y - 1 ] = ( y_p & 67108864U ) != 0U ? y_p
| - 67108864 : y_p & 67108863 ; y_p = obj_p -> yPipeline [ y - 1 ] ; y_p -=
c_e ; y_p = ( y_p & 134217728U ) != 0U ? y_p | - 134217728 : y_p & 134217727
; obj_p -> yPipeline [ y - 1 ] = ( y_p & 67108864U ) != 0U ? y_p | - 67108864
: y_p & 67108863 ; y_p = obj_p -> zPipeline [ y - 1 ] ; b0 = tmp [ y - 2 ] ;
y_p += ( int32_T ) b0 ; c_e = ( y_p & 268435456U ) != 0U ? y_p | - 268435456
: y_p & 268435455 ; obj_p -> zPipeline [ y - 1 ] = ( c_e & 67108864U ) != 0U
? c_e | - 67108864 : c_e & 67108863 ; } } obj_p = obj ; obj_p -> pPipeout =
obj_p -> zPipeline [ 13 ] ; a0 = obj_p -> pXYReversed [ 13 ] ; flag = ( a0 ==
1 ) ; if ( flag ) { y_p = obj_p -> pPipeout ; y_p = 105414357 - y_p ; c_e = (
y_p & 536870912U ) != 0U ? y_p | - 536870912 : y_p & 536870911 ; obj_p ->
pQuadrantOut = ( c_e & 268435456U ) != 0U ? c_e | - 268435456 : c_e &
268435455 ; } else { obj_p -> pQuadrantOut = obj_p -> pPipeout ; } a0 = obj_p
-> pQuadrantIn [ 13 ] ; flag = ( a0 == 1 ) ; if ( flag ) { c_e = obj_p ->
pQuadrantOut ; y_p = - c_e ; c_e = ( y_p & 268435456U ) != 0U ? y_p | -
268435456 : y_p & 268435455 ; obj_p -> pQuadrantOut = c_e ; } else { a0 =
obj_p -> pQuadrantIn [ 13 ] ; flag = ( a0 == 2 ) ; if ( flag ) { y_p = obj_p
-> pQuadrantOut ; y_p += - 210828715 ; c_e = ( y_p & 536870912U ) != 0U ? y_p
| - 536870912 : y_p & 536870911 ; obj_p -> pQuadrantOut = ( c_e & 268435456U
) != 0U ? c_e | - 268435456 : c_e & 268435455 ; } else { a0 = obj_p ->
pQuadrantIn [ 13 ] ; flag = ( a0 == 3 ) ; if ( flag ) { y_p = obj_p ->
pQuadrantOut ; y_p = 210828714 - y_p ; c_e = ( y_p & 536870912U ) != 0U ? y_p
| - 536870912 : y_p & 536870911 ; obj_p -> pQuadrantOut = ( c_e & 268435456U
) != 0U ? c_e | - 268435456 : c_e & 268435455 ; } } } y_p = obj -> xPipeline
[ 13 ] ; c = y_p * 115265536LL ; obj -> pPostScale = ( int32_T ) ( c >> 27 )
; if ( ! obj -> validPipeline [ 16 ] ) { obj -> pPostScale = 0 ; obj ->
zPipeline [ 13 ] = 0 ; obj -> pQuadrantOut = 0 ; } } static void bokqdhayetn
( iqgjshdk3v * obj ) { static const uint8_T tmp_p [ 256 ] = { 0U , 128U , 64U
, 192U , 32U , 160U , 96U , 224U , 16U , 144U , 80U , 208U , 48U , 176U ,
112U , 240U , 8U , 136U , 72U , 200U , 40U , 168U , 104U , 232U , 24U , 152U
, 88U , 216U , 56U , 184U , 120U , 248U , 4U , 132U , 68U , 196U , 36U , 164U
, 100U , 228U , 20U , 148U , 84U , 212U , 52U , 180U , 116U , 244U , 12U ,
140U , 76U , 204U , 44U , 172U , 108U , 236U , 28U , 156U , 92U , 220U , 60U
, 188U , 124U , 252U , 2U , 130U , 66U , 194U , 34U , 162U , 98U , 226U , 18U
, 146U , 82U , 210U , 50U , 178U , 114U , 242U , 10U , 138U , 74U , 202U ,
42U , 170U , 106U , 234U , 26U , 154U , 90U , 218U , 58U , 186U , 122U , 250U
, 6U , 134U , 70U , 198U , 38U , 166U , 102U , 230U , 22U , 150U , 86U , 214U
, 54U , 182U , 118U , 246U , 14U , 142U , 78U , 206U , 46U , 174U , 110U ,
238U , 30U , 158U , 94U , 222U , 62U , 190U , 126U , 254U , 1U , 129U , 65U ,
193U , 33U , 161U , 97U , 225U , 17U , 145U , 81U , 209U , 49U , 177U , 113U
, 241U , 9U , 137U , 73U , 201U , 41U , 169U , 105U , 233U , 25U , 153U , 89U
, 217U , 57U , 185U , 121U , 249U , 5U , 133U , 69U , 197U , 37U , 165U ,
101U , 229U , 21U , 149U , 85U , 213U , 53U , 181U , 117U , 245U , 13U , 141U
, 77U , 205U , 45U , 173U , 109U , 237U , 29U , 157U , 93U , 221U , 61U ,
189U , 125U , 253U , 3U , 131U , 67U , 195U , 35U , 163U , 99U , 227U , 19U ,
147U , 83U , 211U , 51U , 179U , 115U , 243U , 11U , 139U , 75U , 203U , 43U
, 171U , 107U , 235U , 27U , 155U , 91U , 219U , 59U , 187U , 123U , 251U ,
7U , 135U , 71U , 199U , 39U , 167U , 103U , 231U , 23U , 151U , 87U , 215U ,
55U , 183U , 119U , 247U , 15U , 143U , 79U , 207U , 47U , 175U , 111U , 239U
, 31U , 159U , 95U , 223U , 63U , 191U , 127U , MAX_uint8_T } ; static const
uint8_T tmp [ 128 ] = { 0U , 64U , 32U , 96U , 16U , 80U , 48U , 112U , 8U ,
72U , 40U , 104U , 24U , 88U , 56U , 120U , 4U , 68U , 36U , 100U , 20U , 84U
, 52U , 116U , 12U , 76U , 44U , 108U , 28U , 92U , 60U , 124U , 2U , 66U ,
34U , 98U , 18U , 82U , 50U , 114U , 10U , 74U , 42U , 106U , 26U , 90U , 58U
, 122U , 6U , 70U , 38U , 102U , 22U , 86U , 54U , 118U , 14U , 78U , 46U ,
110U , 30U , 94U , 62U , 126U , 1U , 65U , 33U , 97U , 17U , 81U , 49U , 113U
, 9U , 73U , 41U , 105U , 25U , 89U , 57U , 121U , 5U , 69U , 37U , 101U ,
21U , 85U , 53U , 117U , 13U , 77U , 45U , 109U , 29U , 93U , 61U , 125U , 3U
, 67U , 35U , 99U , 19U , 83U , 51U , 115U , 11U , 75U , 43U , 107U , 27U ,
91U , 59U , 123U , 7U , 71U , 39U , 103U , 23U , 87U , 55U , 119U , 15U , 79U
, 47U , 111U , 31U , 95U , 63U , 127U } ; iqgjshdk3v * obj_e ; iqgjshdk3v *
obj_p ; int32_T i ; const uint8_T * b ; const uint8_T * c ; obj ->
isInitialized = 1 ; obj_p = obj ; obj_e = obj_p ; obj_e -> pOverflowFlag =
true ; for ( i = 0 ; i < 8 ; i ++ ) { obj_p -> pOverflowStage [ i ] = 0.0 ; }
obj_e = obj_p ; obj_e -> pResetStart = false ; for ( i = 0 ; i < 3072 ; i ++
) { obj_p -> pInBuffer_valid [ i ] = 0.0 ; } for ( i = 0 ; i < 3072 ; i ++ )
{ obj_p -> pInBuffer_re [ i ] = 0 ; } for ( i = 0 ; i < 3072 ; i ++ ) { obj_p
-> pInBuffer_im [ i ] = 0 ; } for ( i = 0 ; i < 6144 ; i ++ ) { obj_p ->
pOutBuffer_cmplx [ i ] . re = 0 ; obj_p -> pOutBuffer_cmplx [ i ] . im = 0 ;
} obj_p -> pLastData . re = 0 ; obj_p -> pLastData . im = 0 ; obj_p ->
pInitialValue . re = 0 ; obj_p -> pInitialValue . im = 0 ; b = & tmp [ 0 ] ;
c = & tmp_p [ 0 ] ; for ( i = 0 ; i < 128 ; i ++ ) { obj_p ->
pBitReverseTable_H [ i ] = b [ i ] ; } for ( i = 0 ; i < 256 ; i ++ ) { obj_p
-> pBitReverseTable_F [ i ] = c [ i ] ; } obj_p -> pStartOutputPort [ 0 ] =
true ; for ( i = 0 ; i < 255 ; i ++ ) { obj_p -> pStartOutputPort [ i + 1 ] =
false ; } obj_p -> pEndOutputPort [ 0 ] = false ; obj_p -> pEndOutputPort [ 1
] = true ; for ( i = 0 ; i < 254 ; i ++ ) { obj_p -> pEndOutputPort [ i + 2 ]
= false ; } obj_p -> pSimTime = 1.0 ; obj_p -> pCurSOF = 0.0 ; obj_p ->
pWrFifoAddr = 1.0 ; obj_p -> pRdFifoAddr = 1.0 ; obj_p -> pState = 0.0 ;
obj_p -> pSampleCnt = 0.0 ; obj_p -> pOutCnt = 0.0 ; obj_e = obj_p ; obj_e ->
pWrEnb = false ; obj_p -> pRdyReg = true ; } static void kxq23lzego (
iqgjshdk3v * obj ) { iqgjshdk3v * obj_p ; int32_T i ; obj -> pInBufferIndex =
1.0 ; for ( i = 0 ; i < 3072 ; i ++ ) { obj -> pInBuffer_re [ i ] = 0 ; } for
( i = 0 ; i < 3072 ; i ++ ) { obj -> pInBuffer_im [ i ] = 0 ; } for ( i = 0 ;
i < 3072 ; i ++ ) { obj -> pInBuffer_valid [ i ] = 0.0 ; } for ( i = 0 ; i <
6144 ; i ++ ) { obj -> pOutBuffer_cmplx [ i ] . re = 0 ; obj ->
pOutBuffer_cmplx [ i ] . im = 0 ; } obj -> pWrOutBuffer_index = 1.0 ; obj ->
pRdOutBuffer_index = 1.0 ; obj_p = obj ; obj_p -> pWrOutBuffer_roll = false ;
obj_p = obj ; obj_p -> pRdOutBuffer_roll = false ; obj -> pStartOutputPort [
0 ] = true ; for ( i = 0 ; i < 255 ; i ++ ) { obj -> pStartOutputPort [ i + 1
] = false ; } obj -> pEndOutputPort [ 0 ] = false ; obj -> pEndOutputPort [ 1
] = true ; for ( i = 0 ; i < 254 ; i ++ ) { obj -> pEndOutputPort [ i + 2 ] =
false ; } for ( i = 0 ; i < 8 ; i ++ ) { obj -> pOverflowStage [ i ] = 0.0 ;
} obj_p = obj ; obj_p -> pOverflowFlag = true ; obj -> pSimTime = 1.0 ; obj
-> pCurSOF = 0.0 ; for ( i = 0 ; i < 1024 ; i ++ ) { obj -> pSOFFifo [ i ] =
0.0 ; } obj -> pWrFifoAddr = 1.0 ; obj -> pRdFifoAddr = 1.0 ; obj ->
pLastData = obj -> pInitialValue ; obj -> pState = 0.0 ; obj -> pSampleCnt =
0.0 ; obj -> pOutCnt = 0.0 ; obj_p = obj ; obj_p -> pWrEnb = false ; obj_p =
obj ; obj_p -> pRdyReg = true ; } static boolean_T cwmh5crioz ( void ) {
return false ; } static void aj5xjnxfwl ( iqgjshdk3v * obj , boolean_T
validIn ) { iqgjshdk3v * obj_p ; real_T curAddr ; real_T vldSamples ; int32_T
i ; int32_T partialTrueCount ; int32_T trueCount ; int8_T b_index_data [ 256
] ; boolean_T resetOut ; resetOut = cwmh5crioz ( ) ; resetOut = ! resetOut ;
trueCount = 0 ; if ( validIn && resetOut ) { for ( i = 0 ; i < 1 ; i ++ ) {
trueCount ++ ; } } vldSamples = trueCount ; if ( ( obj -> pInBufferIndex +
vldSamples ) - 1.0 >= 256.0 ) { memset ( & b_index_data [ 0 ] , 0 , sizeof (
int8_T ) << 8U ) ; if ( validIn ) { b_index_data [ 0 ] = 1 ; } trueCount = 0
; for ( i = 0 ; i < 256 ; i ++ ) { if ( b_index_data [ i ] > 0 ) { trueCount
++ ; } } partialTrueCount = 0 ; for ( i = 0 ; i < 256 ; i ++ ) { if (
b_index_data [ i ] > 0 ) { b_index_data [ partialTrueCount ] = b_index_data [
i ] ; partialTrueCount ++ ; } } vldSamples = ( 256.0 - obj -> pInBufferIndex
) + 1.0 ; if ( ( vldSamples > 0.0 ) && ( trueCount != 0 ) ) { vldSamples = (
real_T ) b_index_data [ ( int32_T ) vldSamples - 1 ] + obj -> pSimTime ; }
else { vldSamples = obj -> pSimTime ; } vldSamples = ( vldSamples + 1295.0 )
- 256.0 ; obj_p = obj ; curAddr = obj_p -> pWrFifoAddr ; obj_p -> pSOFFifo [
( int32_T ) curAddr - 1 ] = vldSamples ; if ( curAddr == 1024.0 ) { curAddr =
1.0 ; } else { curAddr ++ ; } obj_p -> pWrFifoAddr = curAddr ; } } static
void atzf2lpdwh ( real_T sampleIndex_data [ ] , int32_T sampleIndex_size [ 2
] ) { __m128d tmp ; real_T b_sampleIndex_data [ 128 ] ; real_T
BaseSampleIndex [ 64 ] ; int32_T i ; for ( i = 0 ; i < 32 ; i ++ ) {
BaseSampleIndex [ i ] = 2.0 * ( real_T ) i ; BaseSampleIndex [ i + 32 ] = 2.0
* ( real_T ) i + 1.0 ; } for ( i = 0 ; i <= 62 ; i += 2 ) { tmp =
_mm_loadu_pd ( & BaseSampleIndex [ i ] ) ; _mm_storeu_pd ( &
b_sampleIndex_data [ i ] , tmp ) ; tmp = _mm_add_pd ( tmp , _mm_set1_pd (
128.0 ) ) ; _mm_storeu_pd ( & b_sampleIndex_data [ i + 64 ] , tmp ) ; }
sampleIndex_size [ 0 ] = 1 ; sampleIndex_size [ 1 ] = 128 ; memcpy ( &
sampleIndex_data [ 0 ] , & b_sampleIndex_data [ 0 ] , sizeof ( real_T ) << 7U
) ; } static void jfrffxxzpj ( const iqgjshdk3v * obj , const cint32_T
twiddleTable [ 2 ] , real_T twiddleIndex , int32_T * wr , int32_T * wi ) {
real_T bitReverseTable [ 128 ] ; real_T data ; int32_T eint ; memcpy ( &
bitReverseTable [ 0 ] , & obj -> pBitReverseTable_H [ 0 ] , sizeof ( real_T )
<< 7U ) ; frexp ( 256.0 , & eint ) ; data = bitReverseTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] / 2.0 ; data = trunc ( data ) ; twiddleIndex =
muDoubleScalarRem ( data , 2.0 ) ; * wr = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . re ; * wi = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . im ; } static void atzf2lpdwhj ( real_T
sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) { real_T
b_sampleIndex_data [ 160 ] ; real_T BaseSampleIndex [ 32 ] ; int32_T b_i ;
int32_T b_sampleIndex_size_idx_1 ; int32_T i ; int32_T loop_ub ; int32_T
sampleIndex_size_p ; for ( loop_ub = 0 ; loop_ub < 16 ; loop_ub ++ ) {
BaseSampleIndex [ loop_ub ] = 2.0 * ( real_T ) loop_ub ; BaseSampleIndex [
loop_ub + 16 ] = 2.0 * ( real_T ) loop_ub + 1.0 ; } sampleIndex_size [ 1 ] =
32 ; memcpy ( & sampleIndex_data [ 0 ] , & BaseSampleIndex [ 0 ] , sizeof (
real_T ) << 5U ) ; sampleIndex_size [ 0 ] = 1 ; for ( b_i = 0 ; b_i < 3 ; b_i
++ ) { sampleIndex_size_p = sampleIndex_size [ 1 ] ; i = b_i + 1 ;
b_sampleIndex_size_idx_1 = sampleIndex_size_p + 32 ; i <<= 6 ; if ( 0 <=
sampleIndex_size_p - 1 ) { memcpy ( & b_sampleIndex_data [ 0 ] , &
sampleIndex_data [ 0 ] , sampleIndex_size_p * sizeof ( real_T ) ) ; } for (
loop_ub = 0 ; loop_ub < 32 ; loop_ub ++ ) { b_sampleIndex_data [ loop_ub +
sampleIndex_size_p ] = BaseSampleIndex [ loop_ub ] + ( real_T ) i ; }
sampleIndex_size_p = b_sampleIndex_size_idx_1 ; loop_ub =
b_sampleIndex_size_idx_1 - 1 ; if ( 0 <= loop_ub ) { memcpy ( &
sampleIndex_data [ 0 ] , & b_sampleIndex_data [ 0 ] , ( loop_ub + 1 ) *
sizeof ( real_T ) ) ; } sampleIndex_size [ 1 ] = sampleIndex_size_p ; } }
static void jfrffxxzpjz ( const iqgjshdk3v * obj , const cint32_T
twiddleTable [ 4 ] , real_T twiddleIndex , int32_T * wr , int32_T * wi ) {
real_T bitReverseTable [ 128 ] ; real_T data ; int32_T eint ; memcpy ( &
bitReverseTable [ 0 ] , & obj -> pBitReverseTable_H [ 0 ] , sizeof ( real_T )
<< 7U ) ; frexp ( 256.0 , & eint ) ; data = bitReverseTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] / 2.0 ; data = trunc ( data ) ; twiddleIndex =
muDoubleScalarRem ( data , 4.0 ) ; * wr = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . re ; * wi = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . im ; } static void olfl4t3yzz ( iqgjshdk3v * obj
, int64_T X_p , int64_T Y , int64_T U , int64_T V , real_T stage ) {
boolean_T c ; c = ( X_p < - 562949953421312LL ) ; if ( c ) { obj ->
pOverflowStage [ ( int32_T ) stage - 1 ] = 1.0 ; } else { c = ( X_p >
562949936644096LL ) ; if ( c ) { obj -> pOverflowStage [ ( int32_T ) stage -
1 ] = 1.0 ; } else { c = ( Y < - 562949953421312LL ) ; if ( c ) { obj ->
pOverflowStage [ ( int32_T ) stage - 1 ] = 1.0 ; } else { c = ( Y >
562949936644096LL ) ; if ( c ) { obj -> pOverflowStage [ ( int32_T ) stage -
1 ] = 1.0 ; } else { c = ( U < - 562949953421312LL ) ; if ( c ) { obj ->
pOverflowStage [ ( int32_T ) stage - 1 ] = 1.0 ; } else { c = ( U >
562949936644096LL ) ; if ( c ) { obj -> pOverflowStage [ ( int32_T ) stage -
1 ] = 1.0 ; } else { c = ( V < - 562949953421312LL ) ; if ( c ) { obj ->
pOverflowStage [ ( int32_T ) stage - 1 ] = 1.0 ; } else { c = ( V >
562949936644096LL ) ; if ( c ) { obj -> pOverflowStage [ ( int32_T ) stage -
1 ] = 1.0 ; } } } } } } } } } static void atzf2lpdwhju ( real_T
sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) { real_T
b_sampleIndex_data [ 144 ] ; real_T BaseSampleIndex [ 16 ] ; int32_T b_i ;
int32_T b_sampleIndex_size_idx_1 ; int32_T i ; int32_T loop_ub ; int32_T
sampleIndex_size_p ; for ( loop_ub = 0 ; loop_ub < 8 ; loop_ub ++ ) {
BaseSampleIndex [ loop_ub ] = 2.0 * ( real_T ) loop_ub ; BaseSampleIndex [
loop_ub + 8 ] = 2.0 * ( real_T ) loop_ub + 1.0 ; } sampleIndex_size [ 1 ] =
16 ; memcpy ( & sampleIndex_data [ 0 ] , & BaseSampleIndex [ 0 ] , sizeof (
real_T ) << 4U ) ; sampleIndex_size [ 0 ] = 1 ; for ( b_i = 0 ; b_i < 7 ; b_i
++ ) { sampleIndex_size_p = sampleIndex_size [ 1 ] ; i = b_i + 1 ;
b_sampleIndex_size_idx_1 = sampleIndex_size_p + 16 ; i <<= 5 ; if ( 0 <=
sampleIndex_size_p - 1 ) { memcpy ( & b_sampleIndex_data [ 0 ] , &
sampleIndex_data [ 0 ] , sampleIndex_size_p * sizeof ( real_T ) ) ; } for (
loop_ub = 0 ; loop_ub < 16 ; loop_ub ++ ) { b_sampleIndex_data [ loop_ub +
sampleIndex_size_p ] = BaseSampleIndex [ loop_ub ] + ( real_T ) i ; }
sampleIndex_size_p = b_sampleIndex_size_idx_1 ; loop_ub =
b_sampleIndex_size_idx_1 - 1 ; if ( 0 <= loop_ub ) { memcpy ( &
sampleIndex_data [ 0 ] , & b_sampleIndex_data [ 0 ] , ( loop_ub + 1 ) *
sizeof ( real_T ) ) ; } sampleIndex_size [ 1 ] = sampleIndex_size_p ; } }
static void jfrffxxzpjzz ( const iqgjshdk3v * obj , const cint32_T
twiddleTable [ 8 ] , real_T twiddleIndex , int32_T * wr , int32_T * wi ) {
real_T bitReverseTable [ 128 ] ; real_T data ; int32_T eint ; memcpy ( &
bitReverseTable [ 0 ] , & obj -> pBitReverseTable_H [ 0 ] , sizeof ( real_T )
<< 7U ) ; frexp ( 256.0 , & eint ) ; data = bitReverseTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] / 2.0 ; data = trunc ( data ) ; twiddleIndex =
muDoubleScalarRem ( data , 8.0 ) ; * wr = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . re ; * wi = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . im ; } static void atzf2lpdwhjup ( real_T
sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) { int32_T b_i ;
int32_T b_sampleIndex_size_idx_1 ; int32_T i ; int32_T i_p ; int32_T
sampleIndex_size_p ; int8_T BaseSampleIndex [ 8 ] ; uint8_T
b_sampleIndex_data [ 136 ] ; BaseSampleIndex [ 0 ] = 0 ; BaseSampleIndex [ 4
] = 1 ; BaseSampleIndex [ 1 ] = 2 ; BaseSampleIndex [ 5 ] = 3 ;
BaseSampleIndex [ 2 ] = 4 ; BaseSampleIndex [ 6 ] = 5 ; BaseSampleIndex [ 3 ]
= 6 ; BaseSampleIndex [ 7 ] = 7 ; sampleIndex_size [ 1 ] = 8 ; for ( i_p = 0
; i_p < 8 ; i_p ++ ) { sampleIndex_data [ i_p ] = BaseSampleIndex [ i_p ] ; }
sampleIndex_size [ 0 ] = 1 ; for ( b_i = 0 ; b_i < 15 ; b_i ++ ) {
sampleIndex_size_p = sampleIndex_size [ 1 ] ; i = b_i + 1 ;
b_sampleIndex_size_idx_1 = sampleIndex_size_p + 8 ; i <<= 4 ; for ( i_p = 0 ;
i_p < sampleIndex_size_p ; i_p ++ ) { b_sampleIndex_data [ i_p ] = ( uint8_T
) sampleIndex_data [ i_p ] ; } for ( i_p = 0 ; i_p < 8 ; i_p ++ ) {
b_sampleIndex_data [ i_p + sampleIndex_size_p ] = ( uint8_T ) (
BaseSampleIndex [ i_p ] + i ) ; } sampleIndex_size_p =
b_sampleIndex_size_idx_1 ; i = b_sampleIndex_size_idx_1 - 1 ; for ( i_p = 0 ;
i_p <= i ; i_p ++ ) { sampleIndex_data [ i_p ] = b_sampleIndex_data [ i_p ] ;
} sampleIndex_size [ 1 ] = sampleIndex_size_p ; } } static void jfrffxxzpjzze
( const iqgjshdk3v * obj , const cint32_T twiddleTable [ 16 ] , real_T
twiddleIndex , int32_T * wr , int32_T * wi ) { real_T bitReverseTable [ 128 ]
; real_T data ; int32_T eint ; memcpy ( & bitReverseTable [ 0 ] , & obj ->
pBitReverseTable_H [ 0 ] , sizeof ( real_T ) << 7U ) ; frexp ( 256.0 , & eint
) ; data = bitReverseTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] / 2.0 ;
data = trunc ( data ) ; twiddleIndex = muDoubleScalarRem ( data , 16.0 ) ; *
wr = twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . re ; * wi =
twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . im ; } static void
atzf2lpdwhjupt ( real_T sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ]
) { int32_T b_i ; int32_T b_sampleIndex_size_idx_1 ; int32_T i ; int32_T i_p
; int32_T sampleIndex_size_p ; uint8_T b_sampleIndex_data [ 132 ] ;
sampleIndex_size [ 1 ] = 4 ; sampleIndex_data [ 0 ] = 0.0 ; sampleIndex_data
[ 1 ] = 2.0 ; sampleIndex_data [ 2 ] = 1.0 ; sampleIndex_data [ 3 ] = 3.0 ;
sampleIndex_size [ 0 ] = 1 ; for ( b_i = 0 ; b_i < 31 ; b_i ++ ) {
sampleIndex_size_p = sampleIndex_size [ 1 ] ; i = b_i + 1 ;
b_sampleIndex_size_idx_1 = sampleIndex_size_p + 4 ; i <<= 3 ; for ( i_p = 0 ;
i_p < sampleIndex_size_p ; i_p ++ ) { b_sampleIndex_data [ i_p ] = ( uint8_T
) sampleIndex_data [ i_p ] ; } b_sampleIndex_data [ sampleIndex_size_p ] = (
uint8_T ) i ; b_sampleIndex_data [ sampleIndex_size_p + 1 ] = ( uint8_T ) ( i
+ 2 ) ; b_sampleIndex_data [ sampleIndex_size_p + 2 ] = ( uint8_T ) ( i + 1 )
; b_sampleIndex_data [ sampleIndex_size_p + 3 ] = ( uint8_T ) ( i + 3 ) ;
sampleIndex_size_p = b_sampleIndex_size_idx_1 ; i = b_sampleIndex_size_idx_1
- 1 ; for ( i_p = 0 ; i_p <= i ; i_p ++ ) { sampleIndex_data [ i_p ] =
b_sampleIndex_data [ i_p ] ; } sampleIndex_size [ 1 ] = sampleIndex_size_p ;
} } static void jfrffxxzpjzzeu ( const iqgjshdk3v * obj , const cint32_T
twiddleTable [ 32 ] , real_T twiddleIndex , int32_T * wr , int32_T * wi ) {
real_T bitReverseTable [ 128 ] ; real_T data ; int32_T eint ; memcpy ( &
bitReverseTable [ 0 ] , & obj -> pBitReverseTable_H [ 0 ] , sizeof ( real_T )
<< 7U ) ; frexp ( 256.0 , & eint ) ; data = bitReverseTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] / 2.0 ; data = trunc ( data ) ; twiddleIndex =
muDoubleScalarRem ( data , 32.0 ) ; * wr = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . re ; * wi = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . im ; } static void atzf2lpdwhjuptt ( real_T
sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) { int32_T b_i ;
int32_T b_sampleIndex_size_idx_1 ; int32_T i ; int32_T i_p ; int32_T
sampleIndex_size_p ; uint8_T b_sampleIndex_data [ 130 ] ; sampleIndex_size [
1 ] = 2 ; sampleIndex_data [ 0 ] = 0.0 ; sampleIndex_data [ 1 ] = 1.0 ;
sampleIndex_size [ 0 ] = 1 ; for ( b_i = 0 ; b_i < 63 ; b_i ++ ) {
sampleIndex_size_p = sampleIndex_size [ 1 ] ; i = b_i + 1 ;
b_sampleIndex_size_idx_1 = sampleIndex_size_p + 2 ; i <<= 2 ; for ( i_p = 0 ;
i_p < sampleIndex_size_p ; i_p ++ ) { b_sampleIndex_data [ i_p ] = ( uint8_T
) sampleIndex_data [ i_p ] ; } b_sampleIndex_data [ sampleIndex_size_p ] = (
uint8_T ) i ; b_sampleIndex_data [ sampleIndex_size_p + 1 ] = ( uint8_T ) ( i
+ 1 ) ; sampleIndex_size_p = b_sampleIndex_size_idx_1 ; i =
b_sampleIndex_size_idx_1 - 1 ; for ( i_p = 0 ; i_p <= i ; i_p ++ ) {
sampleIndex_data [ i_p ] = b_sampleIndex_data [ i_p ] ; } sampleIndex_size [
1 ] = sampleIndex_size_p ; } } static void jfrffxxzpjzzeun ( const iqgjshdk3v
* obj , const cint32_T twiddleTable [ 64 ] , real_T twiddleIndex , int32_T *
wr , int32_T * wi ) { real_T bitReverseTable [ 128 ] ; real_T data ; int32_T
eint ; memcpy ( & bitReverseTable [ 0 ] , & obj -> pBitReverseTable_H [ 0 ] ,
sizeof ( real_T ) << 7U ) ; frexp ( 256.0 , & eint ) ; data = bitReverseTable
[ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] / 2.0 ; data = trunc ( data ) ;
twiddleIndex = muDoubleScalarRem ( data , 64.0 ) ; * wr = twiddleTable [ (
int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . re ; * wi = twiddleTable [ ( int32_T
) ( twiddleIndex + 1.0 ) - 1 ] . im ; } static void ixsba1g2i0 ( const
iqgjshdk3v * obj , const cint32_T twiddleTable [ 128 ] , real_T twiddleIndex
, int32_T * wr , int32_T * wi ) { real_T bitReverseTable [ 128 ] ; int32_T
eint ; memcpy ( & bitReverseTable [ 0 ] , & obj -> pBitReverseTable_H [ 0 ] ,
sizeof ( real_T ) << 7U ) ; frexp ( 256.0 , & eint ) ; twiddleIndex =
bitReverseTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] ; * wr =
twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . re ; * wi =
twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . im ; } static
real_T ngkznh1nn4 ( real_T in , const real_T bitReverseTable [ 256 ] ) {
int32_T eint ; frexp ( 512.0 , & eint ) ; return bitReverseTable [ ( int32_T
) ( in + 1.0 ) - 1 ] ; } static void ad3chnj3y1 ( iqgjshdk3v * obj , const
int32_T dataIn_re [ 256 ] , const int32_T dataIn_im [ 256 ] , int32_T dout_re
[ 256 ] , int32_T dout_im [ 256 ] ) { static const cint32_T tmp_j [ 128 ] = {
{ 16777216 , 0 } , { 16772163 , - 411733 } , { 16757007 , - 823219 } , {
16731757 , - 1234209 } , { 16696429 , - 1644455 } , { 16651044 , - 2053710 }
, { 16595628 , - 2461729 } , { 16530216 , - 2868265 } , { 16454846 , -
3273072 } , { 16369565 , - 3675909 } , { 16274424 , - 4076531 } , { 16169479
, - 4474698 } , { 16054795 , - 4870169 } , { 15930439 , - 5262706 } , {
15796488 , - 5652074 } , { 15653022 , - 6038037 } , { 15500126 , - 6420363 }
, { 15337895 , - 6798821 } , { 15166424 , - 7173184 } , { 14985817 , -
7543226 } , { 14796184 , - 7908725 } , { 14597637 , - 8269459 } , { 14390298
, - 8625213 } , { 14174291 , - 8975771 } , { 13949745 , - 9320922 } , {
13716797 , - 9660458 } , { 13475586 , - 9994176 } , { 13226258 , - 10321873 }
, { 12968963 , - 10643353 } , { 12703856 , - 10958422 } , { 12431097 , -
11266890 } , { 12150850 , - 11568571 } , { 11863283 , - 11863283 } , {
11568571 , - 12150850 } , { 11266890 , - 12431097 } , { 10958422 , - 12703856
} , { 10643353 , - 12968963 } , { 10321873 , - 13226258 } , { 9994176 , -
13475586 } , { 9660458 , - 13716797 } , { 9320922 , - 13949745 } , { 8975771
, - 14174291 } , { 8625213 , - 14390298 } , { 8269459 , - 14597637 } , {
7908725 , - 14796184 } , { 7543226 , - 14985817 } , { 7173184 , - 15166424 }
, { 6798821 , - 15337895 } , { 6420363 , - 15500126 } , { 6038037 , -
15653022 } , { 5652074 , - 15796488 } , { 5262706 , - 15930439 } , { 4870169
, - 16054795 } , { 4474698 , - 16169479 } , { 4076531 , - 16274424 } , {
3675909 , - 16369565 } , { 3273072 , - 16454846 } , { 2868265 , - 16530216 }
, { 2461729 , - 16595628 } , { 2053710 , - 16651044 } , { 1644455 , -
16696429 } , { 1234209 , - 16731757 } , { 823219 , - 16757007 } , { 411733 ,
- 16772163 } , { 0 , - 16777216 } , { - 411733 , - 16772163 } , { - 823219 ,
- 16757007 } , { - 1234209 , - 16731757 } , { - 1644455 , - 16696429 } , { -
2053710 , - 16651044 } , { - 2461729 , - 16595628 } , { - 2868265 , -
16530216 } , { - 3273072 , - 16454846 } , { - 3675909 , - 16369565 } , { -
4076531 , - 16274424 } , { - 4474698 , - 16169479 } , { - 4870169 , -
16054795 } , { - 5262706 , - 15930439 } , { - 5652074 , - 15796488 } , { -
6038037 , - 15653022 } , { - 6420363 , - 15500126 } , { - 6798821 , -
15337895 } , { - 7173184 , - 15166424 } , { - 7543226 , - 14985817 } , { -
7908725 , - 14796184 } , { - 8269459 , - 14597637 } , { - 8625213 , -
14390298 } , { - 8975771 , - 14174291 } , { - 9320922 , - 13949745 } , { -
9660458 , - 13716797 } , { - 9994176 , - 13475586 } , { - 10321873 , -
13226258 } , { - 10643353 , - 12968963 } , { - 10958422 , - 12703856 } , { -
11266890 , - 12431097 } , { - 11568571 , - 12150850 } , { - 11863283 , -
11863283 } , { - 12150850 , - 11568571 } , { - 12431097 , - 11266890 } , { -
12703856 , - 10958422 } , { - 12968963 , - 10643353 } , { - 13226258 , -
10321873 } , { - 13475586 , - 9994176 } , { - 13716797 , - 9660458 } , { -
13949745 , - 9320922 } , { - 14174291 , - 8975771 } , { - 14390298 , -
8625213 } , { - 14597637 , - 8269459 } , { - 14796184 , - 7908725 } , { -
14985817 , - 7543226 } , { - 15166424 , - 7173184 } , { - 15337895 , -
6798821 } , { - 15500126 , - 6420363 } , { - 15653022 , - 6038037 } , { -
15796488 , - 5652074 } , { - 15930439 , - 5262706 } , { - 16054795 , -
4870169 } , { - 16169479 , - 4474698 } , { - 16274424 , - 4076531 } , { -
16369565 , - 3675909 } , { - 16454846 , - 3273072 } , { - 16530216 , -
2868265 } , { - 16595628 , - 2461729 } , { - 16651044 , - 2053710 } , { -
16696429 , - 1644455 } , { - 16731757 , - 1234209 } , { - 16757007 , - 823219
} , { - 16772163 , - 411733 } } ; static const cint32_T tmp_g [ 64 ] = { {
16777216 , 0 } , { 16757007 , - 823219 } , { 16696429 , - 1644455 } , {
16595628 , - 2461729 } , { 16454846 , - 3273072 } , { 16274424 , - 4076531 }
, { 16054795 , - 4870169 } , { 15796488 , - 5652074 } , { 15500126 , -
6420363 } , { 15166424 , - 7173184 } , { 14796184 , - 7908725 } , { 14390298
, - 8625213 } , { 13949745 , - 9320922 } , { 13475586 , - 9994176 } , {
12968963 , - 10643353 } , { 12431097 , - 11266890 } , { 11863283 , - 11863283
} , { 11266890 , - 12431097 } , { 10643353 , - 12968963 } , { 9994176 , -
13475586 } , { 9320922 , - 13949745 } , { 8625213 , - 14390298 } , { 7908725
, - 14796184 } , { 7173184 , - 15166424 } , { 6420363 , - 15500126 } , {
5652074 , - 15796488 } , { 4870169 , - 16054795 } , { 4076531 , - 16274424 }
, { 3273072 , - 16454846 } , { 2461729 , - 16595628 } , { 1644455 , -
16696429 } , { 823219 , - 16757007 } , { 0 , - 16777216 } , { - 823219 , -
16757007 } , { - 1644455 , - 16696429 } , { - 2461729 , - 16595628 } , { -
3273072 , - 16454846 } , { - 4076531 , - 16274424 } , { - 4870169 , -
16054795 } , { - 5652074 , - 15796488 } , { - 6420363 , - 15500126 } , { -
7173184 , - 15166424 } , { - 7908725 , - 14796184 } , { - 8625213 , -
14390298 } , { - 9320922 , - 13949745 } , { - 9994176 , - 13475586 } , { -
10643353 , - 12968963 } , { - 11266890 , - 12431097 } , { - 11863283 , -
11863283 } , { - 12431097 , - 11266890 } , { - 12968963 , - 10643353 } , { -
13475586 , - 9994176 } , { - 13949745 , - 9320922 } , { - 14390298 , -
8625213 } , { - 14796184 , - 7908725 } , { - 15166424 , - 7173184 } , { -
15500126 , - 6420363 } , { - 15796488 , - 5652074 } , { - 16054795 , -
4870169 } , { - 16274424 , - 4076531 } , { - 16454846 , - 3273072 } , { -
16595628 , - 2461729 } , { - 16696429 , - 1644455 } , { - 16757007 , - 823219
} } ; static const cint32_T tmp_m [ 32 ] = { { 16777216 , 0 } , { 16696429 ,
- 1644455 } , { 16454846 , - 3273072 } , { 16054795 , - 4870169 } , {
15500126 , - 6420363 } , { 14796184 , - 7908725 } , { 13949745 , - 9320922 }
, { 12968963 , - 10643353 } , { 11863283 , - 11863283 } , { 10643353 , -
12968963 } , { 9320922 , - 13949745 } , { 7908725 , - 14796184 } , { 6420363
, - 15500126 } , { 4870169 , - 16054795 } , { 3273072 , - 16454846 } , {
1644455 , - 16696429 } , { 0 , - 16777216 } , { - 1644455 , - 16696429 } , {
- 3273072 , - 16454846 } , { - 4870169 , - 16054795 } , { - 6420363 , -
15500126 } , { - 7908725 , - 14796184 } , { - 9320922 , - 13949745 } , { -
10643353 , - 12968963 } , { - 11863283 , - 11863283 } , { - 12968963 , -
10643353 } , { - 13949745 , - 9320922 } , { - 14796184 , - 7908725 } , { -
15500126 , - 6420363 } , { - 16054795 , - 4870169 } , { - 16454846 , -
3273072 } , { - 16696429 , - 1644455 } } ; static const cint32_T tmp_i [ 16 ]
= { { 16777216 , 0 } , { 16454846 , - 3273072 } , { 15500126 , - 6420363 } ,
{ 13949745 , - 9320922 } , { 11863283 , - 11863283 } , { 9320922 , - 13949745
} , { 6420363 , - 15500126 } , { 3273072 , - 16454846 } , { 0 , - 16777216 }
, { - 3273072 , - 16454846 } , { - 6420363 , - 15500126 } , { - 9320922 , -
13949745 } , { - 11863283 , - 11863283 } , { - 13949745 , - 9320922 } , { -
15500126 , - 6420363 } , { - 16454846 , - 3273072 } } ; static const cint32_T
tmp_e [ 8 ] = { { 16777216 , 0 } , { 15500126 , - 6420363 } , { 11863283 , -
11863283 } , { 6420363 , - 15500126 } , { 0 , - 16777216 } , { - 6420363 , -
15500126 } , { - 11863283 , - 11863283 } , { - 15500126 , - 6420363 } } ;
static const cint32_T tmp_p [ 4 ] = { { 16777216 , 0 } , { 11863283 , -
11863283 } , { 0 , - 16777216 } , { - 11863283 , - 11863283 } } ; static
const cint32_T tmp [ 2 ] = { { 16777216 , 0 } , { 0 , - 16777216 } } ;
iqgjshdk3v * obj_p ; int64_T c ; int64_T cmplx_im ; int64_T cmplx_re ;
int64_T u_cast ; int64_T wrv ; int64_T wry ; int64_T x_cast ; real_T obj_e [
256 ] ; real_T sampleIndex_data [ 128 ] ; real_T x [ 8 ] ; real_T inIndex ;
real_T outIndex ; real_T twdlIndex ; int32_T din_im [ 256 ] ; int32_T din_re
[ 256 ] ; int32_T dout_im_stage [ 256 ] ; int32_T dout_re_stage [ 256 ] ;
int32_T sampleIndex_size [ 2 ] ; int32_T X_cast ; int32_T Y_cast ; int32_T i
; int32_T v_cast ; int32_T wi_cast ; int32_T wr_cast ; int32_T xoffset ;
int32_T y_cast ; for ( i = 0 ; i < 256 ; i ++ ) { din_re [ i ] = dataIn_re [
i ] ; din_im [ i ] = dataIn_im [ i ] ; dout_re_stage [ i ] = 0 ;
dout_im_stage [ i ] = 0 ; } outIndex = 1.0 ; for ( v_cast = 0 ; v_cast < 64 ;
v_cast ++ ) { sampleIndex_data [ v_cast ] = 2.0 * ( real_T ) v_cast ;
sampleIndex_data [ v_cast + 64 ] = 2.0 * ( real_T ) v_cast + 1.0 ; } for ( i
= 0 ; i < 128 ; i ++ ) { inIndex = ( real_T ) i + 1.0 ; inIndex =
sampleIndex_data [ ( int32_T ) inIndex - 1 ] ; X_cast = din_re [ ( int32_T )
( inIndex + 1.0 ) - 1 ] ; Y_cast = din_im [ ( int32_T ) ( inIndex + 1.0 ) - 1
] ; y_cast = din_re [ ( int32_T ) ( ( inIndex + 128.0 ) + 1.0 ) - 1 ] ;
v_cast = din_im [ ( int32_T ) ( ( inIndex + 128.0 ) + 1.0 ) - 1 ] ; wry = (
int64_T ) y_cast << 24 ; wrv = ( int64_T ) v_cast << 24 ; cmplx_re = ( wry &
4503599627370496ULL ) != 0ULL ? wry | - 4503599627370496LL : wry &
4503599627370495LL ; wry = wrv ; cmplx_im = ( wry & 4503599627370496ULL ) !=
0ULL ? wry | - 4503599627370496LL : wry & 4503599627370495LL ; x_cast = (
int64_T ) X_cast << 24 ; u_cast = ( int64_T ) Y_cast << 24 ; wry = x_cast +
cmplx_re ; wrv = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = u_cast + cmplx_im ; c =
( wry & 9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = x_cast - cmplx_re ; cmplx_re = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = u_cast - cmplx_im ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = wrv >> 1 ; wrv = ( wry & 9007199254740992ULL ) !=
0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry = cmplx_re
>> 1 ; cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = c >> 1 ; c = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = cmplx_im >> 1 ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; olfl4t3yzz ( obj , wrv , cmplx_re , c , cmplx_im , 1.0 )
; v_cast = ( int32_T ) ( wrv >> 24 ) ; X_cast = ( v_cast & 33554432U ) != 0U
? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = ( int32_T ) ( cmplx_re
>> 24 ) ; Y_cast = ( v_cast & 33554432U ) != 0U ? v_cast | - 33554432 :
v_cast & 33554431 ; v_cast = ( int32_T ) ( c >> 24 ) ; y_cast = ( v_cast &
33554432U ) != 0U ? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = (
int32_T ) ( cmplx_im >> 24 ) ; v_cast = ( v_cast & 33554432U ) != 0U ? v_cast
| - 33554432 : v_cast & 33554431 ; dout_re_stage [ ( int32_T ) outIndex - 1 ]
= X_cast ; dout_re_stage [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] = Y_cast ;
dout_im_stage [ ( int32_T ) outIndex - 1 ] = y_cast ; dout_im_stage [ (
int32_T ) ( outIndex + 1.0 ) - 1 ] = v_cast ; outIndex += 2.0 ; } memcpy ( &
din_re [ 0 ] , & dout_re_stage [ 0 ] , sizeof ( int32_T ) << 8U ) ; memcpy (
& din_im [ 0 ] , & dout_im_stage [ 0 ] , sizeof ( int32_T ) << 8U ) ;
outIndex = 1.0 ; twdlIndex = 0.0 ; atzf2lpdwh ( sampleIndex_data ,
sampleIndex_size ) ; for ( i = 0 ; i < 128 ; i ++ ) { inIndex = ( real_T ) i
+ 1.0 ; inIndex = sampleIndex_data [ ( int32_T ) inIndex - 1 ] ; jfrffxxzpj (
obj , tmp , twdlIndex , & wr_cast , & wi_cast ) ; X_cast = din_re [ ( int32_T
) ( inIndex + 1.0 ) - 1 ] ; Y_cast = din_im [ ( int32_T ) ( inIndex + 1.0 ) -
1 ] ; y_cast = din_re [ ( int32_T ) ( ( inIndex + 64.0 ) + 1.0 ) - 1 ] ;
v_cast = din_im [ ( int32_T ) ( ( inIndex + 64.0 ) + 1.0 ) - 1 ] ; wry = (
int64_T ) wr_cast * y_cast ; cmplx_re = ( int64_T ) wi_cast * v_cast ; wrv =
( int64_T ) wr_cast * v_cast ; c = ( int64_T ) wi_cast * y_cast ; wry -=
cmplx_re ; cmplx_re = ( wry & 4503599627370496ULL ) != 0ULL ? wry | -
4503599627370496LL : wry & 4503599627370495LL ; wry = wrv + c ; cmplx_im = (
wry & 4503599627370496ULL ) != 0ULL ? wry | - 4503599627370496LL : wry &
4503599627370495LL ; x_cast = ( int64_T ) X_cast << 24 ; u_cast = ( int64_T )
Y_cast << 24 ; wry = x_cast + cmplx_re ; wrv = ( wry & 9007199254740992ULL )
!= 0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry =
u_cast + cmplx_im ; c = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = x_cast - cmplx_re ;
cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL
: wry & 9007199254740991LL ; wry = u_cast - cmplx_im ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = wrv >> 1 ; wrv = ( wry & 9007199254740992ULL ) !=
0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry = cmplx_re
>> 1 ; cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = c >> 1 ; c = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = cmplx_im >> 1 ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; olfl4t3yzz ( obj , wrv , cmplx_re , c , cmplx_im , 2.0 )
; v_cast = ( int32_T ) ( wrv >> 24 ) ; X_cast = ( v_cast & 33554432U ) != 0U
? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = ( int32_T ) ( cmplx_re
>> 24 ) ; Y_cast = ( v_cast & 33554432U ) != 0U ? v_cast | - 33554432 :
v_cast & 33554431 ; v_cast = ( int32_T ) ( c >> 24 ) ; y_cast = ( v_cast &
33554432U ) != 0U ? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = (
int32_T ) ( cmplx_im >> 24 ) ; v_cast = ( v_cast & 33554432U ) != 0U ? v_cast
| - 33554432 : v_cast & 33554431 ; dout_re_stage [ ( int32_T ) outIndex - 1 ]
= X_cast ; dout_re_stage [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] = Y_cast ;
dout_im_stage [ ( int32_T ) outIndex - 1 ] = y_cast ; dout_im_stage [ (
int32_T ) ( outIndex + 1.0 ) - 1 ] = v_cast ; outIndex += 2.0 ; twdlIndex ++
; } memcpy ( & din_re [ 0 ] , & dout_re_stage [ 0 ] , sizeof ( int32_T ) <<
8U ) ; memcpy ( & din_im [ 0 ] , & dout_im_stage [ 0 ] , sizeof ( int32_T )
<< 8U ) ; outIndex = 1.0 ; twdlIndex = 0.0 ; atzf2lpdwhj ( sampleIndex_data ,
sampleIndex_size ) ; inIndex = sampleIndex_size [ 1 ] ; xoffset = ( int32_T )
inIndex - 1 ; for ( i = 0 ; i <= xoffset ; i ++ ) { inIndex = ( real_T ) i +
1.0 ; inIndex = sampleIndex_data [ ( int32_T ) inIndex - 1 ] ; jfrffxxzpjz (
obj , tmp_p , twdlIndex , & wr_cast , & wi_cast ) ; X_cast = din_re [ (
int32_T ) ( inIndex + 1.0 ) - 1 ] ; Y_cast = din_im [ ( int32_T ) ( inIndex +
1.0 ) - 1 ] ; y_cast = din_re [ ( int32_T ) ( ( inIndex + 32.0 ) + 1.0 ) - 1
] ; v_cast = din_im [ ( int32_T ) ( ( inIndex + 32.0 ) + 1.0 ) - 1 ] ; wry =
( int64_T ) wr_cast * y_cast ; cmplx_re = ( int64_T ) wi_cast * v_cast ; wrv
= ( int64_T ) wr_cast * v_cast ; c = ( int64_T ) wi_cast * y_cast ; wry -=
cmplx_re ; cmplx_re = ( wry & 4503599627370496ULL ) != 0ULL ? wry | -
4503599627370496LL : wry & 4503599627370495LL ; wry = wrv + c ; cmplx_im = (
wry & 4503599627370496ULL ) != 0ULL ? wry | - 4503599627370496LL : wry &
4503599627370495LL ; x_cast = ( int64_T ) X_cast << 24 ; u_cast = ( int64_T )
Y_cast << 24 ; wry = x_cast + cmplx_re ; wrv = ( wry & 9007199254740992ULL )
!= 0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry =
u_cast + cmplx_im ; c = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = x_cast - cmplx_re ;
cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL
: wry & 9007199254740991LL ; wry = u_cast - cmplx_im ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = wrv >> 1 ; wrv = ( wry & 9007199254740992ULL ) !=
0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry = cmplx_re
>> 1 ; cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = c >> 1 ; c = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = cmplx_im >> 1 ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; olfl4t3yzz ( obj , wrv , cmplx_re , c , cmplx_im , 3.0 )
; v_cast = ( int32_T ) ( wrv >> 24 ) ; X_cast = ( v_cast & 33554432U ) != 0U
? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = ( int32_T ) ( cmplx_re
>> 24 ) ; Y_cast = ( v_cast & 33554432U ) != 0U ? v_cast | - 33554432 :
v_cast & 33554431 ; v_cast = ( int32_T ) ( c >> 24 ) ; y_cast = ( v_cast &
33554432U ) != 0U ? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = (
int32_T ) ( cmplx_im >> 24 ) ; v_cast = ( v_cast & 33554432U ) != 0U ? v_cast
| - 33554432 : v_cast & 33554431 ; dout_re_stage [ ( int32_T ) outIndex - 1 ]
= X_cast ; dout_re_stage [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] = Y_cast ;
dout_im_stage [ ( int32_T ) outIndex - 1 ] = y_cast ; dout_im_stage [ (
int32_T ) ( outIndex + 1.0 ) - 1 ] = v_cast ; outIndex += 2.0 ; twdlIndex ++
; } memcpy ( & din_re [ 0 ] , & dout_re_stage [ 0 ] , sizeof ( int32_T ) <<
8U ) ; memcpy ( & din_im [ 0 ] , & dout_im_stage [ 0 ] , sizeof ( int32_T )
<< 8U ) ; outIndex = 1.0 ; twdlIndex = 0.0 ; atzf2lpdwhju ( sampleIndex_data
, sampleIndex_size ) ; inIndex = sampleIndex_size [ 1 ] ; xoffset = ( int32_T
) inIndex - 1 ; for ( i = 0 ; i <= xoffset ; i ++ ) { inIndex = ( real_T ) i
+ 1.0 ; inIndex = sampleIndex_data [ ( int32_T ) inIndex - 1 ] ; jfrffxxzpjzz
( obj , tmp_e , twdlIndex , & wr_cast , & wi_cast ) ; X_cast = din_re [ (
int32_T ) ( inIndex + 1.0 ) - 1 ] ; Y_cast = din_im [ ( int32_T ) ( inIndex +
1.0 ) - 1 ] ; y_cast = din_re [ ( int32_T ) ( ( inIndex + 16.0 ) + 1.0 ) - 1
] ; v_cast = din_im [ ( int32_T ) ( ( inIndex + 16.0 ) + 1.0 ) - 1 ] ; wry =
( int64_T ) wr_cast * y_cast ; cmplx_re = ( int64_T ) wi_cast * v_cast ; wrv
= ( int64_T ) wr_cast * v_cast ; c = ( int64_T ) wi_cast * y_cast ; wry -=
cmplx_re ; cmplx_re = ( wry & 4503599627370496ULL ) != 0ULL ? wry | -
4503599627370496LL : wry & 4503599627370495LL ; wry = wrv + c ; cmplx_im = (
wry & 4503599627370496ULL ) != 0ULL ? wry | - 4503599627370496LL : wry &
4503599627370495LL ; x_cast = ( int64_T ) X_cast << 24 ; u_cast = ( int64_T )
Y_cast << 24 ; wry = x_cast + cmplx_re ; wrv = ( wry & 9007199254740992ULL )
!= 0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry =
u_cast + cmplx_im ; c = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = x_cast - cmplx_re ;
cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL
: wry & 9007199254740991LL ; wry = u_cast - cmplx_im ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = wrv >> 1 ; wrv = ( wry & 9007199254740992ULL ) !=
0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry = cmplx_re
>> 1 ; cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = c >> 1 ; c = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = cmplx_im >> 1 ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; olfl4t3yzz ( obj , wrv , cmplx_re , c , cmplx_im , 4.0 )
; v_cast = ( int32_T ) ( wrv >> 24 ) ; X_cast = ( v_cast & 33554432U ) != 0U
? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = ( int32_T ) ( cmplx_re
>> 24 ) ; Y_cast = ( v_cast & 33554432U ) != 0U ? v_cast | - 33554432 :
v_cast & 33554431 ; v_cast = ( int32_T ) ( c >> 24 ) ; y_cast = ( v_cast &
33554432U ) != 0U ? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = (
int32_T ) ( cmplx_im >> 24 ) ; v_cast = ( v_cast & 33554432U ) != 0U ? v_cast
| - 33554432 : v_cast & 33554431 ; dout_re_stage [ ( int32_T ) outIndex - 1 ]
= X_cast ; dout_re_stage [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] = Y_cast ;
dout_im_stage [ ( int32_T ) outIndex - 1 ] = y_cast ; dout_im_stage [ (
int32_T ) ( outIndex + 1.0 ) - 1 ] = v_cast ; outIndex += 2.0 ; twdlIndex ++
; } memcpy ( & din_re [ 0 ] , & dout_re_stage [ 0 ] , sizeof ( int32_T ) <<
8U ) ; memcpy ( & din_im [ 0 ] , & dout_im_stage [ 0 ] , sizeof ( int32_T )
<< 8U ) ; outIndex = 1.0 ; twdlIndex = 0.0 ; atzf2lpdwhjup ( sampleIndex_data
, sampleIndex_size ) ; inIndex = sampleIndex_size [ 1 ] ; xoffset = ( int32_T
) inIndex - 1 ; for ( i = 0 ; i <= xoffset ; i ++ ) { inIndex = ( real_T ) i
+ 1.0 ; inIndex = sampleIndex_data [ ( int32_T ) inIndex - 1 ] ;
jfrffxxzpjzze ( obj , tmp_i , twdlIndex , & wr_cast , & wi_cast ) ; X_cast =
din_re [ ( int32_T ) ( inIndex + 1.0 ) - 1 ] ; Y_cast = din_im [ ( int32_T )
( inIndex + 1.0 ) - 1 ] ; y_cast = din_re [ ( int32_T ) ( ( inIndex + 8.0 ) +
1.0 ) - 1 ] ; v_cast = din_im [ ( int32_T ) ( ( inIndex + 8.0 ) + 1.0 ) - 1 ]
; wry = ( int64_T ) wr_cast * y_cast ; cmplx_re = ( int64_T ) wi_cast *
v_cast ; wrv = ( int64_T ) wr_cast * v_cast ; c = ( int64_T ) wi_cast *
y_cast ; wry -= cmplx_re ; cmplx_re = ( wry & 4503599627370496ULL ) != 0ULL ?
wry | - 4503599627370496LL : wry & 4503599627370495LL ; wry = wrv + c ;
cmplx_im = ( wry & 4503599627370496ULL ) != 0ULL ? wry | - 4503599627370496LL
: wry & 4503599627370495LL ; x_cast = ( int64_T ) X_cast << 24 ; u_cast = (
int64_T ) Y_cast << 24 ; wry = x_cast + cmplx_re ; wrv = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = u_cast + cmplx_im ; c = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = x_cast - cmplx_re ; cmplx_re = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = u_cast - cmplx_im ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = wrv >> 1 ; wrv = ( wry & 9007199254740992ULL ) !=
0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry = cmplx_re
>> 1 ; cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = c >> 1 ; c = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = cmplx_im >> 1 ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; olfl4t3yzz ( obj , wrv , cmplx_re , c , cmplx_im , 5.0 )
; v_cast = ( int32_T ) ( wrv >> 24 ) ; X_cast = ( v_cast & 33554432U ) != 0U
? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = ( int32_T ) ( cmplx_re
>> 24 ) ; Y_cast = ( v_cast & 33554432U ) != 0U ? v_cast | - 33554432 :
v_cast & 33554431 ; v_cast = ( int32_T ) ( c >> 24 ) ; y_cast = ( v_cast &
33554432U ) != 0U ? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = (
int32_T ) ( cmplx_im >> 24 ) ; v_cast = ( v_cast & 33554432U ) != 0U ? v_cast
| - 33554432 : v_cast & 33554431 ; dout_re_stage [ ( int32_T ) outIndex - 1 ]
= X_cast ; dout_re_stage [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] = Y_cast ;
dout_im_stage [ ( int32_T ) outIndex - 1 ] = y_cast ; dout_im_stage [ (
int32_T ) ( outIndex + 1.0 ) - 1 ] = v_cast ; outIndex += 2.0 ; twdlIndex ++
; } memcpy ( & din_re [ 0 ] , & dout_re_stage [ 0 ] , sizeof ( int32_T ) <<
8U ) ; memcpy ( & din_im [ 0 ] , & dout_im_stage [ 0 ] , sizeof ( int32_T )
<< 8U ) ; outIndex = 1.0 ; twdlIndex = 0.0 ; atzf2lpdwhjupt (
sampleIndex_data , sampleIndex_size ) ; inIndex = sampleIndex_size [ 1 ] ;
xoffset = ( int32_T ) inIndex - 1 ; for ( i = 0 ; i <= xoffset ; i ++ ) {
inIndex = ( real_T ) i + 1.0 ; inIndex = sampleIndex_data [ ( int32_T )
inIndex - 1 ] ; jfrffxxzpjzzeu ( obj , tmp_m , twdlIndex , & wr_cast , &
wi_cast ) ; X_cast = din_re [ ( int32_T ) ( inIndex + 1.0 ) - 1 ] ; Y_cast =
din_im [ ( int32_T ) ( inIndex + 1.0 ) - 1 ] ; y_cast = din_re [ ( int32_T )
( ( inIndex + 4.0 ) + 1.0 ) - 1 ] ; v_cast = din_im [ ( int32_T ) ( ( inIndex
+ 4.0 ) + 1.0 ) - 1 ] ; wry = ( int64_T ) wr_cast * y_cast ; cmplx_re = (
int64_T ) wi_cast * v_cast ; wrv = ( int64_T ) wr_cast * v_cast ; c = (
int64_T ) wi_cast * y_cast ; wry -= cmplx_re ; cmplx_re = ( wry &
4503599627370496ULL ) != 0ULL ? wry | - 4503599627370496LL : wry &
4503599627370495LL ; wry = wrv + c ; cmplx_im = ( wry & 4503599627370496ULL )
!= 0ULL ? wry | - 4503599627370496LL : wry & 4503599627370495LL ; x_cast = (
int64_T ) X_cast << 24 ; u_cast = ( int64_T ) Y_cast << 24 ; wry = x_cast +
cmplx_re ; wrv = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = u_cast + cmplx_im ; c =
( wry & 9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = x_cast - cmplx_re ; cmplx_re = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = u_cast - cmplx_im ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = wrv >> 1 ; wrv = ( wry & 9007199254740992ULL ) !=
0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry = cmplx_re
>> 1 ; cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = c >> 1 ; c = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = cmplx_im >> 1 ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; olfl4t3yzz ( obj , wrv , cmplx_re , c , cmplx_im , 6.0 )
; v_cast = ( int32_T ) ( wrv >> 24 ) ; X_cast = ( v_cast & 33554432U ) != 0U
? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = ( int32_T ) ( cmplx_re
>> 24 ) ; Y_cast = ( v_cast & 33554432U ) != 0U ? v_cast | - 33554432 :
v_cast & 33554431 ; v_cast = ( int32_T ) ( c >> 24 ) ; y_cast = ( v_cast &
33554432U ) != 0U ? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = (
int32_T ) ( cmplx_im >> 24 ) ; v_cast = ( v_cast & 33554432U ) != 0U ? v_cast
| - 33554432 : v_cast & 33554431 ; dout_re_stage [ ( int32_T ) outIndex - 1 ]
= X_cast ; dout_re_stage [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] = Y_cast ;
dout_im_stage [ ( int32_T ) outIndex - 1 ] = y_cast ; dout_im_stage [ (
int32_T ) ( outIndex + 1.0 ) - 1 ] = v_cast ; outIndex += 2.0 ; twdlIndex ++
; } memcpy ( & din_re [ 0 ] , & dout_re_stage [ 0 ] , sizeof ( int32_T ) <<
8U ) ; memcpy ( & din_im [ 0 ] , & dout_im_stage [ 0 ] , sizeof ( int32_T )
<< 8U ) ; outIndex = 1.0 ; twdlIndex = 0.0 ; atzf2lpdwhjuptt (
sampleIndex_data , sampleIndex_size ) ; inIndex = sampleIndex_size [ 1 ] ;
xoffset = ( int32_T ) inIndex - 1 ; for ( i = 0 ; i <= xoffset ; i ++ ) {
inIndex = ( real_T ) i + 1.0 ; inIndex = sampleIndex_data [ ( int32_T )
inIndex - 1 ] ; jfrffxxzpjzzeun ( obj , tmp_g , twdlIndex , & wr_cast , &
wi_cast ) ; X_cast = din_re [ ( int32_T ) ( inIndex + 1.0 ) - 1 ] ; Y_cast =
din_im [ ( int32_T ) ( inIndex + 1.0 ) - 1 ] ; y_cast = din_re [ ( int32_T )
( ( inIndex + 2.0 ) + 1.0 ) - 1 ] ; v_cast = din_im [ ( int32_T ) ( ( inIndex
+ 2.0 ) + 1.0 ) - 1 ] ; wry = ( int64_T ) wr_cast * y_cast ; cmplx_re = (
int64_T ) wi_cast * v_cast ; wrv = ( int64_T ) wr_cast * v_cast ; c = (
int64_T ) wi_cast * y_cast ; wry -= cmplx_re ; cmplx_re = ( wry &
4503599627370496ULL ) != 0ULL ? wry | - 4503599627370496LL : wry &
4503599627370495LL ; wry = wrv + c ; cmplx_im = ( wry & 4503599627370496ULL )
!= 0ULL ? wry | - 4503599627370496LL : wry & 4503599627370495LL ; x_cast = (
int64_T ) X_cast << 24 ; u_cast = ( int64_T ) Y_cast << 24 ; wry = x_cast +
cmplx_re ; wrv = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = u_cast + cmplx_im ; c =
( wry & 9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = x_cast - cmplx_re ; cmplx_re = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = u_cast - cmplx_im ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = wrv >> 1 ; wrv = ( wry & 9007199254740992ULL ) !=
0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry = cmplx_re
>> 1 ; cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = c >> 1 ; c = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = cmplx_im >> 1 ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; olfl4t3yzz ( obj , wrv , cmplx_re , c , cmplx_im , 7.0 )
; v_cast = ( int32_T ) ( wrv >> 24 ) ; X_cast = ( v_cast & 33554432U ) != 0U
? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = ( int32_T ) ( cmplx_re
>> 24 ) ; Y_cast = ( v_cast & 33554432U ) != 0U ? v_cast | - 33554432 :
v_cast & 33554431 ; v_cast = ( int32_T ) ( c >> 24 ) ; y_cast = ( v_cast &
33554432U ) != 0U ? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = (
int32_T ) ( cmplx_im >> 24 ) ; v_cast = ( v_cast & 33554432U ) != 0U ? v_cast
| - 33554432 : v_cast & 33554431 ; dout_re_stage [ ( int32_T ) outIndex - 1 ]
= X_cast ; dout_re_stage [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] = Y_cast ;
dout_im_stage [ ( int32_T ) outIndex - 1 ] = y_cast ; dout_im_stage [ (
int32_T ) ( outIndex + 1.0 ) - 1 ] = v_cast ; outIndex += 2.0 ; twdlIndex ++
; } memcpy ( & din_re [ 0 ] , & dout_re_stage [ 0 ] , sizeof ( int32_T ) <<
8U ) ; memcpy ( & din_im [ 0 ] , & dout_im_stage [ 0 ] , sizeof ( int32_T )
<< 8U ) ; outIndex = 1.0 ; twdlIndex = 0.0 ; for ( v_cast = 0 ; v_cast < 128
; v_cast ++ ) { sampleIndex_data [ v_cast ] = v_cast ; } for ( i = 0 ; i <
128 ; i ++ ) { inIndex = ( real_T ) i + 1.0 ; inIndex = sampleIndex_data [ (
int32_T ) inIndex - 1 ] ; ixsba1g2i0 ( obj , tmp_j , twdlIndex , & wr_cast ,
& wi_cast ) ; X_cast = din_re [ ( int32_T ) inIndex ] ; Y_cast = din_im [ (
int32_T ) inIndex ] ; y_cast = din_re [ ( int32_T ) inIndex + 128 ] ; v_cast
= din_im [ ( int32_T ) inIndex + 128 ] ; wry = ( int64_T ) wr_cast * y_cast ;
cmplx_re = ( int64_T ) wi_cast * v_cast ; wrv = ( int64_T ) wr_cast * v_cast
; c = ( int64_T ) wi_cast * y_cast ; wry -= cmplx_re ; cmplx_re = ( wry &
4503599627370496ULL ) != 0ULL ? wry | - 4503599627370496LL : wry &
4503599627370495LL ; wry = wrv + c ; cmplx_im = ( wry & 4503599627370496ULL )
!= 0ULL ? wry | - 4503599627370496LL : wry & 4503599627370495LL ; x_cast = (
int64_T ) X_cast << 24 ; u_cast = ( int64_T ) Y_cast << 24 ; wry = x_cast +
cmplx_re ; wrv = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = u_cast + cmplx_im ; c =
( wry & 9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = x_cast - cmplx_re ; cmplx_re = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = u_cast - cmplx_im ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = wrv >> 1 ; wrv = ( wry & 9007199254740992ULL ) !=
0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry = cmplx_re
>> 1 ; cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = c >> 1 ; c = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = cmplx_im >> 1 ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; olfl4t3yzz ( obj , wrv , cmplx_re , c , cmplx_im , 8.0 )
; v_cast = ( int32_T ) ( wrv >> 24 ) ; X_cast = ( v_cast & 33554432U ) != 0U
? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = ( int32_T ) ( cmplx_re
>> 24 ) ; Y_cast = ( v_cast & 33554432U ) != 0U ? v_cast | - 33554432 :
v_cast & 33554431 ; v_cast = ( int32_T ) ( c >> 24 ) ; y_cast = ( v_cast &
33554432U ) != 0U ? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = (
int32_T ) ( cmplx_im >> 24 ) ; v_cast = ( v_cast & 33554432U ) != 0U ? v_cast
| - 33554432 : v_cast & 33554431 ; dout_re_stage [ ( int32_T ) outIndex - 1 ]
= X_cast ; dout_re_stage [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] = Y_cast ;
dout_im_stage [ ( int32_T ) outIndex - 1 ] = y_cast ; dout_im_stage [ (
int32_T ) ( outIndex + 1.0 ) - 1 ] = v_cast ; outIndex += 2.0 ; twdlIndex ++
; } memcpy ( & din_re [ 0 ] , & dout_re_stage [ 0 ] , sizeof ( int32_T ) <<
8U ) ; memcpy ( & din_im [ 0 ] , & dout_im_stage [ 0 ] , sizeof ( int32_T )
<< 8U ) ; obj_p = obj ; for ( i = 0 ; i < 8 ; i ++ ) { x [ i ] = obj_p ->
pOverflowStage [ i ] ; } outIndex = x [ 0 ] ; for ( i = 0 ; i < 7 ; i ++ ) {
xoffset = i ; outIndex += x [ xoffset + 1 ] ; } if ( ( outIndex > 0.0 ) &&
obj_p -> pOverflowFlag ) { obj_p -> pOverflowFlag = false ; } memset ( &
dout_re [ 0 ] , 0 , sizeof ( int32_T ) << 8U ) ; memset ( & dout_im [ 0 ] , 0
, sizeof ( int32_T ) << 8U ) ; for ( i = 0 ; i < 256 ; i ++ ) { outIndex = i
; memcpy ( & obj_e [ 0 ] , & obj -> pBitReverseTable_F [ 0 ] , sizeof (
real_T ) << 8 ) ; twdlIndex = ngkznh1nn4 ( outIndex , obj_e ) ; dout_re [ (
int32_T ) ( twdlIndex + 1.0 ) - 1 ] = din_re [ ( int32_T ) outIndex ] ;
dout_im [ ( int32_T ) ( twdlIndex + 1.0 ) - 1 ] = din_im [ ( int32_T )
outIndex ] ; } } static void kmrgv451we ( iqgjshdk3v * obj , uint32_T
varargin_1 , boolean_T varargin_2 , jvkwpsnmaz * localB ) { static const
int32_T offsets [ 4 ] = { 0 , 1 , 2 , 3 } ; __m128i tmp ; iqgjshdk3v * obj_e
; iqgjshdk3v * obj_p ; cint32_T y [ 256 ] ; real_T b ; real_T c ; int32_T
obj_i [ 256 ] ; int32_T obj_m [ 256 ] ; int32_T pOutBuffer_im [ 256 ] ;
int32_T pOutBuffer_re [ 256 ] ; int32_T end ; int32_T i ; int32_T
k_size_idx_1 ; int32_T loop_ub ; int32_T scalarLB ; int32_T trueCount ;
int32_T vectorUB ; uint32_T inSample_data ; boolean_T startOut ; boolean_T
value ; if ( obj -> pResetStart ) { obj_p = obj ; obj_p -> pResetStart =
false ; } obj_p = obj ; if ( obj_p -> pResetStart ) { kxq23lzego ( obj_p ) ;
} aj5xjnxfwl ( obj , varargin_2 ) ; obj_p = obj ; startOut = obj_p ->
pStartOutputPort [ 1 ] ; switch ( ( int32_T ) obj_p -> pState ) { case 0 :
obj_p -> pState = 0.0 ; obj_e = obj_p ; obj_e -> pRdyReg = true ; obj_p ->
pOutCnt = 0.0 ; obj_e = obj_p ; obj_e -> pWrEnb = false ; if ( varargin_2 ) {
obj_e = obj_p ; obj_e -> pWrEnb = true ; obj_p -> pSampleCnt ++ ; obj_p ->
pState = 1.0 ; } break ; case 1 : obj_p -> pState = 1.0 ; if ( varargin_2 ) {
if ( obj_p -> pSampleCnt == 255.0 ) { obj_e = obj_p ; obj_e -> pRdyReg =
false ; obj_e = obj_p ; obj_e -> pWrEnb = true ; obj_p -> pSampleCnt = 0.0 ;
obj_p -> pState = 2.0 ; } else { obj_p -> pSampleCnt ++ ; obj_e = obj_p ;
obj_e -> pWrEnb = true ; obj_p -> pRdyReg = true ; } } break ; case 2 : obj_p
-> pState = 3.0 ; obj_p -> pSampleCnt = 0.0 ; obj_e = obj_p ; obj_e -> pWrEnb
= false ; if ( varargin_2 ) { obj_e = obj_p ; obj_e -> pWrEnb = true ; obj_p
-> pSampleCnt ++ ; } break ; case 3 : obj_p -> pState = 3.0 ; obj_e = obj_p ;
obj_e -> pWrEnb = false ; if ( startOut ) { obj_p -> pOutCnt ++ ; obj_p ->
pState = 4.0 ; } break ; case 4 : if ( obj_p -> pOutCnt == 125.0 ) { obj_p ->
pOutCnt = 0.0 ; obj_e = obj_p ; obj_e -> pRdyReg = true ; obj_p -> pState =
0.0 ; } else { obj_p -> pOutCnt ++ ; } break ; default : obj_p -> pState =
0.0 ; obj_e = obj_p ; obj_e -> pRdyReg = true ; obj_p -> pSampleCnt = 0.0 ;
obj_p -> pOutCnt = 0.0 ; obj_p -> pWrEnb = false ; break ; } startOut = !
cwmh5crioz ( ) ; startOut = ( varargin_2 && startOut ) ; obj_p = obj ; value
= obj_p -> pWrEnb ; startOut = ( startOut && value ) ; trueCount = 0 ; if (
startOut ) { for ( i = 0 ; i < 1 ; i ++ ) { trueCount ++ ; } } loop_ub =
trueCount - 1 ; for ( end = 0 ; end <= loop_ub ; end ++ ) { inSample_data =
varargin_1 ; } startOut = ( trueCount == 0 ) ; if ( ! startOut ) { b = obj ->
pInBufferIndex ; c = ( obj -> pInBufferIndex + ( real_T ) trueCount ) - 1.0 ;
startOut = ( b > c ) ; if ( startOut ) { i = 0 ; } else { i = ( int32_T ) b -
1 ; } for ( end = 0 ; end < trueCount ; end ++ ) { obj -> pInBuffer_re [ i +
end ] = ( int32_T ) inSample_data ; } b = obj -> pInBufferIndex ; c = ( obj
-> pInBufferIndex + ( real_T ) trueCount ) - 1.0 ; startOut = ( b > c ) ; if
( startOut ) { i = 0 ; end = - 1 ; } else { i = ( int32_T ) b - 1 ; end = (
int32_T ) c - 1 ; } k_size_idx_1 = ( end - i ) + 1 ; loop_ub = end - i ;
scalarLB = ( loop_ub + 1 ) & - 4 ; vectorUB = scalarLB - 4 ; for ( end = 0 ;
end <= vectorUB ; end += 4 ) { tmp = _mm_add_epi32 ( _mm_set1_epi32 ( i ) ,
_mm_add_epi32 ( _mm_set1_epi32 ( end ) , _mm_loadu_si128 ( ( __m128i * ) &
offsets [ 0 ] ) ) ) ; _mm_storeu_si128 ( ( __m128i * ) & localB -> k_data [
end ] , tmp ) ; } for ( end = scalarLB ; end <= loop_ub ; end ++ ) { localB
-> k_data [ end ] = i + end ; } for ( end = 0 ; end < k_size_idx_1 ; end ++ )
{ obj -> pInBuffer_im [ localB -> k_data [ end ] ] = 0 ; } obj ->
pInBufferIndex += ( real_T ) trueCount ; if ( obj -> pInBufferIndex - 1.0 >=
256.0 ) { memcpy ( & obj_i [ 0 ] , & ( * ( int32_T ( * ) [ 256 ] ) & obj ->
pInBuffer_re [ 0 ] ) [ 0 ] , sizeof ( int32_T ) << 8 ) ; memcpy ( & obj_m [ 0
] , & ( * ( int32_T ( * ) [ 256 ] ) & obj -> pInBuffer_im [ 0 ] ) [ 0 ] ,
sizeof ( int32_T ) << 8 ) ; ad3chnj3y1 ( obj , obj_i , obj_m , pOutBuffer_re
, pOutBuffer_im ) ; for ( i = 0 ; i < 256 ; i ++ ) { y [ i ] . re =
pOutBuffer_re [ i ] ; y [ i ] . im = pOutBuffer_im [ i ] ; } obj_p = obj ;
for ( i = 0 ; i < 256 ; i ++ ) { b = ( real_T ) i + 1.0 ; obj_p ->
pOutBuffer_cmplx [ ( int32_T ) obj_p -> pWrOutBuffer_index - 1 ] = y [ (
int32_T ) b - 1 ] ; if ( obj_p -> pWrOutBuffer_index < 6144.0 ) { obj_p ->
pWrOutBuffer_index ++ ; } else { obj_p -> pWrOutBuffer_index = 1.0 ; obj_e =
obj_p ; value = ! obj_p -> pWrOutBuffer_roll ; obj_e -> pWrOutBuffer_roll =
value ; } } obj -> pInBufferIndex -= 256.0 ; for ( end = 0 ; end < 2816 ; end
++ ) { localB -> k_data [ end ] = obj -> pInBuffer_re [ ( end + 257 ) - 1 ] ;
} memset ( & localB -> k_data [ 2816 ] , 0 , sizeof ( int32_T ) << 8U ) ; for
( end = 0 ; end < 3072 ; end ++ ) { obj -> pInBuffer_re [ end ] = localB ->
k_data [ end ] ; } for ( end = 0 ; end < 2816 ; end ++ ) { localB -> k_data [
end ] = obj -> pInBuffer_im [ ( end + 257 ) - 1 ] ; } memset ( & localB ->
k_data [ 2816 ] , 0 , sizeof ( int32_T ) << 8U ) ; for ( end = 0 ; end < 3072
; end ++ ) { obj -> pInBuffer_im [ end ] = localB -> k_data [ end ] ; } } }
obj_p = obj ; obj_p -> pSimTime ++ ; } void j2f4wbcgvd ( ipackyuxas * localDW
) { iqgjshdk3v * obj ; obj = & localDW -> ptbhifuxoj ; kxq23lzego ( obj ) ; }
void lf3htxmgjl ( ipackyuxas * localDW ) { iqgjshdk3v * b_obj ; b_obj = &
localDW -> ptbhifuxoj ; b_obj -> isInitialized = 0 ; localDW -> jba4z1ves1 =
true ; bokqdhayetn ( & localDW -> ptbhifuxoj ) ; } void lyyly4yad2 (
jvkwpsnmaz * localB , ipackyuxas * localDW ) { iqgjshdk3v * obj ; iqgjshdk3v
* obj_e ; iqgjshdk3v * obj_p ; real_T dataInOutMem ; real_T obj_pCurSOF ;
int32_T dataOut_im ; int32_T dataOut_re ; boolean_T guard1 = false ;
boolean_T readyOut ; boolean_T validOut ; obj = & localDW -> ptbhifuxoj ;
obj_p = obj ; obj_pCurSOF = obj_p -> pCurSOF ; if ( obj_p -> pResetStart ) {
dataInOutMem = 0.0 ; } else { obj_e = obj_p ; if ( obj_e -> pRdOutBuffer_roll
== obj_e -> pWrOutBuffer_roll ) { dataInOutMem = obj_e -> pWrOutBuffer_index
- obj_e -> pRdOutBuffer_index ; } else { dataInOutMem = ( 6144.0 - obj_e ->
pRdOutBuffer_index ) + obj_e -> pWrOutBuffer_index ; } } if ( dataInOutMem >
0.0 ) { if ( obj_pCurSOF == 0.0 ) { obj_e = obj_p ; dataInOutMem = obj_e ->
pRdFifoAddr ; obj_pCurSOF = obj_e -> pSOFFifo [ ( int32_T ) dataInOutMem - 1
] ; } else { if ( obj_p -> pSimTime >= obj_pCurSOF + 256.0 ) { obj_e = obj_p
; dataInOutMem = obj_e -> pRdFifoAddr ; obj_pCurSOF = obj_e -> pSOFFifo [ (
int32_T ) dataInOutMem - 1 ] ; } } guard1 = false ; if ( obj_pCurSOF <= obj_p
-> pSimTime ) { obj_pCurSOF = ( obj_pCurSOF + 256.0 ) - 1.0 ; obj_pCurSOF =
muDoubleScalarCeil ( obj_pCurSOF ) ; if ( obj_p -> pSimTime <= obj_pCurSOF )
{ obj_pCurSOF = obj_p -> pRdOutBuffer_index ; dataOut_re = obj_p ->
pOutBuffer_cmplx [ ( int32_T ) obj_pCurSOF - 1 ] . re ; dataOut_im = obj_p ->
pOutBuffer_cmplx [ ( int32_T ) obj_pCurSOF - 1 ] . im ; validOut = true ; }
else { guard1 = true ; } } else { guard1 = true ; } if ( guard1 ) { validOut
= false ; dataOut_re = obj_p -> pLastData . re ; dataOut_im = obj_p ->
pLastData . im ; } } else { validOut = false ; dataOut_re = obj_p ->
pLastData . re ; dataOut_im = obj_p -> pLastData . im ; } readyOut = obj ->
pRdyReg ; localB -> pmfcpbeq12 . re = dataOut_re ; localB -> pmfcpbeq12 . im
= dataOut_im ; localB -> prus50oyah = validOut ; localB -> fv5wzqs0g4 =
readyOut ; } void heye0xiyga ( uint32_T fu1agnhoed , boolean_T a1bul1i5gj ,
jvkwpsnmaz * localB , ipackyuxas * localDW ) { iqgjshdk3v * obj ; iqgjshdk3v
* obj_e ; iqgjshdk3v * obj_p ; real_T dataInOutMem ; real_T obj_pCurSOF ;
int32_T data_im ; int32_T data_re ; boolean_T obj_i [ 256 ] ; boolean_T
obj_pRdOutBuffer_roll ; obj = & localDW -> ptbhifuxoj ; obj_p = obj ;
obj_pRdOutBuffer_roll = ( obj_p -> isInitialized == 1 ) ; if ( !
obj_pRdOutBuffer_roll ) { obj_p = obj ; bokqdhayetn ( obj_p ) ; kxq23lzego (
obj_p ) ; } obj_p = obj ; obj_pCurSOF = obj_p -> pCurSOF ; if ( obj_p ->
pResetStart ) { dataInOutMem = 0.0 ; } else { obj_e = obj_p ; if ( obj_e ->
pRdOutBuffer_roll == obj_e -> pWrOutBuffer_roll ) { dataInOutMem = obj_e ->
pWrOutBuffer_index - obj_e -> pRdOutBuffer_index ; } else { dataInOutMem = (
6144.0 - obj_e -> pRdOutBuffer_index ) + obj_e -> pWrOutBuffer_index ; } } if
( dataInOutMem > 0.0 ) { if ( obj_pCurSOF == 0.0 ) { obj_e = obj_p ;
dataInOutMem = obj_e -> pRdFifoAddr ; obj_pCurSOF = obj_e -> pSOFFifo [ (
int32_T ) dataInOutMem - 1 ] ; if ( obj_pCurSOF > 0.0 ) { if ( dataInOutMem
== 1024.0 ) { dataInOutMem = 1.0 ; } else { dataInOutMem ++ ; } obj_e ->
pRdFifoAddr = dataInOutMem ; } } else { if ( obj_p -> pSimTime >= obj_pCurSOF
+ 256.0 ) { obj_e = obj_p ; dataInOutMem = obj_e -> pRdFifoAddr ; obj_pCurSOF
= obj_e -> pSOFFifo [ ( int32_T ) dataInOutMem - 1 ] ; if ( obj_pCurSOF > 0.0
) { if ( dataInOutMem == 1024.0 ) { dataInOutMem = 1.0 ; } else {
dataInOutMem ++ ; } obj_e -> pRdFifoAddr = dataInOutMem ; } } } if (
obj_pCurSOF <= obj_p -> pSimTime ) { dataInOutMem = ( obj_pCurSOF + 256.0 ) -
1.0 ; dataInOutMem = muDoubleScalarCeil ( dataInOutMem ) ; if ( obj_p ->
pSimTime <= dataInOutMem ) { obj_e = obj_p ; dataInOutMem = obj_e ->
pRdOutBuffer_index ; obj_pRdOutBuffer_roll = obj_e -> pRdOutBuffer_roll ;
data_re = obj_e -> pOutBuffer_cmplx [ ( int32_T ) dataInOutMem - 1 ] . re ;
data_im = obj_e -> pOutBuffer_cmplx [ ( int32_T ) dataInOutMem - 1 ] . im ;
if ( dataInOutMem == 6144.0 ) { dataInOutMem = 1.0 ; obj_pRdOutBuffer_roll =
! obj_pRdOutBuffer_roll ; } else { dataInOutMem ++ ; } obj_e ->
pRdOutBuffer_index = dataInOutMem ; obj_e -> pRdOutBuffer_roll =
obj_pRdOutBuffer_roll ; obj_p -> pLastData . re = data_re ; obj_p ->
pLastData . im = data_im ; obj_pRdOutBuffer_roll = obj_p -> pStartOutputPort
[ 255 ] ; obj_i [ 0 ] = obj_pRdOutBuffer_roll ; for ( data_re = 0 ; data_re <
255 ; data_re ++ ) { obj_i [ data_re + 1 ] = obj_p -> pStartOutputPort [
data_re ] ; } for ( data_re = 0 ; data_re < 256 ; data_re ++ ) { obj_p ->
pStartOutputPort [ data_re ] = obj_i [ data_re ] ; } obj_pRdOutBuffer_roll =
obj_p -> pEndOutputPort [ 255 ] ; obj_i [ 0 ] = obj_pRdOutBuffer_roll ; for (
data_re = 0 ; data_re < 255 ; data_re ++ ) { obj_i [ data_re + 1 ] = obj_p ->
pEndOutputPort [ data_re ] ; } for ( data_re = 0 ; data_re < 256 ; data_re ++
) { obj_p -> pEndOutputPort [ data_re ] = obj_i [ data_re ] ; } } } } obj_p
-> pCurSOF = obj_pCurSOF ; kmrgv451we ( obj , fu1agnhoed , a1bul1i5gj ,
localB ) ; } void feadimwoyv ( lfyhdt5va3 * localB , gjtsy00uku * localP ) {
localB -> emcuycy0pw = localP -> _Y0 ; } void otw02eo3ue ( boolean_T
lqc0on2rff , int32_T jnsjurfvf5 , lfyhdt5va3 * localB , gsfhjkq4hi * localDW
, o3mzjps5fh * localZCE ) { boolean_T zcEvent ; zcEvent = ( ( ! lqc0on2rff )
&& ( localZCE -> euv3jqlvh2 != ZERO_ZCSIG ) ) ; if ( zcEvent ) { localB ->
emcuycy0pw = jnsjurfvf5 ; localDW -> gyucjoxwjz = 4 ; } localZCE ->
euv3jqlvh2 = lqc0on2rff ; } void cjjohoq4av ( avj4altxjx * localB ,
oynqt3hp52 * localP ) { localB -> pp2wmkmgqd = localP -> _Y0 ; } void
n014eikjcj ( boolean_T lkeikevwks , uint32_T gxm3se2pve , avj4altxjx * localB
, hb15msapyk * localDW , evomlss35w * localZCE ) { boolean_T zcEvent ;
zcEvent = ( ( ! lkeikevwks ) && ( localZCE -> kza1wyt0fg != ZERO_ZCSIG ) ) ;
if ( zcEvent ) { localB -> pp2wmkmgqd = gxm3se2pve ; localDW -> c1gzfpfi1s =
4 ; } localZCE -> kza1wyt0fg = lkeikevwks ; } void iistrscvzn ( kfcqi4nahv *
localB , gykc2zimmf * localP ) { localB -> cxqjp3z5g0 = localP -> _Y0 ; }
void jgkqqwc2m5 ( boolean_T g0cnwbk4ir , int32_T l1dkzv4ouj , kfcqi4nahv *
localB , f20m3ibsya * localDW , mnrtw12u1h * localZCE ) { boolean_T zcEvent ;
zcEvent = ( ( ! g0cnwbk4ir ) && ( localZCE -> dnaiq0flrd != ZERO_ZCSIG ) ) ;
if ( zcEvent ) { localB -> cxqjp3z5g0 = l1dkzv4ouj ; localDW -> arvghscytc =
4 ; } localZCE -> dnaiq0flrd = g0cnwbk4ir ; } void i1dgnkmamr ( k5z5fbyjsj *
localB , nyewzoecvi * localP ) { localB -> djc2e4rqrh = localP -> _Y0 ; }
void nirnnu0kb5 ( boolean_T no2zkbgqww , uint32_T npczzug2e3 , k5z5fbyjsj *
localB , piwynay3gv * localDW , jacsthzjcr * localZCE ) { boolean_T zcEvent ;
zcEvent = ( ( ! no2zkbgqww ) && ( localZCE -> l3egl1yyin != ZERO_ZCSIG ) ) ;
if ( zcEvent ) { localB -> djc2e4rqrh = npczzug2e3 ; localDW -> pobr4kqks2 =
4 ; } localZCE -> l3egl1yyin = no2zkbgqww ; } void dnxy44omtu ( biek11azsp *
localB , jbke1kw2fs * localP ) { localB -> owi3gr0gl5 = localP -> _Y0 ; }
void aqmj5gejll ( boolean_T pgldjvasg2 , int32_T fjvosblyya , biek11azsp *
localB , mnzjnnyijt * localDW , gwub40ffk2 * localZCE ) { boolean_T zcEvent ;
zcEvent = ( ( ! pgldjvasg2 ) && ( localZCE -> lbvtvvs2as != ZERO_ZCSIG ) ) ;
if ( zcEvent ) { localB -> owi3gr0gl5 = fjvosblyya ; localDW -> loskfbob5b =
4 ; } localZCE -> lbvtvvs2as = pgldjvasg2 ; } static void f3f13aoaly (
jwzaobjvlz * obj ) { jwzaobjvlz * obj_e ; jwzaobjvlz * obj_p ; int32_T i ;
obj -> isInitialized = 1 ; obj_p = obj ; obj_e = obj_p ; for ( i = 0 ; i < 14
; i ++ ) { obj_e -> xPipeline [ i ] = 0 ; } for ( i = 0 ; i < 14 ; i ++ ) {
obj_e -> yPipeline [ i ] = 0 ; } obj_e -> pPostScale = 0 ; obj_e ->
pXAbsolute = 0 ; obj_e -> pYAbsolute = 0 ; for ( i = 0 ; i < 14 ; i ++ ) {
obj_e -> zPipeline [ i ] = 0 ; } obj_e -> pQuadrantOut = 0 ; obj_e ->
pPipeout = 0 ; for ( i = 0 ; i < 14 ; i ++ ) { obj_e -> pXYReversed [ i ] =
0U ; } for ( i = 0 ; i < 17 ; i ++ ) { obj_e -> validPipeline [ i ] = false ;
} for ( i = 0 ; i < 14 ; i ++ ) { obj_e -> pQuadrantIn [ i ] = 0U ; } obj_p
-> realInReg [ 0 ] = 0 ; obj_p -> realInReg [ 1 ] = 0 ; obj_p -> realInReg [
2 ] = 0 ; obj_p -> imagInReg [ 0 ] = 0 ; obj_p -> imagInReg [ 1 ] = 0 ; obj_p
-> imagInReg [ 2 ] = 0 ; } static void f3f13aoalyr ( iqgjshdk3v * obj ) {
static const uint8_T tmp_p [ 256 ] = { 0U , 128U , 64U , 192U , 32U , 160U ,
96U , 224U , 16U , 144U , 80U , 208U , 48U , 176U , 112U , 240U , 8U , 136U ,
72U , 200U , 40U , 168U , 104U , 232U , 24U , 152U , 88U , 216U , 56U , 184U
, 120U , 248U , 4U , 132U , 68U , 196U , 36U , 164U , 100U , 228U , 20U ,
148U , 84U , 212U , 52U , 180U , 116U , 244U , 12U , 140U , 76U , 204U , 44U
, 172U , 108U , 236U , 28U , 156U , 92U , 220U , 60U , 188U , 124U , 252U ,
2U , 130U , 66U , 194U , 34U , 162U , 98U , 226U , 18U , 146U , 82U , 210U ,
50U , 178U , 114U , 242U , 10U , 138U , 74U , 202U , 42U , 170U , 106U , 234U
, 26U , 154U , 90U , 218U , 58U , 186U , 122U , 250U , 6U , 134U , 70U , 198U
, 38U , 166U , 102U , 230U , 22U , 150U , 86U , 214U , 54U , 182U , 118U ,
246U , 14U , 142U , 78U , 206U , 46U , 174U , 110U , 238U , 30U , 158U , 94U
, 222U , 62U , 190U , 126U , 254U , 1U , 129U , 65U , 193U , 33U , 161U , 97U
, 225U , 17U , 145U , 81U , 209U , 49U , 177U , 113U , 241U , 9U , 137U , 73U
, 201U , 41U , 169U , 105U , 233U , 25U , 153U , 89U , 217U , 57U , 185U ,
121U , 249U , 5U , 133U , 69U , 197U , 37U , 165U , 101U , 229U , 21U , 149U
, 85U , 213U , 53U , 181U , 117U , 245U , 13U , 141U , 77U , 205U , 45U ,
173U , 109U , 237U , 29U , 157U , 93U , 221U , 61U , 189U , 125U , 253U , 3U
, 131U , 67U , 195U , 35U , 163U , 99U , 227U , 19U , 147U , 83U , 211U , 51U
, 179U , 115U , 243U , 11U , 139U , 75U , 203U , 43U , 171U , 107U , 235U ,
27U , 155U , 91U , 219U , 59U , 187U , 123U , 251U , 7U , 135U , 71U , 199U ,
39U , 167U , 103U , 231U , 23U , 151U , 87U , 215U , 55U , 183U , 119U , 247U
, 15U , 143U , 79U , 207U , 47U , 175U , 111U , 239U , 31U , 159U , 95U ,
223U , 63U , 191U , 127U , MAX_uint8_T } ; static const uint8_T tmp [ 128 ] =
{ 0U , 64U , 32U , 96U , 16U , 80U , 48U , 112U , 8U , 72U , 40U , 104U , 24U
, 88U , 56U , 120U , 4U , 68U , 36U , 100U , 20U , 84U , 52U , 116U , 12U ,
76U , 44U , 108U , 28U , 92U , 60U , 124U , 2U , 66U , 34U , 98U , 18U , 82U
, 50U , 114U , 10U , 74U , 42U , 106U , 26U , 90U , 58U , 122U , 6U , 70U ,
38U , 102U , 22U , 86U , 54U , 118U , 14U , 78U , 46U , 110U , 30U , 94U ,
62U , 126U , 1U , 65U , 33U , 97U , 17U , 81U , 49U , 113U , 9U , 73U , 41U ,
105U , 25U , 89U , 57U , 121U , 5U , 69U , 37U , 101U , 21U , 85U , 53U ,
117U , 13U , 77U , 45U , 109U , 29U , 93U , 61U , 125U , 3U , 67U , 35U , 99U
, 19U , 83U , 51U , 115U , 11U , 75U , 43U , 107U , 27U , 91U , 59U , 123U ,
7U , 71U , 39U , 103U , 23U , 87U , 55U , 119U , 15U , 79U , 47U , 111U , 31U
, 95U , 63U , 127U } ; iqgjshdk3v * obj_e ; iqgjshdk3v * obj_p ; int32_T i ;
const uint8_T * b ; const uint8_T * c ; obj -> isInitialized = 1 ; obj_p =
obj ; obj_e = obj_p ; obj_e -> pOverflowFlag = true ; for ( i = 0 ; i < 8 ; i
++ ) { obj_p -> pOverflowStage [ i ] = 0.0 ; } obj_e = obj_p ; obj_e ->
pResetStart = false ; for ( i = 0 ; i < 3072 ; i ++ ) { obj_p ->
pInBuffer_valid [ i ] = 0.0 ; } for ( i = 0 ; i < 3072 ; i ++ ) { obj_p ->
pInBuffer_re [ i ] = 0 ; } for ( i = 0 ; i < 3072 ; i ++ ) { obj_p ->
pInBuffer_im [ i ] = 0 ; } for ( i = 0 ; i < 6144 ; i ++ ) { obj_p ->
pOutBuffer_cmplx [ i ] . re = 0 ; obj_p -> pOutBuffer_cmplx [ i ] . im = 0 ;
} obj_p -> pLastData . re = 0 ; obj_p -> pLastData . im = 0 ; obj_p ->
pInitialValue . re = 0 ; obj_p -> pInitialValue . im = 0 ; b = & tmp [ 0 ] ;
c = & tmp_p [ 0 ] ; for ( i = 0 ; i < 128 ; i ++ ) { obj_p ->
pBitReverseTable_H [ i ] = b [ i ] ; } for ( i = 0 ; i < 256 ; i ++ ) { obj_p
-> pBitReverseTable_F [ i ] = c [ i ] ; } obj_p -> pStartOutputPort [ 0 ] =
true ; for ( i = 0 ; i < 255 ; i ++ ) { obj_p -> pStartOutputPort [ i + 1 ] =
false ; } obj_p -> pEndOutputPort [ 0 ] = false ; obj_p -> pEndOutputPort [ 1
] = true ; for ( i = 0 ; i < 254 ; i ++ ) { obj_p -> pEndOutputPort [ i + 2 ]
= false ; } obj_p -> pSimTime = 1.0 ; obj_p -> pCurSOF = 0.0 ; obj_p ->
pWrFifoAddr = 1.0 ; obj_p -> pRdFifoAddr = 1.0 ; obj_p -> pState = 0.0 ;
obj_p -> pSampleCnt = 0.0 ; obj_p -> pOutCnt = 0.0 ; obj_e = obj_p ; obj_e ->
pWrEnb = false ; obj_p -> pRdyReg = true ; } void RandSrcInitState_GZ ( const
uint32_T seed [ ] , uint32_T state [ ] , int32_T nChans ) { int32_T i ; for (
i = 0 ; i < nChans ; i ++ ) { state [ i << 1 ] = 362436069U ; state [ ( i <<
1 ) + 1 ] = seed [ i ] == 0U ? 521288629U : seed [ i ] ; } } void
RandSrcInitState_U_64 ( const uint32_T seed [ ] , real_T state [ ] , int32_T
nChans ) { real_T d ; int32_T i ; int32_T k ; int32_T n ; uint32_T j ; for (
i = 0 ; i < nChans ; i ++ ) { j = seed [ i ] != 0U ? seed [ i ] : 2147483648U
; state [ 35 * i + 34 ] = j ; for ( k = 0 ; k < 32 ; k ++ ) { d = 0.0 ; for (
n = 0 ; n < 53 ; n ++ ) { j ^= j << 13 ; j ^= j >> 17 ; j ^= j << 5 ; d = (
real_T ) ( ( int32_T ) ( j >> 19 ) & 1 ) + ( d + d ) ; } state [ 35 * i + k ]
= ldexp ( d , - 53 ) ; } state [ 35 * i + 32 ] = 0.0 ; state [ 35 * i + 33 ]
= 0.0 ; } } static void ovh3t030ey ( jwzaobjvlz * obj ) { int32_T i ; for ( i
= 0 ; i < 14 ; i ++ ) { obj -> xPipeline [ i ] = 0 ; obj -> yPipeline [ i ] =
0 ; obj -> zPipeline [ i ] = 0 ; } for ( i = 0 ; i < 17 ; i ++ ) { obj ->
validPipeline [ i ] = false ; } obj -> pPostScale = 0 ; for ( i = 0 ; i < 14
; i ++ ) { obj -> pQuadrantIn [ i ] = 0U ; obj -> pXYReversed [ i ] = 0U ; }
obj -> pQuadrantOut = 0 ; obj -> pPipeout = 0 ; obj -> pXAbsolute = 0 ; obj
-> pYAbsolute = 0 ; obj -> realInReg [ 0 ] = 0 ; obj -> imagInReg [ 0 ] = 0 ;
obj -> realInReg [ 1 ] = 0 ; obj -> imagInReg [ 1 ] = 0 ; obj -> realInReg [
2 ] = 0 ; obj -> imagInReg [ 2 ] = 0 ; } static void eqfgxr42k2 ( iqgjshdk3v
* obj ) { iqgjshdk3v * obj_p ; int32_T i ; obj -> pInBufferIndex = 1.0 ; for
( i = 0 ; i < 3072 ; i ++ ) { obj -> pInBuffer_re [ i ] = 0 ; } for ( i = 0 ;
i < 3072 ; i ++ ) { obj -> pInBuffer_im [ i ] = 0 ; } for ( i = 0 ; i < 3072
; i ++ ) { obj -> pInBuffer_valid [ i ] = 0.0 ; } for ( i = 0 ; i < 6144 ; i
++ ) { obj -> pOutBuffer_cmplx [ i ] . re = 0 ; obj -> pOutBuffer_cmplx [ i ]
. im = 0 ; } obj -> pWrOutBuffer_index = 1.0 ; obj -> pRdOutBuffer_index =
1.0 ; obj_p = obj ; obj_p -> pWrOutBuffer_roll = false ; obj_p = obj ; obj_p
-> pRdOutBuffer_roll = false ; obj -> pStartOutputPort [ 0 ] = true ; for ( i
= 0 ; i < 255 ; i ++ ) { obj -> pStartOutputPort [ i + 1 ] = false ; } obj ->
pEndOutputPort [ 0 ] = false ; obj -> pEndOutputPort [ 1 ] = true ; for ( i =
0 ; i < 254 ; i ++ ) { obj -> pEndOutputPort [ i + 2 ] = false ; } for ( i =
0 ; i < 8 ; i ++ ) { obj -> pOverflowStage [ i ] = 0.0 ; } obj_p = obj ;
obj_p -> pOverflowFlag = true ; obj -> pSimTime = 1.0 ; obj -> pCurSOF = 0.0
; for ( i = 0 ; i < 1024 ; i ++ ) { obj -> pSOFFifo [ i ] = 0.0 ; } obj ->
pWrFifoAddr = 1.0 ; obj -> pRdFifoAddr = 1.0 ; obj -> pLastData = obj ->
pInitialValue ; obj -> pState = 0.0 ; obj -> pSampleCnt = 0.0 ; obj ->
pOutCnt = 0.0 ; obj_p = obj ; obj_p -> pWrEnb = false ; obj_p = obj ; obj_p
-> pRdyReg = true ; } real_T rt_sqrt_Us103En38_Yd_Id_f_s_snf ( const
int128m_T u ) { static const int128m_T tmp = { { 0ULL , 0ULL } } ; real_T y ;
if ( sMultiWordEq ( & u . chunks [ 0U ] , & tmp . chunks [ 0U ] , 2 ) ) { y =
0.0 ; } else { y = muDoubleScalarSqrt ( sMultiWord2Double ( & u . chunks [ 0U
] , 2 , 0 ) * 3.637978807091713E-12 ) ; } return y ; } int32_T
rt_atan2_Us31En19_Ys31En28_f_pw_cordic11 ( int32_T u0 , int32_T u1 ) { static
const int32_T atan2_cordicLUT_n11_s31En28 [ 11 ] = { 210828714 , 124459457 ,
65760959 , 33381290 , 16755422 , 8385879 , 4193963 , 2097109 , 1048571 ,
524287 , 262144 } ; int64_T c_e ; int64_T c_p ; int64_T xAcc ; int64_T yAcc ;
int32_T u3 [ 11 ] ; int32_T b0 ; int32_T u3_p ; int32_T y ; int16_T numIters
; boolean_T c ; boolean_T x_quad_adjust ; boolean_T y_nonzero ; boolean_T
y_quad_adjust ; for ( b0 = 0 ; b0 < 11 ; b0 ++ ) { u3_p =
atan2_cordicLUT_n11_s31En28 [ b0 ] ; u3 [ b0 ] = u3_p ; } c = ( u0 < 0 ) ; if
( c ) { xAcc = u0 ; c_e = - xAcc ; yAcc = ( c_e & 4294967296ULL ) != 0ULL ?
c_e | - 4294967296LL : c_e & 4294967295LL ; y_quad_adjust = true ; y_nonzero
= true ; } else { yAcc = u0 ; y_quad_adjust = false ; y_nonzero = ( u0 > 0 )
; } c = ( u1 < 0 ) ; if ( c ) { xAcc = u1 ; c_e = - xAcc ; xAcc = ( c_e &
4294967296ULL ) != 0ULL ? c_e | - 4294967296LL : c_e & 4294967295LL ;
x_quad_adjust = true ; } else { xAcc = u1 ; x_quad_adjust = false ; } y = 0 ;
c_p = xAcc ; c_e = yAcc ; for ( u3_p = 0 ; u3_p < 11 ; u3_p ++ ) { numIters =
( int16_T ) ( u3_p + 1 ) ; c = ( yAcc < 0LL ) ; if ( c ) { c_e = xAcc - c_e ;
xAcc = ( c_e & 4294967296ULL ) != 0ULL ? c_e | - 4294967296LL : c_e &
4294967295LL ; c_e = yAcc + c_p ; yAcc = ( c_e & 4294967296ULL ) != 0ULL ?
c_e | - 4294967296LL : c_e & 4294967295LL ; b0 = u3 [ numIters - 1 ] ; b0 = y
- b0 ; y = ( b0 & 1073741824U ) != 0U ? b0 | - 1073741824 : b0 & 1073741823 ;
} else { c_e += xAcc ; xAcc = ( c_e & 4294967296ULL ) != 0ULL ? c_e | -
4294967296LL : c_e & 4294967295LL ; c_e = yAcc - c_p ; yAcc = ( c_e &
4294967296ULL ) != 0ULL ? c_e | - 4294967296LL : c_e & 4294967295LL ; b0 = u3
[ numIters - 1 ] ; b0 += y ; y = ( b0 & 1073741824U ) != 0U ? b0 | -
1073741824 : b0 & 1073741823 ; } c_e = xAcc >> numIters ; c_p = ( c_e &
4294967296ULL ) != 0ULL ? c_e | - 4294967296LL : c_e & 4294967295LL ; c_e =
yAcc >> numIters ; c_e = ( c_e & 4294967296ULL ) != 0ULL ? c_e | -
4294967296LL : c_e & 4294967295LL ; } if ( y_nonzero ) { if ( x_quad_adjust )
{ if ( y_quad_adjust ) { y -= 843314857 ; if ( y < - 1073741824 ) { y = -
1073741824 ; } } else { y = 843314857 - y ; if ( y > 1073741823 ) { y =
1073741823 ; } } } else { if ( y_quad_adjust ) { y = - y ; if ( y >
1073741823 ) { y = 1073741823 ; } } } } else if ( x_quad_adjust ) { y =
843314857 ; } else { y = 0 ; } return y ; } void RandSrc_GZ_D ( real_T y [ ]
, const real_T mean [ ] , int32_T meanLen , const real_T xstd [ ] , int32_T
xstdLen , uint32_T state [ ] , int32_T nChans , int32_T nSamps ) { static
const real_T vt [ 65 ] = { 0.340945 , 0.4573146 , 0.5397793 , 0.6062427 ,
0.6631691 , 0.7136975 , 0.7596125 , 0.8020356 , 0.8417227 , 0.8792102 ,
0.9148948 , 0.9490791 , 0.9820005 , 1.0138492 , 1.044781 , 1.0749254 ,
1.1043917 , 1.1332738 , 1.161653 , 1.189601 , 1.2171815 , 1.2444516 ,
1.2714635 , 1.298265 , 1.3249008 , 1.3514125 , 1.3778399 , 1.4042211 ,
1.4305929 , 1.4569915 , 1.4834527 , 1.5100122 , 1.5367061 , 1.5635712 ,
1.5906454 , 1.617968 , 1.6455802 , 1.6735255 , 1.7018503 , 1.7306045 ,
1.7598422 , 1.7896223 , 1.8200099 , 1.851077 , 1.8829044 , 1.9155831 ,
1.9492166 , 1.9839239 , 2.0198431 , 2.0571356 , 2.095993 , 2.136645 ,
2.1793713 , 2.2245175 , 2.2725186 , 2.3239338 , 2.3795008 , 2.4402218 ,
2.5075117 , 2.5834658 , 2.6713916 , 2.7769942 , 2.7769942 , 2.7769942 ,
2.7769942 } ; real_T mean_idx_0 ; real_T r ; real_T s ; real_T std ; real_T x
; real_T y_p ; int32_T chan ; int32_T i ; int32_T j ; int32_T samp ; uint32_T
icng ; uint32_T jsr ; for ( chan = 0 ; chan < nChans ; chan ++ ) { std = xstd
[ xstdLen > 1 ? chan : 0 ] ; icng = state [ chan << 1 ] ; jsr = state [ (
chan << 1 ) + 1 ] ; mean_idx_0 = mean [ meanLen > 1 ? chan : 0 ] ; for ( samp
= 0 ; samp < nSamps ; samp ++ ) { icng = 69069U * icng + 1234567U ; jsr ^=
jsr << 13 ; jsr ^= jsr >> 17 ; jsr ^= jsr << 5 ; i = ( int32_T ) ( icng + jsr
) ; j = ( i & 63 ) + 1 ; r = ( real_T ) i * 4.6566128730773926E-10 * vt [ j ]
; if ( ! ( muDoubleScalarAbs ( r ) <= vt [ j - 1 ] ) ) { x = (
muDoubleScalarAbs ( r ) - vt [ j - 1 ] ) / ( vt [ j ] - vt [ j - 1 ] ) ; icng
= 69069U * icng + 1234567U ; jsr ^= jsr << 13 ; jsr ^= jsr >> 17 ; jsr ^= jsr
<< 5 ; i = ( int32_T ) ( icng + jsr ) ; y_p = ( real_T ) i *
2.328306436538696E-10 + 0.5 ; s = x + y_p ; if ( s > 1.301198 ) { r = r < 0.0
? 0.4878992 * x - 0.4878992 : 0.4878992 - 0.4878992 * x ; } else { if ( ! ( s
<= 0.9689279 ) ) { x = 0.4878992 - 0.4878992 * x ; if ( y_p > 12.67706 -
muDoubleScalarExp ( - 0.5 * x * x ) * 12.37586 ) { r = r < 0.0 ? - x : x ; }
else { if ( ! ( muDoubleScalarExp ( - 0.5 * vt [ j ] * vt [ j ] ) + y_p *
0.01958303 / vt [ j ] <= muDoubleScalarExp ( - 0.5 * r * r ) ) ) { do { icng
= 69069U * icng + 1234567U ; jsr ^= jsr << 13 ; jsr ^= jsr >> 17 ; jsr ^= jsr
<< 5 ; i = ( int32_T ) ( icng + jsr ) ; y_p = ( real_T ) i *
2.328306436538696E-10 + 0.5 ; x = muDoubleScalarLog ( y_p ) / 2.776994 ; icng
= 69069U * icng + 1234567U ; jsr ^= jsr << 13 ; jsr ^= jsr >> 17 ; jsr ^= jsr
<< 5 ; i = ( int32_T ) ( icng + jsr ) ; y_p = ( real_T ) i *
2.328306436538696E-10 + 0.5 ; } while ( - 2.0 * muDoubleScalarLog ( y_p ) <=
x * x ) ; r = r < 0.0 ? x - 2.776994 : 2.776994 - x ; } } } } } y [ chan *
nSamps + samp ] = std * r + mean_idx_0 ; } state [ chan << 1 ] = icng ; state
[ ( chan << 1 ) + 1 ] = jsr ; } } void RandSrc_U_D ( real_T y [ ] , const
real_T minVec [ ] , int32_T minLen , const real_T maxVec [ ] , int32_T maxLen
, real_T state [ ] , int32_T nChans , int32_T nSamps ) { real_T d ; real_T
max ; real_T min ; int32_T ii [ 2 ] ; int32_T chan ; int32_T i ; int32_T one
; int32_T samps ; uint32_T j ; int8_T * onePtr ; one = 1 ; onePtr = ( int8_T
* ) & one ; one = ( onePtr [ 0U ] == 0 ) ; for ( chan = 0 ; chan < nChans ;
chan ++ ) { min = minVec [ minLen > 1 ? chan : 0 ] ; max = maxVec [ maxLen >
1 ? chan : 0 ] ; max -= min ; i = ( int32_T ) ( ( uint32_T ) state [ chan *
35 + 33 ] & 31U ) ; j = ( uint32_T ) state [ chan * 35 + 34 ] ; for ( samps =
0 ; samps < nSamps ; samps ++ ) { d = state [ ( ( i + 20 ) & 31 ) + chan * 35
] ; d -= state [ ( ( i + 5 ) & 31 ) + chan * 35 ] ; d -= state [ chan * 35 +
32 ] ; if ( d >= 0.0 ) { state [ chan * 35 + 32 ] = 0.0 ; } else { d ++ ;
state [ chan * 35 + 32 ] = 1.1102230246251565E-16 ; } state [ chan * 35 + i ]
= d ; i = ( i + 1 ) & 31 ; memcpy ( & ii [ 0U ] , & d , sizeof ( real_T ) ) ;
ii [ one ] ^= j ; j ^= j << 13 ; j ^= j >> 17 ; j ^= j << 5 ; ii [ one ^ 1 ]
^= j & 1048575U ; memcpy ( & d , & ii [ 0U ] , sizeof ( real_T ) ) ; y [ chan
* nSamps + samps ] = max * d + min ; } state [ chan * 35 + 33 ] = i ; state [
chan * 35 + 34 ] = j ; } } static boolean_T nkknxdq4xa ( void ) { return
false ; } static void fwo3b3wody ( iqgjshdk3v * obj , boolean_T validIn ) {
iqgjshdk3v * obj_p ; real_T curAddr ; real_T vldSamples ; int32_T i ; int32_T
partialTrueCount ; int32_T trueCount ; int8_T b_index_data [ 256 ] ;
boolean_T resetOut ; resetOut = nkknxdq4xa ( ) ; resetOut = ! resetOut ;
trueCount = 0 ; if ( validIn && resetOut ) { for ( i = 0 ; i < 1 ; i ++ ) {
trueCount ++ ; } } vldSamples = trueCount ; if ( ( obj -> pInBufferIndex +
vldSamples ) - 1.0 >= 256.0 ) { memset ( & b_index_data [ 0 ] , 0 , sizeof (
int8_T ) << 8U ) ; if ( validIn ) { b_index_data [ 0 ] = 1 ; } trueCount = 0
; for ( i = 0 ; i < 256 ; i ++ ) { if ( b_index_data [ i ] > 0 ) { trueCount
++ ; } } partialTrueCount = 0 ; for ( i = 0 ; i < 256 ; i ++ ) { if (
b_index_data [ i ] > 0 ) { b_index_data [ partialTrueCount ] = b_index_data [
i ] ; partialTrueCount ++ ; } } vldSamples = ( 256.0 - obj -> pInBufferIndex
) + 1.0 ; if ( ( vldSamples > 0.0 ) && ( trueCount != 0 ) ) { vldSamples = (
real_T ) b_index_data [ ( int32_T ) vldSamples - 1 ] + obj -> pSimTime ; }
else { vldSamples = obj -> pSimTime ; } vldSamples = ( vldSamples + 1295.0 )
- 256.0 ; obj_p = obj ; curAddr = obj_p -> pWrFifoAddr ; obj_p -> pSOFFifo [
( int32_T ) curAddr - 1 ] = vldSamples ; if ( curAddr == 1024.0 ) { curAddr =
1.0 ; } else { curAddr ++ ; } obj_p -> pWrFifoAddr = curAddr ; } } static
void fyddyxd02u ( iqgjshdk3v * obj , int64_T X_e , int64_T Y , int64_T U ,
int64_T V , real_T stage ) { boolean_T c ; c = ( X_e < - 562949953421312LL )
; if ( c ) { obj -> pOverflowStage [ ( int32_T ) stage - 1 ] = 1.0 ; } else {
c = ( X_e > 562949936644096LL ) ; if ( c ) { obj -> pOverflowStage [ (
int32_T ) stage - 1 ] = 1.0 ; } else { c = ( Y < - 562949953421312LL ) ; if (
c ) { obj -> pOverflowStage [ ( int32_T ) stage - 1 ] = 1.0 ; } else { c = (
Y > 562949936644096LL ) ; if ( c ) { obj -> pOverflowStage [ ( int32_T )
stage - 1 ] = 1.0 ; } else { c = ( U < - 562949953421312LL ) ; if ( c ) { obj
-> pOverflowStage [ ( int32_T ) stage - 1 ] = 1.0 ; } else { c = ( U >
562949936644096LL ) ; if ( c ) { obj -> pOverflowStage [ ( int32_T ) stage -
1 ] = 1.0 ; } else { c = ( V < - 562949953421312LL ) ; if ( c ) { obj ->
pOverflowStage [ ( int32_T ) stage - 1 ] = 1.0 ; } else { c = ( V >
562949936644096LL ) ; if ( c ) { obj -> pOverflowStage [ ( int32_T ) stage -
1 ] = 1.0 ; } } } } } } } } } static void bhx1u2umch ( real_T
sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) { __m128d tmp ;
real_T b_sampleIndex_data [ 128 ] ; real_T BaseSampleIndex [ 64 ] ; int32_T i
; for ( i = 0 ; i < 32 ; i ++ ) { BaseSampleIndex [ i ] = 2.0 * ( real_T ) i
; BaseSampleIndex [ i + 32 ] = 2.0 * ( real_T ) i + 1.0 ; } for ( i = 0 ; i
<= 62 ; i += 2 ) { tmp = _mm_loadu_pd ( & BaseSampleIndex [ i ] ) ;
_mm_storeu_pd ( & b_sampleIndex_data [ i ] , tmp ) ; tmp = _mm_add_pd ( tmp ,
_mm_set1_pd ( 128.0 ) ) ; _mm_storeu_pd ( & b_sampleIndex_data [ i + 64 ] ,
tmp ) ; } sampleIndex_size [ 0 ] = 1 ; sampleIndex_size [ 1 ] = 128 ; memcpy
( & sampleIndex_data [ 0 ] , & b_sampleIndex_data [ 0 ] , sizeof ( real_T )
<< 7U ) ; } static void apwjsepibm ( const iqgjshdk3v * obj , const cint32_T
twiddleTable [ 2 ] , real_T twiddleIndex , int32_T * wr , int32_T * wi ) {
real_T bitReverseTable [ 128 ] ; real_T data ; int32_T eint ; memcpy ( &
bitReverseTable [ 0 ] , & obj -> pBitReverseTable_H [ 0 ] , sizeof ( real_T )
<< 7U ) ; frexp ( 256.0 , & eint ) ; data = bitReverseTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] / 2.0 ; data = trunc ( data ) ; twiddleIndex =
muDoubleScalarRem ( data , 2.0 ) ; * wr = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . re ; * wi = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . im ; } static void bhx1u2umchr ( real_T
sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) { real_T
b_sampleIndex_data [ 160 ] ; real_T BaseSampleIndex [ 32 ] ; int32_T b_i ;
int32_T b_sampleIndex_size_idx_1 ; int32_T i ; int32_T loop_ub ; int32_T
sampleIndex_size_p ; for ( loop_ub = 0 ; loop_ub < 16 ; loop_ub ++ ) {
BaseSampleIndex [ loop_ub ] = 2.0 * ( real_T ) loop_ub ; BaseSampleIndex [
loop_ub + 16 ] = 2.0 * ( real_T ) loop_ub + 1.0 ; } sampleIndex_size [ 1 ] =
32 ; memcpy ( & sampleIndex_data [ 0 ] , & BaseSampleIndex [ 0 ] , sizeof (
real_T ) << 5U ) ; sampleIndex_size [ 0 ] = 1 ; for ( b_i = 0 ; b_i < 3 ; b_i
++ ) { sampleIndex_size_p = sampleIndex_size [ 1 ] ; i = b_i + 1 ;
b_sampleIndex_size_idx_1 = sampleIndex_size_p + 32 ; i <<= 6 ; if ( 0 <=
sampleIndex_size_p - 1 ) { memcpy ( & b_sampleIndex_data [ 0 ] , &
sampleIndex_data [ 0 ] , sampleIndex_size_p * sizeof ( real_T ) ) ; } for (
loop_ub = 0 ; loop_ub < 32 ; loop_ub ++ ) { b_sampleIndex_data [ loop_ub +
sampleIndex_size_p ] = BaseSampleIndex [ loop_ub ] + ( real_T ) i ; }
sampleIndex_size_p = b_sampleIndex_size_idx_1 ; loop_ub =
b_sampleIndex_size_idx_1 - 1 ; if ( 0 <= loop_ub ) { memcpy ( &
sampleIndex_data [ 0 ] , & b_sampleIndex_data [ 0 ] , ( loop_ub + 1 ) *
sizeof ( real_T ) ) ; } sampleIndex_size [ 1 ] = sampleIndex_size_p ; } }
static void apwjsepibmu ( const iqgjshdk3v * obj , const cint32_T
twiddleTable [ 4 ] , real_T twiddleIndex , int32_T * wr , int32_T * wi ) {
real_T bitReverseTable [ 128 ] ; real_T data ; int32_T eint ; memcpy ( &
bitReverseTable [ 0 ] , & obj -> pBitReverseTable_H [ 0 ] , sizeof ( real_T )
<< 7U ) ; frexp ( 256.0 , & eint ) ; data = bitReverseTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] / 2.0 ; data = trunc ( data ) ; twiddleIndex =
muDoubleScalarRem ( data , 4.0 ) ; * wr = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . re ; * wi = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . im ; } static void bhx1u2umchrs ( real_T
sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) { real_T
b_sampleIndex_data [ 144 ] ; real_T BaseSampleIndex [ 16 ] ; int32_T b_i ;
int32_T b_sampleIndex_size_idx_1 ; int32_T i ; int32_T loop_ub ; int32_T
sampleIndex_size_p ; for ( loop_ub = 0 ; loop_ub < 8 ; loop_ub ++ ) {
BaseSampleIndex [ loop_ub ] = 2.0 * ( real_T ) loop_ub ; BaseSampleIndex [
loop_ub + 8 ] = 2.0 * ( real_T ) loop_ub + 1.0 ; } sampleIndex_size [ 1 ] =
16 ; memcpy ( & sampleIndex_data [ 0 ] , & BaseSampleIndex [ 0 ] , sizeof (
real_T ) << 4U ) ; sampleIndex_size [ 0 ] = 1 ; for ( b_i = 0 ; b_i < 7 ; b_i
++ ) { sampleIndex_size_p = sampleIndex_size [ 1 ] ; i = b_i + 1 ;
b_sampleIndex_size_idx_1 = sampleIndex_size_p + 16 ; i <<= 5 ; if ( 0 <=
sampleIndex_size_p - 1 ) { memcpy ( & b_sampleIndex_data [ 0 ] , &
sampleIndex_data [ 0 ] , sampleIndex_size_p * sizeof ( real_T ) ) ; } for (
loop_ub = 0 ; loop_ub < 16 ; loop_ub ++ ) { b_sampleIndex_data [ loop_ub +
sampleIndex_size_p ] = BaseSampleIndex [ loop_ub ] + ( real_T ) i ; }
sampleIndex_size_p = b_sampleIndex_size_idx_1 ; loop_ub =
b_sampleIndex_size_idx_1 - 1 ; if ( 0 <= loop_ub ) { memcpy ( &
sampleIndex_data [ 0 ] , & b_sampleIndex_data [ 0 ] , ( loop_ub + 1 ) *
sizeof ( real_T ) ) ; } sampleIndex_size [ 1 ] = sampleIndex_size_p ; } }
static void apwjsepibmuv ( const iqgjshdk3v * obj , const cint32_T
twiddleTable [ 8 ] , real_T twiddleIndex , int32_T * wr , int32_T * wi ) {
real_T bitReverseTable [ 128 ] ; real_T data ; int32_T eint ; memcpy ( &
bitReverseTable [ 0 ] , & obj -> pBitReverseTable_H [ 0 ] , sizeof ( real_T )
<< 7U ) ; frexp ( 256.0 , & eint ) ; data = bitReverseTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] / 2.0 ; data = trunc ( data ) ; twiddleIndex =
muDoubleScalarRem ( data , 8.0 ) ; * wr = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . re ; * wi = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . im ; } static void bhx1u2umchrsc ( real_T
sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) { int32_T b_i ;
int32_T b_sampleIndex_size_idx_1 ; int32_T i ; int32_T i_p ; int32_T
sampleIndex_size_p ; int8_T BaseSampleIndex [ 8 ] ; uint8_T
b_sampleIndex_data [ 136 ] ; BaseSampleIndex [ 0 ] = 0 ; BaseSampleIndex [ 4
] = 1 ; BaseSampleIndex [ 1 ] = 2 ; BaseSampleIndex [ 5 ] = 3 ;
BaseSampleIndex [ 2 ] = 4 ; BaseSampleIndex [ 6 ] = 5 ; BaseSampleIndex [ 3 ]
= 6 ; BaseSampleIndex [ 7 ] = 7 ; sampleIndex_size [ 1 ] = 8 ; for ( i_p = 0
; i_p < 8 ; i_p ++ ) { sampleIndex_data [ i_p ] = BaseSampleIndex [ i_p ] ; }
sampleIndex_size [ 0 ] = 1 ; for ( b_i = 0 ; b_i < 15 ; b_i ++ ) {
sampleIndex_size_p = sampleIndex_size [ 1 ] ; i = b_i + 1 ;
b_sampleIndex_size_idx_1 = sampleIndex_size_p + 8 ; i <<= 4 ; for ( i_p = 0 ;
i_p < sampleIndex_size_p ; i_p ++ ) { b_sampleIndex_data [ i_p ] = ( uint8_T
) sampleIndex_data [ i_p ] ; } for ( i_p = 0 ; i_p < 8 ; i_p ++ ) {
b_sampleIndex_data [ i_p + sampleIndex_size_p ] = ( uint8_T ) (
BaseSampleIndex [ i_p ] + i ) ; } sampleIndex_size_p =
b_sampleIndex_size_idx_1 ; i = b_sampleIndex_size_idx_1 - 1 ; for ( i_p = 0 ;
i_p <= i ; i_p ++ ) { sampleIndex_data [ i_p ] = b_sampleIndex_data [ i_p ] ;
} sampleIndex_size [ 1 ] = sampleIndex_size_p ; } } static void apwjsepibmuvg
( const iqgjshdk3v * obj , const cint32_T twiddleTable [ 16 ] , real_T
twiddleIndex , int32_T * wr , int32_T * wi ) { real_T bitReverseTable [ 128 ]
; real_T data ; int32_T eint ; memcpy ( & bitReverseTable [ 0 ] , & obj ->
pBitReverseTable_H [ 0 ] , sizeof ( real_T ) << 7U ) ; frexp ( 256.0 , & eint
) ; data = bitReverseTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] / 2.0 ;
data = trunc ( data ) ; twiddleIndex = muDoubleScalarRem ( data , 16.0 ) ; *
wr = twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . re ; * wi =
twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . im ; } static void
bhx1u2umchrsc0 ( real_T sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ]
) { int32_T b_i ; int32_T b_sampleIndex_size_idx_1 ; int32_T i ; int32_T i_p
; int32_T sampleIndex_size_p ; uint8_T b_sampleIndex_data [ 132 ] ;
sampleIndex_size [ 1 ] = 4 ; sampleIndex_data [ 0 ] = 0.0 ; sampleIndex_data
[ 1 ] = 2.0 ; sampleIndex_data [ 2 ] = 1.0 ; sampleIndex_data [ 3 ] = 3.0 ;
sampleIndex_size [ 0 ] = 1 ; for ( b_i = 0 ; b_i < 31 ; b_i ++ ) {
sampleIndex_size_p = sampleIndex_size [ 1 ] ; i = b_i + 1 ;
b_sampleIndex_size_idx_1 = sampleIndex_size_p + 4 ; i <<= 3 ; for ( i_p = 0 ;
i_p < sampleIndex_size_p ; i_p ++ ) { b_sampleIndex_data [ i_p ] = ( uint8_T
) sampleIndex_data [ i_p ] ; } b_sampleIndex_data [ sampleIndex_size_p ] = (
uint8_T ) i ; b_sampleIndex_data [ sampleIndex_size_p + 1 ] = ( uint8_T ) ( i
+ 2 ) ; b_sampleIndex_data [ sampleIndex_size_p + 2 ] = ( uint8_T ) ( i + 1 )
; b_sampleIndex_data [ sampleIndex_size_p + 3 ] = ( uint8_T ) ( i + 3 ) ;
sampleIndex_size_p = b_sampleIndex_size_idx_1 ; i = b_sampleIndex_size_idx_1
- 1 ; for ( i_p = 0 ; i_p <= i ; i_p ++ ) { sampleIndex_data [ i_p ] =
b_sampleIndex_data [ i_p ] ; } sampleIndex_size [ 1 ] = sampleIndex_size_p ;
} } static void apwjsepibmuvg3 ( const iqgjshdk3v * obj , const cint32_T
twiddleTable [ 32 ] , real_T twiddleIndex , int32_T * wr , int32_T * wi ) {
real_T bitReverseTable [ 128 ] ; real_T data ; int32_T eint ; memcpy ( &
bitReverseTable [ 0 ] , & obj -> pBitReverseTable_H [ 0 ] , sizeof ( real_T )
<< 7U ) ; frexp ( 256.0 , & eint ) ; data = bitReverseTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] / 2.0 ; data = trunc ( data ) ; twiddleIndex =
muDoubleScalarRem ( data , 32.0 ) ; * wr = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . re ; * wi = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . im ; } static void bhx1u2umchrsc0e ( real_T
sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) { int32_T b_i ;
int32_T b_sampleIndex_size_idx_1 ; int32_T i ; int32_T i_p ; int32_T
sampleIndex_size_p ; uint8_T b_sampleIndex_data [ 130 ] ; sampleIndex_size [
1 ] = 2 ; sampleIndex_data [ 0 ] = 0.0 ; sampleIndex_data [ 1 ] = 1.0 ;
sampleIndex_size [ 0 ] = 1 ; for ( b_i = 0 ; b_i < 63 ; b_i ++ ) {
sampleIndex_size_p = sampleIndex_size [ 1 ] ; i = b_i + 1 ;
b_sampleIndex_size_idx_1 = sampleIndex_size_p + 2 ; i <<= 2 ; for ( i_p = 0 ;
i_p < sampleIndex_size_p ; i_p ++ ) { b_sampleIndex_data [ i_p ] = ( uint8_T
) sampleIndex_data [ i_p ] ; } b_sampleIndex_data [ sampleIndex_size_p ] = (
uint8_T ) i ; b_sampleIndex_data [ sampleIndex_size_p + 1 ] = ( uint8_T ) ( i
+ 1 ) ; sampleIndex_size_p = b_sampleIndex_size_idx_1 ; i =
b_sampleIndex_size_idx_1 - 1 ; for ( i_p = 0 ; i_p <= i ; i_p ++ ) {
sampleIndex_data [ i_p ] = b_sampleIndex_data [ i_p ] ; } sampleIndex_size [
1 ] = sampleIndex_size_p ; } } static void apwjsepibmuvg3y ( const iqgjshdk3v
* obj , const cint32_T twiddleTable [ 64 ] , real_T twiddleIndex , int32_T *
wr , int32_T * wi ) { real_T bitReverseTable [ 128 ] ; real_T data ; int32_T
eint ; memcpy ( & bitReverseTable [ 0 ] , & obj -> pBitReverseTable_H [ 0 ] ,
sizeof ( real_T ) << 7U ) ; frexp ( 256.0 , & eint ) ; data = bitReverseTable
[ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] / 2.0 ; data = trunc ( data ) ;
twiddleIndex = muDoubleScalarRem ( data , 64.0 ) ; * wr = twiddleTable [ (
int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . re ; * wi = twiddleTable [ ( int32_T
) ( twiddleIndex + 1.0 ) - 1 ] . im ; } static void ksvcsjhygl ( const
iqgjshdk3v * obj , const cint32_T twiddleTable [ 128 ] , real_T twiddleIndex
, int32_T * wr , int32_T * wi ) { real_T bitReverseTable [ 128 ] ; int32_T
eint ; memcpy ( & bitReverseTable [ 0 ] , & obj -> pBitReverseTable_H [ 0 ] ,
sizeof ( real_T ) << 7U ) ; frexp ( 256.0 , & eint ) ; twiddleIndex =
bitReverseTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] ; * wr =
twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . re ; * wi =
twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . im ; } static
real_T edlzhlng3g ( real_T in , const real_T bitReverseTable [ 256 ] ) {
int32_T eint ; frexp ( 512.0 , & eint ) ; return bitReverseTable [ ( int32_T
) ( in + 1.0 ) - 1 ] ; } static void ldjqx24n40 ( iqgjshdk3v * obj , const
int32_T dataIn_re [ 256 ] , const int32_T dataIn_im [ 256 ] , int32_T dout_re
[ 256 ] , int32_T dout_im [ 256 ] ) { static const cint32_T tmp_j [ 128 ] = {
{ 16777216 , 0 } , { 16772163 , - 411733 } , { 16757007 , - 823219 } , {
16731757 , - 1234209 } , { 16696429 , - 1644455 } , { 16651044 , - 2053710 }
, { 16595628 , - 2461729 } , { 16530216 , - 2868265 } , { 16454846 , -
3273072 } , { 16369565 , - 3675909 } , { 16274424 , - 4076531 } , { 16169479
, - 4474698 } , { 16054795 , - 4870169 } , { 15930439 , - 5262706 } , {
15796488 , - 5652074 } , { 15653022 , - 6038037 } , { 15500126 , - 6420363 }
, { 15337895 , - 6798821 } , { 15166424 , - 7173184 } , { 14985817 , -
7543226 } , { 14796184 , - 7908725 } , { 14597637 , - 8269459 } , { 14390298
, - 8625213 } , { 14174291 , - 8975771 } , { 13949745 , - 9320922 } , {
13716797 , - 9660458 } , { 13475586 , - 9994176 } , { 13226258 , - 10321873 }
, { 12968963 , - 10643353 } , { 12703856 , - 10958422 } , { 12431097 , -
11266890 } , { 12150850 , - 11568571 } , { 11863283 , - 11863283 } , {
11568571 , - 12150850 } , { 11266890 , - 12431097 } , { 10958422 , - 12703856
} , { 10643353 , - 12968963 } , { 10321873 , - 13226258 } , { 9994176 , -
13475586 } , { 9660458 , - 13716797 } , { 9320922 , - 13949745 } , { 8975771
, - 14174291 } , { 8625213 , - 14390298 } , { 8269459 , - 14597637 } , {
7908725 , - 14796184 } , { 7543226 , - 14985817 } , { 7173184 , - 15166424 }
, { 6798821 , - 15337895 } , { 6420363 , - 15500126 } , { 6038037 , -
15653022 } , { 5652074 , - 15796488 } , { 5262706 , - 15930439 } , { 4870169
, - 16054795 } , { 4474698 , - 16169479 } , { 4076531 , - 16274424 } , {
3675909 , - 16369565 } , { 3273072 , - 16454846 } , { 2868265 , - 16530216 }
, { 2461729 , - 16595628 } , { 2053710 , - 16651044 } , { 1644455 , -
16696429 } , { 1234209 , - 16731757 } , { 823219 , - 16757007 } , { 411733 ,
- 16772163 } , { 0 , - 16777216 } , { - 411733 , - 16772163 } , { - 823219 ,
- 16757007 } , { - 1234209 , - 16731757 } , { - 1644455 , - 16696429 } , { -
2053710 , - 16651044 } , { - 2461729 , - 16595628 } , { - 2868265 , -
16530216 } , { - 3273072 , - 16454846 } , { - 3675909 , - 16369565 } , { -
4076531 , - 16274424 } , { - 4474698 , - 16169479 } , { - 4870169 , -
16054795 } , { - 5262706 , - 15930439 } , { - 5652074 , - 15796488 } , { -
6038037 , - 15653022 } , { - 6420363 , - 15500126 } , { - 6798821 , -
15337895 } , { - 7173184 , - 15166424 } , { - 7543226 , - 14985817 } , { -
7908725 , - 14796184 } , { - 8269459 , - 14597637 } , { - 8625213 , -
14390298 } , { - 8975771 , - 14174291 } , { - 9320922 , - 13949745 } , { -
9660458 , - 13716797 } , { - 9994176 , - 13475586 } , { - 10321873 , -
13226258 } , { - 10643353 , - 12968963 } , { - 10958422 , - 12703856 } , { -
11266890 , - 12431097 } , { - 11568571 , - 12150850 } , { - 11863283 , -
11863283 } , { - 12150850 , - 11568571 } , { - 12431097 , - 11266890 } , { -
12703856 , - 10958422 } , { - 12968963 , - 10643353 } , { - 13226258 , -
10321873 } , { - 13475586 , - 9994176 } , { - 13716797 , - 9660458 } , { -
13949745 , - 9320922 } , { - 14174291 , - 8975771 } , { - 14390298 , -
8625213 } , { - 14597637 , - 8269459 } , { - 14796184 , - 7908725 } , { -
14985817 , - 7543226 } , { - 15166424 , - 7173184 } , { - 15337895 , -
6798821 } , { - 15500126 , - 6420363 } , { - 15653022 , - 6038037 } , { -
15796488 , - 5652074 } , { - 15930439 , - 5262706 } , { - 16054795 , -
4870169 } , { - 16169479 , - 4474698 } , { - 16274424 , - 4076531 } , { -
16369565 , - 3675909 } , { - 16454846 , - 3273072 } , { - 16530216 , -
2868265 } , { - 16595628 , - 2461729 } , { - 16651044 , - 2053710 } , { -
16696429 , - 1644455 } , { - 16731757 , - 1234209 } , { - 16757007 , - 823219
} , { - 16772163 , - 411733 } } ; static const cint32_T tmp_g [ 64 ] = { {
16777216 , 0 } , { 16757007 , - 823219 } , { 16696429 , - 1644455 } , {
16595628 , - 2461729 } , { 16454846 , - 3273072 } , { 16274424 , - 4076531 }
, { 16054795 , - 4870169 } , { 15796488 , - 5652074 } , { 15500126 , -
6420363 } , { 15166424 , - 7173184 } , { 14796184 , - 7908725 } , { 14390298
, - 8625213 } , { 13949745 , - 9320922 } , { 13475586 , - 9994176 } , {
12968963 , - 10643353 } , { 12431097 , - 11266890 } , { 11863283 , - 11863283
} , { 11266890 , - 12431097 } , { 10643353 , - 12968963 } , { 9994176 , -
13475586 } , { 9320922 , - 13949745 } , { 8625213 , - 14390298 } , { 7908725
, - 14796184 } , { 7173184 , - 15166424 } , { 6420363 , - 15500126 } , {
5652074 , - 15796488 } , { 4870169 , - 16054795 } , { 4076531 , - 16274424 }
, { 3273072 , - 16454846 } , { 2461729 , - 16595628 } , { 1644455 , -
16696429 } , { 823219 , - 16757007 } , { 0 , - 16777216 } , { - 823219 , -
16757007 } , { - 1644455 , - 16696429 } , { - 2461729 , - 16595628 } , { -
3273072 , - 16454846 } , { - 4076531 , - 16274424 } , { - 4870169 , -
16054795 } , { - 5652074 , - 15796488 } , { - 6420363 , - 15500126 } , { -
7173184 , - 15166424 } , { - 7908725 , - 14796184 } , { - 8625213 , -
14390298 } , { - 9320922 , - 13949745 } , { - 9994176 , - 13475586 } , { -
10643353 , - 12968963 } , { - 11266890 , - 12431097 } , { - 11863283 , -
11863283 } , { - 12431097 , - 11266890 } , { - 12968963 , - 10643353 } , { -
13475586 , - 9994176 } , { - 13949745 , - 9320922 } , { - 14390298 , -
8625213 } , { - 14796184 , - 7908725 } , { - 15166424 , - 7173184 } , { -
15500126 , - 6420363 } , { - 15796488 , - 5652074 } , { - 16054795 , -
4870169 } , { - 16274424 , - 4076531 } , { - 16454846 , - 3273072 } , { -
16595628 , - 2461729 } , { - 16696429 , - 1644455 } , { - 16757007 , - 823219
} } ; static const cint32_T tmp_m [ 32 ] = { { 16777216 , 0 } , { 16696429 ,
- 1644455 } , { 16454846 , - 3273072 } , { 16054795 , - 4870169 } , {
15500126 , - 6420363 } , { 14796184 , - 7908725 } , { 13949745 , - 9320922 }
, { 12968963 , - 10643353 } , { 11863283 , - 11863283 } , { 10643353 , -
12968963 } , { 9320922 , - 13949745 } , { 7908725 , - 14796184 } , { 6420363
, - 15500126 } , { 4870169 , - 16054795 } , { 3273072 , - 16454846 } , {
1644455 , - 16696429 } , { 0 , - 16777216 } , { - 1644455 , - 16696429 } , {
- 3273072 , - 16454846 } , { - 4870169 , - 16054795 } , { - 6420363 , -
15500126 } , { - 7908725 , - 14796184 } , { - 9320922 , - 13949745 } , { -
10643353 , - 12968963 } , { - 11863283 , - 11863283 } , { - 12968963 , -
10643353 } , { - 13949745 , - 9320922 } , { - 14796184 , - 7908725 } , { -
15500126 , - 6420363 } , { - 16054795 , - 4870169 } , { - 16454846 , -
3273072 } , { - 16696429 , - 1644455 } } ; static const cint32_T tmp_i [ 16 ]
= { { 16777216 , 0 } , { 16454846 , - 3273072 } , { 15500126 , - 6420363 } ,
{ 13949745 , - 9320922 } , { 11863283 , - 11863283 } , { 9320922 , - 13949745
} , { 6420363 , - 15500126 } , { 3273072 , - 16454846 } , { 0 , - 16777216 }
, { - 3273072 , - 16454846 } , { - 6420363 , - 15500126 } , { - 9320922 , -
13949745 } , { - 11863283 , - 11863283 } , { - 13949745 , - 9320922 } , { -
15500126 , - 6420363 } , { - 16454846 , - 3273072 } } ; static const cint32_T
tmp_e [ 8 ] = { { 16777216 , 0 } , { 15500126 , - 6420363 } , { 11863283 , -
11863283 } , { 6420363 , - 15500126 } , { 0 , - 16777216 } , { - 6420363 , -
15500126 } , { - 11863283 , - 11863283 } , { - 15500126 , - 6420363 } } ;
static const cint32_T tmp_p [ 4 ] = { { 16777216 , 0 } , { 11863283 , -
11863283 } , { 0 , - 16777216 } , { - 11863283 , - 11863283 } } ; static
const cint32_T tmp [ 2 ] = { { 16777216 , 0 } , { 0 , - 16777216 } } ;
iqgjshdk3v * obj_p ; int64_T c ; int64_T cmplx_im ; int64_T cmplx_re ;
int64_T u_cast ; int64_T wrv ; int64_T wry ; int64_T x_cast ; real_T obj_e [
256 ] ; real_T sampleIndex_data [ 128 ] ; real_T x [ 8 ] ; real_T inIndex ;
real_T outIndex ; real_T twdlIndex ; int32_T din_im [ 256 ] ; int32_T din_re
[ 256 ] ; int32_T dout_im_stage [ 256 ] ; int32_T dout_re_stage [ 256 ] ;
int32_T sampleIndex_size [ 2 ] ; int32_T X_cast ; int32_T Y_cast ; int32_T i
; int32_T v_cast ; int32_T wi_cast ; int32_T wr_cast ; int32_T xoffset ;
int32_T y_cast ; for ( i = 0 ; i < 256 ; i ++ ) { din_re [ i ] = dataIn_re [
i ] ; din_im [ i ] = dataIn_im [ i ] ; dout_re_stage [ i ] = 0 ;
dout_im_stage [ i ] = 0 ; } outIndex = 1.0 ; for ( v_cast = 0 ; v_cast < 64 ;
v_cast ++ ) { sampleIndex_data [ v_cast ] = 2.0 * ( real_T ) v_cast ;
sampleIndex_data [ v_cast + 64 ] = 2.0 * ( real_T ) v_cast + 1.0 ; } for ( i
= 0 ; i < 128 ; i ++ ) { inIndex = ( real_T ) i + 1.0 ; inIndex =
sampleIndex_data [ ( int32_T ) inIndex - 1 ] ; X_cast = din_re [ ( int32_T )
( inIndex + 1.0 ) - 1 ] ; Y_cast = din_im [ ( int32_T ) ( inIndex + 1.0 ) - 1
] ; y_cast = din_re [ ( int32_T ) ( ( inIndex + 128.0 ) + 1.0 ) - 1 ] ;
v_cast = din_im [ ( int32_T ) ( ( inIndex + 128.0 ) + 1.0 ) - 1 ] ; wry = (
int64_T ) y_cast << 24 ; wrv = ( int64_T ) v_cast << 24 ; cmplx_re = ( wry &
4503599627370496ULL ) != 0ULL ? wry | - 4503599627370496LL : wry &
4503599627370495LL ; wry = wrv ; cmplx_im = ( wry & 4503599627370496ULL ) !=
0ULL ? wry | - 4503599627370496LL : wry & 4503599627370495LL ; x_cast = (
int64_T ) X_cast << 24 ; u_cast = ( int64_T ) Y_cast << 24 ; wry = x_cast +
cmplx_re ; wrv = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = u_cast + cmplx_im ; c =
( wry & 9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = x_cast - cmplx_re ; cmplx_re = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = u_cast - cmplx_im ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = wrv >> 1 ; wrv = ( wry & 9007199254740992ULL ) !=
0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry = cmplx_re
>> 1 ; cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = c >> 1 ; c = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = cmplx_im >> 1 ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; fyddyxd02u ( obj , wrv , cmplx_re , c , cmplx_im , 1.0 )
; v_cast = ( int32_T ) ( wrv >> 24 ) ; X_cast = ( v_cast & 33554432U ) != 0U
? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = ( int32_T ) ( cmplx_re
>> 24 ) ; Y_cast = ( v_cast & 33554432U ) != 0U ? v_cast | - 33554432 :
v_cast & 33554431 ; v_cast = ( int32_T ) ( c >> 24 ) ; y_cast = ( v_cast &
33554432U ) != 0U ? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = (
int32_T ) ( cmplx_im >> 24 ) ; v_cast = ( v_cast & 33554432U ) != 0U ? v_cast
| - 33554432 : v_cast & 33554431 ; dout_re_stage [ ( int32_T ) outIndex - 1 ]
= X_cast ; dout_re_stage [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] = Y_cast ;
dout_im_stage [ ( int32_T ) outIndex - 1 ] = y_cast ; dout_im_stage [ (
int32_T ) ( outIndex + 1.0 ) - 1 ] = v_cast ; outIndex += 2.0 ; } memcpy ( &
din_re [ 0 ] , & dout_re_stage [ 0 ] , sizeof ( int32_T ) << 8U ) ; memcpy (
& din_im [ 0 ] , & dout_im_stage [ 0 ] , sizeof ( int32_T ) << 8U ) ;
outIndex = 1.0 ; twdlIndex = 0.0 ; bhx1u2umch ( sampleIndex_data ,
sampleIndex_size ) ; for ( i = 0 ; i < 128 ; i ++ ) { inIndex = ( real_T ) i
+ 1.0 ; inIndex = sampleIndex_data [ ( int32_T ) inIndex - 1 ] ; apwjsepibm (
obj , tmp , twdlIndex , & wr_cast , & wi_cast ) ; X_cast = din_re [ ( int32_T
) ( inIndex + 1.0 ) - 1 ] ; Y_cast = din_im [ ( int32_T ) ( inIndex + 1.0 ) -
1 ] ; y_cast = din_re [ ( int32_T ) ( ( inIndex + 64.0 ) + 1.0 ) - 1 ] ;
v_cast = din_im [ ( int32_T ) ( ( inIndex + 64.0 ) + 1.0 ) - 1 ] ; wry = (
int64_T ) wr_cast * y_cast ; cmplx_re = ( int64_T ) wi_cast * v_cast ; wrv =
( int64_T ) wr_cast * v_cast ; c = ( int64_T ) wi_cast * y_cast ; wry -=
cmplx_re ; cmplx_re = ( wry & 4503599627370496ULL ) != 0ULL ? wry | -
4503599627370496LL : wry & 4503599627370495LL ; wry = wrv + c ; cmplx_im = (
wry & 4503599627370496ULL ) != 0ULL ? wry | - 4503599627370496LL : wry &
4503599627370495LL ; x_cast = ( int64_T ) X_cast << 24 ; u_cast = ( int64_T )
Y_cast << 24 ; wry = x_cast + cmplx_re ; wrv = ( wry & 9007199254740992ULL )
!= 0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry =
u_cast + cmplx_im ; c = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = x_cast - cmplx_re ;
cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL
: wry & 9007199254740991LL ; wry = u_cast - cmplx_im ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = wrv >> 1 ; wrv = ( wry & 9007199254740992ULL ) !=
0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry = cmplx_re
>> 1 ; cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = c >> 1 ; c = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = cmplx_im >> 1 ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; fyddyxd02u ( obj , wrv , cmplx_re , c , cmplx_im , 2.0 )
; v_cast = ( int32_T ) ( wrv >> 24 ) ; X_cast = ( v_cast & 33554432U ) != 0U
? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = ( int32_T ) ( cmplx_re
>> 24 ) ; Y_cast = ( v_cast & 33554432U ) != 0U ? v_cast | - 33554432 :
v_cast & 33554431 ; v_cast = ( int32_T ) ( c >> 24 ) ; y_cast = ( v_cast &
33554432U ) != 0U ? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = (
int32_T ) ( cmplx_im >> 24 ) ; v_cast = ( v_cast & 33554432U ) != 0U ? v_cast
| - 33554432 : v_cast & 33554431 ; dout_re_stage [ ( int32_T ) outIndex - 1 ]
= X_cast ; dout_re_stage [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] = Y_cast ;
dout_im_stage [ ( int32_T ) outIndex - 1 ] = y_cast ; dout_im_stage [ (
int32_T ) ( outIndex + 1.0 ) - 1 ] = v_cast ; outIndex += 2.0 ; twdlIndex ++
; } memcpy ( & din_re [ 0 ] , & dout_re_stage [ 0 ] , sizeof ( int32_T ) <<
8U ) ; memcpy ( & din_im [ 0 ] , & dout_im_stage [ 0 ] , sizeof ( int32_T )
<< 8U ) ; outIndex = 1.0 ; twdlIndex = 0.0 ; bhx1u2umchr ( sampleIndex_data ,
sampleIndex_size ) ; inIndex = sampleIndex_size [ 1 ] ; xoffset = ( int32_T )
inIndex - 1 ; for ( i = 0 ; i <= xoffset ; i ++ ) { inIndex = ( real_T ) i +
1.0 ; inIndex = sampleIndex_data [ ( int32_T ) inIndex - 1 ] ; apwjsepibmu (
obj , tmp_p , twdlIndex , & wr_cast , & wi_cast ) ; X_cast = din_re [ (
int32_T ) ( inIndex + 1.0 ) - 1 ] ; Y_cast = din_im [ ( int32_T ) ( inIndex +
1.0 ) - 1 ] ; y_cast = din_re [ ( int32_T ) ( ( inIndex + 32.0 ) + 1.0 ) - 1
] ; v_cast = din_im [ ( int32_T ) ( ( inIndex + 32.0 ) + 1.0 ) - 1 ] ; wry =
( int64_T ) wr_cast * y_cast ; cmplx_re = ( int64_T ) wi_cast * v_cast ; wrv
= ( int64_T ) wr_cast * v_cast ; c = ( int64_T ) wi_cast * y_cast ; wry -=
cmplx_re ; cmplx_re = ( wry & 4503599627370496ULL ) != 0ULL ? wry | -
4503599627370496LL : wry & 4503599627370495LL ; wry = wrv + c ; cmplx_im = (
wry & 4503599627370496ULL ) != 0ULL ? wry | - 4503599627370496LL : wry &
4503599627370495LL ; x_cast = ( int64_T ) X_cast << 24 ; u_cast = ( int64_T )
Y_cast << 24 ; wry = x_cast + cmplx_re ; wrv = ( wry & 9007199254740992ULL )
!= 0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry =
u_cast + cmplx_im ; c = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = x_cast - cmplx_re ;
cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL
: wry & 9007199254740991LL ; wry = u_cast - cmplx_im ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = wrv >> 1 ; wrv = ( wry & 9007199254740992ULL ) !=
0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry = cmplx_re
>> 1 ; cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = c >> 1 ; c = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = cmplx_im >> 1 ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; fyddyxd02u ( obj , wrv , cmplx_re , c , cmplx_im , 3.0 )
; v_cast = ( int32_T ) ( wrv >> 24 ) ; X_cast = ( v_cast & 33554432U ) != 0U
? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = ( int32_T ) ( cmplx_re
>> 24 ) ; Y_cast = ( v_cast & 33554432U ) != 0U ? v_cast | - 33554432 :
v_cast & 33554431 ; v_cast = ( int32_T ) ( c >> 24 ) ; y_cast = ( v_cast &
33554432U ) != 0U ? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = (
int32_T ) ( cmplx_im >> 24 ) ; v_cast = ( v_cast & 33554432U ) != 0U ? v_cast
| - 33554432 : v_cast & 33554431 ; dout_re_stage [ ( int32_T ) outIndex - 1 ]
= X_cast ; dout_re_stage [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] = Y_cast ;
dout_im_stage [ ( int32_T ) outIndex - 1 ] = y_cast ; dout_im_stage [ (
int32_T ) ( outIndex + 1.0 ) - 1 ] = v_cast ; outIndex += 2.0 ; twdlIndex ++
; } memcpy ( & din_re [ 0 ] , & dout_re_stage [ 0 ] , sizeof ( int32_T ) <<
8U ) ; memcpy ( & din_im [ 0 ] , & dout_im_stage [ 0 ] , sizeof ( int32_T )
<< 8U ) ; outIndex = 1.0 ; twdlIndex = 0.0 ; bhx1u2umchrs ( sampleIndex_data
, sampleIndex_size ) ; inIndex = sampleIndex_size [ 1 ] ; xoffset = ( int32_T
) inIndex - 1 ; for ( i = 0 ; i <= xoffset ; i ++ ) { inIndex = ( real_T ) i
+ 1.0 ; inIndex = sampleIndex_data [ ( int32_T ) inIndex - 1 ] ; apwjsepibmuv
( obj , tmp_e , twdlIndex , & wr_cast , & wi_cast ) ; X_cast = din_re [ (
int32_T ) ( inIndex + 1.0 ) - 1 ] ; Y_cast = din_im [ ( int32_T ) ( inIndex +
1.0 ) - 1 ] ; y_cast = din_re [ ( int32_T ) ( ( inIndex + 16.0 ) + 1.0 ) - 1
] ; v_cast = din_im [ ( int32_T ) ( ( inIndex + 16.0 ) + 1.0 ) - 1 ] ; wry =
( int64_T ) wr_cast * y_cast ; cmplx_re = ( int64_T ) wi_cast * v_cast ; wrv
= ( int64_T ) wr_cast * v_cast ; c = ( int64_T ) wi_cast * y_cast ; wry -=
cmplx_re ; cmplx_re = ( wry & 4503599627370496ULL ) != 0ULL ? wry | -
4503599627370496LL : wry & 4503599627370495LL ; wry = wrv + c ; cmplx_im = (
wry & 4503599627370496ULL ) != 0ULL ? wry | - 4503599627370496LL : wry &
4503599627370495LL ; x_cast = ( int64_T ) X_cast << 24 ; u_cast = ( int64_T )
Y_cast << 24 ; wry = x_cast + cmplx_re ; wrv = ( wry & 9007199254740992ULL )
!= 0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry =
u_cast + cmplx_im ; c = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = x_cast - cmplx_re ;
cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL
: wry & 9007199254740991LL ; wry = u_cast - cmplx_im ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = wrv >> 1 ; wrv = ( wry & 9007199254740992ULL ) !=
0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry = cmplx_re
>> 1 ; cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = c >> 1 ; c = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = cmplx_im >> 1 ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; fyddyxd02u ( obj , wrv , cmplx_re , c , cmplx_im , 4.0 )
; v_cast = ( int32_T ) ( wrv >> 24 ) ; X_cast = ( v_cast & 33554432U ) != 0U
? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = ( int32_T ) ( cmplx_re
>> 24 ) ; Y_cast = ( v_cast & 33554432U ) != 0U ? v_cast | - 33554432 :
v_cast & 33554431 ; v_cast = ( int32_T ) ( c >> 24 ) ; y_cast = ( v_cast &
33554432U ) != 0U ? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = (
int32_T ) ( cmplx_im >> 24 ) ; v_cast = ( v_cast & 33554432U ) != 0U ? v_cast
| - 33554432 : v_cast & 33554431 ; dout_re_stage [ ( int32_T ) outIndex - 1 ]
= X_cast ; dout_re_stage [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] = Y_cast ;
dout_im_stage [ ( int32_T ) outIndex - 1 ] = y_cast ; dout_im_stage [ (
int32_T ) ( outIndex + 1.0 ) - 1 ] = v_cast ; outIndex += 2.0 ; twdlIndex ++
; } memcpy ( & din_re [ 0 ] , & dout_re_stage [ 0 ] , sizeof ( int32_T ) <<
8U ) ; memcpy ( & din_im [ 0 ] , & dout_im_stage [ 0 ] , sizeof ( int32_T )
<< 8U ) ; outIndex = 1.0 ; twdlIndex = 0.0 ; bhx1u2umchrsc ( sampleIndex_data
, sampleIndex_size ) ; inIndex = sampleIndex_size [ 1 ] ; xoffset = ( int32_T
) inIndex - 1 ; for ( i = 0 ; i <= xoffset ; i ++ ) { inIndex = ( real_T ) i
+ 1.0 ; inIndex = sampleIndex_data [ ( int32_T ) inIndex - 1 ] ;
apwjsepibmuvg ( obj , tmp_i , twdlIndex , & wr_cast , & wi_cast ) ; X_cast =
din_re [ ( int32_T ) ( inIndex + 1.0 ) - 1 ] ; Y_cast = din_im [ ( int32_T )
( inIndex + 1.0 ) - 1 ] ; y_cast = din_re [ ( int32_T ) ( ( inIndex + 8.0 ) +
1.0 ) - 1 ] ; v_cast = din_im [ ( int32_T ) ( ( inIndex + 8.0 ) + 1.0 ) - 1 ]
; wry = ( int64_T ) wr_cast * y_cast ; cmplx_re = ( int64_T ) wi_cast *
v_cast ; wrv = ( int64_T ) wr_cast * v_cast ; c = ( int64_T ) wi_cast *
y_cast ; wry -= cmplx_re ; cmplx_re = ( wry & 4503599627370496ULL ) != 0ULL ?
wry | - 4503599627370496LL : wry & 4503599627370495LL ; wry = wrv + c ;
cmplx_im = ( wry & 4503599627370496ULL ) != 0ULL ? wry | - 4503599627370496LL
: wry & 4503599627370495LL ; x_cast = ( int64_T ) X_cast << 24 ; u_cast = (
int64_T ) Y_cast << 24 ; wry = x_cast + cmplx_re ; wrv = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = u_cast + cmplx_im ; c = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = x_cast - cmplx_re ; cmplx_re = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = u_cast - cmplx_im ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = wrv >> 1 ; wrv = ( wry & 9007199254740992ULL ) !=
0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry = cmplx_re
>> 1 ; cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = c >> 1 ; c = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = cmplx_im >> 1 ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; fyddyxd02u ( obj , wrv , cmplx_re , c , cmplx_im , 5.0 )
; v_cast = ( int32_T ) ( wrv >> 24 ) ; X_cast = ( v_cast & 33554432U ) != 0U
? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = ( int32_T ) ( cmplx_re
>> 24 ) ; Y_cast = ( v_cast & 33554432U ) != 0U ? v_cast | - 33554432 :
v_cast & 33554431 ; v_cast = ( int32_T ) ( c >> 24 ) ; y_cast = ( v_cast &
33554432U ) != 0U ? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = (
int32_T ) ( cmplx_im >> 24 ) ; v_cast = ( v_cast & 33554432U ) != 0U ? v_cast
| - 33554432 : v_cast & 33554431 ; dout_re_stage [ ( int32_T ) outIndex - 1 ]
= X_cast ; dout_re_stage [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] = Y_cast ;
dout_im_stage [ ( int32_T ) outIndex - 1 ] = y_cast ; dout_im_stage [ (
int32_T ) ( outIndex + 1.0 ) - 1 ] = v_cast ; outIndex += 2.0 ; twdlIndex ++
; } memcpy ( & din_re [ 0 ] , & dout_re_stage [ 0 ] , sizeof ( int32_T ) <<
8U ) ; memcpy ( & din_im [ 0 ] , & dout_im_stage [ 0 ] , sizeof ( int32_T )
<< 8U ) ; outIndex = 1.0 ; twdlIndex = 0.0 ; bhx1u2umchrsc0 (
sampleIndex_data , sampleIndex_size ) ; inIndex = sampleIndex_size [ 1 ] ;
xoffset = ( int32_T ) inIndex - 1 ; for ( i = 0 ; i <= xoffset ; i ++ ) {
inIndex = ( real_T ) i + 1.0 ; inIndex = sampleIndex_data [ ( int32_T )
inIndex - 1 ] ; apwjsepibmuvg3 ( obj , tmp_m , twdlIndex , & wr_cast , &
wi_cast ) ; X_cast = din_re [ ( int32_T ) ( inIndex + 1.0 ) - 1 ] ; Y_cast =
din_im [ ( int32_T ) ( inIndex + 1.0 ) - 1 ] ; y_cast = din_re [ ( int32_T )
( ( inIndex + 4.0 ) + 1.0 ) - 1 ] ; v_cast = din_im [ ( int32_T ) ( ( inIndex
+ 4.0 ) + 1.0 ) - 1 ] ; wry = ( int64_T ) wr_cast * y_cast ; cmplx_re = (
int64_T ) wi_cast * v_cast ; wrv = ( int64_T ) wr_cast * v_cast ; c = (
int64_T ) wi_cast * y_cast ; wry -= cmplx_re ; cmplx_re = ( wry &
4503599627370496ULL ) != 0ULL ? wry | - 4503599627370496LL : wry &
4503599627370495LL ; wry = wrv + c ; cmplx_im = ( wry & 4503599627370496ULL )
!= 0ULL ? wry | - 4503599627370496LL : wry & 4503599627370495LL ; x_cast = (
int64_T ) X_cast << 24 ; u_cast = ( int64_T ) Y_cast << 24 ; wry = x_cast +
cmplx_re ; wrv = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = u_cast + cmplx_im ; c =
( wry & 9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = x_cast - cmplx_re ; cmplx_re = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = u_cast - cmplx_im ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = wrv >> 1 ; wrv = ( wry & 9007199254740992ULL ) !=
0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry = cmplx_re
>> 1 ; cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = c >> 1 ; c = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = cmplx_im >> 1 ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; fyddyxd02u ( obj , wrv , cmplx_re , c , cmplx_im , 6.0 )
; v_cast = ( int32_T ) ( wrv >> 24 ) ; X_cast = ( v_cast & 33554432U ) != 0U
? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = ( int32_T ) ( cmplx_re
>> 24 ) ; Y_cast = ( v_cast & 33554432U ) != 0U ? v_cast | - 33554432 :
v_cast & 33554431 ; v_cast = ( int32_T ) ( c >> 24 ) ; y_cast = ( v_cast &
33554432U ) != 0U ? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = (
int32_T ) ( cmplx_im >> 24 ) ; v_cast = ( v_cast & 33554432U ) != 0U ? v_cast
| - 33554432 : v_cast & 33554431 ; dout_re_stage [ ( int32_T ) outIndex - 1 ]
= X_cast ; dout_re_stage [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] = Y_cast ;
dout_im_stage [ ( int32_T ) outIndex - 1 ] = y_cast ; dout_im_stage [ (
int32_T ) ( outIndex + 1.0 ) - 1 ] = v_cast ; outIndex += 2.0 ; twdlIndex ++
; } memcpy ( & din_re [ 0 ] , & dout_re_stage [ 0 ] , sizeof ( int32_T ) <<
8U ) ; memcpy ( & din_im [ 0 ] , & dout_im_stage [ 0 ] , sizeof ( int32_T )
<< 8U ) ; outIndex = 1.0 ; twdlIndex = 0.0 ; bhx1u2umchrsc0e (
sampleIndex_data , sampleIndex_size ) ; inIndex = sampleIndex_size [ 1 ] ;
xoffset = ( int32_T ) inIndex - 1 ; for ( i = 0 ; i <= xoffset ; i ++ ) {
inIndex = ( real_T ) i + 1.0 ; inIndex = sampleIndex_data [ ( int32_T )
inIndex - 1 ] ; apwjsepibmuvg3y ( obj , tmp_g , twdlIndex , & wr_cast , &
wi_cast ) ; X_cast = din_re [ ( int32_T ) ( inIndex + 1.0 ) - 1 ] ; Y_cast =
din_im [ ( int32_T ) ( inIndex + 1.0 ) - 1 ] ; y_cast = din_re [ ( int32_T )
( ( inIndex + 2.0 ) + 1.0 ) - 1 ] ; v_cast = din_im [ ( int32_T ) ( ( inIndex
+ 2.0 ) + 1.0 ) - 1 ] ; wry = ( int64_T ) wr_cast * y_cast ; cmplx_re = (
int64_T ) wi_cast * v_cast ; wrv = ( int64_T ) wr_cast * v_cast ; c = (
int64_T ) wi_cast * y_cast ; wry -= cmplx_re ; cmplx_re = ( wry &
4503599627370496ULL ) != 0ULL ? wry | - 4503599627370496LL : wry &
4503599627370495LL ; wry = wrv + c ; cmplx_im = ( wry & 4503599627370496ULL )
!= 0ULL ? wry | - 4503599627370496LL : wry & 4503599627370495LL ; x_cast = (
int64_T ) X_cast << 24 ; u_cast = ( int64_T ) Y_cast << 24 ; wry = x_cast +
cmplx_re ; wrv = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = u_cast + cmplx_im ; c =
( wry & 9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = x_cast - cmplx_re ; cmplx_re = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = u_cast - cmplx_im ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = wrv >> 1 ; wrv = ( wry & 9007199254740992ULL ) !=
0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry = cmplx_re
>> 1 ; cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = c >> 1 ; c = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = cmplx_im >> 1 ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; fyddyxd02u ( obj , wrv , cmplx_re , c , cmplx_im , 7.0 )
; v_cast = ( int32_T ) ( wrv >> 24 ) ; X_cast = ( v_cast & 33554432U ) != 0U
? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = ( int32_T ) ( cmplx_re
>> 24 ) ; Y_cast = ( v_cast & 33554432U ) != 0U ? v_cast | - 33554432 :
v_cast & 33554431 ; v_cast = ( int32_T ) ( c >> 24 ) ; y_cast = ( v_cast &
33554432U ) != 0U ? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = (
int32_T ) ( cmplx_im >> 24 ) ; v_cast = ( v_cast & 33554432U ) != 0U ? v_cast
| - 33554432 : v_cast & 33554431 ; dout_re_stage [ ( int32_T ) outIndex - 1 ]
= X_cast ; dout_re_stage [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] = Y_cast ;
dout_im_stage [ ( int32_T ) outIndex - 1 ] = y_cast ; dout_im_stage [ (
int32_T ) ( outIndex + 1.0 ) - 1 ] = v_cast ; outIndex += 2.0 ; twdlIndex ++
; } memcpy ( & din_re [ 0 ] , & dout_re_stage [ 0 ] , sizeof ( int32_T ) <<
8U ) ; memcpy ( & din_im [ 0 ] , & dout_im_stage [ 0 ] , sizeof ( int32_T )
<< 8U ) ; outIndex = 1.0 ; twdlIndex = 0.0 ; for ( v_cast = 0 ; v_cast < 128
; v_cast ++ ) { sampleIndex_data [ v_cast ] = v_cast ; } for ( i = 0 ; i <
128 ; i ++ ) { inIndex = ( real_T ) i + 1.0 ; inIndex = sampleIndex_data [ (
int32_T ) inIndex - 1 ] ; ksvcsjhygl ( obj , tmp_j , twdlIndex , & wr_cast ,
& wi_cast ) ; X_cast = din_re [ ( int32_T ) inIndex ] ; Y_cast = din_im [ (
int32_T ) inIndex ] ; y_cast = din_re [ ( int32_T ) inIndex + 128 ] ; v_cast
= din_im [ ( int32_T ) inIndex + 128 ] ; wry = ( int64_T ) wr_cast * y_cast ;
cmplx_re = ( int64_T ) wi_cast * v_cast ; wrv = ( int64_T ) wr_cast * v_cast
; c = ( int64_T ) wi_cast * y_cast ; wry -= cmplx_re ; cmplx_re = ( wry &
4503599627370496ULL ) != 0ULL ? wry | - 4503599627370496LL : wry &
4503599627370495LL ; wry = wrv + c ; cmplx_im = ( wry & 4503599627370496ULL )
!= 0ULL ? wry | - 4503599627370496LL : wry & 4503599627370495LL ; x_cast = (
int64_T ) X_cast << 24 ; u_cast = ( int64_T ) Y_cast << 24 ; wry = x_cast +
cmplx_re ; wrv = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = u_cast + cmplx_im ; c =
( wry & 9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = x_cast - cmplx_re ; cmplx_re = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = u_cast - cmplx_im ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = wrv >> 1 ; wrv = ( wry & 9007199254740992ULL ) !=
0ULL ? wry | - 9007199254740992LL : wry & 9007199254740991LL ; wry = cmplx_re
>> 1 ; cmplx_re = ( wry & 9007199254740992ULL ) != 0ULL ? wry | -
9007199254740992LL : wry & 9007199254740991LL ; wry = c >> 1 ; c = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; wry = cmplx_im >> 1 ; cmplx_im = ( wry &
9007199254740992ULL ) != 0ULL ? wry | - 9007199254740992LL : wry &
9007199254740991LL ; fyddyxd02u ( obj , wrv , cmplx_re , c , cmplx_im , 8.0 )
; v_cast = ( int32_T ) ( wrv >> 24 ) ; X_cast = ( v_cast & 33554432U ) != 0U
? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = ( int32_T ) ( cmplx_re
>> 24 ) ; Y_cast = ( v_cast & 33554432U ) != 0U ? v_cast | - 33554432 :
v_cast & 33554431 ; v_cast = ( int32_T ) ( c >> 24 ) ; y_cast = ( v_cast &
33554432U ) != 0U ? v_cast | - 33554432 : v_cast & 33554431 ; v_cast = (
int32_T ) ( cmplx_im >> 24 ) ; v_cast = ( v_cast & 33554432U ) != 0U ? v_cast
| - 33554432 : v_cast & 33554431 ; dout_re_stage [ ( int32_T ) outIndex - 1 ]
= X_cast ; dout_re_stage [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] = Y_cast ;
dout_im_stage [ ( int32_T ) outIndex - 1 ] = y_cast ; dout_im_stage [ (
int32_T ) ( outIndex + 1.0 ) - 1 ] = v_cast ; outIndex += 2.0 ; twdlIndex ++
; } memcpy ( & din_re [ 0 ] , & dout_re_stage [ 0 ] , sizeof ( int32_T ) <<
8U ) ; memcpy ( & din_im [ 0 ] , & dout_im_stage [ 0 ] , sizeof ( int32_T )
<< 8U ) ; obj_p = obj ; for ( i = 0 ; i < 8 ; i ++ ) { x [ i ] = obj_p ->
pOverflowStage [ i ] ; } outIndex = x [ 0 ] ; for ( i = 0 ; i < 7 ; i ++ ) {
xoffset = i ; outIndex += x [ xoffset + 1 ] ; } if ( ( outIndex > 0.0 ) &&
obj_p -> pOverflowFlag ) { obj_p -> pOverflowFlag = false ; } memset ( &
dout_re [ 0 ] , 0 , sizeof ( int32_T ) << 8U ) ; memset ( & dout_im [ 0 ] , 0
, sizeof ( int32_T ) << 8U ) ; for ( i = 0 ; i < 256 ; i ++ ) { outIndex = i
; memcpy ( & obj_e [ 0 ] , & obj -> pBitReverseTable_F [ 0 ] , sizeof (
real_T ) << 8 ) ; twdlIndex = edlzhlng3g ( outIndex , obj_e ) ; dout_re [ (
int32_T ) ( twdlIndex + 1.0 ) - 1 ] = din_re [ ( int32_T ) outIndex ] ;
dout_im [ ( int32_T ) ( twdlIndex + 1.0 ) - 1 ] = din_im [ ( int32_T )
outIndex ] ; } } static void nfj5chyldu ( iqgjshdk3v * obj , uint32_T
varargin_1 , boolean_T varargin_2 ) { static const int32_T offsets [ 4 ] = {
0 , 1 , 2 , 3 } ; __m128i tmp ; iqgjshdk3v * obj_e ; iqgjshdk3v * obj_p ;
cint32_T y [ 256 ] ; real_T b ; real_T c ; int32_T obj_i [ 256 ] ; int32_T
obj_m [ 256 ] ; int32_T pOutBuffer_im [ 256 ] ; int32_T pOutBuffer_re [ 256 ]
; int32_T end ; int32_T i ; int32_T k_size_idx_1 ; int32_T loop_ub ; int32_T
scalarLB ; int32_T trueCount ; int32_T vectorUB ; uint32_T inSample_data ;
boolean_T startOut ; boolean_T value ; if ( obj -> pResetStart ) { obj_p =
obj ; obj_p -> pResetStart = false ; } obj_p = obj ; if ( obj_p ->
pResetStart ) { eqfgxr42k2 ( obj_p ) ; } fwo3b3wody ( obj , varargin_2 ) ;
obj_p = obj ; startOut = obj_p -> pStartOutputPort [ 1 ] ; switch ( ( int32_T
) obj_p -> pState ) { case 0 : obj_p -> pState = 0.0 ; obj_e = obj_p ; obj_e
-> pRdyReg = true ; obj_p -> pOutCnt = 0.0 ; obj_e = obj_p ; obj_e -> pWrEnb
= false ; if ( varargin_2 ) { obj_e = obj_p ; obj_e -> pWrEnb = true ; obj_p
-> pSampleCnt ++ ; obj_p -> pState = 1.0 ; } break ; case 1 : obj_p -> pState
= 1.0 ; if ( varargin_2 ) { if ( obj_p -> pSampleCnt == 255.0 ) { obj_e =
obj_p ; obj_e -> pRdyReg = false ; obj_e = obj_p ; obj_e -> pWrEnb = true ;
obj_p -> pSampleCnt = 0.0 ; obj_p -> pState = 2.0 ; } else { obj_p ->
pSampleCnt ++ ; obj_e = obj_p ; obj_e -> pWrEnb = true ; obj_p -> pRdyReg =
true ; } } break ; case 2 : obj_p -> pState = 3.0 ; obj_p -> pSampleCnt = 0.0
; obj_e = obj_p ; obj_e -> pWrEnb = false ; if ( varargin_2 ) { obj_e = obj_p
; obj_e -> pWrEnb = true ; obj_p -> pSampleCnt ++ ; } break ; case 3 : obj_p
-> pState = 3.0 ; obj_e = obj_p ; obj_e -> pWrEnb = false ; if ( startOut ) {
obj_p -> pOutCnt ++ ; obj_p -> pState = 4.0 ; } break ; case 4 : if ( obj_p
-> pOutCnt == 125.0 ) { obj_p -> pOutCnt = 0.0 ; obj_e = obj_p ; obj_e ->
pRdyReg = true ; obj_p -> pState = 0.0 ; } else { obj_p -> pOutCnt ++ ; }
break ; default : obj_p -> pState = 0.0 ; obj_e = obj_p ; obj_e -> pRdyReg =
true ; obj_p -> pSampleCnt = 0.0 ; obj_p -> pOutCnt = 0.0 ; obj_p -> pWrEnb =
false ; break ; } startOut = ! nkknxdq4xa ( ) ; startOut = ( varargin_2 &&
startOut ) ; obj_p = obj ; value = obj_p -> pWrEnb ; startOut = ( startOut &&
value ) ; trueCount = 0 ; if ( startOut ) { for ( i = 0 ; i < 1 ; i ++ ) {
trueCount ++ ; } } loop_ub = trueCount - 1 ; for ( end = 0 ; end <= loop_ub ;
end ++ ) { inSample_data = varargin_1 ; } startOut = ( trueCount == 0 ) ; if
( ! startOut ) { b = obj -> pInBufferIndex ; c = ( obj -> pInBufferIndex + (
real_T ) trueCount ) - 1.0 ; startOut = ( b > c ) ; if ( startOut ) { i = 0 ;
} else { i = ( int32_T ) b - 1 ; } for ( end = 0 ; end < trueCount ; end ++ )
{ obj -> pInBuffer_re [ i + end ] = ( int32_T ) inSample_data ; } b = obj ->
pInBufferIndex ; c = ( obj -> pInBufferIndex + ( real_T ) trueCount ) - 1.0 ;
startOut = ( b > c ) ; if ( startOut ) { i = 0 ; end = - 1 ; } else { i = (
int32_T ) b - 1 ; end = ( int32_T ) c - 1 ; } k_size_idx_1 = ( end - i ) + 1
; loop_ub = end - i ; scalarLB = ( loop_ub + 1 ) & - 4 ; vectorUB = scalarLB
- 4 ; for ( end = 0 ; end <= vectorUB ; end += 4 ) { tmp = _mm_add_epi32 (
_mm_set1_epi32 ( i ) , _mm_add_epi32 ( _mm_set1_epi32 ( end ) ,
_mm_loadu_si128 ( ( __m128i * ) & offsets [ 0 ] ) ) ) ; _mm_storeu_si128 ( (
__m128i * ) & rtB . k_data [ end ] , tmp ) ; } for ( end = scalarLB ; end <=
loop_ub ; end ++ ) { rtB . k_data [ end ] = i + end ; } for ( end = 0 ; end <
k_size_idx_1 ; end ++ ) { obj -> pInBuffer_im [ rtB . k_data [ end ] ] = 0 ;
} obj -> pInBufferIndex += ( real_T ) trueCount ; if ( obj -> pInBufferIndex
- 1.0 >= 256.0 ) { memcpy ( & obj_i [ 0 ] , & ( * ( int32_T ( * ) [ 256 ] ) &
obj -> pInBuffer_re [ 0 ] ) [ 0 ] , sizeof ( int32_T ) << 8 ) ; memcpy ( &
obj_m [ 0 ] , & ( * ( int32_T ( * ) [ 256 ] ) & obj -> pInBuffer_im [ 0 ] ) [
0 ] , sizeof ( int32_T ) << 8 ) ; ldjqx24n40 ( obj , obj_i , obj_m ,
pOutBuffer_re , pOutBuffer_im ) ; for ( i = 0 ; i < 256 ; i ++ ) { y [ i ] .
re = pOutBuffer_re [ i ] ; y [ i ] . im = pOutBuffer_im [ i ] ; } obj_p = obj
; for ( i = 0 ; i < 256 ; i ++ ) { b = ( real_T ) i + 1.0 ; obj_p ->
pOutBuffer_cmplx [ ( int32_T ) obj_p -> pWrOutBuffer_index - 1 ] = y [ (
int32_T ) b - 1 ] ; if ( obj_p -> pWrOutBuffer_index < 6144.0 ) { obj_p ->
pWrOutBuffer_index ++ ; } else { obj_p -> pWrOutBuffer_index = 1.0 ; obj_e =
obj_p ; value = ! obj_p -> pWrOutBuffer_roll ; obj_e -> pWrOutBuffer_roll =
value ; } } obj -> pInBufferIndex -= 256.0 ; for ( end = 0 ; end < 2816 ; end
++ ) { rtB . k_data [ end ] = obj -> pInBuffer_re [ ( end + 257 ) - 1 ] ; }
memset ( & rtB . k_data [ 2816 ] , 0 , sizeof ( int32_T ) << 8U ) ; for ( end
= 0 ; end < 3072 ; end ++ ) { obj -> pInBuffer_re [ end ] = rtB . k_data [
end ] ; } for ( end = 0 ; end < 2816 ; end ++ ) { rtB . k_data [ end ] = obj
-> pInBuffer_im [ ( end + 257 ) - 1 ] ; } memset ( & rtB . k_data [ 2816 ] ,
0 , sizeof ( int32_T ) << 8U ) ; for ( end = 0 ; end < 3072 ; end ++ ) { obj
-> pInBuffer_im [ end ] = rtB . k_data [ end ] ; } } } obj_p = obj ; obj_p ->
pSimTime ++ ; } void MdlInitialize ( void ) { iqgjshdk3v * obj_p ; jwzaobjvlz
* obj ; rtDW . feq2k5hyrq = rtP . Delay4_InitialCondition_lo5wt5wsup ; rtDW .
jsgyz1qcth = rtP . Delay3_InitialCondition ; rtDW . nnreceeeob = rtP .
Delay5_InitialCondition ; rtDW . l0wgyztcbo = rtP . Delay1_InitialCondition ;
rtDW . dl24d3xbii = rtP . Delay_InitialCondition ; rtDW . oorrier0f2 = rtP .
Delay_InitialCondition_bnlicvg4x5 ; rtDW . nktiitfvs5 = 0U ; rtDW .
nqcyti2ov4 = rtP . Delay4_InitialCondition_lmewri3pdc ; rtDW . gwrnkftzef =
rtP . Delay3_InitialCondition_pickqde1ag ; rtDW . b52mktt2zz = rtP .
Delay5_InitialCondition_ik0uapiiiu ; rtDW . ngjwiyysws = rtP .
Delay1_InitialCondition_k0qiqlztjz ; rtDW . oyp1nx1y0d = rtP .
Delay_InitialCondition_hj3wqbizb5 ; rtDW . nw4ierg2mf = 0U ; rtDW .
ceeuccxr3s = rtP . Delay4_InitialCondition_f1j4135pnp ; rtDW . dwn4wwhy2y =
rtP . Delay3_InitialCondition_k1euoqie50 ; rtDW . jx4h2wbup3 = rtP .
Delay5_InitialCondition_m2inlzix1d ; rtDW . bio2vh5c4c = rtP .
Delay1_InitialCondition_anmb4aswmb ; rtDW . lmcosoxm0k = rtP .
Delay_InitialCondition_nyvai1lye2 ; rtDW . gvqew00wty = 0U ; rtDW .
lv3ck33lyh = rtP . Delay4_InitialCondition_mudvlctgst ; rtDW . mmzjnp1uww =
rtP . Delay3_InitialCondition_prak4zttvc ; rtDW . em01ku2qsr = rtP .
Delay5_InitialCondition_m0hyxmjxie ; rtDW . el0lvpuekz = rtP .
Delay1_InitialCondition_lvsyliwo3l ; rtDW . kohozqm44k = rtP .
Delay_InitialCondition_niqoq5ke02 ; rtDW . gnviqudpd4 [ 0 ] = rtP .
Delay_InitialCondition_ltuwqrdhlx ; rtDW . plhu0vyzl3 [ 0 ] = rtP .
Delay2_InitialCondition ; rtDW . gk2im0n30c [ 0 ] = rtP .
Delay2_InitialCondition_bdi2hgqnsd ; rtDW . cv4jadh1hz [ 0 ] = rtP .
Delay2_InitialCondition_gawb3gb4t4 ; rtDW . pva255ly42 [ 0 ] = rtP .
Delay2_InitialCondition_jnqe2wfvxz ; rtDW . gnviqudpd4 [ 1 ] = rtP .
Delay_InitialCondition_ltuwqrdhlx ; rtDW . plhu0vyzl3 [ 1 ] = rtP .
Delay2_InitialCondition ; rtDW . gk2im0n30c [ 1 ] = rtP .
Delay2_InitialCondition_bdi2hgqnsd ; rtDW . cv4jadh1hz [ 1 ] = rtP .
Delay2_InitialCondition_gawb3gb4t4 ; rtDW . pva255ly42 [ 1 ] = rtP .
Delay2_InitialCondition_jnqe2wfvxz ; rtDW . ccefl3hqw4 = 0U ; rtDW .
nft1hjwjii = rtP . randSeed1 ; RandSrcInitState_GZ ( & rtDW . nft1hjwjii , &
rtDW . dr4qhxhwfg [ 0 ] , 1 ) ; rtDW . fygen3nvd5 = rtP .
HydroRefUniform_rawSeed ; RandSrcInitState_U_64 ( & rtDW . fygen3nvd5 , &
rtDW . oo11jil2fj [ 0 ] , 1 ) ; rtDW . jnmbtix4it = 0 ; rtDW . ijvf4opeah =
rtP . randSeed2 ; RandSrcInitState_GZ ( & rtDW . ijvf4opeah , & rtDW .
os4r2mn3bs [ 0 ] , 1 ) ; rtDW . fvkxtqdmvc = rtP . Hydro1Uniform_rawSeed ;
RandSrcInitState_U_64 ( & rtDW . fvkxtqdmvc , & rtDW . a32edo1wit [ 0 ] , 1 )
; rtDW . bfzub4gldc = 0 ; rtDW . kkfiu0cmbj = rtP . randSeed3 ;
RandSrcInitState_GZ ( & rtDW . kkfiu0cmbj , & rtDW . hjbuyzppp0 [ 0 ] , 1 ) ;
rtDW . mnzg33f1u3 = rtP . Hydro2Uniform_rawSeed ; RandSrcInitState_U_64 ( &
rtDW . mnzg33f1u3 , & rtDW . nxiegp2np2 [ 0 ] , 1 ) ; rtDW . dkepphtq0p = 0 ;
rtDW . dlrpd20j4u = rtP . randSeed4 ; RandSrcInitState_GZ ( & rtDW .
dlrpd20j4u , & rtDW . gfyphbttiz [ 0 ] , 1 ) ; rtDW . nhov5hvn4g = rtP .
Hydro3Uniform_rawSeed ; RandSrcInitState_U_64 ( & rtDW . nhov5hvn4g , & rtDW
. anify3zav4 [ 0 ] , 1 ) ; rtDW . e1m3m031zp = 0 ; rtDW . nnty3e15zo = rtP .
Delay_InitialCondition_orxywa3mun ; rtDW . mvicvyd4ab = rtP .
Delay_InitialCondition_jfvt1t4w5q ; rtDW . kdsiyo0fhb = rtP .
Delay_InitialCondition_cx2vyd0dua ; rtDW . a2zb4ls2ku = rtP .
Delay_InitialCondition_bw4pyzqhu0 ; rtDW . dsoc41t3j0 = rtP .
Delay_InitialCondition_jlvaialaps ; rtDW . hnvrararos = rtP .
accumulator_InitialCondition ; rtDW . hxfv4spray = rtP .
Delay5_InitialCondition_lqhfqdrstc ; rtDW . ncvdu1kcxh = rtP .
Delay1_InitialCondition_lcwjl5um2b ; rtDW . arkwssm1yy = rtP .
Count_reg_InitialCondition ; rtDW . dq53bdyvmu = rtP .
Delay3_InitialCondition_mbrzy231ng ; rtDW . mff3u0pd5g = rtP .
Delay4_InitialCondition ; cjjohoq4av ( & rtB . l4kbtxpaxe , & rtP .
l4kbtxpaxe ) ; i1dgnkmamr ( & rtB . popnzdb3ry , & rtP . popnzdb3ry ) ;
iistrscvzn ( & rtB . kb0c50ld2h , & rtP . kb0c50ld2h ) ; dnxy44omtu ( & rtB .
kpjzhjqrqw , & rtP . kpjzhjqrqw ) ; iistrscvzn ( & rtB . jgkqqwc2m5a , & rtP
. jgkqqwc2m5a ) ; dnxy44omtu ( & rtB . aqmj5gejllk , & rtP . aqmj5gejllk ) ;
iistrscvzn ( & rtB . hvquu0midq , & rtP . hvquu0midq ) ; dnxy44omtu ( & rtB .
eygzwxr3yp , & rtP . eygzwxr3yp ) ; iistrscvzn ( & rtB . gis5nx3d51 , & rtP .
gis5nx3d51 ) ; dnxy44omtu ( & rtB . ep4zp2asi5 , & rtP . ep4zp2asi5 ) ; rtB .
dzolba3omv = rtP . Heading_Y0 ; rtB . j5nnsx2ha4 = rtP . Frquence_Y0 ; rtB .
fjeujynzc4 = rtP . Elevation_Y0 ; cjjohoq4av ( & rtB . n014eikjcjy , & rtP .
n014eikjcjy ) ; i1dgnkmamr ( & rtB . nirnnu0kb5e , & rtP . nirnnu0kb5e ) ;
feadimwoyv ( & rtB . otw02eo3ue3 , & rtP . otw02eo3ue3 ) ; feadimwoyv ( & rtB
. hamu3nooom , & rtP . hamu3nooom ) ; cjjohoq4av ( & rtB . fhzqhbrdcr , & rtP
. fhzqhbrdcr ) ; i1dgnkmamr ( & rtB . ppbi33hazt , & rtP . ppbi33hazt ) ;
feadimwoyv ( & rtB . etzyrbzjj0 , & rtP . etzyrbzjj0 ) ; feadimwoyv ( & rtB .
hsz3hkboep , & rtP . hsz3hkboep ) ; cjjohoq4av ( & rtB . jesurwi24z , & rtP .
jesurwi24z ) ; i1dgnkmamr ( & rtB . ifacholhbj , & rtP . ifacholhbj ) ;
feadimwoyv ( & rtB . gqsds1azit , & rtP . gqsds1azit ) ; feadimwoyv ( & rtB .
kcj1xw2fyj , & rtP . kcj1xw2fyj ) ; feadimwoyv ( & rtB . kwch3e15c1 , & rtP .
kwch3e15c1 ) ; feadimwoyv ( & rtB . crejvlo0y5 , & rtP . crejvlo0y5 ) ; rtB .
dzkfl5rhnk = rtP . _Y0 ; rtB . ap04dfb20d = rtP . SNRcheck_Y0 ; rtB .
lil4t41v4y = rtP . Debug_Y0 ; obj = & rtDW . grqziysskz ; ovh3t030ey ( obj )
; obj_p = & rtDW . ermnepihcn ; eqfgxr42k2 ( obj_p ) ; obj = & rtDW .
azbznqzcih ; ovh3t030ey ( obj ) ; obj_p = & rtDW . nbiqr5wspw ; eqfgxr42k2 (
obj_p ) ; e3o3wzmuod ( & rtDW . jrnktqme1n3b ) ; j2f4wbcgvd ( & rtDW .
lyyly4yad2e2 ) ; e3o3wzmuod ( & rtDW . jrnktqme1n3b1 ) ; j2f4wbcgvd ( & rtDW
. lyyly4yad2e2d ) ; } void MdlStart ( void ) { iqgjshdk3v * b_obj_p ;
jwzaobjvlz * b_obj ; { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { { sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath
= sdiGetLabelFromChars ( "Simulation_DOA_rearanged/Heading" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoCreateFixedPointDataType_BinaryPointScaling ( 0 , 1 , 31 , 28 ) ;
{ sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims . nDims
= 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. d2vy4yaoku . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"b8815337-4128-4c31-a742-d4527c686b80" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . d2vy4yaoku . AQHandles )
{ ssCachePointer ( rtS , & ( rtDW . d2vy4yaoku . AQHandles ) ) ;
sdiSetSignalSampleTimeString ( rtDW . d2vy4yaoku . AQHandles , "1.95313e-07"
, 1.953125E-7 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW .
d2vy4yaoku . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . d2vy4yaoku . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . d2vy4yaoku . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . d2vy4yaoku . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . d2vy4yaoku . AQHandles , 2 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Simulation_DOA_rearanged/Frequency" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoCreateFixedPointDataType_BinaryPointScaling ( 0 , 0 , 27 , 0 ) ;
{ sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1
; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. hhgqqvjy4v . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"90137b18-2c15-48e3-990b-0398a07ac75e" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . hhgqqvjy4v . AQHandles )
{ ssCachePointer ( rtS , & ( rtDW . hhgqqvjy4v . AQHandles ) ) ;
sdiSetSignalSampleTimeString ( rtDW . hhgqqvjy4v . AQHandles , "1.95313e-07"
, 1.953125E-7 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW .
hhgqqvjy4v . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . hhgqqvjy4v . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . hhgqqvjy4v . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . hhgqqvjy4v . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . hhgqqvjy4v . AQHandles , 3 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Simulation_DOA_rearanged/Elevation" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. kyxq1kl0ma . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"a28c0c49-4ea6-4ba7-8230-77e12bfadbf2" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . kyxq1kl0ma . AQHandles )
{ ssCachePointer ( rtS , & ( rtDW . kyxq1kl0ma . AQHandles ) ) ;
sdiSetSignalSampleTimeString ( rtDW . kyxq1kl0ma . AQHandles , "1.95313e-07"
, 1.953125E-7 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW .
kyxq1kl0ma . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . kyxq1kl0ma . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . kyxq1kl0ma . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . kyxq1kl0ma . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . kyxq1kl0ma . AQHandles , 4 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Simulation_DOA_rearanged/SNR_Check" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_BOOLEAN ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. o4pxgjuli2 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"87101ed6-3f82-4447-a2ee-c825cc5631d4" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . o4pxgjuli2 . AQHandles )
{ ssCachePointer ( rtS , & ( rtDW . o4pxgjuli2 . AQHandles ) ) ;
sdiSetSignalSampleTimeString ( rtDW . o4pxgjuli2 . AQHandles , "1.95313e-07"
, 1.953125E-7 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW .
o4pxgjuli2 . AQHandles , ssGetTaskTime ( rtS , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . o4pxgjuli2 . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . o4pxgjuli2 . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . o4pxgjuli2 . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . o4pxgjuli2 . AQHandles , 1 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { FWksInfo *
fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof (
FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "pingRef" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . FromWorkspace_Data0 ; fromwksInfo -> nDataPoints =
36449 ; fromwksInfo -> time = ( double * ) rtP . FromWorkspace_Time0 ; rtDW .
kkydb1gjmz . TimePtr = fromwksInfo -> time ; rtDW . kkydb1gjmz . DataPtr =
fromwksInfo -> data ; rtDW . kkydb1gjmz . RSimInfoPtr = fromwksInfo ;
ssCachePointer ( rtS , & ( rtDW . kkydb1gjmz . TimePtr ) ) ; ssCachePointer (
rtS , & ( rtDW . kkydb1gjmz . DataPtr ) ) ; ssCachePointer ( rtS , & ( rtDW .
kkydb1gjmz . RSimInfoPtr ) ) ; } rtDW . nbltkbxya0 . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "sig1_generate" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . FromWorkspace_Data0_i5gvxdearu ; fromwksInfo ->
nDataPoints = 64000 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace_Time0_ptk5nrwdws ; rtDW . nl1bpgswzl . TimePtr = fromwksInfo ->
time ; rtDW . nl1bpgswzl . DataPtr = fromwksInfo -> data ; rtDW . nl1bpgswzl
. RSimInfoPtr = fromwksInfo ; ssCachePointer ( rtS , & ( rtDW . nl1bpgswzl .
TimePtr ) ) ; ssCachePointer ( rtS , & ( rtDW . nl1bpgswzl . DataPtr ) ) ;
ssCachePointer ( rtS , & ( rtDW . nl1bpgswzl . RSimInfoPtr ) ) ; } rtDW .
iawnirxblf . PrevIndex = 0 ; } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo
= ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) {
ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "ping1" ; fromwksInfo -> origDataTypeId
= 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo -> origWidth = 1 ;
fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo -> data = ( void
* ) rtP . FromWorkspace1_Data0 ; fromwksInfo -> nDataPoints = 36449 ;
fromwksInfo -> time = ( double * ) rtP . FromWorkspace1_Time0 ; rtDW .
blfyjbjksw . TimePtr = fromwksInfo -> time ; rtDW . blfyjbjksw . DataPtr =
fromwksInfo -> data ; rtDW . blfyjbjksw . RSimInfoPtr = fromwksInfo ;
ssCachePointer ( rtS , & ( rtDW . blfyjbjksw . TimePtr ) ) ; ssCachePointer (
rtS , & ( rtDW . blfyjbjksw . DataPtr ) ) ; ssCachePointer ( rtS , & ( rtDW .
blfyjbjksw . RSimInfoPtr ) ) ; } rtDW . g3l243y1u3 . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "sig2_generate" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . FromWorkspace1_Data0_nosxsmx3gj ; fromwksInfo ->
nDataPoints = 64000 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace1_Time0_jkinope2nl ; rtDW . o3pnclbg5l . TimePtr = fromwksInfo
-> time ; rtDW . o3pnclbg5l . DataPtr = fromwksInfo -> data ; rtDW .
o3pnclbg5l . RSimInfoPtr = fromwksInfo ; ssCachePointer ( rtS , & ( rtDW .
o3pnclbg5l . TimePtr ) ) ; ssCachePointer ( rtS , & ( rtDW . o3pnclbg5l .
DataPtr ) ) ; ssCachePointer ( rtS , & ( rtDW . o3pnclbg5l . RSimInfoPtr ) )
; } rtDW . eycujnig4l . PrevIndex = 0 ; } { FWksInfo * fromwksInfo ; if ( (
fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL )
) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "ping2" ; fromwksInfo -> origDataTypeId
= 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo -> origWidth = 1 ;
fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo -> data = ( void
* ) rtP . FromWorkspace2_Data0 ; fromwksInfo -> nDataPoints = 36449 ;
fromwksInfo -> time = ( double * ) rtP . FromWorkspace2_Time0 ; rtDW .
cik5yfvopb . TimePtr = fromwksInfo -> time ; rtDW . cik5yfvopb . DataPtr =
fromwksInfo -> data ; rtDW . cik5yfvopb . RSimInfoPtr = fromwksInfo ;
ssCachePointer ( rtS , & ( rtDW . cik5yfvopb . TimePtr ) ) ; ssCachePointer (
rtS , & ( rtDW . cik5yfvopb . DataPtr ) ) ; ssCachePointer ( rtS , & ( rtDW .
cik5yfvopb . RSimInfoPtr ) ) ; } rtDW . h2ju2tf3mj . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "sig3_generate" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . FromWorkspace2_Data0_oj3slyh5nl ; fromwksInfo ->
nDataPoints = 64000 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace2_Time0_hiuucoxmdi ; rtDW . i44vfztycq . TimePtr = fromwksInfo
-> time ; rtDW . i44vfztycq . DataPtr = fromwksInfo -> data ; rtDW .
i44vfztycq . RSimInfoPtr = fromwksInfo ; ssCachePointer ( rtS , & ( rtDW .
i44vfztycq . TimePtr ) ) ; ssCachePointer ( rtS , & ( rtDW . i44vfztycq .
DataPtr ) ) ; ssCachePointer ( rtS , & ( rtDW . i44vfztycq . RSimInfoPtr ) )
; } rtDW . flbfwgerrm . PrevIndex = 0 ; } { FWksInfo * fromwksInfo ; if ( (
fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL )
) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "ping3" ; fromwksInfo -> origDataTypeId
= 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo -> origWidth = 1 ;
fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo -> data = ( void
* ) rtP . FromWorkspace3_Data0 ; fromwksInfo -> nDataPoints = 36449 ;
fromwksInfo -> time = ( double * ) rtP . FromWorkspace3_Time0 ; rtDW .
j2pd5q2ore . TimePtr = fromwksInfo -> time ; rtDW . j2pd5q2ore . DataPtr =
fromwksInfo -> data ; rtDW . j2pd5q2ore . RSimInfoPtr = fromwksInfo ;
ssCachePointer ( rtS , & ( rtDW . j2pd5q2ore . TimePtr ) ) ; ssCachePointer (
rtS , & ( rtDW . j2pd5q2ore . DataPtr ) ) ; ssCachePointer ( rtS , & ( rtDW .
j2pd5q2ore . RSimInfoPtr ) ) ; } rtDW . giitlnmjsq . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "sig4_generate" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . FromWorkspace3_Data0_g4i3qf1zgi ; fromwksInfo ->
nDataPoints = 64000 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace3_Time0_hcdwgnsiex ; rtDW . iqoyvk1xwu . TimePtr = fromwksInfo
-> time ; rtDW . iqoyvk1xwu . DataPtr = fromwksInfo -> data ; rtDW .
iqoyvk1xwu . RSimInfoPtr = fromwksInfo ; ssCachePointer ( rtS , & ( rtDW .
iqoyvk1xwu . TimePtr ) ) ; ssCachePointer ( rtS , & ( rtDW . iqoyvk1xwu .
DataPtr ) ) ; ssCachePointer ( rtS , & ( rtDW . iqoyvk1xwu . RSimInfoPtr ) )
; } rtDW . ef0vh4kl2l . PrevIndex = 0 ; } rtDW . gqoxt5atim = 0U ; b_obj = &
rtDW . grqziysskz ; b_obj -> isInitialized = 0 ; rtDW . pt4yh5gdha = true ;
f3f13aoaly ( & rtDW . grqziysskz ) ; b_obj_p = & rtDW . ermnepihcn ; b_obj_p
-> isInitialized = 0 ; rtDW . adtpgbwbkv = true ; f3f13aoalyr ( & rtDW .
ermnepihcn ) ; b_obj = & rtDW . azbznqzcih ; b_obj -> isInitialized = 0 ;
rtDW . pxcwuzk4ix = true ; f3f13aoaly ( & rtDW . azbznqzcih ) ; { FWksInfo *
fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof (
FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "enableTime" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . FromWorkspace4_Data0 ; fromwksInfo -> nDataPoints
= 728980 ; fromwksInfo -> time = ( double * ) rtP . FromWorkspace4_Time0 ;
rtDW . cuqwodigqn . TimePtr = fromwksInfo -> time ; rtDW . cuqwodigqn .
DataPtr = fromwksInfo -> data ; rtDW . cuqwodigqn . RSimInfoPtr = fromwksInfo
; ssCachePointer ( rtS , & ( rtDW . cuqwodigqn . TimePtr ) ) ; ssCachePointer
( rtS , & ( rtDW . cuqwodigqn . DataPtr ) ) ; ssCachePointer ( rtS , & ( rtDW
. cuqwodigqn . RSimInfoPtr ) ) ; } rtDW . gvlgkjwrhe . PrevIndex = 0 ; }
b_obj_p = & rtDW . nbiqr5wspw ; b_obj_p -> isInitialized = 0 ; rtDW .
nnxhgghgr4 = true ; f3f13aoalyr ( & rtDW . nbiqr5wspw ) ; orkrodumau ( & rtDW
. jrnktqme1n3b ) ; lf3htxmgjl ( & rtDW . lyyly4yad2e2 ) ; orkrodumau ( & rtDW
. jrnktqme1n3b1 ) ; lf3htxmgjl ( & rtDW . lyyly4yad2e2d ) ; MdlInitialize ( )
; } void MdlOutputs ( int_T tid ) { int128m_T tmp_b ; int128m_T tmp_c ;
int128m_T tmp_d ; int128m_T tmp_k ; int128m_T tmp_l ; iqgjshdk3v * obj_e ;
iqgjshdk3v * obj_i ; iqgjshdk3v * obj_p ; jwzaobjvlz * obj ; uint128m_T tmp_f
; uint128m_T tmp_n ; int64_T tmp_m ; real_T dataInOutMem ; real_T obj_pCurSOF
; uint64_T tmp_g ; uint64_T tmp_j ; int32_T b_varargout_2 ; int32_T
tableOffset ; int16_T tmp [ 9 ] ; int16_T tmp_e ; int16_T tmp_i ; int16_T
tmp_p ; boolean_T endOut ; boolean_T guard1 = false ; boolean_T readyOut ;
boolean_T zcEvent ; SimStruct * S ; void * diag ; srClearBC ( rtDW .
at5rpeawoo ) ; srClearBC ( rtDW . otw02eo3ue3 . gyucjoxwjz ) ; srClearBC (
rtDW . n014eikjcjy . c1gzfpfi1s ) ; srClearBC ( rtDW . jgkqqwc2m5a .
arvghscytc ) ; srClearBC ( rtDW . nirnnu0kb5e . pobr4kqks2 ) ; srClearBC (
rtDW . aqmj5gejllk . loskfbob5b ) ; srClearBC ( rtDW . n3px15f5qg ) ;
srClearBC ( rtDW . jhxoqbpjsq ) ; rtB . bxwcxvlcty = rtDW . gnviqudpd4 [ 0 ]
; rtY . lhka424xlu = rtB . bxwcxvlcty ; rtB . e4uxf3jebt = rtDW . feq2k5hyrq
; rtB . ays0cxwjgc = ! rtB . e4uxf3jebt ; rtB . hespxibzur = rtDW .
jsgyz1qcth ; rtB . mmfoimpc5s = rtDW . nnreceeeob ; rtB . aocicufjnb = ( rtB
. hespxibzur < rtB . mmfoimpc5s ) ; rtB . hwoxkcxmnw = rtDW . l0wgyztcbo ;
rtB . be0433drgy = ( rtB . mmfoimpc5s > rtB . hwoxkcxmnw ) ; rtB . ac44xbjyzx
= rtDW . dl24d3xbii ; rtB . nvp5saf4vt = ( rtP . Constant1_Value_nlf2bzkh50
>= rtB . ac44xbjyzx ) ; rtB . a42sd0byju = ( ( rtB . ac44xbjyzx << 1 ) >= rtP
. Constant2_Value_gobzdswdh5 ) ; rtB . cnf1xgsxjm = ( rtB . aocicufjnb && rtB
. be0433drgy && rtB . nvp5saf4vt && rtB . a42sd0byju ) ; rtB . iddapcucwk = (
rtB . ays0cxwjgc || rtB . cnf1xgsxjm ) ; rtB . im2uw1tffv = rtDW . oorrier0f2
; n014eikjcj ( rtB . iddapcucwk , rtB . im2uw1tffv , & rtB . l4kbtxpaxe , &
rtDW . l4kbtxpaxe , & rtPrevZCX . l4kbtxpaxe ) ; nirnnu0kb5 ( rtB .
e4uxf3jebt , rtB . l4kbtxpaxe . pp2wmkmgqd , & rtB . popnzdb3ry , & rtDW .
popnzdb3ry , & rtPrevZCX . popnzdb3ry ) ; rtB . hffhj2j3tb = rtDW .
plhu0vyzl3 [ rtDW . nktiitfvs5 ] ; jgkqqwc2m5 ( rtB . iddapcucwk , rtB .
hffhj2j3tb , & rtB . kb0c50ld2h , & rtDW . kb0c50ld2h , & rtPrevZCX .
kb0c50ld2h ) ; aqmj5gejll ( rtB . e4uxf3jebt , rtB . kb0c50ld2h . cxqjp3z5g0
, & rtB . kpjzhjqrqw , & rtDW . kpjzhjqrqw , & rtPrevZCX . kpjzhjqrqw ) ; rtB
. ih3p5u1r2h = rtDW . nqcyti2ov4 ; rtB . pb4ejhsyzn = ! rtB . ih3p5u1r2h ;
rtB . ldkcvoyc05 = rtDW . gwrnkftzef ; rtB . k2i5ljo21q = rtDW . b52mktt2zz ;
rtB . pr5qzbgply = ( rtB . ldkcvoyc05 < rtB . k2i5ljo21q ) ; rtB . br33n3ewpf
= rtDW . ngjwiyysws ; rtB . dbaeye23k3 = ( rtB . k2i5ljo21q > rtB .
br33n3ewpf ) ; rtB . lgkhemwe21 = rtDW . oyp1nx1y0d ; rtB . p1zaumnujz = (
rtP . Constant1_Value_b1zttvkvok >= rtB . lgkhemwe21 ) ; rtB . ckkbsg4b5s = (
( rtB . lgkhemwe21 << 1 ) >= rtP . Constant2_Value_l5zecvkn2f ) ; rtB .
eq3toms2v4 = ( rtB . pr5qzbgply && rtB . dbaeye23k3 && rtB . p1zaumnujz &&
rtB . ckkbsg4b5s ) ; rtB . megyurvikr = ( rtB . pb4ejhsyzn || rtB .
eq3toms2v4 ) ; rtB . hjj4qeyaab = rtDW . gk2im0n30c [ rtDW . nw4ierg2mf ] ;
jgkqqwc2m5 ( rtB . megyurvikr , rtB . hjj4qeyaab , & rtB . jgkqqwc2m5a , &
rtDW . jgkqqwc2m5a , & rtPrevZCX . jgkqqwc2m5a ) ; aqmj5gejll ( rtB .
ih3p5u1r2h , rtB . jgkqqwc2m5a . cxqjp3z5g0 , & rtB . aqmj5gejllk , & rtDW .
aqmj5gejllk , & rtPrevZCX . aqmj5gejllk ) ; rtB . nvwgj11js1 = rtDW .
ceeuccxr3s ; rtB . m31yfjfxst = ! rtB . nvwgj11js1 ; rtB . acpkfkvmlz = rtDW
. dwn4wwhy2y ; rtB . k2e4mtxz0f = rtDW . jx4h2wbup3 ; rtB . jzseladqz5 = (
rtB . acpkfkvmlz < rtB . k2e4mtxz0f ) ; rtB . gzmx0g2ql4 = rtDW . bio2vh5c4c
; rtB . cj5quyrcyv = ( rtB . k2e4mtxz0f > rtB . gzmx0g2ql4 ) ; rtB .
i0htefbuzq = rtDW . lmcosoxm0k ; rtB . nal2meeth1 = ( rtP .
Constant1_Value_aczkv0m5ge >= rtB . i0htefbuzq ) ; rtB . bhcd2cpqy3 = ( ( rtB
. i0htefbuzq << 1 ) >= rtP . Constant2_Value_kgtjfzvqpt ) ; rtB . cdo1t005p0
= ( rtB . jzseladqz5 && rtB . cj5quyrcyv && rtB . nal2meeth1 && rtB .
bhcd2cpqy3 ) ; rtB . okhmnm0uka = ( rtB . m31yfjfxst || rtB . cdo1t005p0 ) ;
rtB . mdp1adv1zf = rtDW . cv4jadh1hz [ rtDW . gvqew00wty ] ; jgkqqwc2m5 ( rtB
. okhmnm0uka , rtB . mdp1adv1zf , & rtB . hvquu0midq , & rtDW . hvquu0midq ,
& rtPrevZCX . hvquu0midq ) ; aqmj5gejll ( rtB . nvwgj11js1 , rtB . hvquu0midq
. cxqjp3z5g0 , & rtB . eygzwxr3yp , & rtDW . eygzwxr3yp , & rtPrevZCX .
eygzwxr3yp ) ; rtB . fwqhnxdxba = rtDW . lv3ck33lyh ; rtB . othlvy4lcm = !
rtB . fwqhnxdxba ; rtB . nvqsjvsh1e = rtDW . mmzjnp1uww ; rtB . orlyixhwdt =
rtDW . em01ku2qsr ; rtB . cf2yz3yij0 = ( rtB . nvqsjvsh1e < rtB . orlyixhwdt
) ; rtB . hweouvpzaf = rtDW . el0lvpuekz ; rtB . haeikw2v0u = ( rtB .
orlyixhwdt > rtB . hweouvpzaf ) ; rtB . mira15b04v = rtDW . kohozqm44k ; rtB
. h4gt1s2quy = ( rtP . Constant1_Value_himxnbpp2r >= rtB . mira15b04v ) ; rtB
. azomz2512x = ( ( rtB . mira15b04v << 1 ) >= rtP .
Constant2_Value_fbnqm44bzy ) ; rtB . jz5sra12na = ( rtB . cf2yz3yij0 && rtB .
haeikw2v0u && rtB . h4gt1s2quy && rtB . azomz2512x ) ; rtB . j4zso4cshe = (
rtB . othlvy4lcm || rtB . jz5sra12na ) ; rtB . nyoa5rvtc2 = rtDW . pva255ly42
[ rtDW . ccefl3hqw4 ] ; jgkqqwc2m5 ( rtB . j4zso4cshe , rtB . nyoa5rvtc2 , &
rtB . gis5nx3d51 , & rtDW . gis5nx3d51 , & rtPrevZCX . gis5nx3d51 ) ;
aqmj5gejll ( rtB . fwqhnxdxba , rtB . gis5nx3d51 . cxqjp3z5g0 , & rtB .
ep4zp2asi5 , & rtDW . ep4zp2asi5 , & rtPrevZCX . ep4zp2asi5 ) ; zcEvent = (
rtB . bxwcxvlcty && ( rtPrevZCX . knv1wtfxqc != 1 ) ) ; if ( zcEvent ) {
tableOffset = rtB . aqmj5gejllk . owi3gr0gl5 - rtB . kpjzhjqrqw . owi3gr0gl5
; rtB . n5cj2elrim = ( tableOffset & 536870912U ) != 0U ? tableOffset | -
536870912 : tableOffset & 536870911 ; rtB . ezsbqyvnan [ 0 ] = ( int16_T ) (
rtB . n5cj2elrim >> 14 ) ; tableOffset = rtB . eygzwxr3yp . owi3gr0gl5 - rtB
. kpjzhjqrqw . owi3gr0gl5 ; rtB . kjjdd01ek3 = ( tableOffset & 536870912U )
!= 0U ? tableOffset | - 536870912 : tableOffset & 536870911 ; rtB .
ezsbqyvnan [ 1 ] = ( int16_T ) ( rtB . kjjdd01ek3 >> 14 ) ; tableOffset = rtB
. ep4zp2asi5 . owi3gr0gl5 - rtB . kpjzhjqrqw . owi3gr0gl5 ; rtB . gcx3vvlv01
= ( tableOffset & 536870912U ) != 0U ? tableOffset | - 536870912 :
tableOffset & 536870911 ; rtB . ezsbqyvnan [ 2 ] = ( int16_T ) ( rtB .
gcx3vvlv01 >> 14 ) ; for ( tableOffset = 0 ; tableOffset < 9 ; tableOffset ++
) { tmp [ tableOffset ] = rtP . Constant6_Value [ tableOffset ] ; } tmp_i =
rtB . ezsbqyvnan [ 0 ] ; tmp_e = rtB . ezsbqyvnan [ 1 ] ; tmp_p = rtB .
ezsbqyvnan [ 2 ] ; for ( tableOffset = 0 ; tableOffset < 3 ; tableOffset ++ )
{ b_varargout_2 = tmp [ tableOffset ] * tmp_i ; b_varargout_2 = (
b_varargout_2 & 1073741824U ) != 0U ? b_varargout_2 | - 1073741824 :
b_varargout_2 & 1073741823 ; b_varargout_2 += tmp [ tableOffset + 3 ] * tmp_e
; b_varargout_2 = ( b_varargout_2 & 1073741824U ) != 0U ? b_varargout_2 | -
1073741824 : b_varargout_2 & 1073741823 ; b_varargout_2 += tmp [ tableOffset
+ 6 ] * tmp_p ; b_varargout_2 = ( b_varargout_2 & 1073741824U ) != 0U ?
b_varargout_2 | - 1073741824 : b_varargout_2 & 1073741823 ; rtB . bceyt2gezt
[ tableOffset ] = b_varargout_2 ; } rtB . mqo1g135dm = ( real_T ) rtB .
bceyt2gezt [ 1 ] * 1.9073486328125E-6 ; rtB . bl0nn1bu04 = ( real_T ) rtB .
bceyt2gezt [ 0 ] * 1.9073486328125E-6 ; rtB . ghr21v0y4h = ( int64_T ) rtB .
bceyt2gezt [ 0 ] * rtB . bceyt2gezt [ 0 ] ; rtB . dsfwlmxmgm = ( int64_T )
rtB . bceyt2gezt [ 1 ] * rtB . bceyt2gezt [ 1 ] ; rtB . j5nnsx2ha4 = rtB .
popnzdb3ry . djc2e4rqrh * rtP . Constant5_Value_m1sv0yladi ; rtB . c0xui1wk2i
= ( uint64_T ) rtB . j5nnsx2ha4 * rtP . Constant1_Value_eeh12bmm2g ; tmp_g =
rtP . Constant10_Value_jsm3u35ioa ; rtB . ephpqceyqu = ( tmp_g == 0ULL ?
MAX_uint64_T : rtB . c0xui1wk2i / tmp_g ) & 17179869183ULL ; tmp_g = rtB .
ephpqceyqu ; tmp_j = rtB . ephpqceyqu ; uMultiWordMul ( & tmp_g , 1 , & tmp_j
, 1 , & tmp_f . chunks [ 0U ] , 2 ) ; rtB . axdfvwdyot = tmp_f ; tmp_f = rtB
. axdfvwdyot ; uMultiWordShl ( & tmp_f . chunks [ 0U ] , 2 , 32U , & tmp_n .
chunks [ 0U ] , 2 ) ; uMultiWord2MultiWord ( & tmp_n . chunks [ 0U ] , 2 , &
tmp_b . chunks [ 0U ] , 2 ) ; MultiWordSignedWrap ( & tmp_b . chunks [ 0U ] ,
2 , 26U , & tmp_k . chunks [ 0U ] ) ; sLong2MultiWord ( rtB . dsfwlmxmgm , &
tmp_l . chunks [ 0U ] , 2 ) ; MultiWordSignedWrap ( & tmp_l . chunks [ 0U ] ,
2 , 26U , & tmp_b . chunks [ 0U ] ) ; MultiWordSub ( & tmp_k . chunks [ 0U ]
, & tmp_b . chunks [ 0U ] , & tmp_c . chunks [ 0U ] , 2 ) ;
MultiWordSignedWrap ( & tmp_c . chunks [ 0U ] , 2 , 26U , & tmp_k . chunks [
0U ] ) ; rtB . lmktwyzsxa = tmp_k ; tmp_l = rtB . lmktwyzsxa ;
MultiWordSignedWrap ( & tmp_l . chunks [ 0U ] , 2 , 25U , & tmp_b . chunks [
0U ] ) ; sLong2MultiWord ( rtB . ghr21v0y4h , & tmp_d . chunks [ 0U ] , 2 ) ;
MultiWordSignedWrap ( & tmp_d . chunks [ 0U ] , 2 , 25U , & tmp_l . chunks [
0U ] ) ; MultiWordSub ( & tmp_b . chunks [ 0U ] , & tmp_l . chunks [ 0U ] , &
tmp_c . chunks [ 0U ] , 2 ) ; MultiWordSignedWrap ( & tmp_c . chunks [ 0U ] ,
2 , 25U , & tmp_b . chunks [ 0U ] ) ; rtB . oh0heldnt4 = tmp_b ; rtB .
o5vvxznplh = rt_sqrt_Us103En38_Yd_Id_f_s_snf ( rtB . oh0heldnt4 ) ; rtB .
h5qnu5edjj = rtB . o5vvxznplh / ( ( real_T ) rtB . ephpqceyqu * 0.125 ) ; rtB
. mjw0pogy4h = rtB . h5qnu5edjj ; rtB . cfsq0ynnzy = ( real_T ) rtB .
ephpqceyqu * 0.125 ; rtB . fy0onvvx1m = ( real_T ) rtB . dsfwlmxmgm *
3.637978807091713E-12 ; rtB . diytyms0az = ( real_T ) rtB . ghr21v0y4h *
3.637978807091713E-12 ; tmp_n = rtB . axdfvwdyot ; rtB . jwjh4vm5vv =
uMultiWord2Double ( & tmp_n . chunks [ 0U ] , 2 , 0 ) * 0.015625 ; tmp_c =
rtB . oh0heldnt4 ; rtB . pbeelgvdyf = sMultiWord2Double ( & tmp_c . chunks [
0U ] , 2 , 0 ) * 3.637978807091713E-12 ; rtB . dnyct00tit = ( real_T ) rtB .
bceyt2gezt [ 2 ] * 1.9073486328125E-6 ; rtB . dzolba3omv =
rt_atan2_Us31En19_Ys31En28_f_pw_cordic11 ( rtB . bceyt2gezt [ 1 ] , rtB .
bceyt2gezt [ 0 ] ) ; obj_pCurSOF = rtB . mjw0pogy4h ; if ( obj_pCurSOF > 1.0
) { obj_pCurSOF = 1.0 ; } else { if ( obj_pCurSOF < - 1.0 ) { obj_pCurSOF = -
1.0 ; } } rtB . fjeujynzc4 = muDoubleScalarAcos ( obj_pCurSOF ) ; rtDW .
at5rpeawoo = 4 ; } rtPrevZCX . knv1wtfxqc = rtB . bxwcxvlcty ; rtY .
glxdkvsqpv = rtB . dzolba3omv ; rtY . aflkhcj12l = rtB . j5nnsx2ha4 ; rtY .
oknxod1xye = rtB . fjeujynzc4 ; rtB . h0wwdil5ui = ( real_T ) rtB .
dzolba3omv * 3.7252902984619141E-9 + rtP . Constant5_Value ; if ( rtB .
dzolba3omv >= rtP . Switch_Threshold ) { rtB . pz0khc11b5 = ( real_T ) rtB .
dzolba3omv * 3.7252902984619141E-9 ; } else { rtB . pz0khc11b5 = rtB .
h0wwdil5ui ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { real_T * pDataValues
= ( real_T * ) rtDW . kkydb1gjmz . DataPtr ; real_T * pTimeValues = ( real_T
* ) rtDW . kkydb1gjmz . TimePtr ; int_T currTimeIndex = rtDW . nbltkbxya0 .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 1 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . kkydb1gjmz . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . nbltkbxya0 . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { rtB . cfkib4snni =
pDataValues [ currTimeIndex ] ; } else { rtB . cfkib4snni = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; rtB . cfkib4snni = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } obj_pCurSOF = muDoubleScalarFloor ( rtB .
cfkib4snni ) ; if ( muDoubleScalarIsNaN ( obj_pCurSOF ) ||
muDoubleScalarIsInf ( obj_pCurSOF ) ) { obj_pCurSOF = 0.0 ; } else {
obj_pCurSOF = muDoubleScalarRem ( obj_pCurSOF , 65536.0 ) ; } rtB .
cwy2gix3yr = ( uint16_T ) ( obj_pCurSOF < 0.0 ? ( int32_T ) ( uint16_T ) - (
int16_T ) ( uint16_T ) - obj_pCurSOF : ( int32_T ) ( uint16_T ) obj_pCurSOF )
; RandSrc_GZ_D ( & rtB . cnsob1xib2 , & rtP . HydroRefGaussian_MeanVal , 1 ,
& rtP . HydroRefGaussian_VarianceRTP , 1 , rtDW . dr4qhxhwfg , 1 , 1 ) ;
RandSrc_U_D ( & rtB . fisoyvpapb , & rtP . HydroRefUniform_MinVal , 1 , & rtP
. HydroRefUniform_MaxVal , 1 , rtDW . oo11jil2fj , 1 , 1 ) ; } if ( rtP .
noise_type != 0.0 ) { rtB . eulypohvkk = rtB . cnsob1xib2 ; } else { rtB .
eulypohvkk = rtB . fisoyvpapb ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB
. aeamlgo5gw = ( rtDW . jnmbtix4it < rtP . DiscretePulseGenerator_Duty ) && (
rtDW . jnmbtix4it >= 0 ) ? rtP . DiscretePulseGenerator_Amp : 0.0 ; if ( rtDW
. jnmbtix4it >= rtP . DiscretePulseGenerator_Period - 1.0 ) { rtDW .
jnmbtix4it = 0 ; } else { rtDW . jnmbtix4it ++ ; } { real_T * pDataValues = (
real_T * ) rtDW . nl1bpgswzl . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . nl1bpgswzl . TimePtr ; int_T currTimeIndex = rtDW . iawnirxblf .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 1 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . nl1bpgswzl . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . iawnirxblf . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { rtB . otre0btlht =
pDataValues [ currTimeIndex ] ; } else { rtB . otre0btlht = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; rtB . otre0btlht = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } rtB . lv4vwau52m = rtB . aeamlgo5gw * rtB .
otre0btlht ; } rtB . pseuhan1y2 = rtB . eulypohvkk + rtB . lv4vwau52m ; if (
rtP . noise_on_off ) { rtB . fjgn2cj4vb = rtB . pseuhan1y2 ; } else { rtB .
fjgn2cj4vb = rtB . lv4vwau52m ; } rtB . lh4yuikz0y = rtP . Constant8_Value +
rtB . fjgn2cj4vb ; rtB . bspaznhyu3 = rtB . lh4yuikz0y / rtP .
Constant19_Value ; rtB . mhihwha20c = rtB . bspaznhyu3 * rtP .
Constant12_Value ; rtB . h3ybus3uc4 = muDoubleScalarRound ( rtB . mhihwha20c
) ; obj_pCurSOF = muDoubleScalarFloor ( rtB . h3ybus3uc4 ) ; if (
muDoubleScalarIsNaN ( obj_pCurSOF ) || muDoubleScalarIsInf ( obj_pCurSOF ) )
{ obj_pCurSOF = 0.0 ; } else { obj_pCurSOF = muDoubleScalarRem ( obj_pCurSOF
, 65536.0 ) ; } rtB . ahhsj5tl3f = ( uint16_T ) ( obj_pCurSOF < 0.0 ? (
int32_T ) ( uint16_T ) - ( int16_T ) ( uint16_T ) - obj_pCurSOF : ( int32_T )
( uint16_T ) obj_pCurSOF ) ; if ( rtP . runSim ) { rtB . e3pd2awld2 = rtB .
cwy2gix3yr ; } else { rtB . e3pd2awld2 = rtB . ahhsj5tl3f ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { real_T * pDataValues = ( real_T * ) rtDW
. blfyjbjksw . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW .
blfyjbjksw . TimePtr ; int_T currTimeIndex = rtDW . g3l243y1u3 . PrevIndex ;
real_T t = ssGetTaskTime ( rtS , 1 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . blfyjbjksw . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . g3l243y1u3 . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { rtB . pdhm5ddrn5 =
pDataValues [ currTimeIndex ] ; } else { rtB . pdhm5ddrn5 = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; rtB . pdhm5ddrn5 = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } obj_pCurSOF = muDoubleScalarFloor ( rtB .
pdhm5ddrn5 ) ; if ( muDoubleScalarIsNaN ( obj_pCurSOF ) ||
muDoubleScalarIsInf ( obj_pCurSOF ) ) { obj_pCurSOF = 0.0 ; } else {
obj_pCurSOF = muDoubleScalarRem ( obj_pCurSOF , 65536.0 ) ; } rtB .
o5uklvuyrd = ( uint16_T ) ( obj_pCurSOF < 0.0 ? ( int32_T ) ( uint16_T ) - (
int16_T ) ( uint16_T ) - obj_pCurSOF : ( int32_T ) ( uint16_T ) obj_pCurSOF )
; RandSrc_GZ_D ( & rtB . geaxy0tifm , & rtP . Hydro1Gaussian_MeanVal , 1 , &
rtP . Hydro1Gaussian_VarianceRTP , 1 , rtDW . os4r2mn3bs , 1 , 1 ) ;
RandSrc_U_D ( & rtB . fwsifagno3 , & rtP . Hydro1Uniform_MinVal , 1 , & rtP .
Hydro1Uniform_MaxVal , 1 , rtDW . a32edo1wit , 1 , 1 ) ; } if ( rtP .
noise_type != 0.0 ) { rtB . a520fdraqw = rtB . geaxy0tifm ; } else { rtB .
a520fdraqw = rtB . fwsifagno3 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB
. aq5pk0b3dg = ( rtDW . bfzub4gldc < rtP . DiscretePulseGenerator1_Duty ) &&
( rtDW . bfzub4gldc >= 0 ) ? rtP . DiscretePulseGenerator1_Amp : 0.0 ; if (
rtDW . bfzub4gldc >= rtP . DiscretePulseGenerator1_Period - 1.0 ) { rtDW .
bfzub4gldc = 0 ; } else { rtDW . bfzub4gldc ++ ; } { real_T * pDataValues = (
real_T * ) rtDW . o3pnclbg5l . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . o3pnclbg5l . TimePtr ; int_T currTimeIndex = rtDW . eycujnig4l .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 1 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . o3pnclbg5l . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . eycujnig4l . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { rtB . fw0ry5jnvj =
pDataValues [ currTimeIndex ] ; } else { rtB . fw0ry5jnvj = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; rtB . fw0ry5jnvj = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } rtB . o1yqldlqxa = rtB . aq5pk0b3dg * rtB .
fw0ry5jnvj ; } rtB . frlnsjjc1e = rtB . a520fdraqw + rtB . o1yqldlqxa ; if (
rtP . noise_on_off ) { rtB . m2nqhnhosf = rtB . frlnsjjc1e ; } else { rtB .
m2nqhnhosf = rtB . o1yqldlqxa ; } rtB . kizepetnhb = rtP . Constant9_Value +
rtB . m2nqhnhosf ; rtB . bnjhosy04c = rtB . kizepetnhb / rtP .
Constant18_Value ; rtB . kdy34jl3d0 = rtB . bnjhosy04c * rtP .
Constant13_Value ; rtB . jiv0ptzxj3 = muDoubleScalarRound ( rtB . kdy34jl3d0
) ; obj_pCurSOF = muDoubleScalarFloor ( rtB . jiv0ptzxj3 ) ; if (
muDoubleScalarIsNaN ( obj_pCurSOF ) || muDoubleScalarIsInf ( obj_pCurSOF ) )
{ obj_pCurSOF = 0.0 ; } else { obj_pCurSOF = muDoubleScalarRem ( obj_pCurSOF
, 65536.0 ) ; } rtB . ltoa54ba3c = ( uint16_T ) ( obj_pCurSOF < 0.0 ? (
int32_T ) ( uint16_T ) - ( int16_T ) ( uint16_T ) - obj_pCurSOF : ( int32_T )
( uint16_T ) obj_pCurSOF ) ; if ( rtP . runSim ) { rtB . gpngzfzm5o = rtB .
o5uklvuyrd ; } else { rtB . gpngzfzm5o = rtB . ltoa54ba3c ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { real_T * pDataValues = ( real_T * ) rtDW
. cik5yfvopb . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW .
cik5yfvopb . TimePtr ; int_T currTimeIndex = rtDW . h2ju2tf3mj . PrevIndex ;
real_T t = ssGetTaskTime ( rtS , 1 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . cik5yfvopb . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . h2ju2tf3mj . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { rtB . ai0nkoyyzf =
pDataValues [ currTimeIndex ] ; } else { rtB . ai0nkoyyzf = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; rtB . ai0nkoyyzf = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } obj_pCurSOF = muDoubleScalarFloor ( rtB .
ai0nkoyyzf ) ; if ( muDoubleScalarIsNaN ( obj_pCurSOF ) ||
muDoubleScalarIsInf ( obj_pCurSOF ) ) { obj_pCurSOF = 0.0 ; } else {
obj_pCurSOF = muDoubleScalarRem ( obj_pCurSOF , 65536.0 ) ; } rtB .
iyg2osseov = ( uint16_T ) ( obj_pCurSOF < 0.0 ? ( int32_T ) ( uint16_T ) - (
int16_T ) ( uint16_T ) - obj_pCurSOF : ( int32_T ) ( uint16_T ) obj_pCurSOF )
; RandSrc_GZ_D ( & rtB . ftprthij4n , & rtP . Hydro2Gaussian_MeanVal , 1 , &
rtP . Hydro2Gaussian_VarianceRTP , 1 , rtDW . hjbuyzppp0 , 1 , 1 ) ;
RandSrc_U_D ( & rtB . j1lgr3ytyp , & rtP . Hydro2Uniform_MinVal , 1 , & rtP .
Hydro2Uniform_MaxVal , 1 , rtDW . nxiegp2np2 , 1 , 1 ) ; } if ( rtP .
noise_type != 0.0 ) { rtB . c4cuktnwdp = rtB . ftprthij4n ; } else { rtB .
c4cuktnwdp = rtB . j1lgr3ytyp ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB
. oxdfqwae0k = ( rtDW . dkepphtq0p < rtP . DiscretePulseGenerator2_Duty ) &&
( rtDW . dkepphtq0p >= 0 ) ? rtP . DiscretePulseGenerator2_Amp : 0.0 ; if (
rtDW . dkepphtq0p >= rtP . DiscretePulseGenerator2_Period - 1.0 ) { rtDW .
dkepphtq0p = 0 ; } else { rtDW . dkepphtq0p ++ ; } { real_T * pDataValues = (
real_T * ) rtDW . i44vfztycq . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . i44vfztycq . TimePtr ; int_T currTimeIndex = rtDW . flbfwgerrm .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 1 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . i44vfztycq . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . flbfwgerrm . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { rtB . lknmgvjqgn =
pDataValues [ currTimeIndex ] ; } else { rtB . lknmgvjqgn = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; rtB . lknmgvjqgn = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } rtB . onjsdyh32p = rtB . oxdfqwae0k * rtB .
lknmgvjqgn ; } rtB . hju5mvez0a = rtB . c4cuktnwdp + rtB . onjsdyh32p ; if (
rtP . noise_on_off ) { rtB . mkm0lv1mks = rtB . hju5mvez0a ; } else { rtB .
mkm0lv1mks = rtB . onjsdyh32p ; } rtB . kn5tnjdgbo = rtP . Constant10_Value +
rtB . mkm0lv1mks ; rtB . c0bjpvlg5a = rtB . kn5tnjdgbo / rtP .
Constant17_Value ; rtB . f3kqzrcgy4 = rtB . c0bjpvlg5a * rtP .
Constant14_Value ; rtB . e5l3jz4xat = muDoubleScalarRound ( rtB . f3kqzrcgy4
) ; obj_pCurSOF = muDoubleScalarFloor ( rtB . e5l3jz4xat ) ; if (
muDoubleScalarIsNaN ( obj_pCurSOF ) || muDoubleScalarIsInf ( obj_pCurSOF ) )
{ obj_pCurSOF = 0.0 ; } else { obj_pCurSOF = muDoubleScalarRem ( obj_pCurSOF
, 65536.0 ) ; } rtB . d3kur0pryu = ( uint16_T ) ( obj_pCurSOF < 0.0 ? (
int32_T ) ( uint16_T ) - ( int16_T ) ( uint16_T ) - obj_pCurSOF : ( int32_T )
( uint16_T ) obj_pCurSOF ) ; if ( rtP . runSim ) { rtB . g5oqteomrh = rtB .
iyg2osseov ; } else { rtB . g5oqteomrh = rtB . d3kur0pryu ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { real_T * pDataValues = ( real_T * ) rtDW
. j2pd5q2ore . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW .
j2pd5q2ore . TimePtr ; int_T currTimeIndex = rtDW . giitlnmjsq . PrevIndex ;
real_T t = ssGetTaskTime ( rtS , 1 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . j2pd5q2ore . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . giitlnmjsq . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { rtB . fmn5g1jnc1 =
pDataValues [ currTimeIndex ] ; } else { rtB . fmn5g1jnc1 = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; rtB . fmn5g1jnc1 = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } obj_pCurSOF = muDoubleScalarFloor ( rtB .
fmn5g1jnc1 ) ; if ( muDoubleScalarIsNaN ( obj_pCurSOF ) ||
muDoubleScalarIsInf ( obj_pCurSOF ) ) { obj_pCurSOF = 0.0 ; } else {
obj_pCurSOF = muDoubleScalarRem ( obj_pCurSOF , 65536.0 ) ; } rtB .
cotk5hq3pn = ( uint16_T ) ( obj_pCurSOF < 0.0 ? ( int32_T ) ( uint16_T ) - (
int16_T ) ( uint16_T ) - obj_pCurSOF : ( int32_T ) ( uint16_T ) obj_pCurSOF )
; RandSrc_GZ_D ( & rtB . fqf5psyxso , & rtP . Hydro3Gaussian_MeanVal , 1 , &
rtP . Hydro3Gaussian_VarianceRTP , 1 , rtDW . gfyphbttiz , 1 , 1 ) ;
RandSrc_U_D ( & rtB . kt03sbrd2l , & rtP . Hydro3Uniform_MinVal , 1 , & rtP .
Hydro3Uniform_MaxVal , 1 , rtDW . anify3zav4 , 1 , 1 ) ; } if ( rtP .
noise_type != 0.0 ) { rtB . hapqonhpcl = rtB . fqf5psyxso ; } else { rtB .
hapqonhpcl = rtB . kt03sbrd2l ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB
. fytjznpmnc = ( rtDW . e1m3m031zp < rtP . DiscretePulseGenerator3_Duty ) &&
( rtDW . e1m3m031zp >= 0 ) ? rtP . DiscretePulseGenerator3_Amp : 0.0 ; if (
rtDW . e1m3m031zp >= rtP . DiscretePulseGenerator3_Period - 1.0 ) { rtDW .
e1m3m031zp = 0 ; } else { rtDW . e1m3m031zp ++ ; } { real_T * pDataValues = (
real_T * ) rtDW . iqoyvk1xwu . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . iqoyvk1xwu . TimePtr ; int_T currTimeIndex = rtDW . ef0vh4kl2l .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 1 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . iqoyvk1xwu . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . ef0vh4kl2l . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { rtB . d2sirds33k =
pDataValues [ currTimeIndex ] ; } else { rtB . d2sirds33k = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; rtB . d2sirds33k = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } rtB . fcpveaaqxk = rtB . fytjznpmnc * rtB .
d2sirds33k ; } rtB . cs0uc5ej5i = rtB . hapqonhpcl + rtB . fcpveaaqxk ; if (
rtP . noise_on_off ) { rtB . n1elti22an = rtB . cs0uc5ej5i ; } else { rtB .
n1elti22an = rtB . fcpveaaqxk ; } rtB . o4oi1jwcpq = rtP . Constant11_Value +
rtB . n1elti22an ; rtB . nexgq2cuwu = rtB . o4oi1jwcpq / rtP .
Constant16_Value ; rtB . l2uvxsydr5 = rtB . nexgq2cuwu * rtP .
Constant15_Value ; rtB . m1qpxl0jpv = muDoubleScalarRound ( rtB . l2uvxsydr5
) ; obj_pCurSOF = muDoubleScalarFloor ( rtB . m1qpxl0jpv ) ; if (
muDoubleScalarIsNaN ( obj_pCurSOF ) || muDoubleScalarIsInf ( obj_pCurSOF ) )
{ obj_pCurSOF = 0.0 ; } else { obj_pCurSOF = muDoubleScalarRem ( obj_pCurSOF
, 65536.0 ) ; } rtB . irewvzta1j = ( uint16_T ) ( obj_pCurSOF < 0.0 ? (
int32_T ) ( uint16_T ) - ( int16_T ) ( uint16_T ) - obj_pCurSOF : ( int32_T )
( uint16_T ) obj_pCurSOF ) ; if ( rtP . runSim ) { rtB . p5ltyme4ou = rtB .
cotk5hq3pn ; } else { rtB . p5ltyme4ou = rtB . irewvzta1j ; } rtB .
gnegcolamm = rtDW . nnty3e15zo ; if ( rtB . gnegcolamm >= rtP . FFT_LENGTH )
{ rtB . ci0kd5qanr = rtP . Constant_Value_k2m2r1p0jl ; } else { rtB .
ci0kd5qanr = rtB . gnegcolamm ; } obj_pCurSOF = rtB . ci0kd5qanr ; zcEvent =
! ( obj_pCurSOF <= 255.0 ) ; if ( ( rtP .
DirectLookupTablenD_DiagnosticForOutOfRangeInput != 0 ) && zcEvent ) { if (
rtP . DirectLookupTablenD_DiagnosticForOutOfRangeInput == 1 ) { if ( rtDW .
gqoxt5atim == 0U ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockIndexOutOfRangeWarnMsg" , 1 , 5 ,
"Simulation_DOA_rearanged/Signal Trigger/Fenetrage/Direct Lookup Table (n-D)"
) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; } if ( rtDW . gqoxt5atim <
MAX_uint32_T ) { rtDW . gqoxt5atim ++ ; } } else { S = rtS ; diag =
CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockIndexOutOfRangeErrorMsg" , 1 , 5 ,
"Simulation_DOA_rearanged/Signal Trigger/Fenetrage/Direct Lookup Table (n-D)"
) ; rt_ssSet_slErrMsg ( S , diag ) ; } } tableOffset = muIntScalarMin_uint16
( rtB . ci0kd5qanr , 255U ) ; rtB . pmcmjq0wty = rtP . Coeff_han [
tableOffset ] ; rtB . nux3tj1dsw = ( uint32_T ) rtB . e3pd2awld2 * rtB .
pmcmjq0wty ; rtB . bns15ue0h0 = ( uint32_T ) rtB . pmcmjq0wty * rtB .
gpngzfzm5o ; rtB . fajrh5ebvm = ( uint32_T ) rtB . pmcmjq0wty * rtB .
g5oqteomrh ; rtB . cv0ayzwsev = ( uint32_T ) rtB . pmcmjq0wty * rtB .
p5ltyme4ou ; rtB . p1qhdkmp1e = rtDW . mvicvyd4ab ; obj = & rtDW . grqziysskz
; tableOffset = obj -> pPostScale ; b_varargout_2 = obj -> pQuadrantOut ;
zcEvent = obj -> validPipeline [ 16 ] ; rtB . cjalrq1zug = tableOffset ; rtB
. mawtkveb0c = b_varargout_2 ; rtB . bek0af0j1j = zcEvent ; obj_p = & rtDW .
ermnepihcn ; obj_e = obj_p ; obj_pCurSOF = obj_e -> pCurSOF ; if ( obj_e ->
pResetStart ) { dataInOutMem = 0.0 ; } else { obj_i = obj_e ; if ( obj_i ->
pRdOutBuffer_roll == obj_i -> pWrOutBuffer_roll ) { dataInOutMem = obj_i ->
pWrOutBuffer_index - obj_i -> pRdOutBuffer_index ; } else { dataInOutMem = (
6144.0 - obj_i -> pRdOutBuffer_index ) + obj_i -> pWrOutBuffer_index ; } } if
( dataInOutMem > 0.0 ) { if ( obj_pCurSOF == 0.0 ) { obj_i = obj_e ;
dataInOutMem = obj_i -> pRdFifoAddr ; obj_pCurSOF = obj_i -> pSOFFifo [ (
int32_T ) dataInOutMem - 1 ] ; } else { if ( obj_e -> pSimTime >= obj_pCurSOF
+ 256.0 ) { obj_i = obj_e ; dataInOutMem = obj_i -> pRdFifoAddr ; obj_pCurSOF
= obj_i -> pSOFFifo [ ( int32_T ) dataInOutMem - 1 ] ; } } guard1 = false ;
if ( obj_pCurSOF <= obj_e -> pSimTime ) { obj_pCurSOF = ( obj_pCurSOF + 256.0
) - 1.0 ; obj_pCurSOF = muDoubleScalarCeil ( obj_pCurSOF ) ; if ( obj_e ->
pSimTime <= obj_pCurSOF ) { obj_i = obj_e ; obj_pCurSOF = obj_i ->
pRdOutBuffer_index ; tableOffset = obj_i -> pOutBuffer_cmplx [ ( int32_T )
obj_pCurSOF - 1 ] . re ; b_varargout_2 = obj_i -> pOutBuffer_cmplx [ (
int32_T ) obj_pCurSOF - 1 ] . im ; zcEvent = true ; endOut = obj_e ->
pEndOutputPort [ 0 ] ; } else { guard1 = true ; } } else { guard1 = true ; }
if ( guard1 ) { zcEvent = false ; tableOffset = obj_e -> pLastData . re ;
b_varargout_2 = obj_e -> pLastData . im ; endOut = false ; } } else { zcEvent
= false ; tableOffset = obj_e -> pLastData . re ; b_varargout_2 = obj_e ->
pLastData . im ; endOut = false ; } readyOut = obj_p -> pRdyReg ; rtB .
oqnpxh1nf0 . re = tableOffset ; rtB . oqnpxh1nf0 . im = b_varargout_2 ; rtB .
cczpwym0xn = endOut ; rtB . mxy1hkdva5 = zcEvent ; rtB . mcdt4kjdw0 =
readyOut ; obj = & rtDW . azbznqzcih ; tableOffset = obj -> pPostScale ;
b_varargout_2 = obj -> pQuadrantOut ; zcEvent = obj -> validPipeline [ 16 ] ;
rtB . bsxi2ox2mt = tableOffset ; rtB . l5kufayq12 = b_varargout_2 ; rtB .
gpz2elpgqi = zcEvent ; { if ( rtDW . d2vy4yaoku . AQHandles && ssGetLogOutput
( rtS ) ) { sdiWriteSignal ( rtDW . d2vy4yaoku . AQHandles , ssGetTaskTime (
rtS , 0 ) , ( char * ) & rtB . dzolba3omv + 0 ) ; } } { if ( rtDW .
hhgqqvjy4v . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
hhgqqvjy4v . AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB .
j5nnsx2ha4 + 0 ) ; } } { if ( rtDW . kyxq1kl0ma . AQHandles && ssGetLogOutput
( rtS ) ) { sdiWriteSignal ( rtDW . kyxq1kl0ma . AQHandles , ssGetTaskTime (
rtS , 0 ) , ( char * ) & rtB . fjeujynzc4 + 0 ) ; } } { if ( rtDW .
o4pxgjuli2 . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
o4pxgjuli2 . AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB .
bxwcxvlcty + 0 ) ; } } rtB . cmlf145r3w = rtP . Constant1_Value_bfosepbrju ;
{ real_T * pDataValues = ( real_T * ) rtDW . cuqwodigqn . DataPtr ; real_T *
pTimeValues = ( real_T * ) rtDW . cuqwodigqn . TimePtr ; int_T currTimeIndex
= rtDW . gvlgkjwrhe . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int
numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW .
cuqwodigqn . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint
= numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else
if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; }
else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [
currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [
currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW . gvlgkjwrhe .
PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ;
real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1
) { rtB . mom23gv2k5 = pDataValues [ currTimeIndex ] ; } else { rtB .
mom23gv2k5 = pDataValues [ currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2
- t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T
TimeIndex = currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues
[ TimeIndex + 1 ] ; rtB . mom23gv2k5 = ( real_T ) rtInterpolate ( d1 , d2 ,
f1 , f2 ) ; pDataValues += numPoints ; } } } rtB . noriyy1yxf = ( rtB .
mom23gv2k5 != 0.0 ) ; obj_p = & rtDW . nbiqr5wspw ; obj_e = obj_p ;
obj_pCurSOF = obj_e -> pCurSOF ; if ( obj_e -> pResetStart ) { dataInOutMem =
0.0 ; } else { obj_i = obj_e ; if ( obj_i -> pRdOutBuffer_roll == obj_i ->
pWrOutBuffer_roll ) { dataInOutMem = obj_i -> pWrOutBuffer_index - obj_i ->
pRdOutBuffer_index ; } else { dataInOutMem = ( 6144.0 - obj_i ->
pRdOutBuffer_index ) + obj_i -> pWrOutBuffer_index ; } } if ( dataInOutMem >
0.0 ) { if ( obj_pCurSOF == 0.0 ) { obj_i = obj_e ; dataInOutMem = obj_i ->
pRdFifoAddr ; obj_pCurSOF = obj_i -> pSOFFifo [ ( int32_T ) dataInOutMem - 1
] ; } else { if ( obj_e -> pSimTime >= obj_pCurSOF + 256.0 ) { obj_i = obj_e
; dataInOutMem = obj_i -> pRdFifoAddr ; obj_pCurSOF = obj_i -> pSOFFifo [ (
int32_T ) dataInOutMem - 1 ] ; } } guard1 = false ; if ( obj_pCurSOF <= obj_e
-> pSimTime ) { obj_pCurSOF = ( obj_pCurSOF + 256.0 ) - 1.0 ; obj_pCurSOF =
muDoubleScalarCeil ( obj_pCurSOF ) ; if ( obj_e -> pSimTime <= obj_pCurSOF )
{ obj_i = obj_e ; obj_pCurSOF = obj_i -> pRdOutBuffer_index ; tableOffset =
obj_i -> pOutBuffer_cmplx [ ( int32_T ) obj_pCurSOF - 1 ] . re ;
b_varargout_2 = obj_i -> pOutBuffer_cmplx [ ( int32_T ) obj_pCurSOF - 1 ] .
im ; zcEvent = true ; endOut = obj_e -> pEndOutputPort [ 0 ] ; } else {
guard1 = true ; } } else { guard1 = true ; } if ( guard1 ) { zcEvent = false
; tableOffset = obj_e -> pLastData . re ; b_varargout_2 = obj_e -> pLastData
. im ; endOut = false ; } } else { zcEvent = false ; tableOffset = obj_e ->
pLastData . re ; b_varargout_2 = obj_e -> pLastData . im ; endOut = false ; }
readyOut = obj_p -> pRdyReg ; rtB . hliq0objjz . re = tableOffset ; rtB .
hliq0objjz . im = b_varargout_2 ; rtB . kp4so2pt2n = endOut ; rtB .
kf1wm1zuum = zcEvent ; rtB . edeyixszm5 = readyOut ; jrnktqme1n ( & rtB .
jrnktqme1n3b , & rtDW . jrnktqme1n3b ) ; lyyly4yad2 ( & rtB . lyyly4yad2e2 ,
& rtDW . lyyly4yad2e2 ) ; jrnktqme1n ( & rtB . jrnktqme1n3b1 , & rtDW .
jrnktqme1n3b1 ) ; lyyly4yad2 ( & rtB . lyyly4yad2e2d , & rtDW . lyyly4yad2e2d
) ; rtB . kj5cas4vsk = rtDW . kdsiyo0fhb ; n014eikjcj ( rtB . megyurvikr ,
rtB . kj5cas4vsk , & rtB . n014eikjcjy , & rtDW . n014eikjcjy , & rtPrevZCX .
n014eikjcjy ) ; nirnnu0kb5 ( rtB . ih3p5u1r2h , rtB . n014eikjcjy .
pp2wmkmgqd , & rtB . nirnnu0kb5e , & rtDW . nirnnu0kb5e , & rtPrevZCX .
nirnnu0kb5e ) ; rtB . g5wlvxxevf = ( rtP . Constant3_Value != rtB .
nirnnu0kb5e . djc2e4rqrh ) ; rtB . i4usrn1mnq = ( rtB . pb4ejhsyzn && rtB .
g5wlvxxevf ) ; otw02eo3ue ( rtB . megyurvikr , rtB . br33n3ewpf , & rtB .
otw02eo3ue3 , & rtDW . otw02eo3ue3 , & rtPrevZCX . otw02eo3ue3 ) ; otw02eo3ue
( rtB . ih3p5u1r2h , rtB . otw02eo3ue3 . emcuycy0pw , & rtB . hamu3nooom , &
rtDW . hamu3nooom , & rtPrevZCX . hamu3nooom ) ; rtB . ajxn3billg = rtB .
ih3p5u1r2h ? rtB . otw02eo3ue3 . emcuycy0pw : 0 ; rtB . phdru50zsj = (
uint16_T ) rtB . lgkhemwe21 ; rtB . h53jwoi45y = ( uint32_T ) rtB .
ih3p5u1r2h + rtB . phdru50zsj ; rtB . pomjv0rtxv = rtB . ih3p5u1r2h ? rtB .
h53jwoi45y : 0U ; rtB . jgkc41e1ur = rtDW . a2zb4ls2ku ; n014eikjcj ( rtB .
okhmnm0uka , rtB . jgkc41e1ur , & rtB . fhzqhbrdcr , & rtDW . fhzqhbrdcr , &
rtPrevZCX . fhzqhbrdcr ) ; nirnnu0kb5 ( rtB . nvwgj11js1 , rtB . fhzqhbrdcr .
pp2wmkmgqd , & rtB . ppbi33hazt , & rtDW . ppbi33hazt , & rtPrevZCX .
ppbi33hazt ) ; rtB . oa3yjyv5sa = ( rtP . Constant3_Value_jqozwsnzwm != rtB .
ppbi33hazt . djc2e4rqrh ) ; rtB . jwsp2nls1p = ( rtB . m31yfjfxst && rtB .
oa3yjyv5sa ) ; otw02eo3ue ( rtB . okhmnm0uka , rtB . gzmx0g2ql4 , & rtB .
etzyrbzjj0 , & rtDW . etzyrbzjj0 , & rtPrevZCX . etzyrbzjj0 ) ; otw02eo3ue (
rtB . nvwgj11js1 , rtB . etzyrbzjj0 . emcuycy0pw , & rtB . hsz3hkboep , &
rtDW . hsz3hkboep , & rtPrevZCX . hsz3hkboep ) ; rtB . a0rmql43dv = rtB .
nvwgj11js1 ? rtB . etzyrbzjj0 . emcuycy0pw : 0 ; rtB . iyafkvctqt = (
uint16_T ) rtB . i0htefbuzq ; rtB . f14fitok5v = ( uint32_T ) rtB .
nvwgj11js1 + rtB . iyafkvctqt ; rtB . l21b1nezu4 = rtB . nvwgj11js1 ? rtB .
f14fitok5v : 0U ; rtB . p4prxjmuld = rtDW . dsoc41t3j0 ; n014eikjcj ( rtB .
j4zso4cshe , rtB . p4prxjmuld , & rtB . jesurwi24z , & rtDW . jesurwi24z , &
rtPrevZCX . jesurwi24z ) ; nirnnu0kb5 ( rtB . fwqhnxdxba , rtB . jesurwi24z .
pp2wmkmgqd , & rtB . ifacholhbj , & rtDW . ifacholhbj , & rtPrevZCX .
ifacholhbj ) ; rtB . ogwvvk0sds = ( rtP . Constant3_Value_ds12tuqxh5 != rtB .
ifacholhbj . djc2e4rqrh ) ; rtB . i2rtlw2sff = ( rtB . othlvy4lcm && rtB .
ogwvvk0sds ) ; otw02eo3ue ( rtB . j4zso4cshe , rtB . hweouvpzaf , & rtB .
gqsds1azit , & rtDW . gqsds1azit , & rtPrevZCX . gqsds1azit ) ; otw02eo3ue (
rtB . fwqhnxdxba , rtB . gqsds1azit . emcuycy0pw , & rtB . kcj1xw2fyj , &
rtDW . kcj1xw2fyj , & rtPrevZCX . kcj1xw2fyj ) ; rtB . h5gmicptzc = rtB .
fwqhnxdxba ? rtB . gqsds1azit . emcuycy0pw : 0 ; rtB . ntkpejjap3 = (
uint16_T ) rtB . mira15b04v ; rtB . jkzyotkqdr = ( uint32_T ) rtB .
fwqhnxdxba + rtB . ntkpejjap3 ; rtB . elhihgd2gr = rtB . fwqhnxdxba ? rtB .
jkzyotkqdr : 0U ; rtB . h5p1p3zh3a = ( rtP . Constant3_Value_oxgyqblygx !=
rtB . popnzdb3ry . djc2e4rqrh ) ; rtB . ezmjk2o1s1 = ( rtB . ays0cxwjgc &&
rtB . h5p1p3zh3a ) ; otw02eo3ue ( rtB . iddapcucwk , rtB . hwoxkcxmnw , & rtB
. kwch3e15c1 , & rtDW . kwch3e15c1 , & rtPrevZCX . kwch3e15c1 ) ; otw02eo3ue
( rtB . e4uxf3jebt , rtB . kwch3e15c1 . emcuycy0pw , & rtB . crejvlo0y5 , &
rtDW . crejvlo0y5 , & rtPrevZCX . crejvlo0y5 ) ; rtB . ninnovw2gl = rtB .
e4uxf3jebt ? rtB . kwch3e15c1 . emcuycy0pw : 0 ; rtB . deg3k52snr = (
uint16_T ) rtB . ac44xbjyzx ; rtB . fm1pdhccer = ( uint32_T ) rtB .
e4uxf3jebt + rtB . deg3k52snr ; rtB . mq5r0xffei = rtB . e4uxf3jebt ? rtB .
fm1pdhccer : 0U ; rtB . lljj4opukd = ( rtB . e3pd2awld2 >= rtB . cmlf145r3w )
; rtB . byriipp1p3 = ! rtB . mcdt4kjdw0 ; rtB . gfkap4zouj = rtB . lljj4opukd
^ rtB . byriipp1p3 ; zcEvent = ( rtB . gfkap4zouj && ( rtPrevZCX . aqpvzed4uc
!= 1 ) ) ; if ( zcEvent ) { rtB . dzkfl5rhnk = rtB . mcdt4kjdw0 ; rtDW .
n3px15f5qg = 4 ; } rtPrevZCX . aqpvzed4uc = rtB . gfkap4zouj ; rtB .
lpicjg4fyq = rtB . gnegcolamm ; rtB . aud13svlct = ( rtB . lpicjg4fyq <= rtP
. FFT_LENGTH ) ; rtB . mypgjf3jml = ( rtB . dzkfl5rhnk && rtB . aud13svlct )
; if ( rtB . noriyy1yxf ) { rtB . fxnfbtjkqf = rtP .
Constant_Value_c3xhjopelp ; } else { rtB . fxnfbtjkqf = rtP .
Constant1_Value_d2ev0f3vow ; } rtB . hbweu1k1mv = ( uint32_T ) rtB .
fxnfbtjkqf + rtB . lpicjg4fyq ; rtB . of3umjp2za = ( uint16_T ) ( rtB .
mypgjf3jml ? ( int32_T ) ( uint16_T ) rtB . hbweu1k1mv : 0 ) ; rtB .
ly4h0bwdnm = ( rtB . dzkfl5rhnk && rtB . noriyy1yxf ) ; rtB . iklzpkjqsn =
rtDW . hnvrararos ; rtB . n23gjpdnyb = ! rtB . ezmjk2o1s1 ; rtB . magvavcslg
= rtDW . hxfv4spray ; rtB . jntqx3sul1 = ( rtB . n23gjpdnyb && rtB .
magvavcslg ) ; zcEvent = ( rtB . jntqx3sul1 && ( rtPrevZCX . nawb0gzcmp != 1
) ) ; if ( zcEvent ) { rtB . pyovfatmru = rtP . Constant2_Value_jbobxqjm0i <<
8 ; tableOffset = rtB . crejvlo0y5 . emcuycy0pw ; b_varargout_2 = rtB .
iklzpkjqsn ; tableOffset = tableOffset == 0 ? b_varargout_2 >= 0 ?
MAX_int32_T : MIN_int32_T : b_varargout_2 / tableOffset ; if ( tableOffset >
67108863 ) { tableOffset = 67108863 ; } else { if ( tableOffset < - 67108864
) { tableOffset = - 67108864 ; } } rtB . lil4t41v4y = tableOffset ; rtB .
ap04dfb20d = ( ( ( int64_T ) rtB . lil4t41v4y << 8 ) >= rtB . pyovfatmru ) ;
rtDW . jhxoqbpjsq = 4 ; } rtPrevZCX . nawb0gzcmp = rtB . jntqx3sul1 ; rtB .
klpuetkq5g = rtDW . ncvdu1kcxh ; rtB . irohinrqyf = ( rtB . klpuetkq5g && rtB
. ap04dfb20d ) ; rtB . fpfftzsohz = rtDW . arkwssm1yy ; rtB . g5u5xbo0h3 =
rtB . fpfftzsohz ; rtB . oiwmfmahct = ( rtB . g5u5xbo0h3 == rtP .
MultiplyAccumulate_num_samples ) ; rtB . gbblvn3zyv = ( rtB . g5u5xbo0h3 ==
rtP . CompareToConstant2_const ) ; rtB . f0zeyhioe2 = ( uint16_T ) ( (
uint16_T ) ( ( uint32_T ) rtP . Step_value_Value + rtB . fpfftzsohz ) & 1023
) ; tmp_i = ( int16_T ) ( ( int16_T ) rtB . f0zeyhioe2 - ( int16_T ) rtP .
Mod_value_Value ) ; rtB . agxl0jnck4 = ( int16_T ) ( ( tmp_i & 2048U ) != 0U
? tmp_i | - 2048 : tmp_i & 2047 ) ; if ( rtB . f0zeyhioe2 > rtP .
Switch_wrap_Threshold_nwklm2s0m1 ) { rtB . naosxvvjkq = ( uint16_T ) ( (
uint16_T ) rtB . agxl0jnck4 & 511 ) ; } else { rtB . naosxvvjkq = ( uint16_T
) ( rtB . f0zeyhioe2 & 511 ) ; } rtB . mbob4csy5h = rtP .
const_load_val_Value ; obj_pCurSOF = rtP . Counter_CountStep ; obj_pCurSOF =
muDoubleScalarSign ( obj_pCurSOF ) ; zcEvent = ( obj_pCurSOF == 1.0 ) ; rtB .
k1ggl1xgfz = rtP . const_dir_Value ^ zcEvent ; rtB . lb2k1x1ogu = ( rtB .
fpfftzsohz == rtP . Constant_Value_gcf3fdx4dg ) ; tmp_i = ( int16_T ) ( (
int16_T ) rtB . fpfftzsohz - ( int16_T ) rtP . Step_value_Value ) ; rtB .
jct14c5au5 = ( int16_T ) ( ( tmp_i & 512U ) != 0U ? tmp_i | - 512 : tmp_i &
511 ) ; tmp_i = ( int16_T ) ( rtB . jct14c5au5 + ( int16_T ) rtP .
Mod_value_Value_a0wdzolmlj ) ; rtB . bmycztu53b = ( int16_T ) ( ( tmp_i &
2048U ) != 0U ? tmp_i | - 2048 : tmp_i & 2047 ) ; if ( rtB . jct14c5au5 >=
rtP . Switch_wrap_Threshold ) { rtB . bnss3gxib0 = ( uint16_T ) ( ( uint16_T
) rtB . jct14c5au5 & 511 ) ; } else { rtB . bnss3gxib0 = ( uint16_T ) ( (
uint16_T ) rtB . bmycztu53b & 511 ) ; } if ( rtB . k1ggl1xgfz ) { rtB .
kxwhxhizh0 = rtB . bnss3gxib0 ; } else { rtB . kxwhxhizh0 = rtB . naosxvvjkq
; } if ( rtB . lb2k1x1ogu ) { rtB . db3qfnh4gl = rtP . From_value_Value ; }
else { rtB . db3qfnh4gl = rtB . kxwhxhizh0 ; } if ( rtP .
Free_running_or_modulo_Value ) { rtB . gcxcrfqzbn = rtB . kxwhxhizh0 ; } else
{ rtB . gcxcrfqzbn = rtB . db3qfnh4gl ; } if ( rtB . bek0af0j1j ) { rtB .
dfuxydpjaq = rtB . gcxcrfqzbn ; } else { rtB . dfuxydpjaq = rtB . fpfftzsohz
; } if ( rtP . const_load_Value ) { rtB . pjkv5aehah = rtB . mbob4csy5h ; }
else { rtB . pjkv5aehah = rtB . dfuxydpjaq ; } if ( rtP . const_rst_Value ) {
rtB . gsl3xqnnpl = rtP . Init_value_Value ; } else { rtB . gsl3xqnnpl = rtB .
pjkv5aehah ; } rtB . ocrom13v4d = rtDW . dq53bdyvmu ; rtB . bk1jemzwgb = rtDW
. mff3u0pd5g ; rtB . cxxjjwrqch = ! rtB . bek0af0j1j ; rtB . mvtbzy4kxz = (
rtB . bek0af0j1j && rtB . gbblvn3zyv ) ; rtB . edhhzwakxu = ( rtB .
oiwmfmahct && rtB . bek0af0j1j ) ; if ( rtB . cxxjjwrqch ) { rtB . l45rxbwf2o
= rtP . Constant_Value ; } else { rtB . l45rxbwf2o = rtB . cjalrq1zug ; } rtB
. c1az4ldf0t = ( int64_T ) rtB . l45rxbwf2o * rtP . Constant1_Value ; if (
rtB . mvtbzy4kxz ) { rtB . gimf3q1muu = rtP . const_initValue_Value ; } else
{ rtB . gimf3q1muu = rtB . iklzpkjqsn ; } tmp_m = ( ( int64_T ) rtB .
gimf3q1muu << 8 ) + rtB . c1az4ldf0t ; tableOffset = ( int32_T ) ( ( ( tmp_m
& 18014398509481984ULL ) != 0ULL ? tmp_m | - 18014398509481984LL : tmp_m &
18014398509481983LL ) >> 8 ) ; rtB . e1opwguyzb = ( tableOffset & 67108864U )
!= 0U ? tableOffset | - 67108864 : tableOffset & 67108863 ; UNUSED_PARAMETER
( tid ) ; } void MdlOutputsTID2 ( int_T tid ) { rtB . h2gdavdf12 [ 0 ] = rtP
. Constant2_Value [ 0 ] ; rtB . h2gdavdf12 [ 1 ] = rtP . Constant2_Value [ 1
] ; rtB . h2gdavdf12 [ 2 ] = rtP . Constant2_Value [ 2 ] ; rtB . h2gdavdf12 [
3 ] = rtP . Constant2_Value [ 3 ] ; UNUSED_PARAMETER ( tid ) ; } void
MdlUpdate ( int_T tid ) { static const uint32_T tmp [ 12 ] = { 31114864U ,
16440240U , 8345322U , 4188855U , 2096470U , 1048491U , 524277U , 262143U ,
131072U , 65536U , 32768U , 16384U } ; iqgjshdk3v * obj_e ; iqgjshdk3v *
obj_i ; iqgjshdk3v * obj_m ; jwzaobjvlz * obj ; jwzaobjvlz * obj_p ; cint32_T
data ; int64_T c ; real_T obj_pCurSOF ; real_T rt_shift ; int32_T obj_f [ 13
] ; int32_T c_e ; int32_T c_p ; int32_T obj_idx_0 ; int32_T y ; uint32_T b0 ;
uint8_T obj_g [ 13 ] ; uint8_T a0 ; boolean_T obj_c [ 256 ] ; boolean_T obj_j
[ 16 ] ; boolean_T guard1 = false ; boolean_T guard2 = false ; boolean_T
guard3 = false ; boolean_T obj_pRdOutBuffer_roll ; boolean_T u1 ; rtDW .
gnviqudpd4 [ 0U ] = rtDW . gnviqudpd4 [ 1U ] ; rtDW . gnviqudpd4 [ 1 ] = rtB
. irohinrqyf ; rtDW . feq2k5hyrq = rtB . bek0af0j1j ; rtDW . jsgyz1qcth = rtB
. ninnovw2gl ; rtDW . nnreceeeob = rtB . cjalrq1zug ; rtDW . l0wgyztcbo = rtB
. mmfoimpc5s ; rtDW . dl24d3xbii = rtB . mq5r0xffei ; rtDW . oorrier0f2 = rtB
. ac44xbjyzx ; rtDW . plhu0vyzl3 [ rtDW . nktiitfvs5 ] = rtB . mawtkveb0c ;
if ( rtDW . nktiitfvs5 < 1 ) { rtDW . nktiitfvs5 = ( uint8_T ) ( ( uint8_T )
( rtDW . nktiitfvs5 + 1U ) & 3 ) ; } else { rtDW . nktiitfvs5 = 0U ; } rtDW .
nqcyti2ov4 = rtB . gpz2elpgqi ; rtDW . gwrnkftzef = rtB . ajxn3billg ; rtDW .
b52mktt2zz = rtB . bsxi2ox2mt ; rtDW . ngjwiyysws = rtB . k2i5ljo21q ; rtDW .
oyp1nx1y0d = rtB . pomjv0rtxv ; rtDW . gk2im0n30c [ rtDW . nw4ierg2mf ] = rtB
. l5kufayq12 ; if ( rtDW . nw4ierg2mf < 1 ) { rtDW . nw4ierg2mf = ( uint8_T )
( ( uint8_T ) ( rtDW . nw4ierg2mf + 1U ) & 3 ) ; } else { rtDW . nw4ierg2mf =
0U ; } rtDW . ceeuccxr3s = rtB . jrnktqme1n3b . fmynalp5d2 ; rtDW .
dwn4wwhy2y = rtB . a0rmql43dv ; rtDW . jx4h2wbup3 = rtB . jrnktqme1n3b .
jla3h5bfbz ; rtDW . bio2vh5c4c = rtB . k2e4mtxz0f ; rtDW . lmcosoxm0k = rtB .
l21b1nezu4 ; rtDW . cv4jadh1hz [ rtDW . gvqew00wty ] = rtB . jrnktqme1n3b .
bmorkd0dzv ; if ( rtDW . gvqew00wty < 1 ) { rtDW . gvqew00wty = ( uint8_T ) (
( uint8_T ) ( rtDW . gvqew00wty + 1U ) & 3 ) ; } else { rtDW . gvqew00wty =
0U ; } rtDW . lv3ck33lyh = rtB . jrnktqme1n3b1 . fmynalp5d2 ; rtDW .
mmzjnp1uww = rtB . h5gmicptzc ; rtDW . em01ku2qsr = rtB . jrnktqme1n3b1 .
jla3h5bfbz ; rtDW . el0lvpuekz = rtB . orlyixhwdt ; rtDW . kohozqm44k = rtB .
elhihgd2gr ; rtDW . pva255ly42 [ rtDW . ccefl3hqw4 ] = rtB . jrnktqme1n3b1 .
bmorkd0dzv ; if ( rtDW . ccefl3hqw4 < 1 ) { rtDW . ccefl3hqw4 = ( uint8_T ) (
( uint8_T ) ( rtDW . ccefl3hqw4 + 1U ) & 3 ) ; } else { rtDW . ccefl3hqw4 =
0U ; } rtDW . nnty3e15zo = rtB . of3umjp2za ; rtDW . mvicvyd4ab = rtB .
ly4h0bwdnm ; data . re = rtB . oqnpxh1nf0 . re ; data . im = rtB . oqnpxh1nf0
. im ; u1 = rtB . mxy1hkdva5 ; obj = & rtDW . grqziysskz ; obj_p = obj ;
obj_pRdOutBuffer_roll = ( obj_p -> isInitialized == 1 ) ; if ( !
obj_pRdOutBuffer_roll ) { obj_p = obj ; f3f13aoaly ( obj_p ) ; ovh3t030ey (
obj_p ) ; } obj -> validPipeline [ 0 ] = u1 ; for ( y = 0 ; y < 13 ; y ++ ) {
obj_g [ y ] = obj -> pQuadrantIn [ y ] ; } for ( y = 0 ; y < 13 ; y ++ ) {
obj -> pQuadrantIn [ ( y + 2 ) - 1 ] = obj_g [ y ] ; } for ( y = 0 ; y < 13 ;
y ++ ) { obj_g [ y ] = obj -> pXYReversed [ y ] ; } for ( y = 0 ; y < 13 ; y
++ ) { obj -> pXYReversed [ ( y + 2 ) - 1 ] = obj_g [ y ] ; } for ( y = 0 ; y
< 16 ; y ++ ) { obj_j [ y ] = obj -> validPipeline [ y ] ; } for ( y = 0 ; y
< 16 ; y ++ ) { obj -> validPipeline [ ( y + 2 ) - 1 ] = obj_j [ y ] ; } for
( y = 0 ; y < 13 ; y ++ ) { obj_f [ y ] = obj -> xPipeline [ y ] ; } for ( y
= 0 ; y < 13 ; y ++ ) { obj -> xPipeline [ ( y + 2 ) - 1 ] = obj_f [ y ] ; }
for ( y = 0 ; y < 13 ; y ++ ) { obj_f [ y ] = obj -> yPipeline [ y ] ; } for
( y = 0 ; y < 13 ; y ++ ) { obj -> yPipeline [ ( y + 2 ) - 1 ] = obj_f [ y ]
; } for ( y = 0 ; y < 13 ; y ++ ) { obj_f [ y ] = obj -> zPipeline [ y ] ; }
for ( y = 0 ; y < 13 ; y ++ ) { obj -> zPipeline [ ( y + 2 ) - 1 ] = obj_f [
y ] ; } obj_idx_0 = obj -> realInReg [ 1 ] ; y = obj -> realInReg [ 2 ] ; obj
-> realInReg [ 0 ] = obj_idx_0 ; obj -> realInReg [ 1 ] = y ; obj_idx_0 = obj
-> imagInReg [ 1 ] ; y = obj -> imagInReg [ 2 ] ; obj -> imagInReg [ 0 ] =
obj_idx_0 ; obj -> imagInReg [ 1 ] = y ; obj -> realInReg [ 2 ] = data . re ;
obj -> imagInReg [ 2 ] = data . im ; obj_p = obj ; obj_idx_0 = obj ->
realInReg [ 0 ] ; c_e = obj -> imagInReg [ 0 ] ; obj_p -> pXAbsolute =
obj_idx_0 ; c_p = obj_p -> pXAbsolute ; u1 = ( c_p < 0 ) ; if ( u1 ) { y = -
c_p ; y = ( y & 134217728U ) != 0U ? y | - 134217728 : y & 134217727 ; } else
{ y = c_p ; } obj_p -> pXAbsolute = y ; obj_p -> pYAbsolute = c_e ; c_p =
obj_p -> pYAbsolute ; u1 = ( c_p < 0 ) ; if ( u1 ) { y = - c_p ; y = ( y &
134217728U ) != 0U ? y | - 134217728 : y & 134217727 ; } else { y = c_p ; }
obj_p -> pYAbsolute = y ; u1 = ( obj_idx_0 < 0 ) ; guard1 = false ; guard2 =
false ; guard3 = false ; if ( u1 ) { u1 = ( c_e < 0 ) ; if ( u1 ) { obj_p ->
pQuadrantIn [ 0 ] = 2U ; } else { guard3 = true ; } } else { guard3 = true ;
} if ( guard3 ) { u1 = ( obj_idx_0 >= 0 ) ; if ( u1 ) { u1 = ( c_e < 0 ) ; if
( u1 ) { obj_p -> pQuadrantIn [ 0 ] = 1U ; } else { guard2 = true ; } } else
{ guard2 = true ; } } if ( guard2 ) { u1 = ( obj_idx_0 < 0 ) ; if ( u1 ) { u1
= ( c_e >= 0 ) ; if ( u1 ) { obj_p -> pQuadrantIn [ 0 ] = 3U ; } else {
guard1 = true ; } } else { guard1 = true ; } } if ( guard1 ) { u1 = (
obj_idx_0 >= 0 ) ; if ( u1 ) { u1 = ( c_e >= 0 ) ; if ( u1 ) { obj_p ->
pQuadrantIn [ 0 ] = 0U ; } else { obj_p -> pQuadrantIn [ 0 ] = 0U ; } } else
{ obj_p -> pQuadrantIn [ 0 ] = 0U ; } } c_p = obj_p -> pXAbsolute ; y = obj_p
-> pYAbsolute ; u1 = ( c_p > y ) ; if ( u1 ) { obj_p -> pXYReversed [ 0 ] =
0U ; y = obj_p -> pXAbsolute ; obj_p -> xPipeline [ 0 ] = ( y & 67108864U )
!= 0U ? y | - 67108864 : y & 67108863 ; y = obj_p -> pYAbsolute ; obj_p ->
yPipeline [ 0 ] = ( y & 67108864U ) != 0U ? y | - 67108864 : y & 67108863 ; }
else { obj_p -> pXYReversed [ 0 ] = 1U ; y = obj_p -> pYAbsolute ; obj_p ->
xPipeline [ 0 ] = ( y & 67108864U ) != 0U ? y | - 67108864 : y & 67108863 ; y
= obj_p -> pXAbsolute ; obj_p -> yPipeline [ 0 ] = ( y & 67108864U ) != 0U ?
y | - 67108864 : y & 67108863 ; } obj_p -> zPipeline [ 0 ] = 0 ; for (
obj_idx_0 = 0 ; obj_idx_0 < 12 ; obj_idx_0 ++ ) { obj_pCurSOF = ( real_T )
obj_idx_0 + 2.0 ; rt_shift = obj_pCurSOF - 1.0 ; obj_p = obj ; c_e = obj_p ->
yPipeline [ ( int32_T ) obj_pCurSOF - 1 ] ; y = ( int32_T ) rt_shift ; y =
c_e >> y ; c_p = ( y & 67108864U ) != 0U ? y | - 67108864 : y & 67108863 ;
c_e = obj_p -> xPipeline [ ( int32_T ) obj_pCurSOF - 1 ] ; y = ( int32_T )
rt_shift ; y = c_e >> y ; c_e = ( y & 67108864U ) != 0U ? y | - 67108864 : y
& 67108863 ; y = obj_p -> yPipeline [ ( int32_T ) obj_pCurSOF - 1 ] ; u1 = (
y < 0 ) ; if ( u1 ) { y = obj_p -> xPipeline [ ( int32_T ) obj_pCurSOF - 1 ]
; y -= c_p ; y = ( y & 134217728U ) != 0U ? y | - 134217728 : y & 134217727 ;
obj_p -> xPipeline [ ( int32_T ) obj_pCurSOF - 1 ] = ( y & 67108864U ) != 0U
? y | - 67108864 : y & 67108863 ; y = obj_p -> yPipeline [ ( int32_T )
obj_pCurSOF - 1 ] ; y += c_e ; y = ( y & 134217728U ) != 0U ? y | - 134217728
: y & 134217727 ; obj_p -> yPipeline [ ( int32_T ) obj_pCurSOF - 1 ] = ( y &
67108864U ) != 0U ? y | - 67108864 : y & 67108863 ; y = obj_p -> zPipeline [
( int32_T ) obj_pCurSOF - 1 ] ; b0 = tmp [ ( int32_T ) obj_pCurSOF - 2 ] ; y
-= ( int32_T ) b0 ; c_e = ( y & 268435456U ) != 0U ? y | - 268435456 : y &
268435455 ; obj_p -> zPipeline [ ( int32_T ) obj_pCurSOF - 1 ] = ( c_e &
67108864U ) != 0U ? c_e | - 67108864 : c_e & 67108863 ; } else { y = obj_p ->
xPipeline [ ( int32_T ) obj_pCurSOF - 1 ] ; y += c_p ; y = ( y & 134217728U )
!= 0U ? y | - 134217728 : y & 134217727 ; obj_p -> xPipeline [ ( int32_T )
obj_pCurSOF - 1 ] = ( y & 67108864U ) != 0U ? y | - 67108864 : y & 67108863 ;
y = obj_p -> yPipeline [ ( int32_T ) obj_pCurSOF - 1 ] ; y -= c_e ; y = ( y &
134217728U ) != 0U ? y | - 134217728 : y & 134217727 ; obj_p -> yPipeline [ (
int32_T ) obj_pCurSOF - 1 ] = ( y & 67108864U ) != 0U ? y | - 67108864 : y &
67108863 ; y = obj_p -> zPipeline [ ( int32_T ) obj_pCurSOF - 1 ] ; b0 = tmp
[ ( int32_T ) obj_pCurSOF - 2 ] ; y += ( int32_T ) b0 ; c_e = ( y &
268435456U ) != 0U ? y | - 268435456 : y & 268435455 ; obj_p -> zPipeline [ (
int32_T ) obj_pCurSOF - 1 ] = ( c_e & 67108864U ) != 0U ? c_e | - 67108864 :
c_e & 67108863 ; } } obj_p = obj ; obj_p -> pPipeout = obj_p -> zPipeline [
13 ] ; a0 = obj_p -> pXYReversed [ 13 ] ; u1 = ( a0 == 1 ) ; if ( u1 ) {
obj_idx_0 = obj_p -> pPipeout ; y = 105414357 - obj_idx_0 ; c_e = ( y &
536870912U ) != 0U ? y | - 536870912 : y & 536870911 ; obj_p -> pQuadrantOut
= ( c_e & 268435456U ) != 0U ? c_e | - 268435456 : c_e & 268435455 ; } else {
obj_p -> pQuadrantOut = obj_p -> pPipeout ; } a0 = obj_p -> pQuadrantIn [ 13
] ; u1 = ( a0 == 1 ) ; if ( u1 ) { c_e = obj_p -> pQuadrantOut ; y = - c_e ;
c_e = ( y & 268435456U ) != 0U ? y | - 268435456 : y & 268435455 ; obj_p ->
pQuadrantOut = c_e ; } else { a0 = obj_p -> pQuadrantIn [ 13 ] ; u1 = ( a0 ==
2 ) ; if ( u1 ) { obj_idx_0 = obj_p -> pQuadrantOut ; y = obj_idx_0 + -
210828715 ; c_e = ( y & 536870912U ) != 0U ? y | - 536870912 : y & 536870911
; obj_p -> pQuadrantOut = ( c_e & 268435456U ) != 0U ? c_e | - 268435456 :
c_e & 268435455 ; } else { a0 = obj_p -> pQuadrantIn [ 13 ] ; u1 = ( a0 == 3
) ; if ( u1 ) { obj_idx_0 = obj_p -> pQuadrantOut ; y = 210828714 - obj_idx_0
; c_e = ( y & 536870912U ) != 0U ? y | - 536870912 : y & 536870911 ; obj_p ->
pQuadrantOut = ( c_e & 268435456U ) != 0U ? c_e | - 268435456 : c_e &
268435455 ; } } } y = obj -> xPipeline [ 13 ] ; c = y * 115265536LL ; obj ->
pPostScale = ( int32_T ) ( c >> 27 ) ; if ( ! obj -> validPipeline [ 16 ] ) {
obj -> pPostScale = 0 ; obj -> zPipeline [ 13 ] = 0 ; obj -> pQuadrantOut = 0
; } b0 = rtB . nux3tj1dsw ; u1 = rtB . p1qhdkmp1e ; obj_e = & rtDW .
ermnepihcn ; obj_i = obj_e ; obj_pRdOutBuffer_roll = ( obj_i -> isInitialized
== 1 ) ; if ( ! obj_pRdOutBuffer_roll ) { obj_i = obj_e ; f3f13aoalyr ( obj_i
) ; eqfgxr42k2 ( obj_i ) ; } obj_i = obj_e ; obj_pCurSOF = obj_i -> pCurSOF ;
if ( obj_i -> pResetStart ) { rt_shift = 0.0 ; } else { obj_m = obj_i ; if (
obj_m -> pRdOutBuffer_roll == obj_m -> pWrOutBuffer_roll ) { rt_shift = obj_m
-> pWrOutBuffer_index - obj_m -> pRdOutBuffer_index ; } else { rt_shift = (
6144.0 - obj_m -> pRdOutBuffer_index ) + obj_m -> pWrOutBuffer_index ; } } if
( rt_shift > 0.0 ) { if ( obj_pCurSOF == 0.0 ) { obj_m = obj_i ; rt_shift =
obj_m -> pRdFifoAddr ; obj_pCurSOF = obj_m -> pSOFFifo [ ( int32_T ) rt_shift
- 1 ] ; if ( obj_pCurSOF > 0.0 ) { if ( rt_shift == 1024.0 ) { rt_shift = 1.0
; } else { rt_shift ++ ; } obj_m -> pRdFifoAddr = rt_shift ; } } else { if (
obj_i -> pSimTime >= obj_pCurSOF + 256.0 ) { obj_m = obj_i ; rt_shift = obj_m
-> pRdFifoAddr ; obj_pCurSOF = obj_m -> pSOFFifo [ ( int32_T ) rt_shift - 1 ]
; if ( obj_pCurSOF > 0.0 ) { if ( rt_shift == 1024.0 ) { rt_shift = 1.0 ; }
else { rt_shift ++ ; } obj_m -> pRdFifoAddr = rt_shift ; } } } if (
obj_pCurSOF <= obj_i -> pSimTime ) { rt_shift = ( obj_pCurSOF + 256.0 ) - 1.0
; rt_shift = muDoubleScalarCeil ( rt_shift ) ; if ( obj_i -> pSimTime <=
rt_shift ) { obj_m = obj_i ; rt_shift = obj_m -> pRdOutBuffer_index ;
obj_pRdOutBuffer_roll = obj_m -> pRdOutBuffer_roll ; data = obj_m ->
pOutBuffer_cmplx [ ( int32_T ) rt_shift - 1 ] ; if ( rt_shift == 6144.0 ) {
rt_shift = 1.0 ; obj_pRdOutBuffer_roll = ! obj_pRdOutBuffer_roll ; } else {
rt_shift ++ ; } obj_m -> pRdOutBuffer_index = rt_shift ; obj_m ->
pRdOutBuffer_roll = obj_pRdOutBuffer_roll ; obj_i -> pLastData = data ;
obj_pRdOutBuffer_roll = obj_i -> pStartOutputPort [ 255 ] ; obj_c [ 0 ] =
obj_pRdOutBuffer_roll ; for ( y = 0 ; y < 255 ; y ++ ) { obj_c [ y + 1 ] =
obj_i -> pStartOutputPort [ y ] ; } for ( y = 0 ; y < 256 ; y ++ ) { obj_i ->
pStartOutputPort [ y ] = obj_c [ y ] ; } obj_pRdOutBuffer_roll = obj_i ->
pEndOutputPort [ 255 ] ; obj_c [ 0 ] = obj_pRdOutBuffer_roll ; for ( y = 0 ;
y < 255 ; y ++ ) { obj_c [ y + 1 ] = obj_i -> pEndOutputPort [ y ] ; } for (
y = 0 ; y < 256 ; y ++ ) { obj_i -> pEndOutputPort [ y ] = obj_c [ y ] ; } }
} } obj_i -> pCurSOF = obj_pCurSOF ; nfj5chyldu ( obj_e , b0 , u1 ) ; data .
re = rtB . hliq0objjz . re ; data . im = rtB . hliq0objjz . im ; u1 = rtB .
kf1wm1zuum ; obj = & rtDW . azbznqzcih ; obj_p = obj ; obj_pRdOutBuffer_roll
= ( obj_p -> isInitialized == 1 ) ; if ( ! obj_pRdOutBuffer_roll ) { obj_p =
obj ; f3f13aoaly ( obj_p ) ; ovh3t030ey ( obj_p ) ; } obj -> validPipeline [
0 ] = u1 ; for ( y = 0 ; y < 13 ; y ++ ) { obj_g [ y ] = obj -> pQuadrantIn [
y ] ; } for ( y = 0 ; y < 13 ; y ++ ) { obj -> pQuadrantIn [ ( y + 2 ) - 1 ]
= obj_g [ y ] ; } for ( y = 0 ; y < 13 ; y ++ ) { obj_g [ y ] = obj ->
pXYReversed [ y ] ; } for ( y = 0 ; y < 13 ; y ++ ) { obj -> pXYReversed [ (
y + 2 ) - 1 ] = obj_g [ y ] ; } for ( y = 0 ; y < 16 ; y ++ ) { obj_j [ y ] =
obj -> validPipeline [ y ] ; } for ( y = 0 ; y < 16 ; y ++ ) { obj ->
validPipeline [ ( y + 2 ) - 1 ] = obj_j [ y ] ; } for ( y = 0 ; y < 13 ; y ++
) { obj_f [ y ] = obj -> xPipeline [ y ] ; } for ( y = 0 ; y < 13 ; y ++ ) {
obj -> xPipeline [ ( y + 2 ) - 1 ] = obj_f [ y ] ; } for ( y = 0 ; y < 13 ; y
++ ) { obj_f [ y ] = obj -> yPipeline [ y ] ; } for ( y = 0 ; y < 13 ; y ++ )
{ obj -> yPipeline [ ( y + 2 ) - 1 ] = obj_f [ y ] ; } for ( y = 0 ; y < 13 ;
y ++ ) { obj_f [ y ] = obj -> zPipeline [ y ] ; } for ( y = 0 ; y < 13 ; y ++
) { obj -> zPipeline [ ( y + 2 ) - 1 ] = obj_f [ y ] ; } obj_idx_0 = obj ->
realInReg [ 1 ] ; y = obj -> realInReg [ 2 ] ; obj -> realInReg [ 0 ] =
obj_idx_0 ; obj -> realInReg [ 1 ] = y ; obj_idx_0 = obj -> imagInReg [ 1 ] ;
y = obj -> imagInReg [ 2 ] ; obj -> imagInReg [ 0 ] = obj_idx_0 ; obj ->
imagInReg [ 1 ] = y ; obj -> realInReg [ 2 ] = data . re ; obj -> imagInReg [
2 ] = data . im ; obj_p = obj ; obj_idx_0 = obj -> realInReg [ 0 ] ; c_e =
obj -> imagInReg [ 0 ] ; obj_p -> pXAbsolute = obj_idx_0 ; c_p = obj_p ->
pXAbsolute ; u1 = ( c_p < 0 ) ; if ( u1 ) { y = - c_p ; y = ( y & 134217728U
) != 0U ? y | - 134217728 : y & 134217727 ; } else { y = c_p ; } obj_p ->
pXAbsolute = y ; obj_p -> pYAbsolute = c_e ; c_p = obj_p -> pYAbsolute ; u1 =
( c_p < 0 ) ; if ( u1 ) { y = - c_p ; y = ( y & 134217728U ) != 0U ? y | -
134217728 : y & 134217727 ; } else { y = c_p ; } obj_p -> pYAbsolute = y ; u1
= ( obj_idx_0 < 0 ) ; guard1 = false ; guard2 = false ; guard3 = false ; if (
u1 ) { u1 = ( c_e < 0 ) ; if ( u1 ) { obj_p -> pQuadrantIn [ 0 ] = 2U ; }
else { guard3 = true ; } } else { guard3 = true ; } if ( guard3 ) { u1 = (
obj_idx_0 >= 0 ) ; if ( u1 ) { u1 = ( c_e < 0 ) ; if ( u1 ) { obj_p ->
pQuadrantIn [ 0 ] = 1U ; } else { guard2 = true ; } } else { guard2 = true ;
} } if ( guard2 ) { u1 = ( obj_idx_0 < 0 ) ; if ( u1 ) { u1 = ( c_e >= 0 ) ;
if ( u1 ) { obj_p -> pQuadrantIn [ 0 ] = 3U ; } else { guard1 = true ; } }
else { guard1 = true ; } } if ( guard1 ) { u1 = ( obj_idx_0 >= 0 ) ; if ( u1
) { u1 = ( c_e >= 0 ) ; if ( u1 ) { obj_p -> pQuadrantIn [ 0 ] = 0U ; } else
{ obj_p -> pQuadrantIn [ 0 ] = 0U ; } } else { obj_p -> pQuadrantIn [ 0 ] =
0U ; } } c_p = obj_p -> pXAbsolute ; y = obj_p -> pYAbsolute ; u1 = ( c_p > y
) ; if ( u1 ) { obj_p -> pXYReversed [ 0 ] = 0U ; y = obj_p -> pXAbsolute ;
obj_p -> xPipeline [ 0 ] = ( y & 67108864U ) != 0U ? y | - 67108864 : y &
67108863 ; y = obj_p -> pYAbsolute ; obj_p -> yPipeline [ 0 ] = ( y &
67108864U ) != 0U ? y | - 67108864 : y & 67108863 ; } else { obj_p ->
pXYReversed [ 0 ] = 1U ; y = obj_p -> pYAbsolute ; obj_p -> xPipeline [ 0 ] =
( y & 67108864U ) != 0U ? y | - 67108864 : y & 67108863 ; y = obj_p ->
pXAbsolute ; obj_p -> yPipeline [ 0 ] = ( y & 67108864U ) != 0U ? y | -
67108864 : y & 67108863 ; } obj_p -> zPipeline [ 0 ] = 0 ; for ( obj_idx_0 =
0 ; obj_idx_0 < 12 ; obj_idx_0 ++ ) { obj_pCurSOF = ( real_T ) obj_idx_0 +
2.0 ; rt_shift = obj_pCurSOF - 1.0 ; obj_p = obj ; c_e = obj_p -> yPipeline [
( int32_T ) obj_pCurSOF - 1 ] ; y = ( int32_T ) rt_shift ; y = c_e >> y ; c_p
= ( y & 67108864U ) != 0U ? y | - 67108864 : y & 67108863 ; c_e = obj_p ->
xPipeline [ ( int32_T ) obj_pCurSOF - 1 ] ; y = ( int32_T ) rt_shift ; y =
c_e >> y ; c_e = ( y & 67108864U ) != 0U ? y | - 67108864 : y & 67108863 ; y
= obj_p -> yPipeline [ ( int32_T ) obj_pCurSOF - 1 ] ; u1 = ( y < 0 ) ; if (
u1 ) { y = obj_p -> xPipeline [ ( int32_T ) obj_pCurSOF - 1 ] ; y -= c_p ; y
= ( y & 134217728U ) != 0U ? y | - 134217728 : y & 134217727 ; obj_p ->
xPipeline [ ( int32_T ) obj_pCurSOF - 1 ] = ( y & 67108864U ) != 0U ? y | -
67108864 : y & 67108863 ; y = obj_p -> yPipeline [ ( int32_T ) obj_pCurSOF -
1 ] ; y += c_e ; y = ( y & 134217728U ) != 0U ? y | - 134217728 : y &
134217727 ; obj_p -> yPipeline [ ( int32_T ) obj_pCurSOF - 1 ] = ( y &
67108864U ) != 0U ? y | - 67108864 : y & 67108863 ; y = obj_p -> zPipeline [
( int32_T ) obj_pCurSOF - 1 ] ; b0 = tmp [ ( int32_T ) obj_pCurSOF - 2 ] ; y
-= ( int32_T ) b0 ; c_e = ( y & 268435456U ) != 0U ? y | - 268435456 : y &
268435455 ; obj_p -> zPipeline [ ( int32_T ) obj_pCurSOF - 1 ] = ( c_e &
67108864U ) != 0U ? c_e | - 67108864 : c_e & 67108863 ; } else { y = obj_p ->
xPipeline [ ( int32_T ) obj_pCurSOF - 1 ] ; y += c_p ; y = ( y & 134217728U )
!= 0U ? y | - 134217728 : y & 134217727 ; obj_p -> xPipeline [ ( int32_T )
obj_pCurSOF - 1 ] = ( y & 67108864U ) != 0U ? y | - 67108864 : y & 67108863 ;
y = obj_p -> yPipeline [ ( int32_T ) obj_pCurSOF - 1 ] ; y -= c_e ; y = ( y &
134217728U ) != 0U ? y | - 134217728 : y & 134217727 ; obj_p -> yPipeline [ (
int32_T ) obj_pCurSOF - 1 ] = ( y & 67108864U ) != 0U ? y | - 67108864 : y &
67108863 ; y = obj_p -> zPipeline [ ( int32_T ) obj_pCurSOF - 1 ] ; b0 = tmp
[ ( int32_T ) obj_pCurSOF - 2 ] ; y += ( int32_T ) b0 ; c_e = ( y &
268435456U ) != 0U ? y | - 268435456 : y & 268435455 ; obj_p -> zPipeline [ (
int32_T ) obj_pCurSOF - 1 ] = ( c_e & 67108864U ) != 0U ? c_e | - 67108864 :
c_e & 67108863 ; } } obj_p = obj ; obj_p -> pPipeout = obj_p -> zPipeline [
13 ] ; a0 = obj_p -> pXYReversed [ 13 ] ; u1 = ( a0 == 1 ) ; if ( u1 ) {
obj_idx_0 = obj_p -> pPipeout ; y = 105414357 - obj_idx_0 ; c_e = ( y &
536870912U ) != 0U ? y | - 536870912 : y & 536870911 ; obj_p -> pQuadrantOut
= ( c_e & 268435456U ) != 0U ? c_e | - 268435456 : c_e & 268435455 ; } else {
obj_p -> pQuadrantOut = obj_p -> pPipeout ; } a0 = obj_p -> pQuadrantIn [ 13
] ; u1 = ( a0 == 1 ) ; if ( u1 ) { c_e = obj_p -> pQuadrantOut ; y = - c_e ;
c_e = ( y & 268435456U ) != 0U ? y | - 268435456 : y & 268435455 ; obj_p ->
pQuadrantOut = c_e ; } else { a0 = obj_p -> pQuadrantIn [ 13 ] ; u1 = ( a0 ==
2 ) ; if ( u1 ) { obj_idx_0 = obj_p -> pQuadrantOut ; y = obj_idx_0 + -
210828715 ; c_e = ( y & 536870912U ) != 0U ? y | - 536870912 : y & 536870911
; obj_p -> pQuadrantOut = ( c_e & 268435456U ) != 0U ? c_e | - 268435456 :
c_e & 268435455 ; } else { a0 = obj_p -> pQuadrantIn [ 13 ] ; u1 = ( a0 == 3
) ; if ( u1 ) { obj_idx_0 = obj_p -> pQuadrantOut ; y = 210828714 - obj_idx_0
; c_e = ( y & 536870912U ) != 0U ? y | - 536870912 : y & 536870911 ; obj_p ->
pQuadrantOut = ( c_e & 268435456U ) != 0U ? c_e | - 268435456 : c_e &
268435455 ; } } } y = obj -> xPipeline [ 13 ] ; c = y * 115265536LL ; obj ->
pPostScale = ( int32_T ) ( c >> 27 ) ; if ( ! obj -> validPipeline [ 16 ] ) {
obj -> pPostScale = 0 ; obj -> zPipeline [ 13 ] = 0 ; obj -> pQuadrantOut = 0
; } b0 = rtB . bns15ue0h0 ; u1 = rtB . p1qhdkmp1e ; obj_e = & rtDW .
nbiqr5wspw ; obj_i = obj_e ; obj_pRdOutBuffer_roll = ( obj_i -> isInitialized
== 1 ) ; if ( ! obj_pRdOutBuffer_roll ) { obj_i = obj_e ; f3f13aoalyr ( obj_i
) ; eqfgxr42k2 ( obj_i ) ; } obj_i = obj_e ; obj_pCurSOF = obj_i -> pCurSOF ;
if ( obj_i -> pResetStart ) { rt_shift = 0.0 ; } else { obj_m = obj_i ; if (
obj_m -> pRdOutBuffer_roll == obj_m -> pWrOutBuffer_roll ) { rt_shift = obj_m
-> pWrOutBuffer_index - obj_m -> pRdOutBuffer_index ; } else { rt_shift = (
6144.0 - obj_m -> pRdOutBuffer_index ) + obj_m -> pWrOutBuffer_index ; } } if
( rt_shift > 0.0 ) { if ( obj_pCurSOF == 0.0 ) { obj_m = obj_i ; rt_shift =
obj_m -> pRdFifoAddr ; obj_pCurSOF = obj_m -> pSOFFifo [ ( int32_T ) rt_shift
- 1 ] ; if ( obj_pCurSOF > 0.0 ) { if ( rt_shift == 1024.0 ) { rt_shift = 1.0
; } else { rt_shift ++ ; } obj_m -> pRdFifoAddr = rt_shift ; } } else { if (
obj_i -> pSimTime >= obj_pCurSOF + 256.0 ) { obj_m = obj_i ; rt_shift = obj_m
-> pRdFifoAddr ; obj_pCurSOF = obj_m -> pSOFFifo [ ( int32_T ) rt_shift - 1 ]
; if ( obj_pCurSOF > 0.0 ) { if ( rt_shift == 1024.0 ) { rt_shift = 1.0 ; }
else { rt_shift ++ ; } obj_m -> pRdFifoAddr = rt_shift ; } } } if (
obj_pCurSOF <= obj_i -> pSimTime ) { rt_shift = ( obj_pCurSOF + 256.0 ) - 1.0
; rt_shift = muDoubleScalarCeil ( rt_shift ) ; if ( obj_i -> pSimTime <=
rt_shift ) { obj_m = obj_i ; rt_shift = obj_m -> pRdOutBuffer_index ;
obj_pRdOutBuffer_roll = obj_m -> pRdOutBuffer_roll ; data = obj_m ->
pOutBuffer_cmplx [ ( int32_T ) rt_shift - 1 ] ; if ( rt_shift == 6144.0 ) {
rt_shift = 1.0 ; obj_pRdOutBuffer_roll = ! obj_pRdOutBuffer_roll ; } else {
rt_shift ++ ; } obj_m -> pRdOutBuffer_index = rt_shift ; obj_m ->
pRdOutBuffer_roll = obj_pRdOutBuffer_roll ; obj_i -> pLastData = data ;
obj_pRdOutBuffer_roll = obj_i -> pStartOutputPort [ 255 ] ; obj_c [ 0 ] =
obj_pRdOutBuffer_roll ; for ( y = 0 ; y < 255 ; y ++ ) { obj_c [ y + 1 ] =
obj_i -> pStartOutputPort [ y ] ; } for ( y = 0 ; y < 256 ; y ++ ) { obj_i ->
pStartOutputPort [ y ] = obj_c [ y ] ; } obj_pRdOutBuffer_roll = obj_i ->
pEndOutputPort [ 255 ] ; obj_c [ 0 ] = obj_pRdOutBuffer_roll ; for ( y = 0 ;
y < 255 ; y ++ ) { obj_c [ y + 1 ] = obj_i -> pEndOutputPort [ y ] ; } for (
y = 0 ; y < 256 ; y ++ ) { obj_i -> pEndOutputPort [ y ] = obj_c [ y ] ; } }
} } obj_i -> pCurSOF = obj_pCurSOF ; nfj5chyldu ( obj_e , b0 , u1 ) ;
ozbdkxqx4f ( rtB . lyyly4yad2e2 . pmfcpbeq12 , rtB . lyyly4yad2e2 .
prus50oyah , & rtDW . jrnktqme1n3b ) ; heye0xiyga ( rtB . fajrh5ebvm , rtB .
p1qhdkmp1e , & rtB . lyyly4yad2e2 , & rtDW . lyyly4yad2e2 ) ; ozbdkxqx4f (
rtB . lyyly4yad2e2d . pmfcpbeq12 , rtB . lyyly4yad2e2d . prus50oyah , & rtDW
. jrnktqme1n3b1 ) ; heye0xiyga ( rtB . cv0ayzwsev , rtB . p1qhdkmp1e , & rtB
. lyyly4yad2e2d , & rtDW . lyyly4yad2e2d ) ; rtDW . kdsiyo0fhb = rtB .
lgkhemwe21 ; rtDW . a2zb4ls2ku = rtB . i0htefbuzq ; rtDW . dsoc41t3j0 = rtB .
mira15b04v ; rtDW . hnvrararos = rtB . e1opwguyzb ; rtDW . hxfv4spray = rtB .
edhhzwakxu ; rtDW . ncvdu1kcxh = rtB . jntqx3sul1 ; rtDW . arkwssm1yy = rtB .
gsl3xqnnpl ; rtDW . dq53bdyvmu = rtB . bek0af0j1j ; rtDW . mff3u0pd5g = rtB .
g5u5xbo0h3 ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlTerminate ( void ) { uint32_T arg2 ;
SimStruct * S ; void * diag ; rt_FREE ( rtDW . kkydb1gjmz . RSimInfoPtr ) ;
rt_FREE ( rtDW . nl1bpgswzl . RSimInfoPtr ) ; rt_FREE ( rtDW . blfyjbjksw .
RSimInfoPtr ) ; rt_FREE ( rtDW . o3pnclbg5l . RSimInfoPtr ) ; rt_FREE ( rtDW
. cik5yfvopb . RSimInfoPtr ) ; rt_FREE ( rtDW . i44vfztycq . RSimInfoPtr ) ;
rt_FREE ( rtDW . j2pd5q2ore . RSimInfoPtr ) ; rt_FREE ( rtDW . iqoyvk1xwu .
RSimInfoPtr ) ; if ( rtDW . gqoxt5atim != 0U ) { S = rtS ; arg2 = rtDW .
gqoxt5atim ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockNumOfIndexOutOfRangeWarnMsg" , 2 , 5 ,
"Simulation_DOA_rearanged/Signal Trigger/Fenetrage/Direct Lookup Table (n-D)"
, 1 , arg2 ) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; } rt_FREE ( rtDW
. cuqwodigqn . RSimInfoPtr ) ; { if ( rtDW . d2vy4yaoku . AQHandles ) {
sdiTerminateStreaming ( & rtDW . d2vy4yaoku . AQHandles ) ; } } { if ( rtDW .
hhgqqvjy4v . AQHandles ) { sdiTerminateStreaming ( & rtDW . hhgqqvjy4v .
AQHandles ) ; } } { if ( rtDW . kyxq1kl0ma . AQHandles ) {
sdiTerminateStreaming ( & rtDW . kyxq1kl0ma . AQHandles ) ; } } { if ( rtDW .
o4pxgjuli2 . AQHandles ) { sdiTerminateStreaming ( & rtDW . o4pxgjuli2 .
AQHandles ) ; } } } void MdlInitializeSizes ( void ) { ssSetNumContStates (
rtS , 0 ) ; ssSetNumY ( rtS , 4 ) ; ssSetNumU ( rtS , 0 ) ;
ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 2 ) ;
ssSetNumBlocks ( rtS , 396 ) ; ssSetNumBlockIO ( rtS , 283 ) ;
ssSetNumBlockParams ( rtS , 2261986 ) ; } void MdlInitializeSampleTimes (
void ) { ssSetSampleTime ( rtS , 0 , 1.953125E-7 ) ; ssSetSampleTime ( rtS ,
1 , 3.90625E-6 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS
, 1 , 0.0 ) ; } void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 ,
3229635691U ) ; ssSetChecksumVal ( rtS , 1 , 895491095U ) ; ssSetChecksumVal
( rtS , 2 , 1600266565U ) ; ssSetChecksumVal ( rtS , 3 , 2963355993U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ssSetWorkSizeInBytes ( rtS , sizeof ( rtB ) ,
"BlockIO" ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof ( B ) ) ; {
rtB . c0xui1wk2i = ( 0ULL ) ; rtB . ephpqceyqu = ( 0ULL ) ; rtB . ghr21v0y4h
= ( 0LL ) ; rtB . dsfwlmxmgm = ( 0LL ) ; rtB . c1az4ldf0t = ( 0LL ) ; } } {
ssSetY ( rtS , & rtY ) ; ( void ) memset ( ( void * ) & rtY , 0 , sizeof (
ExtY ) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS ,
dwork ) ; ssSetWorkSizeInBytes ( rtS , sizeof ( rtDW ) , "DWork" ) ; ( void )
memset ( dwork , 0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ;
( void ) memset ( ( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ;
ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo . numDataTypes = 110 ;
dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = &
rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = & rtBTransTable ; dtInfo .
PTransTable = & rtPTransTable ; dtInfo . dataTypeInfoTable =
rtDataTypeInfoTable ; } Simulation_DOA_rearanged_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"Simulation_DOA_rearanged" ) ; ssSetPath ( rtS , "Simulation_DOA_rearanged" )
; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 0.1 ) ; ssSetStepSize ( rtS
, 1.953125E-7 ) ; ssSetFixedStepSize ( rtS , 1.953125E-7 ) ; { static
RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = NULL ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 2 , 2 , 2 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static
int_T rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 2 , 2 , 2 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static boolean_T rt_LoggedStateIsVarDims [
] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE
, SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_UINT16 ,
SS_DOUBLE , SS_DOUBLE , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN ,
SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN } ; static
int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static
const char_T * rt_LoggedStateLabels [ ] = { "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" } ; static
const char_T * rt_LoggedStateBlockNames [ ] = {
"Simulation_DOA_rearanged/Maximum Hydro Ref/Delay3" ,
"Simulation_DOA_rearanged/Maximum Hydro Ref/Delay5" ,
"Simulation_DOA_rearanged/Maximum Hydro Ref/Delay1" ,
"Simulation_DOA_rearanged/Maximum Hydro 1/Delay3" ,
"Simulation_DOA_rearanged/Maximum Hydro 1/Delay5" ,
"Simulation_DOA_rearanged/Maximum Hydro 1/Delay1" ,
"Simulation_DOA_rearanged/Maximum Hydro 2/Delay3" ,
"Simulation_DOA_rearanged/Maximum Hydro 2/Delay5" ,
"Simulation_DOA_rearanged/Maximum Hydro 2/Delay1" ,
"Simulation_DOA_rearanged/Maximum Hydro 3/Delay3" ,
"Simulation_DOA_rearanged/Maximum Hydro 3/Delay5" ,
"Simulation_DOA_rearanged/Maximum Hydro 3/Delay1" ,
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/accumulator"
, "Simulation_DOA_rearanged/Maximum Hydro Ref/Delay2" ,
"Simulation_DOA_rearanged/Maximum Hydro 1/Delay2" ,
"Simulation_DOA_rearanged/Maximum Hydro 2/Delay2" ,
"Simulation_DOA_rearanged/Maximum Hydro 3/Delay2" ,
"Simulation_DOA_rearanged/Maximum Hydro Ref/Subsystem/Delay" ,
"Simulation_DOA_rearanged/Maximum Hydro Ref/Delay" ,
"Simulation_DOA_rearanged/Maximum Hydro 1/Subsystem/Delay" ,
"Simulation_DOA_rearanged/Maximum Hydro 2/Subsystem/Delay" ,
"Simulation_DOA_rearanged/Maximum Hydro 3/Subsystem/Delay" ,
"Simulation_DOA_rearanged/Maximum Hydro 1/Delay" ,
"Simulation_DOA_rearanged/Maximum Hydro 2/Delay" ,
"Simulation_DOA_rearanged/Maximum Hydro 3/Delay" ,
"Simulation_DOA_rearanged/Signal Trigger/Fenetrage/Counter/Delay" ,
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Counter/Count_reg"
,
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Delay4"
, "Simulation_DOA_rearanged/Subsystem4/Delay" ,
"Simulation_DOA_rearanged/Maximum Hydro Ref/Delay4" ,
"Simulation_DOA_rearanged/Maximum Hydro 1/Delay4" ,
"Simulation_DOA_rearanged/Maximum Hydro 2/Delay4" ,
"Simulation_DOA_rearanged/Maximum Hydro 3/Delay4" ,
"Simulation_DOA_rearanged/Signal Trigger/Delay" ,
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Delay5"
, "Simulation_DOA_rearanged/Subsystem4/Delay1" ,
 "Simulation_DOA_rearanged/Subsystem4/Multiply-Accumulate/streamingMAC_with_counter/Delay3"
} ; static const char_T * rt_LoggedStateNames [ ] = { "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" }
; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 1 , SS_DOUBLE , SS_INT32 , 64 , 1 , 1 ,
1.0 , - 8 , 0.0 } , { 1 , SS_DOUBLE , SS_INT32 , 64 , 1 , 1 , 1.0 , - 8 , 0.0
} , { 1 , SS_DOUBLE , SS_INT32 , 64 , 1 , 1 , 1.0 , - 8 , 0.0 } , { 1 ,
SS_DOUBLE , SS_INT32 , 64 , 1 , 1 , 1.0 , - 8 , 0.0 } , { 1 , SS_DOUBLE ,
SS_INT32 , 64 , 1 , 1 , 1.0 , - 8 , 0.0 } , { 1 , SS_DOUBLE , SS_INT32 , 64 ,
1 , 1 , 1.0 , - 8 , 0.0 } , { 1 , SS_DOUBLE , SS_INT32 , 64 , 1 , 1 , 1.0 , -
8 , 0.0 } , { 1 , SS_DOUBLE , SS_INT32 , 64 , 1 , 1 , 1.0 , - 8 , 0.0 } , { 1
, SS_DOUBLE , SS_INT32 , 64 , 1 , 1 , 1.0 , - 8 , 0.0 } , { 1 , SS_DOUBLE ,
SS_INT32 , 64 , 1 , 1 , 1.0 , - 8 , 0.0 } , { 1 , SS_DOUBLE , SS_INT32 , 64 ,
1 , 1 , 1.0 , - 8 , 0.0 } , { 1 , SS_DOUBLE , SS_INT32 , 64 , 1 , 1 , 1.0 , -
8 , 0.0 } , { 1 , SS_DOUBLE , SS_INT32 , 64 , 1 , 1 , 1.0 , - 8 , 0.0 } , { 1
, SS_DOUBLE , SS_INT32 , 64 , 1 , 1 , 1.0 , - 26 , 0.0 } , { 1 , SS_DOUBLE ,
SS_INT32 , 64 , 1 , 1 , 1.0 , - 26 , 0.0 } , { 1 , SS_DOUBLE , SS_INT32 , 64
, 1 , 1 , 1.0 , - 26 , 0.0 } , { 1 , SS_DOUBLE , SS_INT32 , 64 , 1 , 1 , 1.0
, - 26 , 0.0 } , { 1 , SS_DOUBLE , SS_UINT32 , 64 , 1 , 0 , 1.0 , 0 , 0.0 } ,
{ 1 , SS_DOUBLE , SS_UINT32 , 64 , 1 , 0 , 1.0 , 0 , 0.0 } , { 1 , SS_DOUBLE
, SS_UINT32 , 64 , 1 , 0 , 1.0 , 0 , 0.0 } , { 1 , SS_DOUBLE , SS_UINT32 , 64
, 1 , 0 , 1.0 , 0 , 0.0 } , { 1 , SS_DOUBLE , SS_UINT32 , 64 , 1 , 0 , 1.0 ,
0 , 0.0 } , { 1 , SS_DOUBLE , SS_UINT32 , 64 , 1 , 0 , 1.0 , 0 , 0.0 } , { 1
, SS_DOUBLE , SS_UINT32 , 64 , 1 , 0 , 1.0 , 0 , 0.0 } , { 1 , SS_DOUBLE ,
SS_UINT32 , 64 , 1 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_UINT16 , SS_UINT16 , 0 ,
0 , 0 , 1.0 , 0 , 0.0 } , { 1 , SS_DOUBLE , SS_UINT16 , 64 , 1 , 0 , 1.0 , 0
, 0.0 } , { 1 , SS_DOUBLE , SS_UINT16 , 64 , 1 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN ,
SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0
, 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 ,
0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0
, SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN ,
SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0
, 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 ,
0 , 0.0 } } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 37 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 37 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtDW . jsgyz1qcth ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtDW . nnreceeeob ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtDW . l0wgyztcbo ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtDW . gwrnkftzef ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtDW . b52mktt2zz ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtDW . ngjwiyysws ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtDW . dwn4wwhy2y ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtDW . jx4h2wbup3 ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtDW . bio2vh5c4c ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtDW . mmzjnp1uww ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtDW . em01ku2qsr ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtDW . el0lvpuekz ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtDW . hnvrararos ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) rtDW . plhu0vyzl3 ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) rtDW . gk2im0n30c ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) rtDW . cv4jadh1hz ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) rtDW . pva255ly42 ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtDW . dl24d3xbii ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtDW . oorrier0f2 ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtDW . oyp1nx1y0d ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtDW . lmcosoxm0k ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtDW . kohozqm44k ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtDW . kdsiyo0fhb ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtDW . a2zb4ls2ku ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtDW . dsoc41t3j0 ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtDW . nnty3e15zo ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtDW . arkwssm1yy ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtDW . mff3u0pd5g ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) rtDW . gnviqudpd4 ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtDW . feq2k5hyrq ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtDW . nqcyti2ov4 ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtDW . ceeuccxr3s ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtDW . lv3ck33lyh ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtDW . mvicvyd4ab ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtDW . hxfv4spray ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtDW . ncvdu1kcxh ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtDW . dq53bdyvmu ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; { static void * rt_LoggedOutputSignalPtrs [ ] = { & rtY .
lhka424xlu , & rtY . glxdkvsqpv , & rtY . aflkhcj12l , & rtY . oknxod1xye } ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( ( LogSignalPtrsType )
rt_LoggedOutputSignalPtrs ) ) ; } { static int_T rt_LoggedOutputWidths [ ] =
{ 1 , 1 , 1 , 1 } ; static int_T rt_LoggedOutputNumDimensions [ ] = { 2 , 2 ,
1 , 2 } ; static int_T rt_LoggedOutputDimensions [ ] = { 1 , 1 , 1 , 1 , 1 ,
1 , 1 } ; static boolean_T rt_LoggedOutputIsVarDims [ ] = { 0 , 0 , 0 , 0 } ;
static void * rt_LoggedCurrentSignalDimensions [ ] = { ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static int_T
rt_LoggedCurrentSignalDimensionsSize [ ] = { 4 , 4 , 4 , 4 , 4 , 4 , 4 } ;
static BuiltInDTypeId rt_LoggedOutputDataTypeIds [ ] = { SS_BOOLEAN ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedOutputComplexSignals [ ] = { 0 , 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingPreprocessingFcnPtrs [ ] = { ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) } ; static const char_T * rt_LoggedOutputLabels
[ ] = { "" , "" , "" , "" } ; static const char_T * rt_LoggedOutputBlockNames
[ ] = { "Simulation_DOA_rearanged/SNR_Check" ,
"Simulation_DOA_rearanged/Heading" , "Simulation_DOA_rearanged/Frequency" ,
"Simulation_DOA_rearanged/Elevation" } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 1 , SS_DOUBLE , SS_INT32 , 64 , 1 , 1 , 1.0 , - 28 , 0.0
} , { 1 , SS_DOUBLE , SS_UINT32 , 64 , 1 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static
RTWLogSignalInfo rt_LoggedOutputSignalInfo [ ] = { { 4 ,
rt_LoggedOutputWidths , rt_LoggedOutputNumDimensions ,
rt_LoggedOutputDimensions , rt_LoggedOutputIsVarDims ,
rt_LoggedCurrentSignalDimensions , rt_LoggedCurrentSignalDimensionsSize ,
rt_LoggedOutputDataTypeIds , rt_LoggedOutputComplexSignals , ( NULL ) ,
rt_LoggingPreprocessingFcnPtrs , { rt_LoggedOutputLabels } , ( NULL ) , (
NULL ) , ( NULL ) , { rt_LoggedOutputBlockNames } , { ( NULL ) } , ( NULL ) ,
rt_RTWLogDataTypeConvert } } ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS
) , rt_LoggedOutputSignalInfo ) ; rt_LoggedCurrentSignalDimensions [ 0 ] = &
rt_LoggedOutputWidths [ 0 ] ; rt_LoggedCurrentSignalDimensions [ 1 ] = &
rt_LoggedOutputWidths [ 0 ] ; rt_LoggedCurrentSignalDimensions [ 2 ] = &
rt_LoggedOutputWidths [ 1 ] ; rt_LoggedCurrentSignalDimensions [ 3 ] = &
rt_LoggedOutputWidths [ 1 ] ; rt_LoggedCurrentSignalDimensions [ 4 ] = &
rt_LoggedOutputWidths [ 2 ] ; rt_LoggedCurrentSignalDimensions [ 5 ] = &
rt_LoggedOutputWidths [ 3 ] ; rt_LoggedCurrentSignalDimensions [ 6 ] = &
rt_LoggedOutputWidths [ 3 ] ; } rtliSetLogY ( ssGetRTWLogInfo ( rtS ) ,
"yout" ) ; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 (
rtS , & statesInfo2 ) ; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "FixedStepDiscrete" ) ; ssSetVariableStepSolver ( rtS
, 0 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } { ZCSigState * zc = ( ZCSigState * ) &
rtPrevZCX ; ssSetPrevZCSigState ( rtS , zc ) ; ssSetWorkSizeInBytes ( rtS ,
sizeof ( rtPrevZCX ) , "PrevZCSigState" ) ; } { rtPrevZCX . knv1wtfxqc =
POS_ZCSIG ; rtPrevZCX . aqpvzed4uc = POS_ZCSIG ; rtPrevZCX . nawb0gzcmp =
POS_ZCSIG ; rtPrevZCX . kpjzhjqrqw . lbvtvvs2as = ZERO_ZCSIG ; rtPrevZCX .
popnzdb3ry . l3egl1yyin = ZERO_ZCSIG ; rtPrevZCX . crejvlo0y5 . euv3jqlvh2 =
ZERO_ZCSIG ; rtPrevZCX . kb0c50ld2h . dnaiq0flrd = ZERO_ZCSIG ; rtPrevZCX .
l4kbtxpaxe . kza1wyt0fg = ZERO_ZCSIG ; rtPrevZCX . kwch3e15c1 . euv3jqlvh2 =
ZERO_ZCSIG ; rtPrevZCX . ep4zp2asi5 . lbvtvvs2as = ZERO_ZCSIG ; rtPrevZCX .
ifacholhbj . l3egl1yyin = ZERO_ZCSIG ; rtPrevZCX . kcj1xw2fyj . euv3jqlvh2 =
ZERO_ZCSIG ; rtPrevZCX . gis5nx3d51 . dnaiq0flrd = ZERO_ZCSIG ; rtPrevZCX .
jesurwi24z . kza1wyt0fg = ZERO_ZCSIG ; rtPrevZCX . gqsds1azit . euv3jqlvh2 =
ZERO_ZCSIG ; rtPrevZCX . eygzwxr3yp . lbvtvvs2as = ZERO_ZCSIG ; rtPrevZCX .
ppbi33hazt . l3egl1yyin = ZERO_ZCSIG ; rtPrevZCX . hsz3hkboep . euv3jqlvh2 =
ZERO_ZCSIG ; rtPrevZCX . hvquu0midq . dnaiq0flrd = ZERO_ZCSIG ; rtPrevZCX .
fhzqhbrdcr . kza1wyt0fg = ZERO_ZCSIG ; rtPrevZCX . etzyrbzjj0 . euv3jqlvh2 =
ZERO_ZCSIG ; rtPrevZCX . aqmj5gejllk . lbvtvvs2as = ZERO_ZCSIG ; rtPrevZCX .
nirnnu0kb5e . l3egl1yyin = ZERO_ZCSIG ; rtPrevZCX . hamu3nooom . euv3jqlvh2 =
ZERO_ZCSIG ; rtPrevZCX . jgkqqwc2m5a . dnaiq0flrd = ZERO_ZCSIG ; rtPrevZCX .
n014eikjcjy . kza1wyt0fg = ZERO_ZCSIG ; rtPrevZCX . otw02eo3ue3 . euv3jqlvh2
= ZERO_ZCSIG ; } ssSetChecksumVal ( rtS , 0 , 3229635691U ) ;
ssSetChecksumVal ( rtS , 1 , 895491095U ) ; ssSetChecksumVal ( rtS , 2 ,
1600266565U ) ; ssSetChecksumVal ( rtS , 3 , 2963355993U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 61 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = (
sysRanDType * ) & rtDW . at5rpeawoo ; systemRan [ 2 ] = & rtAlwaysEnabled ;
systemRan [ 3 ] = & rtAlwaysEnabled ; systemRan [ 4 ] = & rtAlwaysEnabled ;
systemRan [ 5 ] = & rtAlwaysEnabled ; systemRan [ 6 ] = & rtAlwaysEnabled ;
systemRan [ 7 ] = & rtAlwaysEnabled ; systemRan [ 8 ] = & rtAlwaysEnabled ;
systemRan [ 9 ] = & rtAlwaysEnabled ; systemRan [ 10 ] = ( sysRanDType * ) &
rtDW . otw02eo3ue3 . gyucjoxwjz ; systemRan [ 11 ] = & rtAlwaysEnabled ;
systemRan [ 12 ] = ( sysRanDType * ) & rtDW . n014eikjcjy . c1gzfpfi1s ;
systemRan [ 13 ] = & rtAlwaysEnabled ; systemRan [ 14 ] = ( sysRanDType * ) &
rtDW . jgkqqwc2m5a . arvghscytc ; systemRan [ 15 ] = & rtAlwaysEnabled ;
systemRan [ 16 ] = ( sysRanDType * ) & rtDW . hamu3nooom . gyucjoxwjz ;
systemRan [ 17 ] = & rtAlwaysEnabled ; systemRan [ 18 ] = ( sysRanDType * ) &
rtDW . nirnnu0kb5e . pobr4kqks2 ; systemRan [ 19 ] = & rtAlwaysEnabled ;
systemRan [ 20 ] = ( sysRanDType * ) & rtDW . aqmj5gejllk . loskfbob5b ;
systemRan [ 21 ] = & rtAlwaysEnabled ; systemRan [ 22 ] = ( sysRanDType * ) &
rtDW . etzyrbzjj0 . gyucjoxwjz ; systemRan [ 23 ] = & rtAlwaysEnabled ;
systemRan [ 24 ] = ( sysRanDType * ) & rtDW . fhzqhbrdcr . c1gzfpfi1s ;
systemRan [ 25 ] = & rtAlwaysEnabled ; systemRan [ 26 ] = ( sysRanDType * ) &
rtDW . hvquu0midq . arvghscytc ; systemRan [ 27 ] = & rtAlwaysEnabled ;
systemRan [ 28 ] = ( sysRanDType * ) & rtDW . hsz3hkboep . gyucjoxwjz ;
systemRan [ 29 ] = & rtAlwaysEnabled ; systemRan [ 30 ] = ( sysRanDType * ) &
rtDW . ppbi33hazt . pobr4kqks2 ; systemRan [ 31 ] = & rtAlwaysEnabled ;
systemRan [ 32 ] = ( sysRanDType * ) & rtDW . eygzwxr3yp . loskfbob5b ;
systemRan [ 33 ] = & rtAlwaysEnabled ; systemRan [ 34 ] = ( sysRanDType * ) &
rtDW . gqsds1azit . gyucjoxwjz ; systemRan [ 35 ] = & rtAlwaysEnabled ;
systemRan [ 36 ] = ( sysRanDType * ) & rtDW . jesurwi24z . c1gzfpfi1s ;
systemRan [ 37 ] = & rtAlwaysEnabled ; systemRan [ 38 ] = ( sysRanDType * ) &
rtDW . gis5nx3d51 . arvghscytc ; systemRan [ 39 ] = & rtAlwaysEnabled ;
systemRan [ 40 ] = ( sysRanDType * ) & rtDW . kcj1xw2fyj . gyucjoxwjz ;
systemRan [ 41 ] = & rtAlwaysEnabled ; systemRan [ 42 ] = ( sysRanDType * ) &
rtDW . ifacholhbj . pobr4kqks2 ; systemRan [ 43 ] = & rtAlwaysEnabled ;
systemRan [ 44 ] = ( sysRanDType * ) & rtDW . ep4zp2asi5 . loskfbob5b ;
systemRan [ 45 ] = & rtAlwaysEnabled ; systemRan [ 46 ] = ( sysRanDType * ) &
rtDW . kwch3e15c1 . gyucjoxwjz ; systemRan [ 47 ] = & rtAlwaysEnabled ;
systemRan [ 48 ] = ( sysRanDType * ) & rtDW . l4kbtxpaxe . c1gzfpfi1s ;
systemRan [ 49 ] = & rtAlwaysEnabled ; systemRan [ 50 ] = ( sysRanDType * ) &
rtDW . kb0c50ld2h . arvghscytc ; systemRan [ 51 ] = & rtAlwaysEnabled ;
systemRan [ 52 ] = ( sysRanDType * ) & rtDW . crejvlo0y5 . gyucjoxwjz ;
systemRan [ 53 ] = & rtAlwaysEnabled ; systemRan [ 54 ] = ( sysRanDType * ) &
rtDW . popnzdb3ry . pobr4kqks2 ; systemRan [ 55 ] = & rtAlwaysEnabled ;
systemRan [ 56 ] = ( sysRanDType * ) & rtDW . kpjzhjqrqw . loskfbob5b ;
systemRan [ 57 ] = & rtAlwaysEnabled ; systemRan [ 58 ] = ( sysRanDType * ) &
rtDW . n3px15f5qg ; systemRan [ 59 ] = & rtAlwaysEnabled ; systemRan [ 60 ] =
( sysRanDType * ) & rtDW . jhxoqbpjsq ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } return
rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
