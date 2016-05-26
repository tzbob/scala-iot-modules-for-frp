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
bool x31;
int x32;
bool x33;
int x46;
bool x47;
int x62;
bool x63;
bool x78;
int x79;
int x90;
void x108() {
int x91 = x90;
bool x92 = x91 == 0;
if (x92) {
x30 = 0;
x32 = 2;
int x95 = x32;
int x96 = x30;
int x97 = x95 + x96;
x46 = x97;
int x99 = x46;
int x100 = x99 + x95;
x62 = x100;
x90 = 1;
} else {
}
x1 = false;
x78 = false;
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
void x45() {
bool x34 = x1;
if (x34) {
x33 = true;
int x36 = x2;
int x37 = x32;
int x38 = x37 + 1;
x32 = x38;
} else {
x33 = false;
}
};
void x61() {
bool x48 = x33;
bool x49 = x31;
bool x50 = x48 || x49;
if (x50) {
int x51 = x32;
int x52 = x30;
int x53 = x51 + x52;
x46 = x53;
x47 = true;
} else {
x47 = false;
}
};
void x77() {
bool x64 = x47;
bool x65 = x33;
bool x66 = x64 || x65;
if (x66) {
int x67 = x46;
int x68 = x32;
int x69 = x67 + x68;
x62 = x69;
x63 = true;
} else {
x63 = false;
}
};
void x89() {
bool x80 = x63;
if (x80) {
x78 = true;
int x82 = x62;
x79 = x82;
} else {
x78 = false;
}
};
void x128(uint8_t* x121,int x122) {
uint8_t* x123 = x121;
uint8_t x125 = *x123;
printf("%u\n",x125);
};
void x134() {
bool x120 = x78;
if (x120) {
int x129 = x79;
x128((uint8_t*)&x129, sizeof(x129));
} else {
}
};
void x137(uint8_t* x109,int x110) { //top1
x108();
uint8_t* x111 = x109;
int x112 = x110;
x29(x111,x112);
x45();
x61();
x77();
x89();
x134();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
