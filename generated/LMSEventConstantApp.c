/* FILE: top1.c */
void top1();
int32_t inputfun1();
int32_t mapfun3(int32_t);
int32_t constantfun2(int32_t);
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
int32_t x2 = mapfun3(x1);
printf("%d\n",x2);
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: inputfun1.c */
void top1();
int32_t inputfun1();
int32_t mapfun3(int32_t);
int32_t constantfun2(int32_t);
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
int32_t mapfun3(int32_t);
int32_t constantfun2(int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t mapfun3(int32_t  x5) {
int32_t x6 = 2 * x5;
return x6;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
/* FILE: constantfun2.c */
void top1();
int32_t inputfun1();
int32_t mapfun3(int32_t);
int32_t constantfun2(int32_t);
/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int32_t constantfun2(int32_t  x7) {
return 10;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
