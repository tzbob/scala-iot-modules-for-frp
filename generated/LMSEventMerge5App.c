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
bool x4 = filterfun3(x2);
bool x5 = !x4;
if (x5) {
x3 = false;
} else {
}
int32_t x9 = mapfun4(x2);
int32_t x10 = constantfun5(x1);
bool x11 = true;
bool x12 = filterfun6(x10);
bool x13 = !x12;
if (x13) {
x11 = false;
} else {
}
int32_t x17 = mapfun7(x10);
int32_t x18 = mergefun8(x9,x17);
bool x19 = x3;
bool x20 = x11;
bool x21 = !x19;
bool x22 = !x20;
bool x23 = x21 && x22;
if (x23) {
return;
} else {
}
bool x27 = x19 && x20;
int32_t x29;
if (x27) {
x29 = x18;
} else {
int32_t x28;
if (x19) {
x28 = x9;
} else {
x28 = x17;
}
x29 = x28;
}
int32_t x30 = mapfun9(x29);
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
bool filterfun6(int32_t  x32) {
int32_t x33 = x32 % 2;
bool x34 = x33 == 0;
return x34;
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
int32_t mapfun9(int32_t  x35) {
int32_t x36 = x35 * 2;
return x36;
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
int32_t inputfun1(void  x37) {
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
int32_t mapfun7(int32_t  x38) {
int32_t x39 = x38 + 1;
return x39;
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
int32_t constantfun2(int32_t  x40) {
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
int32_t constantfun5(int32_t  x41) {
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
int32_t mapfun4(int32_t  x42) {
int32_t x43 = x42 + 1;
return x43;
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
bool filterfun3(int32_t  x44) {
int32_t x45 = x44 % 2;
bool x46 = x45 == 0;
return x46;
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
int32_t mergefun8(int32_t  x47, int32_t  x48) {
int32_t x49 = x47 + x48;
return x49;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%
