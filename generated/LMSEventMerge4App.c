%%%%%%%%%%%%%%%%%%%%%%%%%%
MergeApp4:
Creating flow graph...
Create InputEvent(ID:1): Set(1): List()
Create ConstantEvent(ID:2): Set(1): List(1)
Create ConstantEvent(ID:3): Set(1): List(1)
Create ConstantEvent(ID:4): Set(1): List(1)
Create MergeEvent(ID:5): Set(1). Left: Set(1), Right: Set(1): List(2, 1, 3, 1)
Create MapEvent(ID:6): Set(1): List(5, 2, 1, 3, 1)
Create MergeEvent(ID:7): Set(1). Left: Set(1), Right: Set(1): List(6, 5, 2, 1, 3, 1, 4, 1)
Create MapEvent(ID:8): Set(1): List(7, 6, 5, 2, 1, 3, 1, 4, 1)
MergeEvent(ID:7) ID=1: Non-Disjoint
MergeEvent(ID:5) ID=1: Non-Disjoint


/* FILE: top1.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun5(int32_t, int32_t);
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
int32_t x29;
if (x2) {
bool x3 = true;
bool x4 = x3;
int32_t x7;
if (x4) {
int32_t x5 = constantfun2(x0);
x7 = x5;
} else {
x7 = 0;
}
bool x8 = true;
bool x9 = x8;
int32_t x12;
if (x9) {
int32_t x10 = constantfun3(x0);
x12 = x10;
} else {
x12 = 0;
}
bool x13 = !x4;
bool x14 = !x9;
bool x15 = x13 && x14;
if (x15) {
x1 = false;
} else {
}
bool x19 = x4 && x9;
int32_t x23;
if (x19) {
int32_t x20 = mergefun5(x7,x12);
x23 = x20;
} else {
int32_t x22;
if (x4) {
x22 = x7;
} else {
x22 = x12;
}
x23 = x22;
}
bool x24 = x1;
int32_t x27;
if (x24) {
int32_t x25 = mapfun6(x23);
x27 = x25;
} else {
x27 = 0;
}
x29 = x27;
} else {
x29 = 0;
}
bool x30 = true;
bool x31 = x30;
int32_t x34;
if (x31) {
int32_t x32 = constantfun4(x0);
x34 = x32;
} else {
x34 = 0;
}
bool x35 = x1;
bool x36 = !x35;
bool x37 = !x31;
bool x38 = x36 && x37;
if (x38) {
return;
} else {
}
bool x42 = x35 && x31;
int32_t x46;
if (x42) {
int32_t x43 = mergefun7(x29,x34);
x46 = x43;
} else {
int32_t x45;
if (x35) {
x45 = x29;
} else {
x45 = x34;
}
x46 = x45;
}
int32_t x47 = mapfun8(x46);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun5(int32_t, int32_t);
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
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun6(int32_t  x49) {
int32_t x50 = x49 + 2;
return x50;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun4.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun4(int32_t  x51) {
return 3;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun3.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun3(int32_t  x52) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun8.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun8(int32_t  x53) {
int32_t x54 = x53 * 2;
return x54;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun2.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun5(int32_t, int32_t);
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
/* FILE: mergefun7.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun7(int32_t  x56, int32_t  x57) {
int32_t x58 = x56 + x57;
return x58;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun5.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun7(int32_t, int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun5(int32_t  x59, int32_t  x60) {
int32_t x61 = x59 + x60;
return x61;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%



