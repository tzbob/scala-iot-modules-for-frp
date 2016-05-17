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
bool x44;
int x45;
bool x58;
int x59;
bool x85;
int x86;
int x112;
void x124() {
int x113 = x112;
bool x114 = x113 == 0;
if (x114) {
x112 = 1;
} else {
}
x85 = false;
x1 = false;
x30 = false;
x44 = false;
x58 = false;
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
void x43() {
bool x32 = x1;
if (x32) {
x30 = true;
int x34 = x2;
printf("%s\n","map2");
int x36 = x34 * 2;
x31 = x36;
} else {
x30 = false;
}
};
void x57() {
bool x46 = x1;
if (x46) {
x44 = true;
int x48 = x2;
printf("%s\n","map3");
int x50 = x48 * 2;
x45 = x50;
} else {
x44 = false;
}
};
void x84() {
bool x60 = x30;
bool x61 = x44;
bool x62 = x60 && x61;
if (x62) {
x58 = true;
int x64 = x31;
int x65 = x45;
printf("%s\n","merge4");
int x67 = x64 + x65;
x59 = x67;
} else {
if (x60) {
x58 = true;
int x64 = x31;
x59 = x64;
} else {
if (x61) {
x58 = true;
int x65 = x45;
x59 = x65;
} else {
x58 = false;
}
}
}
};
void x111() {
bool x87 = x44;
bool x88 = x58;
bool x89 = x87 && x88;
if (x89) {
x85 = true;
int x91 = x45;
int x92 = x59;
printf("%s\n","merge5");
int x94 = x91 + x92;
x86 = x94;
} else {
if (x87) {
x85 = true;
int x91 = x45;
x86 = x91;
} else {
if (x88) {
x85 = true;
int x92 = x59;
x86 = x92;
} else {
x85 = false;
}
}
}
};
void x144(uint8_t* x137,int x138) {
uint8_t* x139 = x137;
uint8_t x141 = *x139;
printf("%u\n",x141);
};
void x150() {
bool x136 = x85;
if (x136) {
int x145 = x86;
x144((uint8_t*)&x145, sizeof(x145));
} else {
}
};
void x153(uint8_t* x125,int x126) { //top1
x124();
uint8_t* x127 = x125;
int x128 = x126;
x29(x127,x128);
x43();
x57();
x84();
x111();
x150();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
