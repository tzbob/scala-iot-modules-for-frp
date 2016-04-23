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
int x31 = x1;
int x32 = x29;
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
int x48 = x40;
int x49 = x46;
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
SM_OUTPUT(mod1,x95);
SM_FUNC(mod1) void x101 () {
bool x87 = x56;
if (x87) {
int x96 = x57;
x95((uint8_t*)&x96, sizeof(x96));
} else {
}
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
x101();
}
SM_DATA(mod2) bool x106;
SM_DATA(mod2) int x107;
SM_DATA(mod2) int x135;
SM_DATA(mod2) bool x145;
SM_DATA(mod2) int x146;
SM_DATA(mod2) int x152;
SM_DATA(mod2) bool x162;
SM_DATA(mod2) int x163;
SM_DATA(mod2) int x169;
SM_FUNC(mod2) void x181 () {
int x170 = x169;
bool x171 = x170 == 0;
if (x171) {
x135 = 2;
x152 = 20;
x169 = 1;
} else {
}
x162 = false;
x106 = false;
x145 = false;
}
SM_FUNC(mod2) void x134 (uint8_t* x108,int x109) {
int x112 = 0;
int x113 = 0;
int x111 = x109;
uint8_t* x110 = x108;
for (;;) {
int x114 = x113;
bool x115 = x114 < x111;
if (!x115) break;
int x117 = x113;
uint8_t x118 = x110[x117];
int x122 = x112;
int x119 = (int ) x118;
int x120 = x117 * 8;
int x121 = x119 << x120;
int x123 = x122 + x121;
x112 = x123;
int x125 = x117 + 1;
x113 = x125;
}
x106 = true;
int x130 = x112;
int x131 = (int ) x130;
x107 = x131;
}
SM_FUNC(mod2) void x144 () {
bool x136 = x106;
if (x136) {
int x137 = x107;
int x138 = x135;
int x139 = x137 + x138;
x135 = x139;
} else {
}
}
SM_FUNC(mod2) void x151 () {
x145 = true;
int x148 = x135;
x146 = x148;
}
SM_FUNC(mod2) void x161 () {
bool x153 = x145;
if (x153) {
int x154 = x146;
int x155 = x152;
int x156 = x154 + x155;
x152 = x156;
} else {
}
}
SM_FUNC(mod2) void x168 () {
x162 = true;
int x165 = x152;
x163 = x165;
}
SM_OUTPUT(mod2,x201);
SM_FUNC(mod2) void x207 () {
bool x193 = x162;
if (x193) {
int x202 = x163;
x201((uint8_t*)&x202, sizeof(x202));
} else {
}
}
SM_INPUT(mod2,top6,x182,x183) {
x181();
uint8_t* x184 = x182;
int x185 = x183;
x134(x184,x185);
x144();
x151();
x161();
x168();
x207();
}
/*****************************************
  End of C Generated Code                  
*******************************************/
