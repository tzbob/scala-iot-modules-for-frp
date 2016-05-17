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
bool x59;
int x60;
bool x73;
int x74;
int x87;
void x98() {
int x88 = x87;
bool x89 = x88 == 0;
if (x89) {
x87 = 1;
} else {
}
x59 = false;
x73 = false;
x1 = false;
x30 = false;
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
void x72() {
bool x61 = x1;
if (x61) {
x59 = true;
int x63 = x2;
printf("%s\n","m1");
int x65 = x63 * 2;
x60 = x65;
} else {
x59 = false;
}
};
void x110(uint8_t* x99,int x100) { //top1
x98();
uint8_t* x101 = x99;
int x102 = x100;
x29(x101,x102);
x72();
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
void x86() {
bool x75 = x30;
if (x75) {
x73 = true;
int x77 = x31;
printf("%s\n","m2");
int x79 = x77 * 2;
x74 = x79;
} else {
x73 = false;
}
};
void x129(uint8_t* x122,int x123) {
uint8_t* x124 = x122;
uint8_t x126 = *x124;
printf("%u\n",x126);
};
void x135() {
bool x121 = x73;
if (x121) {
int x130 = x74;
x129((uint8_t*)&x130, sizeof(x130));
} else {
}
};
void x139(uint8_t* x112,int x113) { //top3
x98();
uint8_t* x114 = x112;
int x115 = x113;
x58(x114,x115);
x86();
x135();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
