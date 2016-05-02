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
int x42;
bool x50;
int x51;
int x57;
void x68() {
int x58 = x57;
bool x59 = x58 == 0;
if (x59) {
x42 = 1;
x57 = 1;
} else {
}
x30 = false;
x50 = false;
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
void x49() {
bool x43 = x30;
if (x43) {
int x44 = x31;
x42 = x44;
} else {
}
};
void x56() {
x50 = true;
int x53 = x42;
x51 = x53;
};
void x87(uint8_t* x80,int x81) {
uint8_t* x82 = x80;
uint8_t x84 = *x82;
printf("%u\n",x84);
};
void x93() {
bool x79 = x50;
if (x79) {
int x88 = x51;
x87((uint8_t*)&x88, sizeof(x88));
} else {
}
};
void top1(uint8_t* x69,int x70) {
x68();
uint8_t* x71 = x69;
int x72 = x70;
x29(x71,x72);
x41();
x49();
x56();
x93();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
