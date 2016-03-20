/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool  x0;
int32_t  x1;
bool  x6;
int32_t  x7;
int32_t x18 = 1;
void x2 () {
x0 = true;
x1 = 5;
};
void x8 () {
bool x9 = x0;
if (x9) {
x6 = true;
int32_t x11 = x1;
x7 = 5;
} else {
x6 = false;
}
};
void x19 () {
bool x20 = x6;
if (x20) {
int32_t x21 = x7;
x18 = x21;
} else {
}
};
void x26 () {
x2();
x8();
x19();
};
int32_t x47 = 5;
int32_t x48 = x47;
int32_t* x49 = &x48;
void x32 (int32_t* x33) {
int32_t x34 = x33[1];
printf("%d\n",x34);
int32_t* x36 = x33;
*x36 = 20;
int32_t x38 = 5;
int32_t x39 = x38;
int32_t* x40 = &x39;
int32_t x41 = *x40;
printf("%d\n",x41);
*x40 = 3;
int32_t x44 = *x40;
printf("%d\n",x44);
};
void x50 () {
x32(x49);
};
void x54 (int32_t* x55) {
int32_t x56[5];
x56[0] = 1;
x56[1] = 2;
x56[2] = 3;
int32_t x60 = x56[0];
printf("%d\n",x60);
};
void x63 () {
int32_t x64[5];
int32_t* x65 = x64;
x54(x65);
};
/*****************************************
  End of C Generated Code                  
*******************************************/
