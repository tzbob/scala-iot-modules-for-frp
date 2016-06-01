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
bool x44;
int x45;
bool x60;
int x61;
int x72;
void x90() {
int x73 = x72;
bool x74 = x73 == 0;
if (x74) {
x31 = 3;
x33 = 0;
int x77 = x33;
int x78 = x31;
int x79 = x77 + x78;
x45 = x79;
x72 = 1;
} else {
}
x60 = false;
x1 = false;
x32 = false;
x30 = false;
x44 = false;
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
void x43() {
bool x34 = x1;
if (x34) {
x32 = true;
int x36 = x2;
x33 = x36;
} else {
x32 = false;
}
};
void x59() {
bool x46 = x32;
bool x47 = x30;
bool x48 = x46 || x47;
if (x48) {
int x49 = x33;
int x50 = x31;
int x51 = x49 + x50;
x45 = x51;
x44 = true;
} else {
x44 = false;
}
};
void x71() {
bool x62 = x44;
if (x62) {
x60 = true;
int x64 = x45;
x61 = x64;
} else {
x60 = false;
}
};
void x109(uint8_t* x102,int x103) {
uint8_t* x104 = x102;
uint8_t x106 = *x104;
printf("%u\n",x106);
};
void x115() {
bool x101 = x60;
if (x101) {
int x110 = x61;
x109((uint8_t*)&x110, sizeof(x110));
} else {
}
};
void x118(uint8_t* x91,int x92) { //top1
x90();
uint8_t* x93 = x91;
int x94 = x92;
x29(x93,x94);
x43();
x59();
x71();
x115();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
