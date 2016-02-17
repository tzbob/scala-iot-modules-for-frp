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
int32_t  x9;
bool x10 = x2;
if (x10) {
bool x11 = filterfun4(x1);
bool x12 = !x11;
if (x12) {
x2 = false;
} else {
}
int32_t  x16;
bool x17 = x2;
if (x17) {
int32_t x18 = mapfun5(x1);
x16 = x18;
} else {
}
int32_t x22 = x16;
x9 = x22;
} else {
}
int32_t x26 = x9;
int32_t x27 = constantfun6(x0);
bool x28 = true;
bool x29 = x28;
bool x30 = filterfun7(x27);
bool x31 = !x30;
if (x31) {
x28 = false;
} else {
}
int32_t  x35;
bool x36 = x28;
if (x36) {
int32_t x37 = mapfun8(x27);
x35 = x37;
} else {
}
int32_t x41 = x35;
bool x42 = x2;
bool x43 = !x42;
bool x44 = !x36;
bool x45 = x43 && x44;
if (x45) {
return;
} else {
}
bool x49 = x42 && x36;
int32_t x53;
if (x49) {
int32_t x50 = mergefun9(x26,x41);
x53 = x50;
} else {
int32_t x52;
if (x42) {
x52 = x26;
} else {
x52 = x41;
}
x53 = x52;
}
int32_t x54 = mapfun10(x53);
printf("%d\n",x54);
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
int32_t mapfun10(int32_t  x57) {
int32_t x58 = x57 * 2;
return x58;
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
int32_t constantfun6(int32_t  x59) {
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
int32_t mapfun5(int32_t  x60) {
int32_t x61 = x60 + 1;
return x61;
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
int32_t mapfun8(int32_t  x62) {
int32_t x63 = x62 * 3;
return x63;
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
bool filterfun4(int32_t  x64) {
bool x65 = x64 == 2;
return x65;
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
bool filterfun7(int32_t  x66) {
bool x67 = x66 == 3;
return x67;
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
int32_t constantfun2(int32_t  x68) {
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
bool filterfun3(int32_t  x69) {
bool x70 = x69 == 1;
return x70;
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
int32_t mergefun9(int32_t  x71, int32_t  x72) {
int32_t x73 = x71 + x72;
return x73;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
