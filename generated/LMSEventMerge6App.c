%%%%%%%%%%%%%%%%%%%%%%%%%%
MergeApp6:
Creating flow graph...
Create InputEvent(ID:1): Set(1): List()
Create MapEvent(ID:2): Set(1): List(1)
Create MapEvent(ID:3): Set(1): List(2, 1)
Create ConstantEvent(ID:4): Set(1): List(3, 2, 1)
Create FilterEvent(ID:5): Set(1): List(4, 3, 2, 1)
Create MapEvent(ID:6): Set(1): List(5, 4, 3, 2, 1)
Create ConstantEvent(ID:7): Set(1): List(3, 2, 1)
Create FilterEvent(ID:8): Set(1): List(7, 3, 2, 1)
Create MapEvent(ID:9): Set(1): List(8, 7, 3, 2, 1)
Create MergeEvent(ID:10): Set(1). Left: Set(1), Right: Set(1): List(6, 5, 4, 3, 2, 1, 9, 8, 7, 3, 2, 1)
Create MapEvent(ID:11): Set(1): List(10, 6, 5, 4, 3, 2, 1, 9, 8, 7, 3, 2, 1)
MergeEvent(ID:10) ID=1: Non-Disjoint


/* FILE: top1.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
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
int32_t x1 = mapfun2(x0);
int32_t x2 = mapfun3(x1);
int32_t x3 = constantfun4(x2);
bool x4 = true;
bool x5 = x4;
bool x6 = filterfun5(x3);
bool x7 = !x6;
if (x7) {
x4 = false;
} else {
}
bool x11 = x4;
int32_t x14;
if (x11) {
int32_t x12 = mapfun6(x3);
x14 = x12;
} else {
x14 = 0;
}
int32_t x15 = constantfun7(x2);
bool x16 = true;
bool x17 = x16;
bool x18 = filterfun8(x15);
bool x19 = !x18;
if (x19) {
x16 = false;
} else {
}
bool x23 = x16;
int32_t x26;
if (x23) {
int32_t x24 = mapfun9(x15);
x26 = x24;
} else {
x26 = 0;
}
int32_t x27 = mergefun10(x14,x26);
bool x28 = !x11;
bool x29 = !x23;
bool x30 = x28 && x29;
if (x30) {
return;
} else {
}
bool x34 = x11 && x23;
int32_t x36;
if (x34) {
x36 = x27;
} else {
int32_t x35;
if (x11) {
x35 = x14;
} else {
x35 = x26;
}
x36 = x35;
}
int32_t x37 = mapfun11(x36);
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
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
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
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
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
int32_t mapfun6(int32_t  x39) {
int32_t x40 = x39 + 1;
return x40;
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
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
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
int32_t mapfun9(int32_t  x41) {
int32_t x42 = x41 + 1;
return x42;
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
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
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
int32_t constantfun4(int32_t  x43) {
return 1;
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
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
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
int32_t mapfun3(int32_t  x44) {
int32_t x45 = x44 * 2;
return x45;
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
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
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
int32_t constantfun7(int32_t  x46) {
return 2;
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
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
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
bool filterfun5(int32_t  x47) {
int32_t x48 = x47 % 2;
bool x49 = x48 == 0;
return x49;
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
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
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
bool filterfun8(int32_t  x50) {
int32_t x51 = x50 % 2;
bool x52 = x51 == 0;
return x52;
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
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
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
int32_t mapfun2(int32_t  x53) {
int32_t x54 = x53 + 1;
return x54;
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
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
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
int32_t mapfun11(int32_t  x55) {
int32_t x56 = x55 * 2;
return x56;
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
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
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
int32_t mergefun10(int32_t  x57, int32_t  x58) {
int32_t x59 = x57 + x58;
return x59;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%



