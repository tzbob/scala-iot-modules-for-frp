/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void x0 (int32_t* x1) {
*x1 = 20;
int32_t x3 = 5;
int32_t x4 = x3;
int32_t* x5 = &x4;
int32_t x6 = *x5;
printf("%d\n",x6);
*x5 = 3;
int32_t x9 = *x5;
printf("%d\n",x9);
};
void x12 () {
int32_t x13 = 5;
int32_t x14 = x13;
int32_t* x15 = &x14;
printf("%s",string("Before call: ").c_str());
int32_t x17 = *x15;
printf("%d\n",x17);
x0(x15);
printf("%s",string("After call: ").c_str());
int32_t x21 = *x15;
printf("%d\n",x21);
};
void x25 (int32_t* x26) {
x26[2] = 20;
int32_t x28[5];
x28[0] = 1;
x28[1] = 2;
x28[2] = 3;
int32_t x32 = x28[0];
printf("%d\n",x32);
};
void x35 () {
int32_t x36[3];
x36[0] = 10;
x36[1] = 20;
x36[2] = 30;
int32_t* x40 = x36;
x25(x40);
int32_t x42 = x40[0];
printf("%d\n",x42);
int32_t x44 = x40[1];
printf("%d\n",x44);
int32_t x46 = x40[2];
printf("%d\n",x46);
};
/*****************************************
  End of C Generated Code                  
*******************************************/
