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
bool x42;
int x43;
bool x54;
int x55;
bool x80;
int x81;
int x93;
void x105() {
int x94 = x93;
bool x95 = x94 == 0;
if (x95) {
x93 = 1;
} else {
}
x80 = false;
x1 = false;
x30 = false;
x42 = false;
x54 = false;
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
void x41() {
bool x32 = x1;
if (x32) {
x30 = true;
int x34 = x2;
x31 = 1;
} else {
x30 = false;
}
};
void x53() {
bool x44 = x1;
if (x44) {
x42 = true;
int x46 = x2;
x43 = 2;
} else {
x42 = false;
}
};
void x79() {
bool x56 = x30;
bool x57 = x42;
bool x58 = x56 && x57;
if (x58) {
x54 = true;
int x60 = x31;
int x61 = x43;
int x62 = x60 + x61;
x55 = x62;
} else {
if (x56) {
x54 = true;
int x60 = x31;
x55 = x60;
} else {
if (x57) {
x54 = true;
int x61 = x43;
x55 = x61;
} else {
x54 = false;
}
}
}
};
void x92() {
bool x82 = x54;
if (x82) {
x80 = true;
int x84 = x55;
int x85 = x84 * 2;
x81 = x85;
} else {
x80 = false;
}
};
void x125(uint8_t* x118,int x119) {
uint8_t* x120 = x118;
uint8_t x122 = *x120;
printf("%u\n",x122);
};
void x131() {
bool x117 = x80;
if (x117) {
int x126 = x81;
x125((uint8_t*)&x126, sizeof(x126));
} else {
}
};
void top1(uint8_t* x106,int x107) {
x105();
uint8_t* x108 = x106;
int x109 = x107;
x29(x108,x109);
x41();
x53();
x79();
x92();
x131();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
