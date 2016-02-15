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
bool x1 = true;
bool x2 = x1;
int32_t x22;
if (x2) {
int32_t x3 = constantfun2(x0);
int32_t x4 = constantfun3(x0);
bool x5 = true;
bool x6 = x5;
bool x8 = true;
bool x9 = x8;
bool x7 = !x6;
bool x10 = !x9;
bool x11 = x7 && x10;
if (x11) {
x1 = false;
} else {
}
bool x15 = x6 && x9;
int32_t x19;
if (x15) {
int32_t x16 = mergefun5(x3,x4);
x19 = x16;
} else {
int32_t x18;
if (x6) {
x18 = x3;
} else {
x18 = x4;
}
x19 = x18;
}
int32_t x20 = mapfun6(x19);
x22 = x20;
} else {
x22 = 0;
}
int32_t x23 = constantfun4(x0);
bool x24 = x1;
bool x26 = true;
bool x27 = x26;
bool x25 = !x24;
bool x28 = !x27;
bool x29 = x25 && x28;
if (x29) {
return;
} else {
}
bool x33 = x24 && x27;
int32_t x37;
if (x33) {
int32_t x34 = mergefun7(x22,x23);
x37 = x34;
} else {
int32_t x36;
if (x24) {
x36 = x22;
} else {
x36 = x23;
}
x37 = x36;
}
int32_t x38 = mapfun8(x37);
printf("%d\n",x38);
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
int32_t mapfun6(int32_t  x41) {
int32_t x42 = x41 + 2;
return x42;
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
int32_t constantfun4(int32_t  x43) {
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
int32_t constantfun3(int32_t  x44) {
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
int32_t mapfun8(int32_t  x45) {
int32_t x46 = x45 * 2;
return x46;
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
int32_t constantfun2(int32_t  x47) {
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
int32_t mergefun7(int32_t  x48, int32_t  x49) {
int32_t x50 = x48 + x49;
return x50;
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
int32_t mergefun5(int32_t  x51, int32_t  x52) {
int32_t x53 = x51 + x52;
return x53;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
