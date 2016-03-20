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
int32_t x45 = 5;
int32_t x46 = x45;
int32_t* x47 = &x46;
void x32 (int32_t* x33) {
int32_t x34 = x33[1];
printf("%d\n",x34);
int32_t x36 = 5;
int32_t x37 = x36;
int32_t* x38 = &x37;
int32_t x39 = *x38;
printf("%d\n",x39);
*x38 = 3;
int32_t x42 = *x38;
printf("%d\n",x42);
};
void x48 () {
x32(x47);
};
/*****************************************
  End of C Generated Code                  
*******************************************/
