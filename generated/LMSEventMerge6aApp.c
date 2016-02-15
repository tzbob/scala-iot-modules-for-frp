/* FILE: top1.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun3(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t mergefun7(int32_t, int32_t);
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
bool x3 = true;
bool x4 = x3;
bool x5 = filterfun4(x2);
bool x6 = !x5;
if (x6) {
x3 = false;
} else {
}
bool x10 = x3;
int32_t x13;
if (x10) {
int32_t x11 = mapfun5(x2);
x13 = x11;
} else {
x13 = 0;
}
int32_t x14 = mapfun6(x2);
bool x16 = true;
bool x17 = x16;
bool x15 = !x10;
bool x18 = !x17;
bool x19 = x15 && x18;
if (x19) {
return;
} else {
}
bool x23 = x10 && x17;
int32_t x27;
if (x23) {
int32_t x24 = mergefun7(x13,x14);
x27 = x24;
} else {
int32_t x26;
if (x10) {
x26 = x13;
} else {
x26 = x14;
}
x27 = x26;
}
int32_t x28 = mapfun8(x27);
printf("%d\n",x28);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun3(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t mergefun7(int32_t, int32_t);
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
int32_t mapfun3(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t mergefun7(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun6(int32_t  x31) {
int32_t x32 = x31 + 1;
return x32;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun3.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun3(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t mergefun7(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun3(int32_t  x33) {
int32_t x34 = x33 * 2;
return x34;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun2.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun3(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t mergefun7(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun2(int32_t  x35) {
int32_t x36 = x35 + 1;
return x36;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun5.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun3(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t mergefun7(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun5(int32_t  x37) {
int32_t x38 = x37 + 1;
return x38;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun8.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun3(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t mergefun7(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun8(int32_t  x39) {
int32_t x40 = x39 * 2;
return x40;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun4.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun3(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t mergefun7(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun4(int32_t  x41) {
int32_t x42 = x41 % 2;
bool x43 = x42 == 0;
return x43;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun7.c */
void top1();
int32_t inputfun1();
int32_t mapfun6(int32_t);
int32_t mapfun3(int32_t);
int32_t mapfun2(int32_t);
int32_t mapfun5(int32_t);
int32_t mapfun8(int32_t);
bool filterfun4(int32_t);
int32_t mergefun7(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun7(int32_t  x44, int32_t  x45) {
int32_t x46 = x44 + x45;
return x46;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
