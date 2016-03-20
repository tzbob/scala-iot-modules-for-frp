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
int32_t x64 = 5;
int32_t x65 = x64;
int32_t* x66 = &x65;
void x49 (int32_t* x50) {
int32_t x51 = x50[1];
printf("%d\n",x51);
int32_t* x53 = x50;
*x53 = 20;
int32_t x55 = 5;
int32_t x56 = x55;
int32_t* x57 = &x56;
int32_t x58 = *x57;
printf("%d\n",x58);
*x57 = 3;
int32_t x61 = *x57;
printf("%d\n",x61);
};
void x67 () {
x49(x66);
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
void x71 () {
x8();
x24();
x35();
};
int32_t x92 = 5;
int32_t x93 = x92;
int32_t* x94 = &x93;
void x77 (int32_t* x78) {
int32_t x79 = x78[1];
printf("%d\n",x79);
int32_t* x81 = x78;
*x81 = 20;
int32_t x83 = 5;
int32_t x84 = x83;
int32_t* x85 = &x84;
int32_t x86 = *x85;
printf("%d\n",x86);
*x85 = 3;
int32_t x89 = *x85;
printf("%d\n",x89);
};
void x95 () {
x77(x94);
};
/*****************************************
  End of C Generated Code                  
*******************************************/
