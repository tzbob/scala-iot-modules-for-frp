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
bool x40;
int x41;
int x47;
bool x57;
int x58;
int x64;
void x76() {
int x65 = x64;
bool x66 = x65 == 0;
if (x66) {
x30 = 1;
x47 = 10;
x64 = 1;
} else {
}
x57 = false;
x1 = false;
x40 = false;
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
void x39() {
bool x31 = x1;
if (x31) {
int x32 = x2;
int x33 = x30;
int x34 = x32 + x33;
x30 = x34;
} else {
}
};
void x46() {
x40 = true;
int x43 = x30;
x41 = x43;
};
void x56() {
bool x48 = x40;
if (x48) {
int x49 = x41;
int x50 = x47;
int x51 = x49 + x50;
x47 = x51;
} else {
}
};
void x63() {
x57 = true;
int x60 = x47;
x58 = x60;
};
void x96(uint8_t* x89,int x90) {
uint8_t* x91 = x89;
uint8_t x93 = *x91;
printf("%u\n",x93);
};
void x102() {
bool x88 = x57;
if (x88) {
int x97 = x58;
x96((uint8_t*)&x97, sizeof(x97));
} else {
}
};
void x105(uint8_t* x77,int x78) { //top1
x76();
uint8_t* x79 = x77;
int x80 = x78;
x29(x79,x80);
x39();
x46();
x56();
x63();
x102();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
