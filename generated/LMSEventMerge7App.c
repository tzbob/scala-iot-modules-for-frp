%%%%%%%%%%%%%%%%%%%%%%%%%%
MergeApp7:
Creating flow graph...
Create InputEvent(ID:1): Set(1)
Create ConstantEvent(ID:2): Set(1)
Create FilterEvent(ID:3): Set(1)
Create FilterEvent(ID:4): Set(1)
Create MapEvent(ID:5): Set(1)
Create ConstantEvent(ID:6): Set(1)
Create FilterEvent(ID:7): Set(1)
Create MapEvent(ID:8): Set(1)
Create MergeEvent(ID:9): Set(1). Left: Set(1), Right: Set(1)
Create MapEvent(ID:10): Set(1)
MergeEvent(ID:9) ID=1: Non-Disjoint


/* FILE: top1.c */
void top1(void);
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t inputfun1(void);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void top1(void  x0) {
int32_t x1 = inputfun1();
int32_t x2 = constantfun2(x1);
bool x3 = true;
bool x4 = x3;
bool x5 = filterfun3(x2);
bool x6 = !x5;
if (x6) {
x3 = false;
} else {
}
bool x10 = x3;
bool x11 = filterfun4(x2);
bool x12 = !x11;
if (x12) {
x3 = false;
} else {
}
bool x16 = x3;
int32_t x19;
if (x16) {
int32_t x17 = mapfun5(x2);
x19 = x17;
} else {
x19 = 0;
}
int32_t x20 = constantfun6(x1);
bool x21 = true;
bool x22 = x21;
bool x23 = filterfun7(x20);
bool x24 = !x23;
if (x24) {
x21 = false;
} else {
}
bool x28 = x21;
int32_t x31;
if (x28) {
int32_t x29 = mapfun8(x20);
x31 = x29;
} else {
x31 = 0;
}
int32_t x32 = mergefun9(x19,x31);
bool x33 = !x16;
bool x34 = !x28;
bool x35 = x33 && x34;
if (x35) {
return;
} else {
}
bool x39 = x16 && x28;
int32_t x41;
if (x39) {
x41 = x32;
} else {
int32_t x40;
if (x16) {
x40 = x19;
} else {
x40 = x31;
}
x41 = x40;
}
int32_t x42 = mapfun10(x41);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun10.c */
void top1(void);
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t inputfun1(void);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun10(int32_t  x44) {
int32_t x45 = x44 * 2;
return x45;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun6.c */
void top1(void);
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t inputfun1(void);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun6(int32_t  x46) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun5.c */
void top1(void);
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t inputfun1(void);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun5(int32_t  x47) {
int32_t x48 = x47 + 1;
return x48;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun8.c */
void top1(void);
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t inputfun1(void);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun8(int32_t  x49) {
int32_t x50 = x49 + 1;
return x50;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun4.c */
void top1(void);
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t inputfun1(void);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun4(int32_t  x51) {
int32_t x52 = x51 % 3;
bool x53 = x52 == 0;
return x53;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1(void);
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t inputfun1(void);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t inputfun1(void  x54) {
return 5;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun7.c */
void top1(void);
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t inputfun1(void);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun7(int32_t  x55) {
int32_t x56 = x55 % 2;
bool x57 = x56 == 0;
return x57;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun2.c */
void top1(void);
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t inputfun1(void);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun2(int32_t  x58) {
return 1;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun3.c */
void top1(void);
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t inputfun1(void);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun3(int32_t  x59) {
int32_t x60 = x59 % 2;
bool x61 = x60 == 0;
return x61;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun9.c */
void top1(void);
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t inputfun1(void);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun9(int32_t  x62, int32_t  x63) {
int32_t x64 = x62 + x63;
return x64;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%
