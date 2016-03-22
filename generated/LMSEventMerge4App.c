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
SM_DATA(module1) bool x41;
SM_DATA(module1) int32_t x42;
SM_DATA(module1) bool x53;
SM_DATA(module1) int32_t x54;
SM_DATA(module1) bool x65;
SM_DATA(module1) int32_t x66;
SM_DATA(module1) bool x91;
SM_DATA(module1) int32_t x92;
SM_DATA(module1) bool x104;
SM_DATA(module1) int32_t x105;
SM_DATA(module1) bool x130;
SM_DATA(module1) int32_t x131;
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
SM_FUNC(module1) void x40 () {
bool x31 = x0;
if (x31) {
x29 = true;
int32_t x33 = x1;
x30 = 1;
} else {
x29 = false;
}
};
SM_FUNC(module1) void x52 () {
bool x43 = x0;
if (x43) {
x41 = true;
int32_t x45 = x1;
x42 = 2;
} else {
x41 = false;
}
};
SM_FUNC(module1) void x64 () {
bool x55 = x0;
if (x55) {
x53 = true;
int32_t x57 = x1;
x54 = 3;
} else {
x53 = false;
}
};
SM_FUNC(module1) void x90 () {
bool x67 = x29;
bool x68 = x41;
bool x69 = x67 && x68;
if (x69) {
x65 = true;
int32_t x71 = x30;
int32_t x72 = x42;
int32_t x73 = x71 + x72;
x66 = x73;
} else {
if (x67) {
x65 = true;
int32_t x71 = x30;
x66 = x71;
} else {
if (x68) {
x65 = true;
int32_t x72 = x42;
x66 = x72;
} else {
x65 = false;
}
}
}
};
SM_FUNC(module1) void x103 () {
bool x93 = x65;
if (x93) {
x91 = true;
int32_t x95 = x66;
int32_t x96 = x95 + 2;
x92 = x96;
} else {
x91 = false;
}
};
SM_FUNC(module1) void x129 () {
bool x106 = x91;
bool x107 = x53;
bool x108 = x106 && x107;
if (x108) {
x104 = true;
int32_t x110 = x92;
int32_t x111 = x54;
int32_t x112 = x110 + x111;
x105 = x112;
} else {
if (x106) {
x104 = true;
int32_t x110 = x92;
x105 = x110;
} else {
if (x107) {
x104 = true;
int32_t x111 = x54;
x105 = x111;
} else {
x104 = false;
}
}
}
};
SM_FUNC(module1) void x142 () {
bool x132 = x104;
if (x132) {
x130 = true;
int32_t x134 = x105;
int32_t x135 = x134 * 2;
x131 = x135;
} else {
x130 = false;
}
};
SM_INPUT(module1,x157,x143,x144) {
uint8_t* x145 = x143;
int32_t x146 = x144;
x28(x145,x146);
x40();
x52();
x64();
x90();
x103();
x129();
x142();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
