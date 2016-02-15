/* FILE: top1.c */
void top1();
int32_t inputfun1();
int32_t mapfun2(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
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
bool x2 = filterfun3(x1);
bool x3 = !x2;
if (x3) {
return;
} else {
}
int32_t x7 = mapfun4(x1);
printf("%d\n",x7);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun1();
int32_t mapfun2(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
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
/* FILE: mapfun2.c */
void top1();
int32_t inputfun1();
int32_t mapfun2(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun2(int32_t  x10) {
int32_t x11 = 2 * x10;
return x11;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun4.c */
void top1();
int32_t inputfun1();
int32_t mapfun2(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun4(int32_t  x12) {
int32_t x13 = x12 + 1;
return x13;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: filterfun3.c */
void top1();
int32_t inputfun1();
int32_t mapfun2(int32_t);
int32_t mapfun4(int32_t);
bool filterfun3(int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool filterfun3(int32_t  x14) {
int32_t x15 = x14 % 2;
bool x16 = x15 == 0;
return x16;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
