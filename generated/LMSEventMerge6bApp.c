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
bool x68;
int x69;
bool x80;
int x81;
bool x98;
int x99;
bool x116;
int x117;
bool x129;
int x130;
bool x142;
int x143;
bool x168;
int x169;
int x181;
void x199() {
int x182 = x181;
bool x183 = x182 == 0;
if (x183) {
x181 = 1;
} else {
}
x80 = false;
x142 = false;
x1 = false;
x116 = false;
x129 = false;
x30 = false;
x56 = false;
x43 = false;
x168 = false;
x98 = false;
x68 = false;
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
void x67() {
bool x58 = x43;
if (x58) {
x56 = true;
int x60 = x44;
x57 = 2;
} else {
x56 = false;
}
};
void x79() {
bool x70 = x43;
if (x70) {
x68 = true;
int x72 = x44;
x69 = 1;
} else {
x68 = false;
}
};
void x97() {
bool x82 = x68;
if (x82) {
int x83 = x69;
int x84 = x83 % 2;
bool x85 = x84 == 0;
if (x85) {
x80 = true;
x81 = x83;
} else {
x80 = false;
}
} else {
x80 = false;
}
};
void x115() {
bool x100 = x56;
if (x100) {
int x101 = x57;
int x102 = x101 % 2;
bool x103 = x102 == 0;
if (x103) {
x98 = true;
x99 = x101;
} else {
x98 = false;
}
} else {
x98 = false;
}
};
void x128() {
bool x118 = x80;
if (x118) {
x116 = true;
int x120 = x81;
int x121 = x120 + 1;
x117 = x121;
} else {
x116 = false;
}
};
void x141() {
bool x131 = x98;
if (x131) {
x129 = true;
int x133 = x99;
int x134 = x133 + 1;
x130 = x134;
} else {
x129 = false;
}
};
void x167() {
bool x144 = x116;
bool x145 = x129;
bool x146 = x144 && x145;
if (x146) {
x142 = true;
int x148 = x117;
int x149 = x130;
int x150 = x148 + x149;
x143 = x150;
} else {
if (x144) {
x142 = true;
int x148 = x117;
x143 = x148;
} else {
if (x145) {
x142 = true;
int x149 = x130;
x143 = x149;
} else {
x142 = false;
}
}
}
};
void x180() {
bool x170 = x142;
if (x170) {
x168 = true;
int x172 = x143;
int x173 = x172 * 2;
x169 = x173;
} else {
x168 = false;
}
};
void x225(uint8_t* x218,int x219) {
uint8_t* x220 = x218;
uint8_t x222 = *x220;
printf("%u\n",x222);
};
void x231() {
bool x217 = x168;
if (x217) {
int x226 = x169;
x225((uint8_t*)&x226, sizeof(x226));
} else {
}
};
void x234(uint8_t* x200,int x201) { //top1
x199();
uint8_t* x202 = x200;
int x203 = x201;
x29(x202,x203);
x42();
x55();
x67();
x79();
x97();
x115();
x128();
x141();
x167();
x180();
x231();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
