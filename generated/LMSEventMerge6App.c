%%%%%%%%%%%%%%%%%%%%%%%%%%
MergeApp6:
Creating flow graph...
Create InputEvent(ID:1): Set(1)
Create MapEvent(ID:2): Set(1)
Create MapEvent(ID:3): Set(1)
Create ConstantEvent(ID:4): Set(1)
Create FilterEvent(ID:5): Set(1)
Create MapEvent(ID:6): Set(1)
Create ConstantEvent(ID:7): Set(1)
Create FilterEvent(ID:8): Set(1)
Create MapEvent(ID:9): Set(1)
Create MergeEvent(ID:10): Set(1). Left: Set(1), Right: Set(1)
Create MapEvent(ID:11): Set(1)
MergeEvent(ID:10) ID=1: Non-Disjoint


/* FILE: top1.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t inputfun1(void);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void top1(void  x0) {
int32_t x1 = inputfun1();
bool x2 = true;
bool x3 = x2;
int32_t x19;
if (x3) {
int32_t x4 = mapfun2(x1);
int32_t x17;
if (x3) {
int32_t x5 = mapfun3(x4);
int32_t x6 = constantfun4(x5);
bool x7 = filterfun5(x6);
bool x8 = !x7;
if (x8) {
x2 = false;
} else {
}
bool x12 = x2;
int32_t x15;
if (x12) {
int32_t x13 = mapfun6(x6);
x15 = x13;
} else {
x15 = 0;
}
x17 = x15;
} else {
x17 = 0;
}
x19 = x17;
} else {
x19 = 0;
}
bool x20 = true;
bool x21 = x20;
int32_t x37;
if (x21) {
int32_t x22 = mapfun2(x1);
int32_t x35;
if (x21) {
int32_t x23 = mapfun3(x22);
int32_t x24 = constantfun7(x23);
bool x25 = filterfun8(x24);
bool x26 = !x25;
if (x26) {
x20 = false;
} else {
}
bool x30 = x20;
int32_t x33;
if (x30) {
int32_t x31 = mapfun9(x24);
x33 = x31;
} else {
x33 = 0;
}
x35 = x33;
} else {
x35 = 0;
}
x37 = x35;
} else {
x37 = 0;
}
int32_t x38 = mergefun10(x19,x37);
bool x39 = x2;
bool x40 = x20;
bool x41 = !x39;
bool x42 = !x40;
bool x43 = x41 && x42;
if (x43) {
return;
} else {
}
bool x47 = x39 && x40;
int32_t x49;
if (x47) {
x49 = x38;
} else {
int32_t x48;
if (x39) {
x48 = x19;
} else {
x48 = x37;
}
x49 = x48;
}
int32_t x50 = mapfun11(x49);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun6.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t inputfun1(void);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun6(int32_t  x52) {
int32_t x53 = x52 + 1;
return x53;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun9.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t inputfun1(void);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun9(int32_t  x54) {
int32_t x55 = x54 + 1;
return x55;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun4.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t inputfun1(void);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun4(int32_t  x56) {
return 1;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun7.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t inputfun1(void);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun7(int32_t  x57) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun3.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t inputfun1(void);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun3(int32_t  x58) {
int32_t x59 = x58 * 2;
return x59;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun5.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t inputfun1(void);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun5(int32_t  x60) {
int32_t x61 = x60 % 2;
bool x62 = x61 == 0;
return x62;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun8.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t inputfun1(void);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun8(int32_t  x63) {
int32_t x64 = x63 % 2;
bool x65 = x64 == 0;
return x65;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun2.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t inputfun1(void);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun2(int32_t  x66) {
int32_t x67 = x66 + 1;
return x67;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t inputfun1(void);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t inputfun1(void  x68) {
return 5;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun11.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t inputfun1(void);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun11(int32_t  x69) {
int32_t x70 = x69 * 2;
return x70;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun10.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t inputfun1(void);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun10(int32_t  x71, int32_t  x72) {
int32_t x73 = x71 + x72;
return x73;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%



