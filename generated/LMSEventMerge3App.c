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
SM_DATA(module1) bool x84;
SM_DATA(module1) int32_t x85;
SM_DATA(module1) bool x96;
SM_DATA(module1) int32_t x97;
SM_DATA(module1) bool x122;
SM_DATA(module1) int32_t x123;
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
SM_FUNC(module1) void x83 () {
bool x60 = x0;
bool x61 = x29;
bool x62 = x60 && x61;
if (x62) {
x58 = true;
int32_t x64 = x1;
int32_t x65 = x30;
int32_t x66 = x64 * x65;
x59 = x66;
} else {
if (x60) {
x58 = true;
int32_t x64 = x1;
x59 = x64;
} else {
if (x61) {
x58 = true;
int32_t x65 = x30;
x59 = x65;
} else {
x58 = false;
}
}
}
};
SM_FUNC(module1) void x121 () {
bool x98 = x58;
bool x99 = x84;
bool x100 = x98 && x99;
if (x100) {
x96 = true;
int32_t x102 = x59;
int32_t x103 = x85;
int32_t x104 = x102 + x103;
x97 = x104;
} else {
if (x98) {
x96 = true;
int32_t x102 = x59;
x97 = x102;
} else {
if (x99) {
x96 = true;
int32_t x103 = x85;
x97 = x103;
} else {
x96 = false;
}
}
}
};
SM_FUNC(module1) void x134 () {
bool x124 = x96;
if (x124) {
x122 = true;
int32_t x126 = x97;
int32_t x127 = x126 * 2;
x123 = x127;
} else {
x122 = false;
}
};
SM_INPUT(module1,x145,x135,x136) {
uint8_t* x137 = x135;
int32_t x138 = x136;
x28(x137,x138);
x83();
x121();
x134();
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
SM_FUNC(module1) void x95 () {
bool x86 = x29;
if (x86) {
x84 = true;
int32_t x88 = x30;
x85 = 2;
} else {
x84 = false;
}
};
SM_INPUT(module1,x158,x147,x148) {
uint8_t* x149 = x147;
int32_t x150 = x148;
x57(x149,x150);
x83();
x95();
x121();
x134();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
