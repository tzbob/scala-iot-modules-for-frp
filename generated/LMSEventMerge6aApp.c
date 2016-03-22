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
SM_DATA(module1) bool x42;
SM_DATA(module1) int32_t x43;
SM_DATA(module1) bool x55;
SM_DATA(module1) int32_t x56;
SM_DATA(module1) bool x68;
SM_DATA(module1) int32_t x69;
SM_DATA(module1) bool x86;
SM_DATA(module1) int32_t x87;
SM_DATA(module1) bool x99;
SM_DATA(module1) int32_t x100;
SM_DATA(module1) bool x125;
SM_DATA(module1) int32_t x126;
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
SM_FUNC(module1) void x41 () {
bool x31 = x0;
if (x31) {
x29 = true;
int32_t x33 = x1;
int32_t x34 = x33 + 1;
x30 = x34;
} else {
x29 = false;
}
};
SM_FUNC(module1) void x54 () {
bool x44 = x29;
if (x44) {
x42 = true;
int32_t x46 = x30;
int32_t x47 = x46 * 2;
x43 = x47;
} else {
x42 = false;
}
};
SM_FUNC(module1) void x67 () {
bool x57 = x42;
if (x57) {
x55 = true;
int32_t x59 = x43;
int32_t x60 = x59 + 1;
x56 = x60;
} else {
x55 = false;
}
};
SM_FUNC(module1) void x85 () {
bool x70 = x42;
if (x70) {
int32_t x71 = x43;
int32_t x72 = x71 % 2;
bool x73 = x72 == 0;
if (x73) {
x68 = true;
x69 = x71;
} else {
x68 = false;
}
} else {
x68 = false;
}
};
SM_FUNC(module1) void x98 () {
bool x88 = x68;
if (x88) {
x86 = true;
int32_t x90 = x69;
int32_t x91 = x90 + 1;
x87 = x91;
} else {
x86 = false;
}
};
SM_FUNC(module1) void x124 () {
bool x101 = x86;
bool x102 = x55;
bool x103 = x101 && x102;
if (x103) {
x99 = true;
int32_t x105 = x87;
int32_t x106 = x56;
int32_t x107 = x105 + x106;
x100 = x107;
} else {
if (x101) {
x99 = true;
int32_t x105 = x87;
x100 = x105;
} else {
if (x102) {
x99 = true;
int32_t x106 = x56;
x100 = x106;
} else {
x99 = false;
}
}
}
};
SM_FUNC(module1) void x137 () {
bool x127 = x99;
if (x127) {
x125 = true;
int32_t x129 = x100;
int32_t x130 = x129 * 2;
x126 = x130;
} else {
x125 = false;
}
};
SM_INPUT(module1,x152,x138,x139) {
uint8_t* x140 = x138;
int32_t x141 = x139;
x28(x140,x141);
x41();
x54();
x67();
x85();
x98();
x124();
x137();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
