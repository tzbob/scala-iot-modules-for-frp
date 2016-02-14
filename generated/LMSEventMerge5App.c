%%%%%%%%%%%%%%%%%%%%%%%%%%
MergeApp5:
Creating flow graph...
Create InputEvent(ID:1): Set(1): List()
Create ConstantEvent(ID:2): Set(1): List(1)
Create FilterEvent(ID:3): Set(1): List(2, 1)
Create MapEvent(ID:4): Set(1): List(3, 2, 1)
Create ConstantEvent(ID:5): Set(1): List(1)
Create FilterEvent(ID:6): Set(1): List(5, 1)
Create MapEvent(ID:7): Set(1): List(6, 5, 1)
Create MergeEvent(ID:8): Set(1). Left: Set(1), Right: Set(1): List(4, 3, 2, 1, 7, 6, 5, 1)
Create MapEvent(ID:9): Set(1): List(8, 4, 3, 2, 1, 7, 6, 5, 1)
MergeEvent(ID:8) ID=1: Non-Disjoint


/* FILE: top1.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
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
void top1() {
int32_t x0 = inputfun1();
bool x1 = true;
bool x2 = x1;
int32_t x16;
if (x2) {
int32_t x3 = constantfun2(x0);
int32_t x14;
if (x2) {
bool x4 = filterfun3(x3);
bool x5 = !x4;
if (x5) {
x1 = false;
} else {
}
bool x9 = x1;
int32_t x12;
if (x9) {
int32_t x10 = mapfun4(x3);
x12 = x10;
} else {
x12 = 0;
}
x14 = x12;
} else {
x14 = 0;
}
x16 = x14;
} else {
x16 = 0;
}
bool x17 = true;
bool x18 = x17;
int32_t x32;
if (x18) {
int32_t x19 = constantfun5(x0);
int32_t x30;
if (x18) {
bool x20 = filterfun6(x19);
bool x21 = !x20;
if (x21) {
x17 = false;
} else {
}
bool x25 = x17;
int32_t x28;
if (x25) {
int32_t x26 = mapfun7(x19);
x28 = x26;
} else {
x28 = 0;
}
x30 = x28;
} else {
x30 = 0;
}
x32 = x30;
} else {
x32 = 0;
}
bool x33 = x1;
bool x35 = x17;
bool x34 = !x33;
bool x36 = !x35;
bool x37 = x34 && x36;
if (x37) {
return;
} else {
}
bool x41 = x33 && x35;
int32_t x45;
if (x41) {
int32_t x42 = mergefun8(x16,x32);
x45 = x42;
} else {
int32_t x44;
if (x33) {
x44 = x16;
} else {
x44 = x32;
}
x45 = x44;
}
int32_t x46 = mapfun9(x45);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
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
int32_t inputfun1() {
return 5;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun6.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
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
bool filterfun6(int32_t  x48) {
int32_t x49 = x48 % 2;
bool x50 = x49 == 0;
return x50;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun9.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
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
int32_t mapfun9(int32_t  x51) {
int32_t x52 = x51 * 2;
return x52;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun7.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
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
int32_t mapfun7(int32_t  x53) {
int32_t x54 = x53 + 1;
return x54;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun2.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
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
int32_t constantfun2(int32_t  x55) {
return 1;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun5.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
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
int32_t constantfun5(int32_t  x56) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun4.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
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
int32_t mapfun4(int32_t  x57) {
int32_t x58 = x57 + 1;
return x58;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun3.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
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
bool filterfun3(int32_t  x59) {
int32_t x60 = x59 % 2;
bool x61 = x60 == 0;
return x61;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun8.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
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
int32_t mergefun8(int32_t  x62, int32_t  x63) {
int32_t x64 = x62 + x63;
return x64;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%



