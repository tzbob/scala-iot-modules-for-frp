%%%%%%%%%%%%%%%%%%%%%%%%%%
MergeApp3:
Creating flow graph...
Create InputEvent(ID:1): Set(1)
Create InputEvent(ID:2): Set(2)
Create MergeEvent(ID:3): Set(1, 2). Left: Set(1), Right: Set(2)
Create ConstantEvent(ID:4): Set(2)
Create MergeEvent(ID:5): Set(1, 2). Left: Set(1, 2), Right: Set(2)
Create MapEvent(ID:6): Set(1, 2)
MergeEvent(ID:5) ID=1: Disjoint
MergeEvent(ID:3) ID=1: Disjoint
MergeEvent(ID:5) ID=2: Non-Disjoint


/* FILE: top1.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t inputfun2(void);
void top2(void);
int32_t inputfun1(void);
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
int32_t x2 = mapfun6(x1);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun6.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t inputfun2(void);
void top2(void);
int32_t inputfun1(void);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun6(int32_t  x4) {
int32_t x5 = x4 * 2;
return x5;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun4.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t inputfun2(void);
void top2(void);
int32_t inputfun1(void);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun4(int32_t  x6) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun2.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t inputfun2(void);
void top2(void);
int32_t inputfun1(void);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t inputfun2(void  x7) {
return 10;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: top2.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t inputfun2(void);
void top2(void);
int32_t inputfun1(void);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void top2(void  x8) {
int32_t x9 = inputfun2();
int32_t x10 = constantfun4(x9);
int32_t x11 = mergefun5(x9,x10);
bool x12 = true && true;
int32_t x19;
if (x12) {
x19 = x11;
} else {
int32_t x17;
if (true) {
x17 = x9;
} else {
int32_t x15;
if (true) {
x15 = x10;
} else {
return;
x15 = x10;
}
x17 = x15;
}
x19 = x17;
}
int32_t x20 = mapfun6(x19);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t inputfun2(void);
void top2(void);
int32_t inputfun1(void);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t inputfun1(void  x22) {
return 5;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun5.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t inputfun2(void);
void top2(void);
int32_t inputfun1(void);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun5(int32_t  x23, int32_t  x24) {
int32_t x25 = x23 + x24;
return x25;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%



