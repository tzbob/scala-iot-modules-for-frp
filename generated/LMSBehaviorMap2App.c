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
int x83;
int x93;
int x103;
bool x110;
int x111;
int x117;
void x135() {
int x118 = x117;
bool x119 = x118 == 0;
if (x119) {
x83 = 1;
x93 = 1;
int x122 = x93;
int x123 = x83;
int x124 = x122 + x123;
x103 = x124;
x117 = 1;
} else {
}
x59 = false;
x1 = false;
x71 = false;
x110 = false;
x30 = false;
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
void x82() {
bool x73 = x1;
if (x73) {
x71 = true;
int x75 = x2;
x72 = 1;
} else {
x71 = false;
}
};
void x102() {
bool x94 = x71;
if (x94) {
int x95 = x72;
int x96 = x93;
int x97 = x95 + x96;
x93 = x97;
} else {
}
};
void x109() {
int x104 = x93;
int x105 = x83;
int x106 = x104 + x105;
x103 = x106;
};
void x116() {
x110 = true;
int x113 = x103;
x111 = x113;
};
void x156(uint8_t* x149,int x150) {
uint8_t* x151 = x149;
uint8_t x153 = *x151;
printf("%u\n",x153);
};
void x162() {
bool x148 = x110;
if (x148) {
int x157 = x111;
x156((uint8_t*)&x157, sizeof(x157));
} else {
}
};
void x166(uint8_t* x136,int x137) { //top1
x135();
uint8_t* x138 = x136;
int x139 = x137;
x29(x138,x139);
x82();
x102();
x109();
x116();
x162();
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
void x70() {
bool x61 = x30;
if (x61) {
x59 = true;
int x63 = x31;
x60 = 2;
} else {
x59 = false;
}
};
void x92() {
bool x84 = x59;
if (x84) {
int x85 = x60;
int x86 = x83;
int x87 = x85 + x86;
x83 = x87;
} else {
}
};
void x183(uint8_t* x168,int x169) { //top4
x135();
uint8_t* x170 = x168;
int x171 = x169;
x58(x170,x171);
x70();
x92();
x109();
x116();
x162();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
