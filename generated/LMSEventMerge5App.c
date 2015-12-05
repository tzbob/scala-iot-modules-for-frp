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
bool x3 = filterfun3(x2);
bool x4 = !x3;
if (x4) {
return;
} else {
}
int32_t x8 = mapfun4(x2);
int32_t x9 = constantfun5(x1);
bool x10 = filterfun6(x9);
bool x11 = !x10;
if (x11) {
return;
} else {
}
int32_t x15 = mapfun7(x9);
int32_t x16 = mergefun8(x8,x15);
int32_t x17 = mapfun9(x16);
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
bool filterfun6(int32_t  x19) {
int32_t x20 = x19 % 2;
bool x21 = x20 == 0;
return x21;
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
int32_t mapfun9(int32_t  x22) {
int32_t x23 = x22 * 2;
return x23;
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
int32_t inputfun1(void  x24) {
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
int32_t mapfun7(int32_t  x25) {
int32_t x26 = x25 + 1;
return x26;
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
int32_t constantfun2(int32_t  x27) {
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
int32_t constantfun5(int32_t  x28) {
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
int32_t mapfun4(int32_t  x29) {
int32_t x30 = x29 + 1;
return x30;
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
bool filterfun3(int32_t  x31) {
int32_t x32 = x31 % 2;
bool x33 = x32 == 0;
return x33;
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
int32_t mergefun8(int32_t  x34, int32_t  x35) {
int32_t x36 = x34 + x35;
return x36;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%
