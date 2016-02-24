/* FILE: top1.c */
void top1();
int32_t inputfun1();
int32_t mapfun3(int32_t);
int32_t mapfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
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
int32_t  x1;
bool x2 = true;
bool x3 = x2;
if (x3) {
int32_t x4 = mapfun2(x0);
int32_t x5 = mapfun3(x0);
bool x6 = true;
bool x7 = x6;
bool x9 = true;
bool x10 = x9;
bool x8 = !x7;
bool x11 = !x10;
bool x12 = x8 && x11;
if (x12) {
x2 = false;
} else {
}
bool x16 = x7 && x10;
int32_t x20;
if (x16) {
int32_t x17 = mergefun4(x4,x5);
x20 = x17;
} else {
int32_t x19;
if (x7) {
x19 = x4;
} else {
x19 = x5;
}
x20 = x19;
}
x1 = x20;
} else {
}
int32_t x24 = x1;
int32_t x25 = mapfun3(x0);
bool x26 = x2;
bool x28 = true;
bool x29 = x28;
bool x27 = !x26;
bool x30 = !x29;
bool x31 = x27 && x30;
if (x31) {
return;
} else {
}
bool x35 = x26 && x29;
int32_t x39;
if (x35) {
int32_t x36 = mergefun5(x24,x25);
x39 = x36;
} else {
int32_t x38;
if (x26) {
x38 = x24;
} else {
x38 = x25;
}
x39 = x38;
}
printf("%d\n",x39);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun1();
int32_t mapfun3(int32_t);
int32_t mapfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t inputfun1() {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun3.c */
void top1();
int32_t inputfun1();
int32_t mapfun3(int32_t);
int32_t mapfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun3(int32_t  x42) {
printf("%s\n",string("map3").c_str());
int32_t x44 = x42 * 2;
return x44;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun2.c */
void top1();
int32_t inputfun1();
int32_t mapfun3(int32_t);
int32_t mapfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun2(int32_t  x46) {
printf("%s\n",string("map2").c_str());
int32_t x48 = x46 * 2;
return x48;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun4.c */
void top1();
int32_t inputfun1();
int32_t mapfun3(int32_t);
int32_t mapfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun4(int32_t  x50, int32_t  x51) {
printf("%s\n",string("merge4").c_str());
int32_t x53 = x50 + x51;
return x53;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun5.c */
void top1();
int32_t inputfun1();
int32_t mapfun3(int32_t);
int32_t mapfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun5(int32_t  x55, int32_t  x56) {
printf("%s\n",string("merge5").c_str());
int32_t x58 = x55 + x56;
return x58;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
