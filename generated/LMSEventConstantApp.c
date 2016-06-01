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
int x55;
void x62() {
int x56 = x55;
bool x57 = x56 == 0;
if (x57) {
x55 = 1;
} else {
}
};
void x67() {
x30 = false;
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
x31 = 10;
} else {
x30 = false;
}
};
void x54() {
bool x44 = x30;
if (x44) {
x42 = true;
int x46 = x31;
int x47 = 2 * x46;
x43 = x47;
} else {
x42 = false;
}
};
void x86(uint8_t* x79,int x80) {
uint8_t* x81 = x79;
uint8_t x83 = *x81;
printf("%u\n",x83);
};
void x92() {
bool x78 = x42;
if (x78) {
int x87 = x43;
x86((uint8_t*)&x87, sizeof(x87));
} else {
}
};
void x95(uint8_t* x68,int x69) { //top1
x62();
x67();
uint8_t* x70 = x68;
int x71 = x69;
x29(x70,x71);
x41();
x54();
x92();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
