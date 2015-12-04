%%%%%%%%%%%%%%%%%%%%%%%%%%
MergeApp1:
Creating flow graph...
Create InputEvent(ID:1): Set(1)
Create ConstantEvent(ID:2): Set(1)
Create InputEvent(ID:3): Set(3)
Create ConstantEvent(ID:4): Set(3)
Create MergeEvent(ID:5): Set(1, 3). Left: Set(1), Right: Set(3)
Create MapEvent(ID:6): Set(1, 3)
MergeEvent(ID:5) ID=1: Disjoint
MergeEvent(ID:5) ID=3: Disjoint


/* FILE: top1.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t inputfun3(void);
int32_t constantfun4(int32_t);
void top3(void);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
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
int32_t x3 = mapfun6(x2);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun6.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t inputfun3(void);
int32_t constantfun4(int32_t);
void top3(void);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun6(int32_t  x5) {
int32_t x6 = x5 * 2;
return x6;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun3.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t inputfun3(void);
int32_t constantfun4(int32_t);
void top3(void);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t inputfun3(void  x7) {
return 10;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun4.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t inputfun3(void);
int32_t constantfun4(int32_t);
void top3(void);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun4(int32_t  x8) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: top3.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t inputfun3(void);
int32_t constantfun4(int32_t);
void top3(void);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void top3(void  x9) {
int32_t x10 = inputfun3();
int32_t x11 = constantfun4(x10);
int32_t x12 = mapfun6(x11);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t inputfun3(void);
int32_t constantfun4(int32_t);
void top3(void);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t inputfun1(void  x14) {
return 5;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun2.c */
void top1(void);
int32_t mapfun6(int32_t);
int32_t inputfun3(void);
int32_t constantfun4(int32_t);
void top3(void);
int32_t inputfun1(void);
int32_t constantfun2(int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun2(int32_t  x15) {
return 1;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%



