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
int32_t x12 = 0;
bool  x22;
int32_t  x23;
int32_t x34 = 0;
void x2 () {
x0 = true;
x1 = 10;
};
void x13 () {
bool x14 = x0;
if (x14) {
int32_t x15 = x12;
int32_t x16 = x1;
int32_t x17 = x15 + x16;
x12 = x17;
} else {
}
};
void x44 () {
x2();
x13();
};
int32_t x62 = 5;
int32_t x63 = x62;
int32_t* x64 = &x63;
void x49 (int32_t* x50) {
int32_t x51 = x50[1];
printf("%d\n",x51);
int32_t x53 = 5;
int32_t x54 = x53;
int32_t* x55 = &x54;
int32_t x56 = *x55;
printf("%d\n",x56);
*x55 = 3;
int32_t x59 = *x55;
printf("%d\n",x59);
};
void x65 () {
x49(x64);
};
void x8 () {
x6 = true;
x7 = 5;
};
void x24 () {
bool x25 = x6;
if (x25) {
x22 = true;
int32_t x27 = x12;
x23 = x27;
} else {
x22 = false;
}
};
void x35 () {
bool x36 = x22;
if (x36) {
int32_t x37 = x34;
int32_t x38 = x23;
int32_t x39 = x37 + x38;
x34 = x39;
} else {
}
};
void x69 () {
x8();
x24();
x35();
};
int32_t x88 = 5;
int32_t x89 = x88;
int32_t* x90 = &x89;
void x75 (int32_t* x76) {
int32_t x77 = x76[1];
printf("%d\n",x77);
int32_t x79 = 5;
int32_t x80 = x79;
int32_t* x81 = &x80;
int32_t x82 = *x81;
printf("%d\n",x82);
*x81 = 3;
int32_t x85 = *x81;
printf("%d\n",x85);
};
void x91 () {
x75(x90);
};
/*****************************************
  End of C Generated Code                  
*******************************************/
