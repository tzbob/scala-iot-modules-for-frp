%%%%%%%%%%%%%%%%%%%%%%%%%%
MergeApp3:
Creating flow graph...
Create InputEvent(ID:1): Set(1): List()
Create InputEvent(ID:2): Set(2): List()
Create MergeEvent(ID:3): Set(1, 2). Left: Set(1), Right: Set(2): List(1, 2)
Create ConstantEvent(ID:4): Set(2): List(2)
Create MergeEvent(ID:5): Set(1, 2). Left: Set(1, 2), Right: Set(2): List(3, 1, 2, 4, 2)
Create MapEvent(ID:6): Set(1, 2): List(5, 3, 1, 2, 4, 2)
MergeEvent(ID:5) ID=1: Disjoint
MergeEvent(ID:3) ID=1: Disjoint
MergeEvent(ID:5) ID=2: Non-Disjoint


/* FILE: top1.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void top1() {
int32_t x0 = inputfun1();
int32_t x1 = mapfun6(x0);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun2.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t inputfun2() {
return 10;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: top2.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void top2() {
int32_t x3 = inputfun2();
bool x4 = true;
bool x5 = x4;
int32_t x8;
if (x5) {
int32_t x6 = constantfun4(x3);
x8 = x6;
} else {
x8 = 0;
}
bool x9 = true;
bool x10 = x9;
bool x11 = !x10;
bool x12 = !x5;
bool x13 = x11 && x12;
if (x13) {
return;
} else {
}
bool x17 = x10 && x5;
int32_t x21;
if (x17) {
int32_t x18 = mergefun5(x3,x8);
x21 = x18;
} else {
int32_t x20;
if (x10) {
x20 = x3;
} else {
x20 = x8;
}
x21 = x20;
}
int32_t x22 = mapfun6(x21);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t mergefun5(int32_t, int32_t);
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
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun6(int32_t  x24) {
int32_t x25 = x24 * 2;
return x25;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun4.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun4(int32_t  x26) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun5.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun5(int32_t  x27, int32_t  x28) {
int32_t x29 = x27 + x28;
return x29;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%



