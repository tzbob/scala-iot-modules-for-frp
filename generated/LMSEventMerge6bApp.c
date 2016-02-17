/* FILE: top1.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void top1() {
int32_t x0 = inputfun1();
int32_t x1 = mapfun2(x0);
int32_t x2 = mapfun3(x1);
int32_t x3 = constantfun4(x2);
bool x4 = true;
bool x5 = x4;
bool x6 = filterfun5(x3);
bool x7 = !x6;
if (x7) {
x4 = false;
} else {
}
int32_t  x11;
bool x12 = x4;
if (x12) {
int32_t x13 = mapfun6(x3);
x11 = x13;
} else {
}
int32_t x17 = x11;
int32_t x18 = constantfun7(x2);
bool x19 = true;
bool x20 = x19;
bool x21 = filterfun8(x18);
bool x22 = !x21;
if (x22) {
x19 = false;
} else {
}
int32_t  x26;
bool x27 = x19;
if (x27) {
int32_t x28 = mapfun9(x18);
x26 = x28;
} else {
}
int32_t x32 = x26;
bool x33 = !x12;
bool x34 = !x27;
bool x35 = x33 && x34;
if (x35) {
return;
} else {
}
bool x39 = x12 && x27;
int32_t x43;
if (x39) {
int32_t x40 = mergefun10(x17,x32);
x43 = x40;
} else {
int32_t x42;
if (x12) {
x42 = x17;
} else {
x42 = x32;
}
x43 = x42;
}
int32_t x44 = mapfun11(x43);
printf("%d\n",x44);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
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
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun6(int32_t  x47) {
int32_t x48 = x47 + 1;
return x48;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun9.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun9(int32_t  x49) {
int32_t x50 = x49 + 1;
return x50;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun4.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun4(int32_t  x51) {
return 1;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun3.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun3(int32_t  x52) {
int32_t x53 = x52 * 2;
return x53;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun7.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun7(int32_t  x54) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun5.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun5(int32_t  x55) {
int32_t x56 = x55 % 2;
bool x57 = x56 == 0;
return x57;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun8.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun8(int32_t  x58) {
int32_t x59 = x58 % 2;
bool x60 = x59 == 0;
return x60;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun2.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun2(int32_t  x61) {
int32_t x62 = x61 + 1;
return x62;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun11.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun11(int32_t  x63) {
int32_t x64 = x63 * 2;
return x64;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun10.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun9(int32_t);
int32_t constantfun4(int32_t);
int32_t mapfun3(int32_t);
int32_t constantfun7(int32_t);
bool filterfun5(int32_t);
bool filterfun8(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun11(int32_t);
int32_t mergefun10(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun10(int32_t  x65, int32_t  x66) {
int32_t x67 = x65 + x66;
return x67;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
