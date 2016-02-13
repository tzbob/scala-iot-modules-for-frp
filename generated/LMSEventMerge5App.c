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
int32_t x1 = constantfun2(x0);
bool x2 = true;
bool x3 = x2;
bool x4 = filterfun3(x1);
bool x5 = !x4;
if (x5) {
x2 = false;
} else {
}
bool x9 = x2;
int32_t x12;
if (x9) {
int32_t x10 = mapfun4(x1);
x12 = x10;
} else {
x12 = 0;
}
int32_t x13 = constantfun5(x0);
bool x14 = true;
bool x15 = x14;
bool x16 = filterfun6(x13);
bool x17 = !x16;
if (x17) {
x14 = false;
} else {
}
bool x21 = x14;
int32_t x24;
if (x21) {
int32_t x22 = mapfun7(x13);
x24 = x22;
} else {
x24 = 0;
}
int32_t x25 = mergefun8(x12,x24);
bool x26 = !x9;
bool x27 = !x21;
bool x28 = x26 && x27;
if (x28) {
return;
} else {
}
bool x32 = x9 && x21;
int32_t x34;
if (x32) {
x34 = x25;
} else {
int32_t x33;
if (x9) {
x33 = x12;
} else {
x33 = x24;
}
x34 = x33;
}
int32_t x35 = mapfun9(x34);
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
bool filterfun6(int32_t  x37) {
int32_t x38 = x37 % 2;
bool x39 = x38 == 0;
return x39;
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
int32_t mapfun9(int32_t  x40) {
int32_t x41 = x40 * 2;
return x41;
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
int32_t mapfun7(int32_t  x42) {
int32_t x43 = x42 + 1;
return x43;
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
int32_t constantfun2(int32_t  x44) {
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
int32_t constantfun5(int32_t  x45) {
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
int32_t mapfun4(int32_t  x46) {
int32_t x47 = x46 + 1;
return x47;
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
bool filterfun3(int32_t  x48) {
int32_t x49 = x48 % 2;
bool x50 = x49 == 0;
return x50;
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
int32_t mergefun8(int32_t  x51, int32_t  x52) {
int32_t x53 = x51 + x52;
return x53;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%



