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
SM_DATA(module1) bool x70;
SM_DATA(module1) int32_t x71;
SM_DATA(module1) bool x87;
SM_DATA(module1) int32_t x88;
SM_DATA(module1) bool x100;
SM_DATA(module1) int32_t x101;
SM_DATA(module1) bool x117;
SM_DATA(module1) int32_t x118;
SM_DATA(module1) bool x130;
SM_DATA(module1) int32_t x131;
SM_DATA(module1) bool x156;
SM_DATA(module1) int32_t x157;
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
x30 = 2;
} else {
x29 = false;
}
};
SM_FUNC(module1) void x52 () {
bool x43 = x0;
if (x43) {
x41 = true;
int32_t x45 = x1;
x42 = 1;
} else {
x41 = false;
}
};
SM_FUNC(module1) void x69 () {
bool x55 = x29;
if (x55) {
int32_t x56 = x30;
bool x57 = x56 == 3;
if (x57) {
x53 = true;
x54 = x56;
} else {
x53 = false;
}
} else {
x53 = false;
}
};
SM_FUNC(module1) void x86 () {
bool x72 = x41;
if (x72) {
int32_t x73 = x42;
bool x74 = x73 == 1;
if (x74) {
x70 = true;
x71 = x73;
} else {
x70 = false;
}
} else {
x70 = false;
}
};
SM_FUNC(module1) void x99 () {
bool x89 = x53;
if (x89) {
x87 = true;
int32_t x91 = x54;
int32_t x92 = x91 * 3;
x88 = x92;
} else {
x87 = false;
}
};
SM_FUNC(module1) void x116 () {
bool x102 = x70;
if (x102) {
int32_t x103 = x71;
bool x104 = x103 == 2;
if (x104) {
x100 = true;
x101 = x103;
} else {
x100 = false;
}
} else {
x100 = false;
}
};
SM_FUNC(module1) void x129 () {
bool x119 = x100;
if (x119) {
x117 = true;
int32_t x121 = x101;
int32_t x122 = x121 + 1;
x118 = x122;
} else {
x117 = false;
}
};
SM_FUNC(module1) void x155 () {
bool x132 = x117;
bool x133 = x87;
bool x134 = x132 && x133;
if (x134) {
x130 = true;
int32_t x136 = x118;
int32_t x137 = x88;
int32_t x138 = x136 + x137;
x131 = x138;
} else {
if (x132) {
x130 = true;
int32_t x136 = x118;
x131 = x136;
} else {
if (x133) {
x130 = true;
int32_t x137 = x88;
x131 = x137;
} else {
x130 = false;
}
}
}
};
SM_FUNC(module1) void x168 () {
bool x158 = x130;
if (x158) {
x156 = true;
int32_t x160 = x131;
int32_t x161 = x160 * 2;
x157 = x161;
} else {
x156 = false;
}
};
SM_INPUT(module1,x185,x169,x170) {
uint8_t* x171 = x169;
int32_t x172 = x170;
x28(x171,x172);
x40();
x52();
x69();
x86();
x99();
x116();
x129();
x155();
x168();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
