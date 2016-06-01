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
int x66;
void x74() {
int x67 = x66;
bool x68 = x67 == 0;
if (x68) {
x43 = 1;
x66 = 1;
} else {
}
};
void x80() {
x30 = false;
x54 = false;
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
void x53() {
bool x44 = x30;
if (x44) {
x42 = true;
int x46 = x31;
x43 = x46;
} else {
x42 = false;
}
};
void x65() {
bool x56 = x42;
if (x56) {
x54 = true;
int x58 = x43;
x55 = x58;
} else {
x54 = false;
}
};
void x100(uint8_t* x93,int x94) {
uint8_t* x95 = x93;
uint8_t x97 = *x95;
printf("%u\n",x97);
};
void x106() {
bool x92 = x54;
if (x92) {
int x101 = x55;
x100((uint8_t*)&x101, sizeof(x101));
} else {
}
};
void x109(uint8_t* x81,int x82) { //top1
x74();
x80();
uint8_t* x83 = x81;
int x84 = x82;
x29(x83,x84);
x41();
x53();
x65();
x106();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
