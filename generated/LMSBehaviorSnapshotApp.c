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
int x81;
bool x91;
int x92;
int x98;
void x111() {
int x99 = x98;
bool x100 = x99 == 0;
if (x100) {
x59 = 0;
x81 = 0;
x98 = 1;
} else {
}
x1 = false;
x91 = false;
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
void x121(uint8_t* x112,int x113) { //top1
x111();
uint8_t* x114 = x112;
int x115 = x113;
x29(x114,x115);
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
int x73 = x59;
x70 = x73;
} else {
x69 = false;
}
};
void x90() {
bool x82 = x69;
if (x82) {
int x83 = x70;
int x84 = x81;
int x85 = x83 + x84;
x81 = x85;
} else {
}
};
void x97() {
x91 = true;
int x94 = x81;
x92 = x94;
};
void x141(uint8_t* x134,int x135) {
uint8_t* x136 = x134;
uint8_t x138 = *x136;
printf("%u\n",x138);
};
void x147() {
bool x133 = x91;
if (x133) {
int x142 = x92;
x141((uint8_t*)&x142, sizeof(x142));
} else {
}
};
void x150(uint8_t* x123,int x124) { //top3
x111();
uint8_t* x125 = x123;
int x126 = x124;
x58(x125,x126);
x80();
x90();
x97();
x147();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
