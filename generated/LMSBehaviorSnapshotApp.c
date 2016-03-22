/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
SM_DATA(module1) bool x0;
SM_DATA(module1) int32_t x1;
SM_DATA(module1) bool x29;
SM_DATA(module1) int32_t x30;
SM_DATA(module1) int32_t x58;
SM_DATA(module1) bool x68;
SM_DATA(module1) int32_t x69;
SM_DATA(module1) int32_t x80;
SM_FUNC(module1) void x28 (uint8_t* x2,int32_t x3) {
int32_t x6 = 0;
int32_t x7 = 0;
int32_t x5 = x3;
uint8_t* x4 = x2;
for (;;) {
int32_t x8 = x7;
bool x9 = x8 < x5;
if (!x9) break;
int32_t x11 = x7;
uint8_t x12 = x4[x11];
int32_t x16 = x6;
int32_t x13 = (int32_t ) x12;
int32_t x14 = x11 * 8;
int32_t x15 = x13 << x14;
int32_t x17 = x16 + x15;
x6 = x17;
int32_t x19 = x11 + 1;
x7 = x19;
}
x0 = true;
int32_t x24 = x6;
int32_t x25 = (int32_t ) x24;
x1 = x25;
};
void x67 () {
bool x59 = x0;
if (x59) {
int32_t x60 = x58;
int32_t x61 = x1;
int32_t x62 = x60 + x61;
x58 = x62;
} else {
}
};
SM_INPUT(module1,x98,x90,x91) {
uint8_t* x92 = x90;
int32_t x93 = x91;
x28(x92,x93);
x67();
};
SM_FUNC(module1) void x57 (uint8_t* x31,int32_t x32) {
int32_t x35 = 0;
int32_t x36 = 0;
int32_t x34 = x32;
uint8_t* x33 = x31;
for (;;) {
int32_t x37 = x36;
bool x38 = x37 < x34;
if (!x38) break;
int32_t x40 = x36;
uint8_t x41 = x33[x40];
int32_t x45 = x35;
int32_t x42 = (int32_t ) x41;
int32_t x43 = x40 * 8;
int32_t x44 = x42 << x43;
int32_t x46 = x45 + x44;
x35 = x46;
int32_t x48 = x40 + 1;
x36 = x48;
}
x29 = true;
int32_t x53 = x35;
int32_t x54 = (int32_t ) x53;
x30 = x54;
};
SM_FUNC(module1) void x79 () {
bool x70 = x29;
if (x70) {
x68 = true;
int32_t x72 = x58;
x69 = x72;
} else {
x68 = false;
}
};
void x89 () {
bool x81 = x68;
if (x81) {
int32_t x82 = x80;
int32_t x83 = x69;
int32_t x84 = x82 + x83;
x80 = x84;
} else {
}
};
SM_INPUT(module1,x109,x100,x101) {
uint8_t* x102 = x100;
int32_t x103 = x101;
x57(x102,x103);
x79();
x89();
};
SM_FUNC(module1) void x114 () {
x80 = 0;
x58 = 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
