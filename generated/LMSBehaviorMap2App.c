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
int x82;
int x92;
int x102;
int x109;
void x126() {
int x110 = x109;
bool x111 = x110 == 0;
if (x111) {
x82 = 1;
x92 = 1;
int x114 = x92;
int x115 = x82;
int x116 = x114 + x115;
x102 = x116;
x109 = 1;
} else {
}
x58 = false;
x0 = false;
x70 = false;
x29 = false;
};
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
void x81() {
bool x72 = x0;
if (x72) {
x70 = true;
int x74 = x1;
x71 = 1;
} else {
x70 = false;
}
};
void x101() {
bool x93 = x70;
if (x93) {
int x94 = x92;
int x95 = x71;
int x96 = x94 + x95;
x92 = x96;
} else {
}
};
void x108() {
int x103 = x92;
int x104 = x82;
int x105 = x103 + x104;
x102 = x105;
};
void top1(uint8_t* x127,int x128) {
x126();
uint8_t* x129 = x127;
int x130 = x128;
x28(x129,x130);
x81();
x101();
x108();
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
void x69() {
bool x60 = x29;
if (x60) {
x58 = true;
int x62 = x30;
x59 = 2;
} else {
x58 = false;
}
};
void x91() {
bool x83 = x58;
if (x83) {
int x84 = x82;
int x85 = x59;
int x86 = x84 + x85;
x82 = x86;
} else {
}
};
void top4(uint8_t* x140,int x141) {
x126();
uint8_t* x142 = x140;
int x143 = x141;
x57(x142,x143);
x69();
x91();
x108();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
