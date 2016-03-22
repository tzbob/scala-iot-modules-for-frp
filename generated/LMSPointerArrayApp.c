/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void x0 (int32_t* x1) {
x1[2] = 20;
int32_t x3[5];
x3[0] = 1;
x3[1] = 2;
x3[2] = 3;
int32_t x7 = x3[0];
printf("%d\n",x7);
};
void x10 () {
int32_t x11[3];
x11[0] = 10;
x11[1] = 20;
x11[2] = 30;
int32_t* x15 = x11;
x0(x15);
int32_t x17 = x15[0];
printf("%d\n",x17);
int32_t x19 = x15[1];
printf("%d\n",x19);
int32_t x21 = x15[2];
printf("%d\n",x21);
};
/*****************************************
  End of C Generated Code                  
*******************************************/
