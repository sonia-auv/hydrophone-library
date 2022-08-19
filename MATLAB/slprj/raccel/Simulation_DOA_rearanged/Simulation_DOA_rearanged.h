#ifndef RTW_HEADER_Simulation_DOA_rearanged_h_
#define RTW_HEADER_Simulation_DOA_rearanged_h_
#include <stddef.h>
#include <math.h>
#include <emmintrin.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef Simulation_DOA_rearanged_COMMON_INCLUDES_
#define Simulation_DOA_rearanged_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "Simulation_DOA_rearanged_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Simulation_DOA_rearanged
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (4)     
#define NBLOCKIO (283) 
#define NUM_ZC_EVENTS (27) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { int32_T bmorkd0dzv ; int32_T jla3h5bfbz ; boolean_T
fmynalp5d2 ; } mv2oq2sioj ; typedef struct { jwzaobjvlz a5tso3rzwb ;
boolean_T i5l1aq2a5d ; } k5n2iqniel ; typedef struct { int32_T k_data [ 3072
] ; cint32_T pmfcpbeq12 ; boolean_T prus50oyah ; boolean_T fv5wzqs0g4 ; }
jvkwpsnmaz ; typedef struct { iqgjshdk3v ptbhifuxoj ; boolean_T jba4z1ves1 ;
} ipackyuxas ; typedef struct { int32_T emcuycy0pw ; } lfyhdt5va3 ; typedef
struct { int8_T gyucjoxwjz ; } gsfhjkq4hi ; typedef struct { ZCSigState
euv3jqlvh2 ; } o3mzjps5fh ; typedef struct { uint32_T pp2wmkmgqd ; }
avj4altxjx ; typedef struct { int8_T c1gzfpfi1s ; } hb15msapyk ; typedef
struct { ZCSigState kza1wyt0fg ; } evomlss35w ; typedef struct { int32_T
cxqjp3z5g0 ; } kfcqi4nahv ; typedef struct { int8_T arvghscytc ; } f20m3ibsya
; typedef struct { ZCSigState dnaiq0flrd ; } mnrtw12u1h ; typedef struct {
uint32_T djc2e4rqrh ; } k5z5fbyjsj ; typedef struct { int8_T pobr4kqks2 ; }
piwynay3gv ; typedef struct { ZCSigState l3egl1yyin ; } jacsthzjcr ; typedef
struct { int32_T owi3gr0gl5 ; } biek11azsp ; typedef struct { int8_T
loskfbob5b ; } mnzjnnyijt ; typedef struct { ZCSigState lbvtvvs2as ; }
gwub40ffk2 ; typedef struct { int32_T k_data [ 3072 ] ; int32_T
k_data_mbvzarwird [ 3072 ] ; uint128m_T axdfvwdyot ; int128m_T oh0heldnt4 ;
int128m_T lmktwyzsxa ; uint64_T c0xui1wk2i ; uint64_T ephpqceyqu ; int64_T
ghr21v0y4h ; int64_T dsfwlmxmgm ; int64_T c1az4ldf0t ; real_T h0wwdil5ui ;
real_T pz0khc11b5 ; real_T cfkib4snni ; real_T cnsob1xib2 ; real_T fisoyvpapb
; real_T eulypohvkk ; real_T aeamlgo5gw ; real_T otre0btlht ; real_T
lv4vwau52m ; real_T pseuhan1y2 ; real_T fjgn2cj4vb ; real_T lh4yuikz0y ;
real_T bspaznhyu3 ; real_T mhihwha20c ; real_T h3ybus3uc4 ; real_T pdhm5ddrn5
; real_T geaxy0tifm ; real_T fwsifagno3 ; real_T a520fdraqw ; real_T
aq5pk0b3dg ; real_T fw0ry5jnvj ; real_T o1yqldlqxa ; real_T frlnsjjc1e ;
real_T m2nqhnhosf ; real_T kizepetnhb ; real_T bnjhosy04c ; real_T kdy34jl3d0
; real_T jiv0ptzxj3 ; real_T ai0nkoyyzf ; real_T ftprthij4n ; real_T
j1lgr3ytyp ; real_T c4cuktnwdp ; real_T oxdfqwae0k ; real_T lknmgvjqgn ;
real_T onjsdyh32p ; real_T hju5mvez0a ; real_T mkm0lv1mks ; real_T kn5tnjdgbo
; real_T c0bjpvlg5a ; real_T f3kqzrcgy4 ; real_T e5l3jz4xat ; real_T
fmn5g1jnc1 ; real_T fqf5psyxso ; real_T kt03sbrd2l ; real_T hapqonhpcl ;
real_T fytjznpmnc ; real_T d2sirds33k ; real_T fcpveaaqxk ; real_T cs0uc5ej5i
; real_T n1elti22an ; real_T o4oi1jwcpq ; real_T nexgq2cuwu ; real_T
l2uvxsydr5 ; real_T m1qpxl0jpv ; real_T mom23gv2k5 ; real_T mqo1g135dm ;
real_T bl0nn1bu04 ; real_T o5vvxznplh ; real_T h5qnu5edjj ; real_T mjw0pogy4h
; real_T cfsq0ynnzy ; real_T fy0onvvx1m ; real_T diytyms0az ; real_T
jwjh4vm5vv ; real_T pbeelgvdyf ; real_T dnyct00tit ; real_T fjeujynzc4 ;
uint32_T j5nnsx2ha4 ; uint32_T nux3tj1dsw ; uint32_T bns15ue0h0 ; uint32_T
fajrh5ebvm ; uint32_T cv0ayzwsev ; uint32_T ac44xbjyzx ; uint32_T im2uw1tffv
; uint32_T lgkhemwe21 ; uint32_T i0htefbuzq ; uint32_T mira15b04v ; uint32_T
kj5cas4vsk ; uint32_T h53jwoi45y ; uint32_T pomjv0rtxv ; uint32_T jgkc41e1ur
; uint32_T f14fitok5v ; uint32_T l21b1nezu4 ; uint32_T p4prxjmuld ; uint32_T
jkzyotkqdr ; uint32_T elhihgd2gr ; uint32_T fm1pdhccer ; uint32_T mq5r0xffei
; uint32_T hbweu1k1mv ; int32_T dzolba3omv ; int32_T bceyt2gezt [ 3 ] ;
int32_T n5cj2elrim ; int32_T kjjdd01ek3 ; int32_T gcx3vvlv01 ; int32_T
hffhj2j3tb ; int32_T hjj4qeyaab ; int32_T mdp1adv1zf ; int32_T nyoa5rvtc2 ;
int32_T mawtkveb0c ; int32_T l5kufayq12 ; int32_T hespxibzur ; int32_T
mmfoimpc5s ; int32_T hwoxkcxmnw ; int32_T ldkcvoyc05 ; int32_T k2i5ljo21q ;
int32_T br33n3ewpf ; int32_T acpkfkvmlz ; int32_T k2e4mtxz0f ; int32_T
gzmx0g2ql4 ; int32_T nvqsjvsh1e ; int32_T orlyixhwdt ; int32_T hweouvpzaf ;
int32_T ajxn3billg ; int32_T a0rmql43dv ; int32_T h5gmicptzc ; int32_T
ninnovw2gl ; int32_T iklzpkjqsn ; int32_T l45rxbwf2o ; int32_T gimf3q1muu ;
int32_T e1opwguyzb ; int32_T pyovfatmru ; int32_T cjalrq1zug ; int32_T
bsxi2ox2mt ; int32_T lil4t41v4y ; cint32_T oqnpxh1nf0 ; cint32_T hliq0objjz ;
uint16_T cwy2gix3yr ; uint16_T ahhsj5tl3f ; uint16_T e3pd2awld2 ; uint16_T
o5uklvuyrd ; uint16_T ltoa54ba3c ; uint16_T gpngzfzm5o ; uint16_T iyg2osseov
; uint16_T d3kur0pryu ; uint16_T g5oqteomrh ; uint16_T cotk5hq3pn ; uint16_T
irewvzta1j ; uint16_T p5ltyme4ou ; uint16_T gnegcolamm ; uint16_T ci0kd5qanr
; uint16_T cmlf145r3w ; uint16_T phdru50zsj ; uint16_T iyafkvctqt ; uint16_T
ntkpejjap3 ; uint16_T deg3k52snr ; uint16_T lpicjg4fyq ; uint16_T fxnfbtjkqf
; uint16_T of3umjp2za ; uint16_T pmcmjq0wty ; uint16_T fpfftzsohz ; uint16_T
g5u5xbo0h3 ; uint16_T naosxvvjkq ; uint16_T mbob4csy5h ; uint16_T bnss3gxib0
; uint16_T kxwhxhizh0 ; uint16_T db3qfnh4gl ; uint16_T gcxcrfqzbn ; uint16_T
dfuxydpjaq ; uint16_T pjkv5aehah ; uint16_T gsl3xqnnpl ; uint16_T bk1jemzwgb
; uint16_T f0zeyhioe2 ; int16_T ezsbqyvnan [ 3 ] ; int16_T h2gdavdf12 [ 4 ] ;
int16_T agxl0jnck4 ; int16_T bmycztu53b ; int16_T jct14c5au5 ; boolean_T
bxwcxvlcty ; boolean_T e4uxf3jebt ; boolean_T ays0cxwjgc ; boolean_T
aocicufjnb ; boolean_T be0433drgy ; boolean_T nvp5saf4vt ; boolean_T
a42sd0byju ; boolean_T cnf1xgsxjm ; boolean_T iddapcucwk ; boolean_T
ih3p5u1r2h ; boolean_T pb4ejhsyzn ; boolean_T pr5qzbgply ; boolean_T
dbaeye23k3 ; boolean_T p1zaumnujz ; boolean_T ckkbsg4b5s ; boolean_T
eq3toms2v4 ; boolean_T megyurvikr ; boolean_T nvwgj11js1 ; boolean_T
m31yfjfxst ; boolean_T jzseladqz5 ; boolean_T cj5quyrcyv ; boolean_T
nal2meeth1 ; boolean_T bhcd2cpqy3 ; boolean_T cdo1t005p0 ; boolean_T
okhmnm0uka ; boolean_T fwqhnxdxba ; boolean_T othlvy4lcm ; boolean_T
cf2yz3yij0 ; boolean_T haeikw2v0u ; boolean_T h4gt1s2quy ; boolean_T
azomz2512x ; boolean_T jz5sra12na ; boolean_T j4zso4cshe ; boolean_T
p1qhdkmp1e ; boolean_T noriyy1yxf ; boolean_T g5wlvxxevf ; boolean_T
i4usrn1mnq ; boolean_T oa3yjyv5sa ; boolean_T jwsp2nls1p ; boolean_T
ogwvvk0sds ; boolean_T i2rtlw2sff ; boolean_T h5p1p3zh3a ; boolean_T
ezmjk2o1s1 ; boolean_T lljj4opukd ; boolean_T byriipp1p3 ; boolean_T
gfkap4zouj ; boolean_T aud13svlct ; boolean_T mypgjf3jml ; boolean_T
ly4h0bwdnm ; boolean_T n23gjpdnyb ; boolean_T magvavcslg ; boolean_T
jntqx3sul1 ; boolean_T klpuetkq5g ; boolean_T irohinrqyf ; boolean_T
oiwmfmahct ; boolean_T gbblvn3zyv ; boolean_T k1ggl1xgfz ; boolean_T
lb2k1x1ogu ; boolean_T ocrom13v4d ; boolean_T cxxjjwrqch ; boolean_T
mvtbzy4kxz ; boolean_T edhhzwakxu ; boolean_T ap04dfb20d ; boolean_T
dzkfl5rhnk ; boolean_T cczpwym0xn ; boolean_T mxy1hkdva5 ; boolean_T
mcdt4kjdw0 ; boolean_T bek0af0j1j ; boolean_T kp4so2pt2n ; boolean_T
kf1wm1zuum ; boolean_T edeyixszm5 ; boolean_T gpz2elpgqi ; biek11azsp
kpjzhjqrqw ; k5z5fbyjsj popnzdb3ry ; lfyhdt5va3 crejvlo0y5 ; kfcqi4nahv
kb0c50ld2h ; avj4altxjx l4kbtxpaxe ; lfyhdt5va3 kwch3e15c1 ; biek11azsp
ep4zp2asi5 ; k5z5fbyjsj ifacholhbj ; lfyhdt5va3 kcj1xw2fyj ; kfcqi4nahv
gis5nx3d51 ; avj4altxjx jesurwi24z ; lfyhdt5va3 gqsds1azit ; biek11azsp
eygzwxr3yp ; k5z5fbyjsj ppbi33hazt ; lfyhdt5va3 hsz3hkboep ; kfcqi4nahv
hvquu0midq ; avj4altxjx fhzqhbrdcr ; lfyhdt5va3 etzyrbzjj0 ; biek11azsp
aqmj5gejllk ; k5z5fbyjsj nirnnu0kb5e ; lfyhdt5va3 hamu3nooom ; kfcqi4nahv
jgkqqwc2m5a ; avj4altxjx n014eikjcjy ; lfyhdt5va3 otw02eo3ue3 ; jvkwpsnmaz
lyyly4yad2e2d ; mv2oq2sioj jrnktqme1n3b1 ; jvkwpsnmaz lyyly4yad2e2 ;
mv2oq2sioj jrnktqme1n3b ; } B ; typedef struct { iqgjshdk3v ermnepihcn ;
iqgjshdk3v nbiqr5wspw ; jwzaobjvlz grqziysskz ; jwzaobjvlz azbznqzcih ;
int128m_T cnh0t2u2st ; int128m_T dlyyimby3l ; real_T kom2on3tza ; real_T
oo11jil2fj [ 35 ] ; real_T a32edo1wit [ 35 ] ; real_T nxiegp2np2 [ 35 ] ;
real_T anify3zav4 [ 35 ] ; int64_T eeg2qrogh5 ; struct { void * LoggedData [
4 ] ; } je3fxbkxni ; struct { void * LoggedData [ 2 ] ; } hmzu0f5hps ; struct
{ void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } kkydb1gjmz ;
struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } nl1bpgswzl
; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; }
blfyjbjksw ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ;
} o3pnclbg5l ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr
; } cik5yfvopb ; struct { void * TimePtr ; void * DataPtr ; void *
RSimInfoPtr ; } i44vfztycq ; struct { void * TimePtr ; void * DataPtr ; void
* RSimInfoPtr ; } j2pd5q2ore ; struct { void * TimePtr ; void * DataPtr ;
void * RSimInfoPtr ; } iqoyvk1xwu ; struct { void * LoggedData [ 4 ] ; }
ahplabeisu ; struct { void * LoggedData [ 5 ] ; } cwh4upwmny ; struct { void
* LoggedData [ 4 ] ; } eel0phm2gv ; struct { void * LoggedData [ 2 ] ; }
lt3b4hgr3x ; struct { void * LoggedData ; } g5bfwnxwuq ; struct { void *
AQHandles ; } d2vy4yaoku ; struct { void * AQHandles ; } hhgqqvjy4v ; struct
{ void * AQHandles ; } kyxq1kl0ma ; struct { void * AQHandles ; } o4pxgjuli2
; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; }
cuqwodigqn ; struct { void * LoggedData [ 4 ] ; } bjknxe2m0b ; struct { void
* LoggedData ; } k4m00vo01b ; struct { void * LoggedData [ 4 ] ; } bf3wn5wlqp
; struct { void * LoggedData [ 3 ] ; } d3pxwtnl02 ; struct { void *
LoggedData [ 2 ] ; } ewk1clyhvj ; struct { void * LoggedData [ 4 ] ; }
m1inawdncf ; struct { void * LoggedData [ 3 ] ; } axx2a00mns ; struct { void
* LoggedData [ 4 ] ; } f5xcmn0kpn ; struct { void * LoggedData [ 3 ] ; }
njpxwb1ftt ; struct { void * LoggedData [ 4 ] ; } eiaxw0di2g ; struct { void
* LoggedData [ 3 ] ; } aevse1bavv ; struct { void * LoggedData [ 4 ] ; }
oqnbr34055 ; struct { void * LoggedData [ 2 ] ; } n4tl4blt0q ; struct { void
* LoggedData ; } ofayl4ymyf ; struct { void * LoggedData ; } pnjtc0lbc2 ;
struct { void * LoggedData [ 4 ] ; } kvqczvgxdg ; struct { void * LoggedData
[ 8 ] ; } lv0rhanr0b ; struct { void * LoggedData [ 8 ] ; } co4ptnj5ad ;
struct { void * LoggedData [ 4 ] ; } aaaj0gvmrb ; struct { void * LoggedData
[ 2 ] ; } b5cksqmh1c ; int32_T jsgyz1qcth ; int32_T nnreceeeob ; int32_T
l0wgyztcbo ; int32_T gwrnkftzef ; int32_T b52mktt2zz ; int32_T ngjwiyysws ;
int32_T dwn4wwhy2y ; int32_T jx4h2wbup3 ; int32_T bio2vh5c4c ; int32_T
mmzjnp1uww ; int32_T em01ku2qsr ; int32_T el0lvpuekz ; int32_T hnvrararos ;
int32_T plhu0vyzl3 [ 2 ] ; int32_T gk2im0n30c [ 2 ] ; int32_T cv4jadh1hz [ 2
] ; int32_T pva255ly42 [ 2 ] ; uint32_T dl24d3xbii ; uint32_T oorrier0f2 ;
uint32_T oyp1nx1y0d ; uint32_T lmcosoxm0k ; uint32_T kohozqm44k ; uint32_T
kdsiyo0fhb ; uint32_T a2zb4ls2ku ; uint32_T dsoc41t3j0 ; int32_T jnmbtix4it ;
int32_T bfzub4gldc ; int32_T dkepphtq0p ; int32_T e1m3m031zp ; uint32_T
nft1hjwjii ; uint32_T dr4qhxhwfg [ 2 ] ; uint32_T fygen3nvd5 ; uint32_T
ijvf4opeah ; uint32_T os4r2mn3bs [ 2 ] ; uint32_T fvkxtqdmvc ; uint32_T
kkfiu0cmbj ; uint32_T hjbuyzppp0 [ 2 ] ; uint32_T mnzg33f1u3 ; uint32_T
dlrpd20j4u ; uint32_T gfyphbttiz [ 2 ] ; uint32_T nhov5hvn4g ; uint32_T
gqoxt5atim ; uint32_T n1p2345kna ; int32_T dc1fsvlzrf ; struct { int_T
PrevIndex ; } nbltkbxya0 ; struct { int_T PrevIndex ; } iawnirxblf ; struct {
int_T PrevIndex ; } g3l243y1u3 ; struct { int_T PrevIndex ; } eycujnig4l ;
struct { int_T PrevIndex ; } h2ju2tf3mj ; struct { int_T PrevIndex ; }
flbfwgerrm ; struct { int_T PrevIndex ; } giitlnmjsq ; struct { int_T
PrevIndex ; } ef0vh4kl2l ; struct { int_T PrevIndex ; } gvlgkjwrhe ; uint16_T
nnty3e15zo ; uint16_T arkwssm1yy ; uint16_T mff3u0pd5g ; uint16_T cs2ea0cbeg
; int16_T o4zet3azl0 ; int16_T lfwrlfba1u ; boolean_T gnviqudpd4 [ 2 ] ;
boolean_T feq2k5hyrq ; boolean_T nqcyti2ov4 ; boolean_T ceeuccxr3s ;
boolean_T lv3ck33lyh ; boolean_T mvicvyd4ab ; boolean_T hxfv4spray ;
boolean_T ncvdu1kcxh ; boolean_T dq53bdyvmu ; int8_T jhxoqbpjsq ; int8_T
n3px15f5qg ; int8_T at5rpeawoo ; boolean_T adtpgbwbkv ; boolean_T pt4yh5gdha
; boolean_T nnxhgghgr4 ; boolean_T pxcwuzk4ix ; uint8_T nktiitfvs5 ; uint8_T
nw4ierg2mf ; uint8_T gvqew00wty ; uint8_T ccefl3hqw4 ; mnzjnnyijt kpjzhjqrqw
; piwynay3gv popnzdb3ry ; gsfhjkq4hi crejvlo0y5 ; f20m3ibsya kb0c50ld2h ;
hb15msapyk l4kbtxpaxe ; gsfhjkq4hi kwch3e15c1 ; mnzjnnyijt ep4zp2asi5 ;
piwynay3gv ifacholhbj ; gsfhjkq4hi kcj1xw2fyj ; f20m3ibsya gis5nx3d51 ;
hb15msapyk jesurwi24z ; gsfhjkq4hi gqsds1azit ; mnzjnnyijt eygzwxr3yp ;
piwynay3gv ppbi33hazt ; gsfhjkq4hi hsz3hkboep ; f20m3ibsya hvquu0midq ;
hb15msapyk fhzqhbrdcr ; gsfhjkq4hi etzyrbzjj0 ; mnzjnnyijt aqmj5gejllk ;
piwynay3gv nirnnu0kb5e ; gsfhjkq4hi hamu3nooom ; f20m3ibsya jgkqqwc2m5a ;
hb15msapyk n014eikjcjy ; gsfhjkq4hi otw02eo3ue3 ; ipackyuxas lyyly4yad2e2d ;
k5n2iqniel jrnktqme1n3b1 ; ipackyuxas lyyly4yad2e2 ; k5n2iqniel jrnktqme1n3b
; } DW ; typedef struct { ZCSigState nawb0gzcmp ; ZCSigState aqpvzed4uc ;
gwub40ffk2 kpjzhjqrqw ; jacsthzjcr popnzdb3ry ; o3mzjps5fh crejvlo0y5 ;
mnrtw12u1h kb0c50ld2h ; evomlss35w l4kbtxpaxe ; o3mzjps5fh kwch3e15c1 ;
gwub40ffk2 ep4zp2asi5 ; jacsthzjcr ifacholhbj ; o3mzjps5fh kcj1xw2fyj ;
mnrtw12u1h gis5nx3d51 ; evomlss35w jesurwi24z ; o3mzjps5fh gqsds1azit ;
gwub40ffk2 eygzwxr3yp ; jacsthzjcr ppbi33hazt ; o3mzjps5fh hsz3hkboep ;
mnrtw12u1h hvquu0midq ; evomlss35w fhzqhbrdcr ; o3mzjps5fh etzyrbzjj0 ;
gwub40ffk2 aqmj5gejllk ; jacsthzjcr nirnnu0kb5e ; o3mzjps5fh hamu3nooom ;
mnrtw12u1h jgkqqwc2m5a ; evomlss35w n014eikjcjy ; o3mzjps5fh otw02eo3ue3 ;
ZCSigState knv1wtfxqc ; } PrevZCX ; typedef struct { boolean_T lhka424xlu ;
int32_T glxdkvsqpv ; uint32_T aflkhcj12l ; real_T oknxod1xye ; } ExtY ;
typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct
gjtsy00uku_ { int32_T _Y0 ; } ; struct oynqt3hp52_ { uint32_T _Y0 ; } ;
struct gykc2zimmf_ { int32_T _Y0 ; } ; struct nyewzoecvi_ { uint32_T _Y0 ; }
; struct jbke1kw2fs_ { int32_T _Y0 ; } ; struct P_ { real_T noise_type ;
uint32_T randSeed1 ; uint32_T randSeed2 ; uint32_T randSeed3 ; uint32_T
randSeed4 ; uint16_T Coeff_han [ 256 ] ; uint16_T FFT_LENGTH ; boolean_T
noise_on_off ; boolean_T runSim ; real_T Counter_CountStep ; real_T
HydroRefUniform_MaxVal ; real_T Hydro1Uniform_MaxVal ; real_T
Hydro2Uniform_MaxVal ; real_T Hydro3Uniform_MaxVal ; real_T
HydroRefGaussian_MeanVal ; real_T Hydro1Gaussian_MeanVal ; real_T
Hydro2Gaussian_MeanVal ; real_T Hydro3Gaussian_MeanVal ; real_T
HydroRefUniform_MinVal ; real_T Hydro1Uniform_MinVal ; real_T
Hydro2Uniform_MinVal ; real_T Hydro3Uniform_MinVal ; uint32_T
HydroRefUniform_rawSeed ; uint32_T Hydro1Uniform_rawSeed ; uint32_T
Hydro2Uniform_rawSeed ; uint32_T Hydro3Uniform_rawSeed ; uint16_T
CompareToConstant2_const ; uint16_T MultiplyAccumulate_num_samples ; real_T
Elevation_Y0 ; real_T FromWorkspace_Time0 [ 36449 ] ; real_T
FromWorkspace_Data0 [ 36449 ] ; real_T Constant8_Value ; real_T
HydroRefGaussian_VarianceRTP ; real_T DiscretePulseGenerator_Amp ; real_T
DiscretePulseGenerator_Period ; real_T DiscretePulseGenerator_Duty ; real_T
DiscretePulseGenerator_PhaseDelay ; real_T FromWorkspace_Time0_ptk5nrwdws [
64000 ] ; real_T FromWorkspace_Data0_i5gvxdearu [ 64000 ] ; real_T
Constant19_Value ; real_T Constant12_Value ; real_T FromWorkspace1_Time0 [
36449 ] ; real_T FromWorkspace1_Data0 [ 36449 ] ; real_T Constant9_Value ;
real_T Hydro1Gaussian_VarianceRTP ; real_T DiscretePulseGenerator1_Amp ;
real_T DiscretePulseGenerator1_Period ; real_T DiscretePulseGenerator1_Duty ;
real_T DiscretePulseGenerator1_PhaseDelay ; real_T
FromWorkspace1_Time0_jkinope2nl [ 64000 ] ; real_T
FromWorkspace1_Data0_nosxsmx3gj [ 64000 ] ; real_T Constant18_Value ; real_T
Constant13_Value ; real_T FromWorkspace2_Time0 [ 36449 ] ; real_T
FromWorkspace2_Data0 [ 36449 ] ; real_T Constant10_Value ; real_T
Hydro2Gaussian_VarianceRTP ; real_T DiscretePulseGenerator2_Amp ; real_T
DiscretePulseGenerator2_Period ; real_T DiscretePulseGenerator2_Duty ; real_T
DiscretePulseGenerator2_PhaseDelay ; real_T FromWorkspace2_Time0_hiuucoxmdi [
64000 ] ; real_T FromWorkspace2_Data0_oj3slyh5nl [ 64000 ] ; real_T
Constant17_Value ; real_T Constant14_Value ; real_T FromWorkspace3_Time0 [
36449 ] ; real_T FromWorkspace3_Data0 [ 36449 ] ; real_T Constant11_Value ;
real_T Hydro3Gaussian_VarianceRTP ; real_T DiscretePulseGenerator3_Amp ;
real_T DiscretePulseGenerator3_Period ; real_T DiscretePulseGenerator3_Duty ;
real_T DiscretePulseGenerator3_PhaseDelay ; real_T
FromWorkspace3_Time0_hcdwgnsiex [ 64000 ] ; real_T
FromWorkspace3_Data0_g4i3qf1zgi [ 64000 ] ; real_T Constant16_Value ; real_T
Constant15_Value ; real_T FromWorkspace4_Time0 [ 728980 ] ; real_T
FromWorkspace4_Data0 [ 728980 ] ; real_T Constant5_Value ; int32_T Debug_Y0 ;
int32_T Delay3_InitialCondition ; int32_T Delay5_InitialCondition ; int32_T
Delay1_InitialCondition ; int32_T Delay3_InitialCondition_pickqde1ag ;
int32_T Delay5_InitialCondition_ik0uapiiiu ; int32_T
Delay1_InitialCondition_k0qiqlztjz ; int32_T
Delay3_InitialCondition_k1euoqie50 ; int32_T
Delay5_InitialCondition_m2inlzix1d ; int32_T
Delay1_InitialCondition_anmb4aswmb ; int32_T
Delay3_InitialCondition_prak4zttvc ; int32_T
Delay5_InitialCondition_m0hyxmjxie ; int32_T
Delay1_InitialCondition_lvsyliwo3l ; int32_T accumulator_InitialCondition ;
int32_T Constant1_Value ; int32_T Constant_Value ; int32_T
const_initValue_Value ; int32_T Delay2_InitialCondition ; int32_T
Delay2_InitialCondition_bdi2hgqnsd ; int32_T
Delay2_InitialCondition_gawb3gb4t4 ; int32_T
Delay2_InitialCondition_jnqe2wfvxz ; int32_T Heading_Y0 ; int32_T
Switch_Threshold ; uint32_T Delay_InitialCondition ; uint32_T
Delay_InitialCondition_bnlicvg4x5 ; uint32_T
Delay_InitialCondition_hj3wqbizb5 ; uint32_T
Delay_InitialCondition_nyvai1lye2 ; uint32_T
Delay_InitialCondition_niqoq5ke02 ; uint32_T
Delay_InitialCondition_cx2vyd0dua ; uint32_T
Delay_InitialCondition_bw4pyzqhu0 ; uint32_T
Delay_InitialCondition_jlvaialaps ; uint32_T Frquence_Y0 ; int16_T
Switch_wrap_Threshold ; int16_T Constant6_Value [ 9 ] ; int16_T
Constant2_Value [ 4 ] ; uint16_T Constant5_Value_m1sv0yladi ; uint16_T
Mod_value_Value ; uint16_T Switch_wrap_Threshold_nwklm2s0m1 ; uint16_T
Mod_value_Value_a0wdzolmlj ; uint16_T Constant10_Value_jsm3u35ioa ; uint16_T
Count_reg_InitialCondition ; uint16_T Step_value_Value ; uint16_T
Constant_Value_gcf3fdx4dg ; uint16_T const_load_val_Value ; uint16_T
From_value_Value ; uint16_T Init_value_Value ; uint16_T
Delay4_InitialCondition ; uint16_T Constant_Value_k2m2r1p0jl ; uint16_T
Delay_InitialCondition_orxywa3mun ; uint16_T Constant1_Value_bfosepbrju ;
uint16_T Constant2_Value_jbobxqjm0i ; uint16_T Constant_Value_c3xhjopelp ;
uint16_T Constant1_Value_d2ev0f3vow ; boolean_T _Y0 ; boolean_T SNRcheck_Y0 ;
boolean_T Delay_InitialCondition_ltuwqrdhlx ; boolean_T
Delay4_InitialCondition_lo5wt5wsup ; boolean_T
Delay4_InitialCondition_lmewri3pdc ; boolean_T
Delay4_InitialCondition_f1j4135pnp ; boolean_T
Delay4_InitialCondition_mudvlctgst ; boolean_T
Delay_InitialCondition_jfvt1t4w5q ; boolean_T
Delay5_InitialCondition_lqhfqdrstc ; boolean_T
Delay1_InitialCondition_lcwjl5um2b ; boolean_T const_dir_Value ; boolean_T
Free_running_or_modulo_Value ; boolean_T const_load_Value ; boolean_T
const_rst_Value ; boolean_T Delay3_InitialCondition_mbrzy231ng ; uint8_T
Constant1_Value_nlf2bzkh50 ; uint8_T Constant1_Value_b1zttvkvok ; uint8_T
Constant1_Value_aczkv0m5ge ; uint8_T Constant1_Value_himxnbpp2r ; uint8_T
Constant3_Value ; uint8_T Constant3_Value_jqozwsnzwm ; uint8_T
Constant3_Value_ds12tuqxh5 ; uint8_T Constant3_Value_oxgyqblygx ; uint8_T
Constant2_Value_gobzdswdh5 ; uint8_T Constant2_Value_l5zecvkn2f ; uint8_T
Constant2_Value_kgtjfzvqpt ; uint8_T Constant2_Value_fbnqm44bzy ; uint8_T
Constant1_Value_eeh12bmm2g ; uint8_T
DirectLookupTablenD_DiagnosticForOutOfRangeInput ; jbke1kw2fs kpjzhjqrqw ;
nyewzoecvi popnzdb3ry ; gjtsy00uku crejvlo0y5 ; gykc2zimmf kb0c50ld2h ;
oynqt3hp52 l4kbtxpaxe ; gjtsy00uku kwch3e15c1 ; jbke1kw2fs ep4zp2asi5 ;
nyewzoecvi ifacholhbj ; gjtsy00uku kcj1xw2fyj ; gykc2zimmf gis5nx3d51 ;
oynqt3hp52 jesurwi24z ; gjtsy00uku gqsds1azit ; jbke1kw2fs eygzwxr3yp ;
nyewzoecvi ppbi33hazt ; gjtsy00uku hsz3hkboep ; gykc2zimmf hvquu0midq ;
oynqt3hp52 fhzqhbrdcr ; gjtsy00uku etzyrbzjj0 ; jbke1kw2fs aqmj5gejllk ;
nyewzoecvi nirnnu0kb5e ; gjtsy00uku hamu3nooom ; gykc2zimmf jgkqqwc2m5a ;
oynqt3hp52 n014eikjcjy ; gjtsy00uku otw02eo3ue3 ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern PrevZCX
rtPrevZCX ; extern ExtY rtY ; extern P rtP ; extern const
rtwCAPI_ModelMappingStaticInfo * Simulation_DOA_rearanged_GetCAPIStaticMap (
void ) ; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ;
extern const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; extern const int_T gblNumRootInportBlks ; extern const
int_T gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ;
extern const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [
] ; extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
