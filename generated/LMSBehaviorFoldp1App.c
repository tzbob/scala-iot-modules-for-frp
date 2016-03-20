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
int32_t x21 = x18;
int32_t x22 = x7;
int32_t x23 = x21 + x22;
x18 = x23;
} else {
}
};
void x28 () {
x2();
x8();
x19();
};
int32_t x49 = 5;
int32_t x50 = x49;
int32_t* x51 = &x50;
void x34 (int32_t* x35) {
int32_t x36 = x35[1];
printf("%d\n",x36);
int32_t* x38 = x35;
*x38 = 20;
int32_t x40 = 5;
int32_t x41 = x40;
int32_t* x42 = &x41;
int32_t x43 = *x42;
printf("%d\n",x43);
*x42 = 3;
int32_t x46 = *x42;
printf("%d\n",x46);
};
void x52 () {
x34(x51);
};
void x56 (int32_t* x57) {
int32_t x58[5];
x58[0] = 1;
x58[1] = 2;
x58[2] = 3;
int32_t x62 = x58[0];
printf("%d\n",x62);
};
void x65 () {
int32_t x66[5];
int32_t* x67 = x66;
x56(x67);
};
/*****************************************
  End of C Generated Code                  
*******************************************/
