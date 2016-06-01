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
bool x43;
int x44;
bool x56;
int x57;
bool x69;
int x70;
bool x87;
int x88;
bool x100;
int x101;
bool x126;
int x127;
int x139;
void x146() {
int x140 = x139;
bool x141 = x140 == 0;
if (x141) {
x139 = 1;
} else {
}
};
void x156() {
x87 = false;
x1 = false;
x56 = false;
x30 = false;
x100 = false;
x43 = false;
x126 = false;
x69 = false;
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
void x42() {
bool x32 = x1;
if (x32) {
x30 = true;
int x34 = x2;
int x35 = x34 + 1;
x31 = x35;
} else {
x30 = false;
}
};
void x55() {
bool x45 = x30;
if (x45) {
x43 = true;
int x47 = x31;
int x48 = x47 * 2;
x44 = x48;
} else {
x43 = false;
}
};
void x68() {
bool x58 = x43;
if (x58) {
x56 = true;
int x60 = x44;
int x61 = x60 + 1;
x57 = x61;
} else {
x56 = false;
}
};
void x86() {
bool x71 = x43;
if (x71) {
int x72 = x44;
int x73 = x72 % 2;
bool x74 = x73 == 0;
if (x74) {
x69 = true;
x70 = x72;
} else {
x69 = false;
}
} else {
x69 = false;
}
};
void x99() {
bool x89 = x69;
if (x89) {
x87 = true;
int x91 = x70;
int x92 = x91 + 1;
x88 = x92;
} else {
x87 = false;
}
};
void x125() {
bool x102 = x87;
bool x103 = x56;
bool x104 = x102 && x103;
if (x104) {
x100 = true;
int x106 = x88;
int x107 = x57;
int x108 = x106 + x107;
x101 = x108;
} else {
if (x102) {
x100 = true;
int x106 = x88;
x101 = x106;
} else {
if (x103) {
x100 = true;
int x107 = x57;
x101 = x107;
} else {
x100 = false;
}
}
}
};
void x138() {
bool x128 = x100;
if (x128) {
x126 = true;
int x130 = x101;
int x131 = x130 * 2;
x127 = x131;
} else {
x126 = false;
}
};
void x180(uint8_t* x173,int x174) {
uint8_t* x175 = x173;
uint8_t x177 = *x175;
printf("%u\n",x177);
};
void x186() {
bool x172 = x126;
if (x172) {
int x181 = x127;
x180((uint8_t*)&x181, sizeof(x181));
} else {
}
};
void x189(uint8_t* x157,int x158) { //top1
x146();
x156();
uint8_t* x159 = x157;
int x160 = x158;
x29(x159,x160);
x42();
x55();
x68();
x86();
x99();
x125();
x138();
x186();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
