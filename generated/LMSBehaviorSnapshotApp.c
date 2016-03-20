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
void x71 (int32_t* x72) {
int32_t x73[5];
x73[0] = 1;
x73[1] = 2;
x73[2] = 3;
int32_t x77 = x73[0];
printf("%d\n",x77);
};
void x80 () {
int32_t x81[5];
int32_t* x82 = x81;
x71(x82);
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
void x86 () {
x8();
x24();
x35();
};
int32_t x107 = 5;
int32_t x108 = x107;
int32_t* x109 = &x108;
void x92 (int32_t* x93) {
int32_t x94 = x93[1];
printf("%d\n",x94);
int32_t* x96 = x93;
*x96 = 20;
int32_t x98 = 5;
int32_t x99 = x98;
int32_t* x100 = &x99;
int32_t x101 = *x100;
printf("%d\n",x101);
*x100 = 3;
int32_t x104 = *x100;
printf("%d\n",x104);
};
void x110 () {
x92(x109);
};
void x114 (int32_t* x115) {
int32_t x116[5];
x116[0] = 1;
x116[1] = 2;
x116[2] = 3;
int32_t x120 = x116[0];
printf("%d\n",x120);
};
void x123 () {
int32_t x124[5];
int32_t* x125 = x124;
x114(x125);
};
/*****************************************
  End of C Generated Code                  
*******************************************/
