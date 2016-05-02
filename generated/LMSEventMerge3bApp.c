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
bool x97;
int x98;
bool x110;
int x111;
bool x136;
int x137;
int x149;
void x163() {
int x150 = x149;
bool x151 = x150 == 0;
if (x151) {
x149 = 1;
} else {
}
x59 = false;
x1 = false;
x110 = false;
x30 = false;
x136 = false;
x71 = false;
x97 = false;
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
void x96() {
bool x73 = x1;
bool x74 = x30;
bool x75 = x73 && x74;
if (x75) {
x71 = true;
int x77 = x2;
int x78 = x31;
int x79 = x77 * x78;
x72 = x79;
} else {
if (x73) {
x71 = true;
int x77 = x2;
x72 = x77;
} else {
if (x74) {
x71 = true;
int x78 = x31;
x72 = x78;
} else {
x71 = false;
}
}
}
};
void x109() {
bool x99 = x71;
if (x99) {
x97 = true;
int x101 = x72;
int x102 = x101 * 3;
x98 = x102;
} else {
x97 = false;
}
};
void x135() {
bool x112 = x97;
bool x113 = x59;
bool x114 = x112 && x113;
if (x114) {
x110 = true;
int x116 = x98;
int x117 = x60;
int x118 = x116 + x117;
x111 = x118;
} else {
if (x112) {
x110 = true;
int x116 = x98;
x111 = x116;
} else {
if (x113) {
x110 = true;
int x117 = x60;
x111 = x117;
} else {
x110 = false;
}
}
}
};
void x148() {
bool x138 = x110;
if (x138) {
x136 = true;
int x140 = x111;
int x141 = x140 * 2;
x137 = x141;
} else {
x136 = false;
}
};
void x183(uint8_t* x176,int x177) {
uint8_t* x178 = x176;
uint8_t x180 = *x178;
printf("%u\n",x180);
};
void x189() {
bool x175 = x136;
if (x175) {
int x184 = x137;
x183((uint8_t*)&x184, sizeof(x184));
} else {
}
};
void top1(uint8_t* x164,int x165) {
x163();
uint8_t* x166 = x164;
int x167 = x165;
x29(x166,x167);
x96();
x109();
x135();
x148();
x189();
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
void top2(uint8_t* x194,int x195) {
x163();
uint8_t* x196 = x194;
int x197 = x195;
x58(x196,x197);
x70();
x96();
x109();
x135();
x148();
x189();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
