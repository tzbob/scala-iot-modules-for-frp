/* FILE: top1.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
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
int32_t  x9;
bool x10 = x2;
if (x10) {
int32_t x11 = mapfun4(x1);
x9 = x11;
} else {
}
int32_t x15 = x9;
int32_t x16 = constantfun5(x0);
bool x17 = true;
bool x18 = x17;
bool x19 = filterfun6(x16);
bool x20 = !x19;
if (x20) {
x17 = false;
} else {
}
int32_t  x24;
bool x25 = x17;
if (x25) {
int32_t x26 = mapfun7(x16);
x24 = x26;
} else {
}
int32_t x30 = x24;
bool x31 = !x10;
bool x32 = !x25;
bool x33 = x31 && x32;
if (x33) {
return;
} else {
}
bool x37 = x10 && x25;
int32_t x41;
if (x37) {
int32_t x38 = mergefun8(x15,x30);
x41 = x38;
} else {
int32_t x40;
if (x10) {
x40 = x15;
} else {
x40 = x30;
}
x41 = x40;
}
int32_t x42 = mapfun9(x41);
printf("%d\n",x42);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
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
/* FILE: filterfun6.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun6(int32_t  x45) {
int32_t x46 = x45 % 2;
bool x47 = x46 == 0;
return x47;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun9.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun9(int32_t  x48) {
int32_t x49 = x48 * 2;
return x49;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun7.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun7(int32_t  x50) {
int32_t x51 = x50 + 1;
return x51;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun2.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun2(int32_t  x52) {
return 1;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun5.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun5(int32_t  x53) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun4.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun4(int32_t  x54) {
int32_t x55 = x54 + 1;
return x55;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun3.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun3(int32_t  x56) {
int32_t x57 = x56 % 2;
bool x58 = x57 == 0;
return x58;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun8.c */
void top1();
int32_t inputfun1();
bool filterfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t mapfun7(int32_t);
int32_t constantfun2(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
int32_t mergefun8(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun8(int32_t  x59, int32_t  x60) {
int32_t x61 = x59 + x60;
return x61;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
