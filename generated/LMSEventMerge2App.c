/* FILE: top1.c */
void top1();
int32_t inputfun1();
int32_t mapfun5(int32_t);
int32_t constantfun3(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
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
int32_t x2 = constantfun3(x0);
bool x3 = true;
bool x4 = x3;
bool x6 = true;
bool x7 = x6;
bool x5 = !x4;
bool x8 = !x7;
bool x9 = x5 && x8;
if (x9) {
return;
} else {
}
bool x13 = x4 && x7;
int32_t x17;
if (x13) {
int32_t x14 = mergefun4(x1,x2);
x17 = x14;
} else {
int32_t x16;
if (x4) {
x16 = x1;
} else {
x16 = x2;
}
x17 = x16;
}
int32_t x18 = mapfun5(x17);
printf("%d\n",x18);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun1();
int32_t mapfun5(int32_t);
int32_t constantfun3(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
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
/* FILE: mapfun5.c */
void top1();
int32_t inputfun1();
int32_t mapfun5(int32_t);
int32_t constantfun3(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun5(int32_t  x21) {
int32_t x22 = x21 * 2;
return x22;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun3.c */
void top1();
int32_t inputfun1();
int32_t mapfun5(int32_t);
int32_t constantfun3(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun3(int32_t  x23) {
return 2;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun2.c */
void top1();
int32_t inputfun1();
int32_t mapfun5(int32_t);
int32_t constantfun3(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun2(int32_t  x24) {
return 1;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mergefun4.c */
void top1();
int32_t inputfun1();
int32_t mapfun5(int32_t);
int32_t constantfun3(int32_t);
int32_t constantfun2(int32_t);
int32_t mergefun4(int32_t, int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mergefun4(int32_t  x25, int32_t  x26) {
int32_t x27 = x25 + x26;
return x27;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
