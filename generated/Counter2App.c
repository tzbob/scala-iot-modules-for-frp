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
bool x75;
int x76;
int x92;
bool x120;
int x121;
int x127;
void x140() {
int x128 = x127;
bool x129 = x128 == 0;
if (x129) {
x92 = 0;
x127 = 1;
} else {
}
x0 = false;
x120 = false;
x29 = false;
x58 = false;
x75 = false;
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
void x74() {
bool x60 = x0;
if (x60) {
int x61 = x1;
bool x62 = x61 < 10;
if (x62) {
x58 = true;
x59 = x61;
} else {
x58 = false;
}
} else {
x58 = false;
}
};
void x119() {
bool x93 = x58;
bool x94 = x75;
bool x95 = x93 && x94;
if (x95) {
int x96 = x59;
int x97 = x76;
int x98 = x92;
int x99 = x98 + x96;
int x100 = x99 - x97;
x92 = x100;
} else {
if (x93) {
int x103 = x59;
int x104 = x92;
int x105 = x104 + x103;
x92 = x105;
} else {
if (x94) {
int x108 = x76;
int x109 = x92;
int x110 = x109 - x108;
x92 = x110;
} else {
}
}
}
};
void x126() {
x120 = true;
int x123 = x92;
x121 = x123;
};
void x159(uint8_t* x152,int x153) {
uint8_t* x154 = x152;
uint8_t x156 = *x154;
printf("%u\n",x156);
};
void x165() {
bool x151 = x120;
if (x151) {
int x160 = x121;
x159((uint8_t*)&x160, sizeof(x160));
} else {
}
};
void top1(uint8_t* x141,int x142) {
x140();
uint8_t* x143 = x141;
int x144 = x142;
x28(x143,x144);
x74();
x119();
x126();
x165();
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
void x91() {
bool x77 = x29;
if (x77) {
int x78 = x30;
bool x79 = x78 < 10;
if (x79) {
x75 = true;
x76 = x78;
} else {
x75 = false;
}
} else {
x75 = false;
}
};
void top2(uint8_t* x170,int x171) {
x140();
uint8_t* x172 = x170;
int x173 = x171;
x57(x172,x173);
x91();
x119();
x126();
x165();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
