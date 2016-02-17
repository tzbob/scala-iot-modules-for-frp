/* FILE: top1.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
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
void top1() {
int32_t x0 = inputfun1();
int32_t  x1;
bool x2 = true;
bool x3 = x2;
if (x3) {
int32_t x4 = constantfun2(x0);
int32_t x5 = constantfun3(x0);
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
int32_t x17 = mergefun5(x4,x5);
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
int32_t x21 = mapfun6(x20);
x1 = x21;
} else {
}
int32_t x25 = x1;
int32_t x26 = constantfun4(x0);
bool x27 = x2;
bool x29 = true;
bool x30 = x29;
bool x28 = !x27;
bool x31 = !x30;
bool x32 = x28 && x31;
if (x32) {
return;
} else {
}
bool x36 = x27 && x30;
int32_t x40;
if (x36) {
int32_t x37 = mergefun7(x25,x26);
x40 = x37;
} else {
int32_t x39;
if (x27) {
x39 = x25;
} else {
x39 = x26;
}
x40 = x39;
}
int32_t x41 = mapfun8(x40);
printf("%d\n",x41);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
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
int32_t inputfun1() {
return 5;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun6.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
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
int32_t mapfun6(int32_t  x44) {
int32_t x45 = x44 + 2;
return x45;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun4.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
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
int32_t constantfun4(int32_t  x46) {
return 3;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun3.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
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
int32_t constantfun3(int32_t  x47) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun8.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
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
int32_t mapfun8(int32_t  x48) {
int32_t x49 = x48 * 2;
return x49;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun2.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
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
int32_t constantfun2(int32_t  x50) {
return 1;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun7.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
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
int32_t mergefun7(int32_t  x51, int32_t  x52) {
int32_t x53 = x51 + x52;
return x53;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun5.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
int32_t constantfun3(int32_t);
int32_t mapfun8(int32_t);
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
int32_t mergefun5(int32_t  x54, int32_t  x55) {
int32_t x56 = x54 + x55;
return x56;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
