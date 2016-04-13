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
bool x58;
int x59;
bool x84;
int x85;
bool x96;
int x97;
bool x122;
int x123;
int x135;
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
void x83() {
bool x60 = x0;
bool x61 = x29;
bool x62 = x60 && x61;
if (x62) {
x58 = true;
int x64 = x1;
int x65 = x30;
int x66 = x64 * x65;
x59 = x66;
} else {
if (x60) {
x58 = true;
int x64 = x1;
x59 = x64;
} else {
if (x61) {
x58 = true;
int x65 = x30;
x59 = x65;
} else {
x58 = false;
}
}
}
};
void x121() {
bool x98 = x58;
bool x99 = x84;
bool x100 = x98 && x99;
if (x100) {
x96 = true;
int x102 = x59;
int x103 = x85;
int x104 = x102 + x103;
x97 = x104;
} else {
if (x98) {
x96 = true;
int x102 = x59;
x97 = x102;
} else {
if (x99) {
x96 = true;
int x103 = x85;
x97 = x103;
} else {
x96 = false;
}
}
}
};
void x134() {
bool x124 = x96;
if (x124) {
x122 = true;
int x126 = x97;
int x127 = x126 * 2;
x123 = x127;
} else {
x122 = false;
}
};
void top1(uint8_t* x143,int x144) {
uint8_t* x145 = x143;
int x146 = x144;
x28(x145,x146);
x83();
x121();
x134();
};
int x155;
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
void x95() {
bool x86 = x29;
if (x86) {
x84 = true;
int x88 = x30;
x85 = 2;
} else {
x84 = false;
}
};
void top2(uint8_t* x163,int x164) {
uint8_t* x165 = x163;
int x166 = x164;
x57(x165,x166);
x83();
x95();
x121();
x134();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
