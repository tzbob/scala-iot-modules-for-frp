%%%%%%%%%%%%%%%%%%%%%%%%%%
MergeApp2:
Creating flow graph...
Create InputEvent(ID:1): Set(1)
Create ConstantEvent(ID:2): Set(1)
Create ConstantEvent(ID:3): Set(1)
Create MergeEvent(ID:4): Set(1). Left: Set(1), Right: Set(1)
Create MapEvent(ID:5): Set(1)
MergeEvent(ID:4) ID=1: Non-Disjoint


/* FILE: top1.c */
void top1(void);
int32_t mapfun5(int32_t);
int32_t constantfun3(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
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
int32_t x4 = mergefun4(x2,x3);
int32_t x5 = mapfun5(x4);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun5.c */
void top1(void);
int32_t mapfun5(int32_t);
int32_t constantfun3(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun5(int32_t  x7) {
int32_t x8 = x7 * 2;
return x8;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun3.c */
void top1(void);
int32_t mapfun5(int32_t);
int32_t constantfun3(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun3(int32_t  x9) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1(void);
int32_t mapfun5(int32_t);
int32_t constantfun3(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t inputfun1(void  x10) {
return 5;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun2.c */
void top1(void);
int32_t mapfun5(int32_t);
int32_t constantfun3(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun2(int32_t  x11) {
return 1;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun4.c */
void top1(void);
int32_t mapfun5(int32_t);
int32_t constantfun3(int32_t);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun4(int32_t  x12, int32_t  x13) {
int32_t x14 = x12 + x13;
return x14;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%



