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
bool x56;
int x57;
int x68;
void x80() {
int x69 = x68;
bool x70 = x69 == 0;
if (x70) {
x43 = 1;
x68 = 1;
} else {
}
x30 = false;
x56 = false;
x1 = false;
x42 = false;
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
x31 = 5;
} else {
x30 = false;
}
};
void x55() {
bool x44 = x30;
if (x44) {
x42 = true;
int x46 = x31;
int x47 = x43;
int x48 = x46 + x47;
x43 = x48;
} else {
x42 = false;
}
};
void x67() {
bool x58 = x42;
if (x58) {
x56 = true;
int x60 = x43;
x57 = x60;
} else {
x56 = false;
}
};
void x99(uint8_t* x92,int x93) {
uint8_t* x94 = x92;
uint8_t x96 = *x94;
printf("%u\n",x96);
};
void x105() {
bool x91 = x56;
if (x91) {
int x100 = x57;
x99((uint8_t*)&x100, sizeof(x100));
} else {
}
};
void x108(uint8_t* x81,int x82) { //top1
x80();
uint8_t* x83 = x81;
int x84 = x82;
x29(x83,x84);
x41();
x55();
x67();
x105();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
