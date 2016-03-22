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
SM_DATA(module1) bool x82;
SM_DATA(module1) int32_t x83;
SM_DATA(module1) bool x108;
SM_DATA(module1) int32_t x109;
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
SM_FUNC(module1) void x69 () {
bool x60 = x0;
if (x60) {
x58 = true;
int32_t x62 = x1;
x59 = 1;
} else {
x58 = false;
}
};
SM_FUNC(module1) void x107 () {
bool x84 = x58;
bool x85 = x70;
bool x86 = x84 && x85;
if (x86) {
x82 = true;
int32_t x88 = x59;
int32_t x89 = x71;
int32_t x90 = x88 + x89;
x83 = x90;
} else {
if (x84) {
x82 = true;
int32_t x88 = x59;
x83 = x88;
} else {
if (x85) {
x82 = true;
int32_t x89 = x71;
x83 = x89;
} else {
x82 = false;
}
}
}
};
SM_FUNC(module1) void x120 () {
bool x110 = x82;
if (x110) {
x108 = true;
int32_t x112 = x83;
int32_t x113 = x112 * 2;
x109 = x113;
} else {
x108 = false;
}
};
SM_INPUT(module1,x131,x121,x122) {
uint8_t* x123 = x121;
int32_t x124 = x122;
x28(x123,x124);
x69();
x107();
x120();
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
SM_FUNC(module1) void x81 () {
bool x72 = x29;
if (x72) {
x70 = true;
int32_t x74 = x30;
x71 = 2;
} else {
x70 = false;
}
};
SM_INPUT(module1,x143,x133,x134) {
uint8_t* x135 = x133;
int32_t x136 = x134;
x57(x135,x136);
x81();
x107();
x120();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
