/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
bool x0;
int x1;
bool x29;
int x30;
bool x42;
int x43;
bool x55;
int x56;
bool x68;
int x69;
bool x86;
int x87;
bool x99;
int x100;
bool x125;
int x126;
int x138;
void x28(uint8_t* x2,int x3) {
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
};
void x41() {
bool x31 = x0;
if (x31) {
x29 = true;
int x33 = x1;
int x34 = x33 + 1;
x30 = x34;
} else {
x29 = false;
}
};
void x54() {
bool x44 = x29;
if (x44) {
x42 = true;
int x46 = x30;
int x47 = x46 * 2;
x43 = x47;
} else {
x42 = false;
}
};
void x67() {
bool x57 = x42;
if (x57) {
x55 = true;
int x59 = x43;
int x60 = x59 + 1;
x56 = x60;
} else {
x55 = false;
}
};
void x85() {
bool x70 = x42;
if (x70) {
int x71 = x43;
int x72 = x71 % 2;
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
void x98() {
bool x88 = x68;
if (x88) {
x86 = true;
int x90 = x69;
int x91 = x90 + 1;
x87 = x91;
} else {
x86 = false;
}
};
void x124() {
bool x101 = x86;
bool x102 = x55;
bool x103 = x101 && x102;
if (x103) {
x99 = true;
int x105 = x87;
int x106 = x56;
int x107 = x105 + x106;
x100 = x107;
} else {
if (x101) {
x99 = true;
int x105 = x87;
x100 = x105;
} else {
if (x102) {
x99 = true;
int x106 = x56;
x100 = x106;
} else {
x99 = false;
}
}
}
};
void x137() {
bool x127 = x99;
if (x127) {
x125 = true;
int x129 = x100;
int x130 = x129 * 2;
x126 = x130;
} else {
x125 = false;
}
};
void top1(uint8_t* x154,int x155) {
uint8_t* x156 = x154;
int x157 = x155;
x28(x156,x157);
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
