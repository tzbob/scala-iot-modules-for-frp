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
int32_t x1 = mapfun3(x0);
int32_t  x2;
bool x3 = true;
bool x4 = x3;
if (x4) {
int32_t x5 = mapfun2(x1);
int32_t x6 = mapfun3(x1);
bool x7 = true;
bool x8 = x7;
bool x10 = true;
bool x11 = x10;
bool x9 = !x8;
bool x12 = !x11;
bool x13 = x9 && x12;
if (x13) {
x3 = false;
} else {
}
bool x17 = x8 && x11;
int32_t x21;
if (x17) {
int32_t x18 = mergefun4(x5,x6);
x21 = x18;
} else {
int32_t x20;
if (x8) {
x20 = x5;
} else {
x20 = x6;
}
x21 = x20;
}
x2 = x21;
} else {
}
int32_t x25 = x2;
bool x26 = true;
bool x27 = x26;
bool x29 = x3;
bool x28 = !x27;
bool x30 = !x29;
bool x31 = x28 && x30;
if (x31) {
return;
} else {
}
bool x35 = x27 && x29;
int32_t x39;
if (x35) {
int32_t x36 = mergefun5(x1,x25);
x39 = x36;
} else {
int32_t x38;
if (x27) {
x38 = x1;
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
