/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
SM_DATA(module1) bool x0;
SM_DATA(module1) int x1;
SM_DATA(module1) bool x29;
SM_DATA(module1) int x30;
SM_DATA(module1) int x58;
SM_DATA(module1) bool x68;
SM_DATA(module1) int x69;
SM_DATA(module1) int x80;
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
SM_INPUT(module1,x98,x90,x91) {
uint8_t* x92 = x90;
int x93 = x91;
x28(x92,x93);
x67();
}
SM_FUNC(module1) void x57 (uint8_t* x31,int x32) {
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
SM_FUNC(module1) void x79 () {
bool x70 = x29;
if (x70) {
x68 = true;
int x72 = x58;
x69 = x72;
} else {
x68 = false;
}
}
SM_FUNC(module1) void x89 () {
bool x81 = x68;
if (x81) {
int x82 = x80;
int x83 = x69;
int x84 = x82 + x83;
x80 = x84;
} else {
}
}
SM_INPUT(module1,x109,x100,x101) {
uint8_t* x102 = x100;
int x103 = x101;
x57(x102,x103);
x79();
x89();
}
SM_ENTRY(module1) void x114() {
x80 = 0;
x58 = 0;
}
/*****************************************
  End of C Generated Code                  
*******************************************/
