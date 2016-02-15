/* FILE: top1.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
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
bool x2 = true;
bool x3 = x2;
bool x4 = filterfun3(x1);
bool x5 = !x4;
if (x5) {
x2 = false;
} else {
}
bool x9 = x2;
int32_t x20;
if (x9) {
bool x10 = filterfun4(x1);
bool x11 = !x10;
if (x11) {
x2 = false;
} else {
}
bool x15 = x2;
int32_t x18;
if (x15) {
int32_t x16 = mapfun5(x1);
x18 = x16;
} else {
x18 = 0;
}
x20 = x18;
} else {
x20 = 0;
}
int32_t x21 = constantfun6(x0);
bool x22 = true;
bool x23 = x22;
bool x24 = filterfun7(x21);
bool x25 = !x24;
if (x25) {
x22 = false;
} else {
}
bool x29 = x22;
int32_t x32;
if (x29) {
int32_t x30 = mapfun8(x21);
x32 = x30;
} else {
x32 = 0;
}
bool x33 = x2;
bool x34 = !x33;
bool x35 = !x29;
bool x36 = x34 && x35;
if (x36) {
return;
} else {
}
bool x40 = x33 && x29;
int32_t x44;
if (x40) {
int32_t x41 = mergefun9(x20,x32);
x44 = x41;
} else {
int32_t x43;
if (x33) {
x43 = x20;
} else {
x43 = x32;
}
x44 = x43;
}
int32_t x45 = mapfun10(x44);
printf("%d\n",x45);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
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
/* FILE: mapfun10.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun10(int32_t  x48) {
int32_t x49 = x48 * 2;
return x49;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun6.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun6(int32_t  x50) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun5.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun5(int32_t  x51) {
int32_t x52 = x51 + 1;
return x52;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun8.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun8(int32_t  x53) {
int32_t x54 = x53 * 3;
return x54;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun4.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun4(int32_t  x55) {
bool x56 = x55 == 2;
return x56;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun7.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun7(int32_t  x57) {
bool x58 = x57 == 3;
return x58;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun2.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun2(int32_t  x59) {
return 1;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun3.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun3(int32_t  x60) {
bool x61 = x60 == 1;
return x61;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun9.c */
void top1();
int32_t inputfun1();
int32_t mapfun10(int32_t);
int32_t constantfun6(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
bool filterfun7(int32_t);
int32_t constantfun2(int32_t);
bool filterfun3(int32_t);
int32_t mergefun9(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun9(int32_t  x62, int32_t  x63) {
int32_t x64 = x62 + x63;
return x64;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
