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
SM_DATA(module1) bool x58;
SM_DATA(module1) int32_t x59;
SM_DATA(module1) bool x70;
SM_DATA(module1) int32_t x71;
SM_DATA(module1) int32_t x82;
SM_DATA(module1) int32_t x92;
SM_DATA(module1) int32_t x102;
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
SM_FUNC(module1) void x81 () {
bool x72 = x0;
if (x72) {
x70 = true;
int32_t x74 = x1;
x71 = 1;
} else {
x70 = false;
}
};
void x101 () {
bool x93 = x70;
if (x93) {
int32_t x94 = x92;
int32_t x95 = x71;
int32_t x96 = x94 + x95;
x92 = x96;
} else {
}
};
void x108 () {
int32_t x103 = x92;
int32_t x104 = x82;
int32_t x105 = x103 * x104;
x102 = x105;
};
SM_INPUT(module1,x119,x109,x110) {
uint8_t* x111 = x109;
int32_t x112 = x110;
x28(x111,x112);
x81();
x101();
x108();
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
SM_FUNC(module1) void x69 () {
bool x60 = x29;
if (x60) {
x58 = true;
int32_t x62 = x30;
x59 = 2;
} else {
x58 = false;
}
};
void x91 () {
bool x83 = x58;
if (x83) {
int32_t x84 = x82;
int32_t x85 = x59;
int32_t x86 = x84 + x85;
x82 = x86;
} else {
}
};
SM_INPUT(module1,x131,x121,x122) {
uint8_t* x123 = x121;
int32_t x124 = x122;
x57(x123,x124);
x69();
x91();
x108();
};
SM_FUNC(module1) void x140 () {
x82 = 1;
int32_t x134 = x92;
int32_t x135 = x82;
int32_t x136 = x134 * x135;
x102 = x136;
x92 = 1;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
