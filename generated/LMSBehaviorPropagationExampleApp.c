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
int x30;
int x31;
int x41;
int x48;
bool x55;
int x56;
int x62;
void x80() {
int x63 = x62;
bool x64 = x63 == 0;
if (x64) {
x30 = 0;
x31 = 2;
int x67 = x31;
int x68 = x30;
int x69 = x67 + x68;
x41 = x69;
int x71 = x41;
int x72 = x71 + x67;
x48 = x72;
x62 = 1;
} else {
}
x1 = false;
x55 = false;
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
void x40() {
bool x32 = x1;
if (x32) {
int x33 = x2;
int x34 = x31;
int x35 = x34 + 1;
x31 = x35;
} else {
}
};
void x47() {
int x42 = x31;
int x43 = x30;
int x44 = x42 + x43;
x41 = x44;
};
void x54() {
int x49 = x41;
int x50 = x31;
int x51 = x49 + x50;
x48 = x51;
};
void x61() {
x55 = true;
int x58 = x48;
x56 = x58;
};
void x100(uint8_t* x93,int x94) {
uint8_t* x95 = x93;
uint8_t x97 = *x95;
printf("%u\n",x97);
};
void x106() {
bool x92 = x55;
if (x92) {
int x101 = x56;
x100((uint8_t*)&x101, sizeof(x101));
} else {
}
};
void x109(uint8_t* x81,int x82) { //top1
x80();
uint8_t* x83 = x81;
int x84 = x82;
x29(x83,x84);
x40();
x47();
x54();
x61();
x106();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
