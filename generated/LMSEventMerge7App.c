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
bool x10 = filterfun4(x1);
bool x11 = !x10;
if (x11) {
x2 = false;
} else {
}
bool x15 = x2;
int32_t x18;
if (x15) {
int32_t x16 = mapfun5(x1);
x18 = x16;
} else {
x18 = 0;
}
int32_t x19 = constantfun6(x0);
bool x20 = true;
bool x21 = x20;
bool x22 = filterfun7(x19);
bool x23 = !x22;
if (x23) {
x20 = false;
} else {
}
bool x27 = x20;
int32_t x30;
if (x27) {
int32_t x28 = mapfun8(x19);
x30 = x28;
} else {
x30 = 0;
}
int32_t x31 = mergefun9(x18,x30);
bool x32 = !x15;
bool x33 = !x27;
bool x34 = x32 && x33;
if (x34) {
return;
} else {
}
bool x38 = x15 && x27;
int32_t x40;
if (x38) {
x40 = x31;
} else {
int32_t x39;
if (x15) {
x39 = x18;
} else {
x39 = x30;
}
x40 = x39;
}
int32_t x41 = mapfun10(x40);
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
int32_t mapfun10(int32_t  x43) {
int32_t x44 = x43 * 2;
return x44;
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
int32_t constantfun6(int32_t  x45) {
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
int32_t mapfun5(int32_t  x46) {
int32_t x47 = x46 + 1;
return x47;
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
int32_t mapfun8(int32_t  x48) {
int32_t x49 = x48 + 1;
return x49;
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
bool filterfun4(int32_t  x50) {
int32_t x51 = x50 % 3;
bool x52 = x51 == 0;
return x52;
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
bool filterfun7(int32_t  x53) {
int32_t x54 = x53 % 2;
bool x55 = x54 == 0;
return x55;
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
int32_t constantfun2(int32_t  x56) {
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
bool filterfun3(int32_t  x57) {
int32_t x58 = x57 % 2;
bool x59 = x58 == 0;
return x59;
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
int32_t mergefun9(int32_t  x60, int32_t  x61) {
int32_t x62 = x60 + x61;
return x62;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%
