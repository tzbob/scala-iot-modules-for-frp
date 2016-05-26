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
int x44;
bool x45;
bool x60;
int x61;
int x72;
void x87() {
int x73 = x72;
bool x74 = x73 == 0;
if (x74) {
x30 = 3;
x32 = 0;
int x77 = x32;
int x78 = x30;
int x79 = x77 + x78;
x44 = x79;
x72 = 1;
} else {
}
x60 = false;
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
void x43() {
bool x34 = x1;
if (x34) {
x33 = true;
int x36 = x2;
x32 = x36;
} else {
x33 = false;
}
};
void x59() {
bool x46 = x33;
bool x47 = x31;
bool x48 = x46 || x47;
if (x48) {
int x49 = x32;
int x50 = x30;
int x51 = x49 + x50;
x44 = x51;
x45 = true;
} else {
x45 = false;
}
};
void x71() {
bool x62 = x45;
if (x62) {
x60 = true;
int x64 = x44;
x61 = x64;
} else {
x60 = false;
}
};
void x106(uint8_t* x99,int x100) {
uint8_t* x101 = x99;
uint8_t x103 = *x101;
printf("%u\n",x103);
};
void x112() {
bool x98 = x60;
if (x98) {
int x107 = x61;
x106((uint8_t*)&x107, sizeof(x107));
} else {
}
};
void x115(uint8_t* x88,int x89) { //top1
x87();
uint8_t* x90 = x88;
int x91 = x89;
x29(x90,x91);
x43();
x59();
x71();
x112();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
