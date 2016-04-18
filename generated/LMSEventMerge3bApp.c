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
bool x96;
int x97;
bool x109;
int x110;
bool x135;
int x136;
int x148;
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
void x95() {
bool x72 = x0;
bool x73 = x29;
bool x74 = x72 && x73;
if (x74) {
x70 = true;
int x76 = x1;
int x77 = x30;
int x78 = x76 * x77;
x71 = x78;
} else {
if (x72) {
x70 = true;
int x76 = x1;
x71 = x76;
} else {
if (x73) {
x70 = true;
int x77 = x30;
x71 = x77;
} else {
x70 = false;
}
}
}
};
void x108() {
bool x98 = x70;
if (x98) {
x96 = true;
int x100 = x71;
int x101 = x100 * 3;
x97 = x101;
} else {
x96 = false;
}
};
void x134() {
bool x111 = x96;
bool x112 = x58;
bool x113 = x111 && x112;
if (x113) {
x109 = true;
int x115 = x97;
int x116 = x59;
int x117 = x115 + x116;
x110 = x117;
} else {
if (x111) {
x109 = true;
int x115 = x97;
x110 = x115;
} else {
if (x112) {
x109 = true;
int x116 = x59;
x110 = x116;
} else {
x109 = false;
}
}
}
};
void x147() {
bool x137 = x109;
if (x137) {
x135 = true;
int x139 = x110;
int x140 = x139 * 2;
x136 = x140;
} else {
x135 = false;
}
};
void top1(uint8_t* x163,int x164) {
uint8_t* x165 = x163;
int x166 = x164;
x28(x165,x166);
x95();
x108();
x134();
x147();
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
void top2(uint8_t* x176,int x177) {
uint8_t* x178 = x176;
int x179 = x177;
x57(x178,x179);
x69();
x95();
x108();
x134();
x147();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
