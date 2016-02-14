%%%%%%%%%%%%%%%%%%%%%%%%%%
MergeApp2:
Creating flow graph...
Create InputEvent(ID:1): Set(1): List()
Create ConstantEvent(ID:2): Set(1): List(1)
Create ConstantEvent(ID:3): Set(1): List(1)
Create MergeEvent(ID:4): Set(1). Left: Set(1), Right: Set(1): List(2, 1, 3, 1)
Create MapEvent(ID:5): Set(1): List(4, 2, 1, 3, 1)
MergeEvent(ID:4) ID=1: Non-Disjoint


/* FILE: top1.c */
void top1();
int32_t inputfun1();
int32_t mapfun5(int32_t);
int32_t constantfun3(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void top1() {
int32_t x0 = inputfun1();
bool x1 = true;
bool x2 = x1;
int32_t x5;
if (x2) {
int32_t x3 = constantfun2(x0);
x5 = x3;
} else {
x5 = 0;
}
bool x6 = true;
bool x7 = x6;
int32_t x10;
if (x7) {
int32_t x8 = constantfun3(x0);
x10 = x8;
} else {
x10 = 0;
}
bool x11 = !x2;
bool x12 = !x7;
bool x13 = x11 && x12;
if (x13) {
return;
} else {
}
bool x17 = x2 && x7;
int32_t x21;
if (x17) {
int32_t x18 = mergefun4(x5,x10);
x21 = x18;
} else {
int32_t x20;
if (x2) {
x20 = x5;
} else {
x20 = x10;
}
x21 = x20;
}
int32_t x22 = mapfun5(x21);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun1();
int32_t mapfun5(int32_t);
int32_t constantfun3(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
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
/* FILE: mapfun5.c */
void top1();
int32_t inputfun1();
int32_t mapfun5(int32_t);
int32_t constantfun3(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun5(int32_t  x24) {
int32_t x25 = x24 * 2;
return x25;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun3.c */
void top1();
int32_t inputfun1();
int32_t mapfun5(int32_t);
int32_t constantfun3(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun3(int32_t  x26) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun2.c */
void top1();
int32_t inputfun1();
int32_t mapfun5(int32_t);
int32_t constantfun3(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
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
/* FILE: mergefun4.c */
void top1();
int32_t inputfun1();
int32_t mapfun5(int32_t);
int32_t constantfun3(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun4(int32_t  x28, int32_t  x29) {
int32_t x30 = x28 + x29;
return x30;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
%%%%%%%%%%%%%%%%%%%%%%%%%%



