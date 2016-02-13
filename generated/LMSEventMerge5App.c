%%%%%%%%%%%%%%%%%%%%%%%%%%
MergeApp5:
Creating flow graph...
Create InputEvent(ID:1): Set(1)
Create ConstantEvent(ID:2): Set(1)
Create FilterEvent(ID:3): Set(1)
Create MapEvent(ID:4): Set(1)
Create ConstantEvent(ID:5): Set(1)
Create FilterEvent(ID:6): Set(1)
Create MapEvent(ID:7): Set(1)
Create MergeEvent(ID:8): Set(1). Left: Set(1), Right: Set(1)
Create MapEvent(ID:9): Set(1)
MergeEvent(ID:8) ID=1: Non-Disjoint


/* FILE: top1.c */
void top1(void);
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t inputfun1(void);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
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
int32_t x13;
if (x10) {
int32_t x11 = mapfun4(x2);
x13 = x11;
} else {
x13 = 0;
}
int32_t x14 = constantfun5(x1);
bool x15 = true;
bool x16 = x15;
bool x17 = filterfun6(x14);
bool x18 = !x17;
if (x18) {
x15 = false;
} else {
}
bool x22 = x15;
int32_t x25;
if (x22) {
int32_t x23 = mapfun7(x14);
x25 = x23;
} else {
x25 = 0;
}
int32_t x26 = mergefun8(x13,x25);
bool x27 = !x10;
bool x28 = !x22;
bool x29 = x27 && x28;
if (x29) {
return;
} else {
}
bool x33 = x10 && x22;
int32_t x35;
if (x33) {
x35 = x26;
} else {
int32_t x34;
if (x10) {
x34 = x13;
} else {
x34 = x25;
}
x35 = x34;
}
int32_t x36 = mapfun9(x35);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun6.c */
void top1(void);
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t inputfun1(void);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun6(int32_t  x38) {
int32_t x39 = x38 % 2;
bool x40 = x39 == 0;
return x40;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun9.c */
void top1(void);
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t inputfun1(void);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun9(int32_t  x41) {
int32_t x42 = x41 * 2;
return x42;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1(void);
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t inputfun1(void);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t inputfun1(void  x43) {
return 5;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun7.c */
void top1(void);
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t inputfun1(void);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun7(int32_t  x44) {
int32_t x45 = x44 + 1;
return x45;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun2.c */
void top1(void);
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t inputfun1(void);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun2(int32_t  x46) {
return 1;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun5.c */
void top1(void);
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t inputfun1(void);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun5(int32_t  x47) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun4.c */
void top1(void);
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t inputfun1(void);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun4(int32_t  x48) {
int32_t x49 = x48 + 1;
return x49;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun3.c */
void top1(void);
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t inputfun1(void);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun3(int32_t  x50) {
int32_t x51 = x50 % 2;
bool x52 = x51 == 0;
return x52;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun8.c */
void top1(void);
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t inputfun1(void);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun8(int32_t  x53, int32_t  x54) {
int32_t x55 = x53 + x54;
return x55;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%



