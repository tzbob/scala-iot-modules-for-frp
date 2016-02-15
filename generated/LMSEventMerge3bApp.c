/* FILE: top1.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun7(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
int32_t mergefun6(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void top1() {
int32_t x0 = inputfun1();
int32_t x1 = mapfun4(x0);
int32_t x2 = mapfun7(x1);
printf("%d\n",x2);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun2.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun7(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
int32_t mergefun6(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t inputfun2() {
return 10;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: top2.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun7(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
int32_t mergefun6(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void top2() {
int32_t x5 = inputfun2();
int32_t x6 = mapfun4(x5);
int32_t x7 = constantfun5(x5);
bool x8 = true;
bool x9 = x8;
bool x11 = true;
bool x12 = x11;
bool x10 = !x9;
bool x13 = !x12;
bool x14 = x10 && x13;
if (x14) {
return;
} else {
}
bool x18 = x9 && x12;
int32_t x22;
if (x18) {
int32_t x19 = mergefun6(x6,x7);
x22 = x19;
} else {
int32_t x21;
if (x9) {
x21 = x6;
} else {
x21 = x7;
}
x22 = x21;
}
int32_t x23 = mapfun7(x22);
printf("%d\n",x23);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun7(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
int32_t mergefun6(int32_t, int32_t);
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
/* FILE: mapfun7.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun7(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
int32_t mergefun6(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun7(int32_t  x26) {
int32_t x27 = x26 * 2;
return x27;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun5.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun7(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
int32_t mergefun6(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun5(int32_t  x28) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun4.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun7(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
int32_t mergefun6(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun4(int32_t  x29) {
int32_t x30 = x29 * 3;
return x30;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun6.c */
void top1();
int32_t inputfun2();
void top2();
int32_t inputfun1();
int32_t mapfun7(int32_t);
int32_t constantfun5(int32_t);
int32_t mapfun4(int32_t);
int32_t mergefun6(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun6(int32_t  x31, int32_t  x32) {
int32_t x33 = x31 + x32;
return x33;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
