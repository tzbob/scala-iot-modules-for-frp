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
bool x42;
int x43;
bool x55;
int x56;
bool x67;
int x68;
bool x79;
int x80;
bool x97;
int x98;
bool x115;
int x116;
bool x128;
int x129;
bool x141;
int x142;
bool x167;
int x168;
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
void x41() {
bool x31 = x0;
if (x31) {
x29 = true;
int x33 = x1;
int x34 = x33 + 1;
x30 = x34;
} else {
x29 = false;
}
};
void x54() {
bool x44 = x29;
if (x44) {
x42 = true;
int x46 = x30;
int x47 = x46 * 2;
x43 = x47;
} else {
x42 = false;
}
};
void x66() {
bool x57 = x42;
if (x57) {
x55 = true;
int x59 = x43;
x56 = 2;
} else {
x55 = false;
}
};
void x78() {
bool x69 = x42;
if (x69) {
x67 = true;
int x71 = x43;
x68 = 1;
} else {
x67 = false;
}
};
void x96() {
bool x81 = x67;
if (x81) {
int x82 = x68;
int x83 = x82 % 2;
bool x84 = x83 == 0;
if (x84) {
x79 = true;
x80 = x82;
} else {
x79 = false;
}
} else {
x79 = false;
}
};
void x114() {
bool x99 = x55;
if (x99) {
int x100 = x56;
int x101 = x100 % 2;
bool x102 = x101 == 0;
if (x102) {
x97 = true;
x98 = x100;
} else {
x97 = false;
}
} else {
x97 = false;
}
};
void x127() {
bool x117 = x79;
if (x117) {
x115 = true;
int x119 = x80;
int x120 = x119 + 1;
x116 = x120;
} else {
x115 = false;
}
};
void x140() {
bool x130 = x97;
if (x130) {
x128 = true;
int x132 = x98;
int x133 = x132 + 1;
x129 = x133;
} else {
x128 = false;
}
};
void x166() {
bool x143 = x115;
bool x144 = x128;
bool x145 = x143 && x144;
if (x145) {
x141 = true;
int x147 = x116;
int x148 = x129;
int x149 = x147 + x148;
x142 = x149;
} else {
if (x143) {
x141 = true;
int x147 = x116;
x142 = x147;
} else {
if (x144) {
x141 = true;
int x148 = x129;
x142 = x148;
} else {
x141 = false;
}
}
}
};
void x179() {
bool x169 = x141;
if (x169) {
x167 = true;
int x171 = x142;
int x172 = x171 * 2;
x168 = x172;
} else {
x167 = false;
}
};
void top1(uint8_t* x180,int x181) {
uint8_t* x182 = x180;
int x183 = x181;
x28(x182,x183);
x41();
x54();
x66();
x78();
x96();
x114();
x127();
x140();
x166();
x179();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
