/* FILE: top1.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
bool filterfun2(int32_t);
int32_t constantfun3(int32_t);
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
bool x1 = true;
bool x2 = x1;
bool x3 = filterfun2(x0);
bool x4 = !x3;
if (x4) {
x1 = false;
} else {
}
bool x8 = x1;
int32_t x11;
if (x8) {
int32_t x9 = constantfun3(x0);
x11 = x9;
} else {
x11 = 0;
}
int32_t x12 = constantfun4(x0);
bool x14 = true;
bool x15 = x14;
bool x13 = !x8;
bool x16 = !x15;
bool x17 = x13 && x16;
if (x17) {
return;
} else {
}
bool x21 = x8 && x15;
int32_t x25;
if (x21) {
int32_t x22 = mergefun5(x11,x12);
x25 = x22;
} else {
int32_t x24;
if (x8) {
x24 = x11;
} else {
x24 = x12;
}
x25 = x24;
}
int32_t x26 = mapfun6(x25);
printf("%d\n",x26);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
bool filterfun2(int32_t);
int32_t constantfun3(int32_t);
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
bool filterfun2(int32_t);
int32_t constantfun3(int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun6(int32_t  x29) {
int32_t x30 = x29 * 2;
return x30;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun4.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
bool filterfun2(int32_t);
int32_t constantfun3(int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun4(int32_t  x31) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun2.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
bool filterfun2(int32_t);
int32_t constantfun3(int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun2(int32_t  x32) {
int32_t x33 = x32 % 2;
bool x34 = x33 == 0;
return x34;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun3.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
bool filterfun2(int32_t);
int32_t constantfun3(int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun3(int32_t  x35) {
return 1;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun5.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t constantfun4(int32_t);
bool filterfun2(int32_t);
int32_t constantfun3(int32_t);
int32_t mergefun5(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun5(int32_t  x36, int32_t  x37) {
int32_t x38 = x36 + x37;
return x38;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
