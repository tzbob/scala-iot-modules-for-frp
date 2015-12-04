%%%%%%%%%%%%%%%%%%%%%%%%%%
MergeApp4:
Creating flow graph...
Create InputEvent(ID:1): Set(1)
Create ConstantEvent(ID:2): Set(1)
Create ConstantEvent(ID:3): Set(1)
Create ConstantEvent(ID:4): Set(1)
Create MergeEvent(ID:5): Set(1). Left: Set(1), Right: Set(1)
Create MergeEvent(ID:6): Set(1). Left: Set(1), Right: Set(1)
Create MapEvent(ID:7): Set(1)
MergeEvent(ID:6) ID=1: Non-Disjoint


/* FILE: top1.c */
void top1(void);
int32_t constantfun4(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mapfun7(int32_t);
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
int32_t x3 = constantfun4(x1);
int32_t x4 = mergefun6(x2,x3);
int32_t x5 = mapfun7(x4);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun4.c */
void top1(void);
int32_t constantfun4(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mapfun7(int32_t);
int32_t mergefun6(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun4(int32_t  x7) {
return 3;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1(void);
int32_t constantfun4(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mapfun7(int32_t);
int32_t mergefun6(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t inputfun1(void  x8) {
return 5;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun2.c */
void top1(void);
int32_t constantfun4(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mapfun7(int32_t);
int32_t mergefun6(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun2(int32_t  x9) {
return 1;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun7.c */
void top1(void);
int32_t constantfun4(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mapfun7(int32_t);
int32_t mergefun6(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun7(int32_t  x10) {
int32_t x11 = x10 * 2;
return x11;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun6.c */
void top1(void);
int32_t constantfun4(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mapfun7(int32_t);
int32_t mergefun6(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun6(int32_t  x12, int32_t  x13) {
int32_t x14 = x12 + x13;
return x14;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%



