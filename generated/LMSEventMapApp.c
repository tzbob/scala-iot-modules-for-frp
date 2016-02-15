/* FILE: top1.c */
void top1();
int32_t inputfun1();
bool mapfun3(int32_t);
int32_t mapfun2(int32_t);
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
bool x2 = mapfun3(x1);
printf("%d\n",x2);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun1();
bool mapfun3(int32_t);
int32_t mapfun2(int32_t);
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
/* FILE: mapfun3.c */
void top1();
int32_t inputfun1();
bool mapfun3(int32_t);
int32_t mapfun2(int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool mapfun3(int32_t  x5) {
int32_t x6 = x5 % 2;
bool x7 = x6 == 0;
return x7;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: mapfun2.c */
void top1();
int32_t inputfun1();
bool mapfun3(int32_t);
int32_t mapfun2(int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun2(int32_t  x8) {
int32_t x9 = 2 * x8;
return x9;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
