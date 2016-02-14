%%%%%%%%%%%%%%%%%%%%%%%%%%
MergeApp7:
Creating flow graph...
Create InputEvent(ID:1): Set(1): List()
Create ConstantEvent(ID:2): Set(1): List(1)
Create FilterEvent(ID:3): Set(1): List(2, 1)
Create FilterEvent(ID:4): Set(1): List(3, 2, 1)
Create MapEvent(ID:5): Set(1): List(4, 3, 2, 1)
Create ConstantEvent(ID:6): Set(1): List(1)
Create FilterEvent(ID:7): Set(1): List(6, 1)
Create MapEvent(ID:8): Set(1): List(7, 6, 1)
Create MergeEvent(ID:9): Set(1). Left: Set(1), Right: Set(1): List(5, 4, 3, 2, 1, 8, 7, 6, 1)
Create MapEvent(ID:10): Set(1): List(9, 5, 4, 3, 2, 1, 8, 7, 6, 1)
MergeEvent(ID:9) ID=1: Non-Disjoint


/* FILE: top1.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
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
void top1() {
int32_t x0 = inputfun1();
bool x1 = true;
bool x2 = x1;
int32_t x24;
if (x2) {
int32_t x3 = constantfun2(x0);
int32_t x22;
if (x2) {
bool x4 = filterfun3(x3);
bool x5 = !x4;
if (x5) {
x1 = false;
} else {
}
bool x9 = x1;
int32_t x20;
if (x9) {
bool x10 = filterfun4(x3);
bool x11 = !x10;
if (x11) {
x1 = false;
} else {
}
bool x15 = x1;
int32_t x18;
if (x15) {
int32_t x16 = mapfun5(x3);
x18 = x16;
} else {
x18 = 0;
}
x20 = x18;
} else {
x20 = 0;
}
x22 = x20;
} else {
x22 = 0;
}
x24 = x22;
} else {
x24 = 0;
}
bool x25 = true;
bool x26 = x25;
int32_t x40;
if (x26) {
int32_t x27 = constantfun6(x0);
int32_t x38;
if (x26) {
bool x28 = filterfun7(x27);
bool x29 = !x28;
if (x29) {
x25 = false;
} else {
}
bool x33 = x25;
int32_t x36;
if (x33) {
int32_t x34 = mapfun8(x27);
x36 = x34;
} else {
x36 = 0;
}
x38 = x36;
} else {
x38 = 0;
}
x40 = x38;
} else {
x40 = 0;
}
bool x41 = x1;
bool x43 = x25;
bool x42 = !x41;
bool x44 = !x43;
bool x45 = x42 && x44;
if (x45) {
return;
} else {
}
bool x49 = x41 && x43;
int32_t x53;
if (x49) {
int32_t x50 = mergefun9(x24,x40);
x53 = x50;
} else {
int32_t x52;
if (x41) {
x52 = x24;
} else {
x52 = x40;
}
x53 = x52;
}
int32_t x54 = mapfun10(x53);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
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
int32_t inputfun1() {
return 5;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun10.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
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
int32_t mapfun10(int32_t  x56) {
int32_t x57 = x56 * 2;
return x57;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun6.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
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
int32_t constantfun6(int32_t  x58) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun5.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
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
int32_t mapfun5(int32_t  x59) {
int32_t x60 = x59 + 1;
return x60;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun8.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
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
int32_t mapfun8(int32_t  x61) {
int32_t x62 = x61 + 1;
return x62;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun4.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
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
bool filterfun4(int32_t  x63) {
int32_t x64 = x63 % 3;
bool x65 = x64 == 0;
return x65;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun7.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
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
bool filterfun7(int32_t  x66) {
int32_t x67 = x66 % 2;
bool x68 = x67 == 0;
return x68;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun2.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
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
int32_t constantfun2(int32_t  x69) {
return 1;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun3.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
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
bool filterfun3(int32_t  x70) {
int32_t x71 = x70 % 2;
bool x72 = x71 == 0;
return x72;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun9.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
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
int32_t mergefun9(int32_t  x73, int32_t  x74) {
int32_t x75 = x73 + x74;
return x75;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%
