/*****************************************
  Emitting C Generated Code                  
*******************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <math.h>
#include <stdbool.h>

bool x1;
int x2;
bool x30;
int x31;
bool x59;
int x60;
bool x71;
int x72;
bool x83;
int x84;
bool x109;
int x110;
int x122;
void x129() {
int x123 = x122;
bool x124 = x123 == 0;
if (x124) {
x122 = 1;
} else {
}
};
void x137() {
x83 = false;
x1 = false;
x109 = false;
x59 = false;
x30 = false;
x71 = false;
};
void x29(uint8_t* x3,int x4) {
int x7 = 0;
int x8 = 0;
int x6 = x4;
uint8_t* x5 = x3;
for (;;) {
int x9 = x8;
bool x10 = x9 < x6;
if (!x10) break;
int x12 = x8;
uint8_t x13 = x5[x12];
int x17 = x7;
int x14 = (int ) x13;
int x15 = x12 * 8;
int x16 = x14 << x15;
int x18 = x17 + x16;
x7 = x18;
int x20 = x12 + 1;
x8 = x20;
}
x1 = true;
int x25 = x7;
int x26 = (int ) x25;
x2 = x26;
};
void x70() {
bool x61 = x1;
if (x61) {
x59 = true;
int x63 = x2;
x60 = 1;
} else {
x59 = false;
}
};
void x108() {
bool x85 = x59;
bool x86 = x71;
bool x87 = x85 && x86;
if (x87) {
x83 = true;
int x89 = x60;
int x90 = x72;
int x91 = x89 + x90;
x84 = x91;
} else {
if (x85) {
x83 = true;
int x89 = x60;
x84 = x89;
} else {
if (x86) {
x83 = true;
int x90 = x72;
x84 = x90;
} else {
x83 = false;
}
}
}
};
void x121() {
bool x111 = x83;
if (x111) {
x109 = true;
int x113 = x84;
int x114 = x113 * 2;
x110 = x114;
} else {
x109 = false;
}
};
void x157(uint8_t* x150,int x151) {
uint8_t* x152 = x150;
uint8_t x154 = *x152;
printf("%u\n",x154);
};
void x163() {
bool x149 = x109;
if (x149) {
int x158 = x110;
x157((uint8_t*)&x158, sizeof(x158));
} else {
}
};
void x166(uint8_t* x138,int x139) { //top1
x129();
x137();
uint8_t* x140 = x138;
int x141 = x139;
x29(x140,x141);
x70();
x108();
x121();
x163();
};
void x58(uint8_t* x32,int x33) {
int x36 = 0;
int x37 = 0;
int x35 = x33;
uint8_t* x34 = x32;
for (;;) {
int x38 = x37;
bool x39 = x38 < x35;
if (!x39) break;
int x41 = x37;
uint8_t x42 = x34[x41];
int x46 = x36;
int x43 = (int ) x42;
int x44 = x41 * 8;
int x45 = x43 << x44;
int x47 = x46 + x45;
x36 = x47;
int x49 = x41 + 1;
x37 = x49;
}
x30 = true;
int x54 = x36;
int x55 = (int ) x54;
x31 = x55;
};
void x82() {
bool x73 = x30;
if (x73) {
x71 = true;
int x75 = x31;
x72 = 2;
} else {
x71 = false;
}
};
void x181(uint8_t* x168,int x169) { //top3
x129();
x137();
uint8_t* x170 = x168;
int x171 = x169;
x58(x170,x171);
x82();
x108();
x121();
x163();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
