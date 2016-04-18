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
bool x58;
int x59;
bool x70;
int x71;
bool x82;
int x83;
bool x108;
int x109;
int x121;
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
void x69() {
bool x60 = x0;
if (x60) {
x58 = true;
int x62 = x1;
x59 = 1;
} else {
x58 = false;
}
};
void x107() {
bool x84 = x58;
bool x85 = x70;
bool x86 = x84 && x85;
if (x86) {
x82 = true;
int x88 = x59;
int x89 = x71;
int x90 = x88 + x89;
x83 = x90;
} else {
if (x84) {
x82 = true;
int x88 = x59;
x83 = x88;
} else {
if (x85) {
x82 = true;
int x89 = x71;
x83 = x89;
} else {
x82 = false;
}
}
}
};
void x120() {
bool x110 = x82;
if (x110) {
x108 = true;
int x112 = x83;
int x113 = x112 * 2;
x109 = x113;
} else {
x108 = false;
}
};
void top1(uint8_t* x135,int x136) {
uint8_t* x137 = x135;
int x138 = x136;
x28(x137,x138);
x69();
x107();
x120();
};
void x57(uint8_t* x31,int x32) {
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
};
void x81() {
bool x72 = x29;
if (x72) {
x70 = true;
int x74 = x30;
x71 = 2;
} else {
x70 = false;
}
};
void top3(uint8_t* x147,int x148) {
uint8_t* x149 = x147;
int x150 = x148;
x57(x149,x150);
x81();
x107();
x120();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
