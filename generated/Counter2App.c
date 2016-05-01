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
bool x76;
int x77;
int x93;
bool x121;
int x122;
int x128;
void x141() {
int x129 = x128;
bool x130 = x129 == 0;
if (x130) {
x93 = 0;
x128 = 1;
} else {
}
x1 = false;
x121 = false;
x30 = false;
x59 = false;
x76 = false;
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
void x75() {
bool x61 = x1;
if (x61) {
int x62 = x2;
bool x63 = x62 < 10;
if (x63) {
x59 = true;
x60 = x62;
} else {
x59 = false;
}
} else {
x59 = false;
}
};
void x120() {
bool x94 = x59;
bool x95 = x76;
bool x96 = x94 && x95;
if (x96) {
int x97 = x60;
int x98 = x77;
int x99 = x93;
int x100 = x99 + x97;
int x101 = x100 - x98;
x93 = x101;
} else {
if (x94) {
int x104 = x60;
int x105 = x93;
int x106 = x105 + x104;
x93 = x106;
} else {
if (x95) {
int x109 = x77;
int x110 = x93;
int x111 = x110 - x109;
x93 = x111;
} else {
}
}
}
};
void x127() {
x121 = true;
int x124 = x93;
x122 = x124;
};
void x160(uint8_t* x153,int x154) {
uint8_t* x155 = x153;
uint8_t x157 = *x155;
printf("%u\n",x157);
};
void x166() {
bool x152 = x121;
if (x152) {
int x161 = x122;
x160((uint8_t*)&x161, sizeof(x161));
} else {
}
};
void top1(uint8_t* x142,int x143) {
x141();
uint8_t* x144 = x142;
int x145 = x143;
x29(x144,x145);
x75();
x120();
x127();
x166();
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
void x92() {
bool x78 = x30;
if (x78) {
int x79 = x31;
bool x80 = x79 < 10;
if (x80) {
x76 = true;
x77 = x79;
} else {
x76 = false;
}
} else {
x76 = false;
}
};
void top2(uint8_t* x171,int x172) {
x141();
uint8_t* x173 = x171;
int x174 = x172;
x58(x173,x174);
x92();
x120();
x127();
x166();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
