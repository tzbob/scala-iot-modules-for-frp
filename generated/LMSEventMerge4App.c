/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool x0;
int x1;
bool x29;
int x30;
bool x41;
int x42;
bool x53;
int x54;
bool x65;
int x66;
bool x91;
int x92;
bool x104;
int x105;
bool x130;
int x131;
int x143;
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
void x40() {
bool x31 = x0;
if (x31) {
x29 = true;
int x33 = x1;
x30 = 1;
} else {
x29 = false;
}
};
void x52() {
bool x43 = x0;
if (x43) {
x41 = true;
int x45 = x1;
x42 = 2;
} else {
x41 = false;
}
};
void x64() {
bool x55 = x0;
if (x55) {
x53 = true;
int x57 = x1;
x54 = 3;
} else {
x53 = false;
}
};
void x90() {
bool x67 = x29;
bool x68 = x41;
bool x69 = x67 && x68;
if (x69) {
x65 = true;
int x71 = x30;
int x72 = x42;
int x73 = x71 + x72;
x66 = x73;
} else {
if (x67) {
x65 = true;
int x71 = x30;
x66 = x71;
} else {
if (x68) {
x65 = true;
int x72 = x42;
x66 = x72;
} else {
x65 = false;
}
}
}
};
void x103() {
bool x93 = x65;
if (x93) {
x91 = true;
int x95 = x66;
int x96 = x95 + 2;
x92 = x96;
} else {
x91 = false;
}
};
void x129() {
bool x106 = x91;
bool x107 = x53;
bool x108 = x106 && x107;
if (x108) {
x104 = true;
int x110 = x92;
int x111 = x54;
int x112 = x110 + x111;
x105 = x112;
} else {
if (x106) {
x104 = true;
int x110 = x92;
x105 = x110;
} else {
if (x107) {
x104 = true;
int x111 = x54;
x105 = x111;
} else {
x104 = false;
}
}
}
};
void x142() {
bool x132 = x104;
if (x132) {
x130 = true;
int x134 = x105;
int x135 = x134 * 2;
x131 = x135;
} else {
x130 = false;
}
};
void top1(uint8_t* x151,int x152) {
uint8_t* x153 = x151;
int x154 = x152;
x28(x153,x154);
x40();
x52();
x64();
x90();
x103();
x129();
x142();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
