/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool  x0;
int32_t  x1;
int32_t x6 = 1;
bool  x16;
int32_t  x17;
int32_t x23 = 10;
void x2 () {
x0 = true;
x1 = 1;
};
void x7 () {
bool x8 = x0;
if (x8) {
int32_t x9 = x6;
int32_t x10 = x1;
int32_t x11 = x9 + x10;
x6 = x11;
} else {
}
};
void x18 () {
x16 = true;
int32_t x20 = x6;
x17 = x20;
};
void x24 () {
bool x25 = x16;
if (x25) {
int32_t x26 = x23;
int32_t x27 = x17;
int32_t x28 = x26 + x27;
x23 = x28;
} else {
}
};
void x33 () {
x2();
x7();
x18();
x24();
};
int32_t x55 = 5;
int32_t x56 = x55;
int32_t* x57 = &x56;
void x40 (int32_t* x41) {
int32_t x42 = x41[1];
printf("%d\n",x42);
int32_t* x44 = x41;
*x44 = 20;
int32_t x46 = 5;
int32_t x47 = x46;
int32_t* x48 = &x47;
int32_t x49 = *x48;
printf("%d\n",x49);
*x48 = 3;
int32_t x52 = *x48;
printf("%d\n",x52);
};
void x58 () {
x40(x57);
};
/*****************************************
  End of C Generated Code                  
*******************************************/
