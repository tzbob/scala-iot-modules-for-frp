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
SM_DATA(module1) bool x96;
SM_DATA(module1) int32_t x97;
SM_DATA(module1) bool x109;
SM_DATA(module1) int32_t x110;
SM_DATA(module1) bool x135;
SM_DATA(module1) int32_t x136;
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
SM_FUNC(module1) void x95 () {
bool x72 = x0;
bool x73 = x29;
bool x74 = x72 && x73;
if (x74) {
x70 = true;
int32_t x76 = x1;
int32_t x77 = x30;
int32_t x78 = x76 * x77;
x71 = x78;
} else {
if (x72) {
x70 = true;
int32_t x76 = x1;
x71 = x76;
} else {
if (x73) {
x70 = true;
int32_t x77 = x30;
x71 = x77;
} else {
x70 = false;
}
}
}
};
SM_FUNC(module1) void x108 () {
bool x98 = x70;
if (x98) {
x96 = true;
int32_t x100 = x71;
int32_t x101 = x100 * 3;
x97 = x101;
} else {
x96 = false;
}
};
SM_FUNC(module1) void x134 () {
bool x111 = x96;
bool x112 = x58;
bool x113 = x111 && x112;
if (x113) {
x109 = true;
int32_t x115 = x97;
int32_t x116 = x59;
int32_t x117 = x115 + x116;
x110 = x117;
} else {
if (x111) {
x109 = true;
int32_t x115 = x97;
x110 = x115;
} else {
if (x112) {
x109 = true;
int32_t x116 = x59;
x110 = x116;
} else {
x109 = false;
}
}
}
};
SM_FUNC(module1) void x147 () {
bool x137 = x109;
if (x137) {
x135 = true;
int32_t x139 = x110;
int32_t x140 = x139 * 2;
x136 = x140;
} else {
x135 = false;
}
};
SM_INPUT(module1,x159,x148,x149) {
uint8_t* x150 = x148;
int32_t x151 = x149;
x28(x150,x151);
x95();
x108();
x134();
x147();
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
SM_INPUT(module1,x173,x161,x162) {
uint8_t* x163 = x161;
int32_t x164 = x162;
x57(x163,x164);
x69();
x95();
x108();
x134();
x147();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
