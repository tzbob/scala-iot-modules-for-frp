/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void x11 (int32_t* x0) {
*x0 = 20;
int32_t x2 = 5;
int32_t x3 = x2;
int32_t* x4 = &x3;
int32_t x5 = *x4;
printf("%d\n",x5);
*x4 = 3;
int32_t x8 = *x4;
printf("%d\n",x8);
};
void x23 () {
int32_t x12 = 5;
int32_t x13 = x12;
int32_t* x14 = &x13;
printf("%s","Before call: ");
int32_t x16 = *x14;
printf("%d\n",x16);
x11(x14);
printf("%s","After call: ");
int32_t x20 = *x14;
printf("%d\n",x20);
};
/*****************************************
  End of C Generated Code                  
*******************************************/
