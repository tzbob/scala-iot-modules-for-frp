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
int x59;
bool x69;
int x70;
bool x81;
int x82;
bool x93;
int x94;
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
x59 = 0;
x117 = 0;
x134 = 1;
} else {
}
x81 = false;
x1 = false;
x93 = false;
x127 = false;
x105 = false;
x30 = false;
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
void x68() {
bool x60 = x1;
if (x60) {
int x61 = x2;
int x62 = x59;
int x63 = x61 + x62;
x59 = x63;
} else {
}
};
void x162(uint8_t* x151,int x152) { //top1
x150();
uint8_t* x153 = x151;
int x154 = x152;
x29(x153,x154);
x68();
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
void x80() {
bool x71 = x30;
if (x71) {
x69 = true;
int x73 = x31;
x70 = 1;
} else {
x69 = false;
}
};
void x92() {
bool x83 = x69;
if (x83) {
x81 = true;
int x85 = x70;
x82 = 2;
} else {
x81 = false;
}
};
void x104() {
bool x95 = x81;
if (x95) {
x93 = true;
int x97 = x82;
x94 = 3;
} else {
x93 = false;
}
};
void x116() {
bool x107 = x93;
if (x107) {
x105 = true;
int x109 = x59;
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
void x196(uint8_t* x164,int x165) { //top3
x150();
uint8_t* x166 = x164;
int x167 = x165;
x58(x166,x167);
x80();
x92();
x104();
x116();
x126();
x133();
x192();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
