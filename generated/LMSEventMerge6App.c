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
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void top1() {
int32_t x0 = inputfun1();
bool x1 = true;
bool x2 = x1;
int32_t x18;
if (x2) {
int32_t x3 = mapfun2(x0);
int32_t x16;
if (x2) {
int32_t x4 = mapfun3(x3);
int32_t x5 = constantfun4(x4);
bool x6 = filterfun5(x5);
bool x7 = !x6;
if (x7) {
x1 = false;
} else {
}
bool x11 = x1;
int32_t x14;
if (x11) {
int32_t x12 = mapfun6(x5);
x14 = x12;
} else {
x14 = 0;
}
x16 = x14;
} else {
x16 = 0;
}
x18 = x16;
} else {
x18 = 0;
}
bool x19 = true;
bool x20 = x19;
int32_t x36;
if (x20) {
int32_t x21 = mapfun2(x0);
int32_t x34;
if (x20) {
int32_t x22 = mapfun3(x21);
int32_t x23 = constantfun7(x22);
bool x24 = filterfun8(x23);
bool x25 = !x24;
if (x25) {
x19 = false;
} else {
}
bool x29 = x19;
int32_t x32;
if (x29) {
int32_t x30 = mapfun9(x23);
x32 = x30;
} else {
x32 = 0;
}
x34 = x32;
} else {
x34 = 0;
}
x36 = x34;
} else {
x36 = 0;
}
int32_t x37 = mergefun10(x18,x36);
bool x38 = x1;
bool x39 = x19;
bool x40 = !x38;
bool x41 = !x39;
bool x42 = x40 && x41;
if (x42) {
return;
} else {
}
bool x46 = x38 && x39;
int32_t x48;
if (x46) {
x48 = x37;
} else {
int32_t x47;
if (x38) {
x47 = x18;
} else {
x47 = x36;
}
x48 = x47;
}
int32_t x49 = mapfun11(x48);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t inputfun1() {
return 5;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun6.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun6(int32_t  x51) {
int32_t x52 = x51 + 1;
return x52;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun9.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun9(int32_t  x53) {
int32_t x54 = x53 + 1;
return x54;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun4.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun4(int32_t  x55) {
return 1;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun7.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun7(int32_t  x56) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun3.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun3(int32_t  x57) {
int32_t x58 = x57 * 2;
return x58;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun5.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun5(int32_t  x59) {
int32_t x60 = x59 % 2;
bool x61 = x60 == 0;
return x61;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun8.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun8(int32_t  x62) {
int32_t x63 = x62 % 2;
bool x64 = x63 == 0;
return x64;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun2.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun2(int32_t  x65) {
int32_t x66 = x65 + 1;
return x66;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun11.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun11(int32_t  x67) {
int32_t x68 = x67 * 2;
return x68;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun10.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun7(int32_t);
int32_t mapfun3(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun10(int32_t  x69, int32_t  x70) {
int32_t x71 = x69 + x70;
return x71;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%



