%%%%%%%%%%%%%%%%%%%%%%%%%%
MergeApp1:
Creating flow graph...
Create InputEvent(ID:1): Set(1): List()
Create ConstantEvent(ID:2): Set(1): List(1)
Create InputEvent(ID:3): Set(3): List()
Create ConstantEvent(ID:4): Set(3): List(3)
Create MergeEvent(ID:5): Set(1, 3). Left: Set(1), Right: Set(3): List(2, 1, 4, 3)
Create MapEvent(ID:6): Set(1, 3): List(5, 2, 1, 4, 3)
MergeEvent(ID:5) ID=1: Disjoint
MergeEvent(ID:5) ID=3: Disjoint


/* FILE: top1.c */
void top1();
int32_t inputfun3();
void top3();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun2(int32_t);
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
int32_t x2 = mapfun6(x1);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun3.c */
void top1();
int32_t inputfun3();
void top3();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun2(int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t inputfun3() {
return 10;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: top3.c */
void top1();
int32_t inputfun3();
void top3();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun2(int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void top3() {
int32_t x4 = inputfun3();
int32_t x5 = constantfun4(x4);
int32_t x6 = mapfun6(x5);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun3();
void top3();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun2(int32_t);
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
/* FILE: mapfun6.c */
void top1();
int32_t inputfun3();
void top3();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun2(int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun6(int32_t  x8) {
int32_t x9 = x8 * 2;
return x9;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun4.c */
void top1();
int32_t inputfun3();
void top3();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun2(int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun4(int32_t  x10) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun2.c */
void top1();
int32_t inputfun3();
void top3();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun2(int32_t);
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
%%%%%%%%%%%%%%%%%%%%%%%%%%



