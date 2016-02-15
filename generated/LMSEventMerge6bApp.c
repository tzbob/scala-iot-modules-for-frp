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
bool x11 = x4;
int32_t x14;
if (x11) {
int32_t x12 = mapfun6(x3);
x14 = x12;
} else {
x14 = 0;
}
int32_t x15 = constantfun7(x2);
bool x16 = true;
bool x17 = x16;
bool x18 = filterfun8(x15);
bool x19 = !x18;
if (x19) {
x16 = false;
} else {
}
bool x23 = x16;
int32_t x26;
if (x23) {
int32_t x24 = mapfun9(x15);
x26 = x24;
} else {
x26 = 0;
}
bool x27 = !x11;
bool x28 = !x23;
bool x29 = x27 && x28;
if (x29) {
return;
} else {
}
bool x33 = x11 && x23;
int32_t x37;
if (x33) {
int32_t x34 = mergefun10(x14,x26);
x37 = x34;
} else {
int32_t x36;
if (x11) {
x36 = x14;
} else {
x36 = x26;
}
x37 = x36;
}
int32_t x38 = mapfun11(x37);
printf("%d\n",x38);
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
int32_t mapfun6(int32_t  x41) {
int32_t x42 = x41 + 1;
return x42;
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
int32_t mapfun9(int32_t  x43) {
int32_t x44 = x43 + 1;
return x44;
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
int32_t constantfun4(int32_t  x45) {
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
int32_t mapfun3(int32_t  x46) {
int32_t x47 = x46 * 2;
return x47;
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
int32_t constantfun7(int32_t  x48) {
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
bool filterfun5(int32_t  x49) {
int32_t x50 = x49 % 2;
bool x51 = x50 == 0;
return x51;
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
bool filterfun8(int32_t  x52) {
int32_t x53 = x52 % 2;
bool x54 = x53 == 0;
return x54;
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
int32_t mapfun2(int32_t  x55) {
int32_t x56 = x55 + 1;
return x56;
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
int32_t mapfun11(int32_t  x57) {
int32_t x58 = x57 * 2;
return x58;
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
int32_t mergefun10(int32_t  x59, int32_t  x60) {
int32_t x61 = x59 + x60;
return x61;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
