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
int32_t x8 = mapfun8(x7);
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
int32_t mapfun6(int32_t  x10) {
int32_t x11 = x10 + 2;
return x11;
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
int32_t constantfun4(int32_t  x12) {
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
int32_t constantfun3(int32_t  x13) {
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
int32_t mapfun8(int32_t  x14) {
int32_t x15 = x14 * 2;
return x15;
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
int32_t inputfun1(void  x16) {
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
int32_t constantfun2(int32_t  x17) {
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
int32_t mergefun7(int32_t  x18, int32_t  x19) {
int32_t x20 = x18 + x19;
return x20;
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
int32_t mergefun5(int32_t  x21, int32_t  x22) {
int32_t x23 = x21 + x22;
return x23;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%



