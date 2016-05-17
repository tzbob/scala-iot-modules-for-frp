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
bool x83;
int x84;
int x95;
bool x105;
int x106;
int x117;
bool x127;
int x128;
int x134;
void x150() {
int x135 = x134;
bool x136 = x135 == 0;
if (x136) {
x95 = 0;
x117 = 0;
x134 = 1;
} else {
}
x1 = false;
x30 = false;
x127 = false;
x59 = false;
x105 = false;
x71 = false;
x83 = false;
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
void x70() {
bool x61 = x1;
if (x61) {
x59 = true;
int x63 = x2;
x60 = 1;
} else {
x59 = false;
}
};
void x82() {
bool x73 = x59;
if (x73) {
x71 = true;
int x75 = x60;
x72 = 2;
} else {
x71 = false;
}
};
void x94() {
bool x85 = x71;
if (x85) {
x83 = true;
int x87 = x72;
x84 = 3;
} else {
x83 = false;
}
};
void x104() {
bool x96 = x83;
if (x96) {
int x97 = x84;
int x98 = x95;
int x99 = x97 + x98;
x95 = x99;
} else {
}
};
void x165(uint8_t* x151,int x152) { //top1
x150();
uint8_t* x153 = x151;
int x154 = x152;
x29(x153,x154);
x70();
x82();
x94();
x104();
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
void x116() {
bool x107 = x30;
if (x107) {
x105 = true;
int x109 = x95;
x106 = x109;
} else {
x105 = false;
}
};
void x126() {
bool x118 = x105;
if (x118) {
int x119 = x106;
int x120 = x117;
int x121 = x119 + x120;
x117 = x121;
} else {
}
};
void x133() {
x127 = true;
int x130 = x117;
x128 = x130;
};
void x186(uint8_t* x179,int x180) {
uint8_t* x181 = x179;
uint8_t x183 = *x181;
printf("%u\n",x183);
};
void x192() {
bool x178 = x127;
if (x178) {
int x187 = x128;
x186((uint8_t*)&x187, sizeof(x187));
} else {
}
};
void x196(uint8_t* x167,int x168) { //top6
x150();
uint8_t* x169 = x167;
int x170 = x168;
x58(x169,x170);
x116();
x126();
x133();
x192();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
