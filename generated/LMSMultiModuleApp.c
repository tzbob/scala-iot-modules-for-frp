/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
SM_DATA(module1) bool x0;
SM_DATA(module1) int x1;
SM_DATA(module2) bool x29;
SM_DATA(module2) int x30;
SM_DATA(module1) int x58;
SM_DATA(module2) int x68;
SM_DATA(module1) bool x78;
SM_DATA(module1) int x79;
SM_DATA(module2) bool x85;
SM_DATA(module2) int x86;
SM_DATA(module1) int x92;
SM_DATA(module2) int x102;
SM_FUNC(module1) void x28 (uint8_t* x2,int x3) {
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
SM_FUNC(module1) void x67 () {
bool x59 = x0;
if (x59) {
int x60 = x58;
int x61 = x1;
int x62 = x60 + x61;
x58 = x62;
} else {
}
}
SM_FUNC(module1) void x84 () {
x78 = true;
int x81 = x58;
x79 = x81;
}
SM_FUNC(module1) void x101 () {
bool x93 = x78;
if (x93) {
int x94 = x92;
int x95 = x79;
int x96 = x94 + x95;
x92 = x96;
} else {
}
}
SM_INPUT(module1,top5,x112,x113) {
uint8_t* x114 = x112;
int x115 = x113;
x28(x114,x115);
x67();
x84();
x101();
}
SM_FUNC(module2) void x57 (uint8_t* x31,int x32) {
int x35 = 0;
int x36 = 0;
int x34 = x32;
uint8_t* x33 = x31;
for (;;) {
int x37 = x36;
bool x38 = x37 < x34;
if (!x38) break;
int x40 = x36;
uint8_t x41 = x33[x40];
int x45 = x35;
int x42 = (int ) x41;
int x43 = x40 * 8;
int x44 = x42 << x43;
int x46 = x45 + x44;
x35 = x46;
int x48 = x40 + 1;
x36 = x48;
}
x29 = true;
int x53 = x35;
int x54 = (int ) x53;
x30 = x54;
}
SM_FUNC(module2) void x77 () {
bool x69 = x29;
if (x69) {
int x70 = x68;
int x71 = x30;
int x72 = x70 + x71;
x68 = x72;
} else {
}
}
SM_FUNC(module2) void x91 () {
x85 = true;
int x88 = x68;
x86 = x88;
}
SM_FUNC(module2) void x111 () {
bool x103 = x85;
if (x103) {
int x104 = x102;
int x105 = x86;
int x106 = x104 + x105;
x102 = x106;
} else {
}
}
SM_INPUT(module2,top1,x124,x125) {
uint8_t* x126 = x124;
int x127 = x125;
x57(x126,x127);
x77();
x91();
x111();
}
SM_ENTRY(module2) void init_module2() {
x68 = 2;
x102 = 20;
}
SM_ENTRY(module1) void init_module1() {
x58 = 1;
x92 = 10;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
