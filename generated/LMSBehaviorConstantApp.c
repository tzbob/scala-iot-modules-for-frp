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
int x39;
bool x46;
int x47;
int x53;
void x68() {
int x54 = x53;
bool x55 = x54 == 0;
if (x55) {
x30 = 3;
x31 = 0;
int x58 = x31;
int x59 = x30;
int x60 = x58 + x59;
x39 = x60;
x53 = 1;
} else {
}
x46 = false;
x1 = false;
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
void x38() {
bool x32 = x1;
if (x32) {
int x33 = x2;
x31 = x33;
} else {
}
};
void x45() {
int x40 = x31;
int x41 = x30;
int x42 = x40 + x41;
x39 = x42;
};
void x52() {
x46 = true;
int x49 = x39;
x47 = x49;
};
void x87(uint8_t* x80,int x81) {
uint8_t* x82 = x80;
uint8_t x84 = *x82;
printf("%u\n",x84);
};
void x93() {
bool x79 = x46;
if (x79) {
int x88 = x47;
x87((uint8_t*)&x88, sizeof(x88));
} else {
}
};
void x96(uint8_t* x69,int x70) { //top1
x68();
uint8_t* x71 = x69;
int x72 = x70;
x29(x71,x72);
x38();
x45();
x52();
x93();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
