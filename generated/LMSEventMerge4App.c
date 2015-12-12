%%%%%%%%%%%%%%%%%%%%%%%%%%
MergeApp4:
Creating flow graph...
Create InputEvent(ID:1): Set(1)
Create ConstantEvent(ID:2): Set(1)
Create ConstantEvent(ID:3): Set(1)
Create ConstantEvent(ID:4): Set(1)
Create MergeEvent(ID:5): Set(1). Left: Set(1), Right: Set(1)
Create MapEvent(ID:6): Set(1)
Create MergeEvent(ID:7): Set(1). Left: Set(1), Right: Set(1)
Create MapEvent(ID:8): Set(1)
MergeEvent(ID:7) ID=1: Non-Disjoint
MergeEvent(ID:5) ID=1: Non-Disjoint


/* FILE: top1.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
int32_t inputfun1(void);
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
void top1(void  x0) {
int32_t x1 = inputfun1();
int32_t x2 = constantfun2(x1);
int32_t x3 = constantfun3(x1);
int32_t x4 = mergefun5(x2,x3);
int32_t x5 = mapfun6(x4);
int32_t x6 = constantfun4(x1);
int32_t x7 = mergefun7(x5,x6);
bool x8 = true && true;
int32_t x15;
if (x8) {
x15 = x7;
} else {
int32_t x13;
if (true) {
x13 = x5;
} else {
int32_t x11;
if (true) {
x11 = x6;
} else {
return;
x11 = x6;
}
x13 = x11;
}
x15 = x13;
}
int32_t x16 = mapfun8(x15);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun6.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
int32_t inputfun1(void);
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
int32_t mapfun6(int32_t  x18) {
int32_t x19 = x18 + 2;
return x19;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun4.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
int32_t inputfun1(void);
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
int32_t constantfun4(int32_t  x20) {
return 3;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun3.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
int32_t inputfun1(void);
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
int32_t constantfun3(int32_t  x21) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun8.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
int32_t inputfun1(void);
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
int32_t mapfun8(int32_t  x22) {
int32_t x23 = x22 * 2;
return x23;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
int32_t inputfun1(void);
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
int32_t inputfun1(void  x24) {
return 5;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun2.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
int32_t inputfun1(void);
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
int32_t constantfun2(int32_t  x25) {
return 1;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun7.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
int32_t inputfun1(void);
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
int32_t mergefun7(int32_t  x26, int32_t  x27) {
int32_t x28 = x26 + x27;
return x28;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun5.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
int32_t inputfun1(void);
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
int32_t mergefun5(int32_t  x29, int32_t  x30) {
int32_t x31 = x29 + x30;
return x31;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%



