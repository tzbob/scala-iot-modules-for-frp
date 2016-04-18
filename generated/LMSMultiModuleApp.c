/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
SM_DATA(mod1) bool x0;
SM_DATA(mod1) int x1;
SM_DATA(mod1) int x29;
SM_DATA(mod1) bool x39;
SM_DATA(mod1) int x40;
SM_DATA(mod1) int x46;
SM_DATA(mod1) bool x56;
SM_DATA(mod1) int x57;
SM_DATA(mod1) int x63;
SM_FUNC(mod1) void x75 () {
int x64 = x63;
bool x65 = x64 == 0;
if (x65) {
x29 = 1;
x46 = 10;
x63 = 1;
} else {
}
x56 = false;
x0 = false;
x39 = false;
}
SM_FUNC(mod1) void x28 (uint8_t* x2,int x3) {
int x6 = 0;
int x7 = 0;
int x5 = x3;
uint8_t* x4 = x2;
for (;;) {
int x8 = x7;
bool x9 = x8 < x5;
if (!x9) break;
int x11 = x7;
uint8_t x12 = x4[x11];
int x16 = x6;
int x13 = (int ) x12;
int x14 = x11 * 8;
int x15 = x13 << x14;
int x17 = x16 + x15;
x6 = x17;
int x19 = x11 + 1;
x7 = x19;
}
x0 = true;
int x24 = x6;
int x25 = (int ) x24;
x1 = x25;
}
SM_FUNC(mod1) void x38 () {
bool x30 = x0;
if (x30) {
int x31 = x29;
int x32 = x1;
int x33 = x31 + x32;
x29 = x33;
} else {
}
}
SM_FUNC(mod1) void x45 () {
x39 = true;
int x42 = x29;
x40 = x42;
}
SM_FUNC(mod1) void x55 () {
bool x47 = x39;
if (x47) {
int x48 = x46;
int x49 = x40;
int x50 = x48 + x49;
x46 = x50;
} else {
}
}
SM_FUNC(mod1) void x62 () {
x56 = true;
int x59 = x46;
x57 = x59;
}
SM_OUTPUT(mod1,x94);
SM_FUNC(mod1) void x98 () {
int x95 = x57;
x94((uint8_t*)&x95, sizeof(x95));
}
SM_INPUT(mod1,top1,x76,x77) {
x75();
uint8_t* x78 = x76;
int x79 = x77;
x28(x78,x79);
x38();
x45();
x55();
x62();
x98();
}
SM_DATA(mod2) bool x103;
SM_DATA(mod2) int x104;
SM_DATA(mod2) int x132;
SM_DATA(mod2) bool x142;
SM_DATA(mod2) int x143;
SM_DATA(mod2) int x149;
SM_DATA(mod2) bool x159;
SM_DATA(mod2) int x160;
SM_DATA(mod2) int x166;
SM_FUNC(mod2) void x178 () {
int x167 = x166;
bool x168 = x167 == 0;
if (x168) {
x132 = 2;
x149 = 20;
x166 = 1;
} else {
}
x159 = false;
x103 = false;
x142 = false;
}
SM_FUNC(mod2) void x131 (uint8_t* x105,int x106) {
int x109 = 0;
int x110 = 0;
int x108 = x106;
uint8_t* x107 = x105;
for (;;) {
int x111 = x110;
bool x112 = x111 < x108;
if (!x112) break;
int x114 = x110;
uint8_t x115 = x107[x114];
int x119 = x109;
int x116 = (int ) x115;
int x117 = x114 * 8;
int x118 = x116 << x117;
int x120 = x119 + x118;
x109 = x120;
int x122 = x114 + 1;
x110 = x122;
}
x103 = true;
int x127 = x109;
int x128 = (int ) x127;
x104 = x128;
}
SM_FUNC(mod2) void x141 () {
bool x133 = x103;
if (x133) {
int x134 = x132;
int x135 = x104;
int x136 = x134 + x135;
x132 = x136;
} else {
}
}
SM_FUNC(mod2) void x148 () {
x142 = true;
int x145 = x132;
x143 = x145;
}
SM_FUNC(mod2) void x158 () {
bool x150 = x142;
if (x150) {
int x151 = x149;
int x152 = x143;
int x153 = x151 + x152;
x149 = x153;
} else {
}
}
SM_FUNC(mod2) void x165 () {
x159 = true;
int x162 = x149;
x160 = x162;
}
SM_OUTPUT(mod2,x197);
SM_FUNC(mod2) void x201 () {
int x198 = x160;
x197((uint8_t*)&x198, sizeof(x198));
}
SM_INPUT(mod2,top6,x179,x180) {
x178();
uint8_t* x181 = x179;
int x182 = x180;
x131(x181,x182);
x141();
x148();
x158();
x165();
x201();
}
/*****************************************
  End of C Generated Code                  
*******************************************/
