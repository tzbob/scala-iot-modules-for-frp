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
int32_t  x8;
bool x9 = x1;
if (x9) {
int32_t x10 = constantfun3(x0);
x8 = x10;
} else {
}
int32_t x14 = x8;
int32_t x15 = constantfun4(x0);
bool x17 = true;
bool x18 = x17;
bool x16 = !x9;
bool x19 = !x18;
bool x20 = x16 && x19;
if (x20) {
return;
} else {
}
bool x24 = x9 && x18;
int32_t x28;
if (x24) {
int32_t x25 = mergefun5(x14,x15);
x28 = x25;
} else {
int32_t x27;
if (x9) {
x27 = x14;
} else {
x27 = x15;
}
x28 = x27;
}
int32_t x29 = mapfun6(x28);
printf("%d\n",x29);
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
int32_t mapfun6(int32_t  x32) {
int32_t x33 = x32 * 2;
return x33;
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
int32_t constantfun4(int32_t  x34) {
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
bool filterfun2(int32_t  x35) {
int32_t x36 = x35 % 2;
bool x37 = x36 == 0;
return x37;
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
int32_t constantfun3(int32_t  x38) {
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
int32_t mergefun5(int32_t  x39, int32_t  x40) {
int32_t x41 = x39 + x40;
return x41;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
