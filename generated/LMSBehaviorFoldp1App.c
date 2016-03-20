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
int32_t x47 = 5;
int32_t x48 = x47;
int32_t* x49 = &x48;
void x34 (int32_t* x35) {
int32_t x36 = x35[1];
printf("%d\n",x36);
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
x34(x49);
};
/*****************************************
  End of C Generated Code                  
*******************************************/
