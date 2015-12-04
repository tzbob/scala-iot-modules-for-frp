%%%%%%%%%%%%%%%%%%%%%%%%%%
MergeApp5:
Creating flow graph...
Create InputEvent(ID:1): Set(1)
Create ConstantEvent(ID:2): Set(1)
Create FilterEvent(ID:3): Set(1)
Create ConstantEvent(ID:4): Set(1)
Create FilterEvent(ID:5): Set(1)
Create MergeEvent(ID:6): Set(1). Left: Set(1), Right: Set(1)
Create MapEvent(ID:7): Set(1)
MergeEvent(ID:6) ID=1: Non-Disjoint


/* FILE: top1.c */
void top1(void);
int32_t constantfun4(int32_t);
bool filterfun5(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mapfun7(int32_t);
bool filterfun3(int32_t);
int32_t mergefun6(int32_t, int32_t);
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
int32_t x8 = constantfun4(x1);
bool x9 = filterfun5(x8);
bool x10 = !x9;
if (x10) {
return;
} else {
}
int32_t x14 = mergefun6(x2,x8);
int32_t x15 = mapfun7(x14);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun4.c */
void top1(void);
int32_t constantfun4(int32_t);
bool filterfun5(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mapfun7(int32_t);
bool filterfun3(int32_t);
int32_t mergefun6(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun4(int32_t  x17) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun5.c */
void top1(void);
int32_t constantfun4(int32_t);
bool filterfun5(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mapfun7(int32_t);
bool filterfun3(int32_t);
int32_t mergefun6(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun5(int32_t  x18) {
int32_t x19 = x18 % 2;
bool x20 = x19 == 0;
return x20;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1(void);
int32_t constantfun4(int32_t);
bool filterfun5(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mapfun7(int32_t);
bool filterfun3(int32_t);
int32_t mergefun6(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t inputfun1(void  x21) {
return 5;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun2.c */
void top1(void);
int32_t constantfun4(int32_t);
bool filterfun5(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mapfun7(int32_t);
bool filterfun3(int32_t);
int32_t mergefun6(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun2(int32_t  x22) {
return 1;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun7.c */
void top1(void);
int32_t constantfun4(int32_t);
bool filterfun5(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mapfun7(int32_t);
bool filterfun3(int32_t);
int32_t mergefun6(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun7(int32_t  x23) {
int32_t x24 = x23 * 2;
return x24;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun3.c */
void top1(void);
int32_t constantfun4(int32_t);
bool filterfun5(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mapfun7(int32_t);
bool filterfun3(int32_t);
int32_t mergefun6(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun3(int32_t  x25) {
int32_t x26 = x25 % 2;
bool x27 = x26 == 0;
return x27;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun6.c */
void top1(void);
int32_t constantfun4(int32_t);
bool filterfun5(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mapfun7(int32_t);
bool filterfun3(int32_t);
int32_t mergefun6(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun6(int32_t  x28, int32_t  x29) {
int32_t x30 = x28 + x29;
return x30;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%
