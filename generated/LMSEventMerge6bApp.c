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
SM_DATA(module1) bool x67;
SM_DATA(module1) int32_t x68;
SM_DATA(module1) bool x79;
SM_DATA(module1) int32_t x80;
SM_DATA(module1) bool x97;
SM_DATA(module1) int32_t x98;
SM_DATA(module1) bool x115;
SM_DATA(module1) int32_t x116;
SM_DATA(module1) bool x128;
SM_DATA(module1) int32_t x129;
SM_DATA(module1) bool x141;
SM_DATA(module1) int32_t x142;
SM_DATA(module1) bool x167;
SM_DATA(module1) int32_t x168;
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
SM_FUNC(module1) void x66 () {
bool x57 = x42;
if (x57) {
x55 = true;
int32_t x59 = x43;
x56 = 2;
} else {
x55 = false;
}
};
SM_FUNC(module1) void x78 () {
bool x69 = x42;
if (x69) {
x67 = true;
int32_t x71 = x43;
x68 = 1;
} else {
x67 = false;
}
};
SM_FUNC(module1) void x96 () {
bool x81 = x67;
if (x81) {
int32_t x82 = x68;
int32_t x83 = x82 % 2;
bool x84 = x83 == 0;
if (x84) {
x79 = true;
x80 = x82;
} else {
x79 = false;
}
} else {
x79 = false;
}
};
SM_FUNC(module1) void x114 () {
bool x99 = x55;
if (x99) {
int32_t x100 = x56;
int32_t x101 = x100 % 2;
bool x102 = x101 == 0;
if (x102) {
x97 = true;
x98 = x100;
} else {
x97 = false;
}
} else {
x97 = false;
}
};
SM_FUNC(module1) void x127 () {
bool x117 = x79;
if (x117) {
x115 = true;
int32_t x119 = x80;
int32_t x120 = x119 + 1;
x116 = x120;
} else {
x115 = false;
}
};
SM_FUNC(module1) void x140 () {
bool x130 = x97;
if (x130) {
x128 = true;
int32_t x132 = x98;
int32_t x133 = x132 + 1;
x129 = x133;
} else {
x128 = false;
}
};
SM_FUNC(module1) void x166 () {
bool x143 = x115;
bool x144 = x128;
bool x145 = x143 && x144;
if (x145) {
x141 = true;
int32_t x147 = x116;
int32_t x148 = x129;
int32_t x149 = x147 + x148;
x142 = x149;
} else {
if (x143) {
x141 = true;
int32_t x147 = x116;
x142 = x147;
} else {
if (x144) {
x141 = true;
int32_t x148 = x129;
x142 = x148;
} else {
x141 = false;
}
}
}
};
SM_FUNC(module1) void x179 () {
bool x169 = x141;
if (x169) {
x167 = true;
int32_t x171 = x142;
int32_t x172 = x171 * 2;
x168 = x172;
} else {
x167 = false;
}
};
SM_INPUT(module1,x197,x180,x181) {
uint8_t* x182 = x180;
int32_t x183 = x181;
x28(x182,x183);
x41();
x54();
x66();
x78();
x96();
x114();
x127();
x140();
x166();
x179();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
