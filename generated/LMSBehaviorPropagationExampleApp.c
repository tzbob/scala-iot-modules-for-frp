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
bool x32;
int x33;
bool x46;
int x47;
bool x62;
int x63;
bool x78;
int x79;
int x90;
void x112() {
int x91 = x90;
bool x92 = x91 == 0;
if (x92) {
x31 = 0;
x33 = 2;
int x95 = x33;
int x96 = x31;
int x97 = x95 + x96;
x47 = x97;
int x99 = x47;
int x100 = x99 + x95;
x63 = x100;
x90 = 1;
} else {
}
x1 = false;
x78 = false;
x62 = false;
x32 = false;
x30 = false;
x46 = false;
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
x32 = true;
int x36 = x2;
int x37 = x33;
int x38 = x37 + 1;
x33 = x38;
} else {
x32 = false;
}
};
void x61() {
bool x48 = x32;
bool x49 = x30;
bool x50 = x48 || x49;
if (x50) {
int x51 = x33;
int x52 = x31;
int x53 = x51 + x52;
x47 = x53;
x46 = true;
} else {
x46 = false;
}
};
void x77() {
bool x64 = x46;
bool x65 = x32;
bool x66 = x64 || x65;
if (x66) {
int x67 = x47;
int x68 = x33;
int x69 = x67 + x68;
x63 = x69;
x62 = true;
} else {
x62 = false;
}
};
void x89() {
bool x80 = x62;
if (x80) {
x78 = true;
int x82 = x63;
x79 = x82;
} else {
x78 = false;
}
};
void x132(uint8_t* x125,int x126) {
uint8_t* x127 = x125;
uint8_t x129 = *x127;
printf("%u\n",x129);
};
void x138() {
bool x124 = x78;
if (x124) {
int x133 = x79;
x132((uint8_t*)&x133, sizeof(x133));
} else {
}
};
void x141(uint8_t* x113,int x114) { //top1
x112();
uint8_t* x115 = x113;
int x116 = x114;
x29(x115,x116);
x45();
x61();
x77();
x89();
x138();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
