#ifndef RTW_HEADER_Simulation_DOA_rearanged_types_h_
#define RTW_HEADER_Simulation_DOA_rearanged_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef struct_tag_ZAIKH1H4WCj5jZFEnEQ3rE
#define struct_tag_ZAIKH1H4WCj5jZFEnEQ3rE
struct tag_ZAIKH1H4WCj5jZFEnEQ3rE { int32_T isInitialized ; int32_T xPipeline
[ 14 ] ; int32_T yPipeline [ 14 ] ; int32_T zPipeline [ 14 ] ; boolean_T
validPipeline [ 17 ] ; int32_T pPostScale ; uint8_T pQuadrantIn [ 14 ] ;
uint8_T pXYReversed [ 14 ] ; int32_T pQuadrantOut ; int32_T pPipeout ;
int32_T pXAbsolute ; int32_T pYAbsolute ; int32_T realInReg [ 3 ] ; int32_T
imagInReg [ 3 ] ; } ;
#endif
#ifndef typedef_jwzaobjvlz
#define typedef_jwzaobjvlz
typedef struct tag_ZAIKH1H4WCj5jZFEnEQ3rE jwzaobjvlz ;
#endif
#ifndef struct_tag_7ABP7nHM33oCLBbulxxrNC
#define struct_tag_7ABP7nHM33oCLBbulxxrNC
struct tag_7ABP7nHM33oCLBbulxxrNC { int32_T isInitialized ; real_T
pWrOutBuffer_index ; real_T pRdOutBuffer_index ; real_T pInBufferIndex ;
int32_T pInBuffer_re [ 3072 ] ; int32_T pInBuffer_im [ 3072 ] ; real_T
pInBuffer_valid [ 3072 ] ; cint32_T pOutBuffer_cmplx [ 6144 ] ; real_T
pBitReverseTable_H [ 128 ] ; real_T pBitReverseTable_F [ 256 ] ; boolean_T
pStartOutputPort [ 256 ] ; boolean_T pEndOutputPort [ 256 ] ; real_T
pOverflowStage [ 8 ] ; real_T pSimTime ; real_T pCurSOF ; real_T pSOFFifo [
1024 ] ; real_T pWrFifoAddr ; real_T pRdFifoAddr ; cint32_T pLastData ;
cint32_T pInitialValue ; boolean_T pWrOutBuffer_roll ; boolean_T
pRdOutBuffer_roll ; boolean_T pResetStart ; boolean_T pOverflowFlag ; real_T
pState ; real_T pSampleCnt ; real_T pOutCnt ; boolean_T pWrEnb ; boolean_T
pRdyReg ; } ;
#endif
#ifndef typedef_iqgjshdk3v
#define typedef_iqgjshdk3v
typedef struct tag_7ABP7nHM33oCLBbulxxrNC iqgjshdk3v ;
#endif
#ifndef SS_INT64
#define SS_INT64  46
#endif
#ifndef SS_UINT64
#define SS_UINT64  47
#endif
typedef struct gjtsy00uku_ gjtsy00uku ; typedef struct oynqt3hp52_ oynqt3hp52
; typedef struct gykc2zimmf_ gykc2zimmf ; typedef struct nyewzoecvi_
nyewzoecvi ; typedef struct jbke1kw2fs_ jbke1kw2fs ; typedef struct P_ P ;
#endif
