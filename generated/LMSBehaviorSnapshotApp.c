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
int x59;
bool x60;
bool x73;
int x74;
int x85;
bool x86;
bool x99;
int x100;
int x111;
void x124() {
int x112 = x111;
bool x113 = x112 == 0;
if (x113) {
x59 = 0;
x85 = 0;
x111 = 1;
} else {
}
x1 = false;
x99 = false;
x30 = false;
x73 = false;
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
void x72() {
bool x61 = x1;
if (x61) {
x60 = true;
int x63 = x2;
int x64 = x59;
int x65 = x63 + x64;
x59 = x65;
} else {
x60 = false;
}
};
void x134(uint8_t* x125,int x126) { //top1
x124();
uint8_t* x127 = x125;
int x128 = x126;
x29(x127,x128);
x72();
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
void x84() {
bool x75 = x30;
if (x75) {
x73 = true;
int x77 = x59;
x74 = x77;
} else {
x73 = false;
}
};
void x98() {
bool x87 = x73;
if (x87) {
x86 = true;
int x89 = x74;
int x90 = x85;
int x91 = x89 + x90;
x85 = x91;
} else {
x86 = false;
}
};
void x110() {
bool x101 = x86;
if (x101) {
x99 = true;
int x103 = x85;
x100 = x103;
} else {
x99 = false;
}
};
void x154(uint8_t* x147,int x148) {
uint8_t* x149 = x147;
uint8_t x151 = *x149;
printf("%u\n",x151);
};
void x160() {
bool x146 = x99;
if (x146) {
int x155 = x100;
x154((uint8_t*)&x155, sizeof(x155));
} else {
}
};
void x163(uint8_t* x136,int x137) { //top3
x124();
uint8_t* x138 = x136;
int x139 = x137;
x58(x138,x139);
x84();
x98();
x110();
x160();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
