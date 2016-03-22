/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool x0;
int x1;
bool x29;
int x30;
bool x42;
int x43;
bool x60;
int x61;
void x28(uint8_t* x2,int x3) {
int x6 = 0;
int x7 = 0;
int x5 = x3;
uint8_t* x4 = x2;
for (;;) {
int x8 = x7;
bool x9 = x8 < x5;
if (!x9) break;
int x11 = x7;
uint8_t x12 = x4[x11];
int x16 = x6;
int x13 = (int ) x12;
int x14 = x11 * 8;
int x15 = x13 << x14;
int x17 = x16 + x15;
x6 = x17;
int x19 = x11 + 1;
x7 = x19;
}
x0 = true;
int x24 = x6;
int x25 = (int ) x24;
x1 = x25;
};
void x41() {
bool x31 = x0;
if (x31) {
x29 = true;
int x33 = x1;
int x34 = 2 * x33;
x30 = x34;
} else {
x29 = false;
}
};
void x59() {
bool x44 = x29;
if (x44) {
int x45 = x30;
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
void top1(uint8_t* x73,int x74) {
uint8_t* x75 = x73;
int x76 = x74;
x28(x75,x76);
x41();
x59();
x72();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
