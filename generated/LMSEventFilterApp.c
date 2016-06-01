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
bool x60;
int x61;
int x73;
void x80() {
int x74 = x73;
bool x75 = x74 == 0;
if (x75) {
x73 = 1;
} else {
}
};
void x86() {
x30 = false;
x60 = false;
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
x31 = x34;
} else {
x30 = false;
}
};
void x59() {
bool x44 = x30;
if (x44) {
int x45 = x31;
int x46 = x45 % 2;
bool x47 = x46 == 0;
if (x47) {
x42 = true;
x43 = x45;
} else {
x42 = false;
}
} else {
x42 = false;
}
};
void x72() {
bool x62 = x42;
if (x62) {
x60 = true;
int x64 = x43;
int x65 = x64 + 1;
x61 = x65;
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
void x115(uint8_t* x87,int x88) { //top1
x80();
x86();
uint8_t* x89 = x87;
int x90 = x88;
x29(x89,x90);
x41();
x59();
x72();
x112();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
