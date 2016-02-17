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
int32_t  x10;
bool x11 = x3;
if (x11) {
int32_t x12 = mapfun5(x2);
x10 = x12;
} else {
}
int32_t x16 = x10;
int32_t x17 = mapfun6(x2);
bool x19 = true;
bool x20 = x19;
bool x18 = !x11;
bool x21 = !x20;
bool x22 = x18 && x21;
if (x22) {
return;
} else {
}
bool x26 = x11 && x20;
int32_t x30;
if (x26) {
int32_t x27 = mergefun7(x16,x17);
x30 = x27;
} else {
int32_t x29;
if (x11) {
x29 = x16;
} else {
x29 = x17;
}
x30 = x29;
}
int32_t x31 = mapfun8(x30);
printf("%d\n",x31);
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
int32_t mapfun6(int32_t  x34) {
int32_t x35 = x34 + 1;
return x35;
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
int32_t mapfun3(int32_t  x36) {
int32_t x37 = x36 * 2;
return x37;
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
int32_t mapfun2(int32_t  x38) {
int32_t x39 = x38 + 1;
return x39;
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
int32_t mapfun5(int32_t  x40) {
int32_t x41 = x40 + 1;
return x41;
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
int32_t mapfun8(int32_t  x42) {
int32_t x43 = x42 * 2;
return x43;
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
bool filterfun4(int32_t  x44) {
int32_t x45 = x44 % 2;
bool x46 = x45 == 0;
return x46;
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
int32_t mergefun7(int32_t  x47, int32_t  x48) {
int32_t x49 = x47 + x48;
return x49;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
