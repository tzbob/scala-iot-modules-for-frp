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
int x41;
int x51;
void x59() {
int x52 = x51;
bool x53 = x52 == 0;
if (x53) {
x41 = 1;
x51 = 1;
} else {
}
};
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
void x40() {
bool x31 = x0;
if (x31) {
x29 = true;
int x33 = x1;
x30 = 5;
} else {
x29 = false;
}
};
void x50() {
bool x42 = x29;
if (x42) {
int x43 = x41;
int x44 = x30;
int x45 = x43 + x44;
x41 = x45;
} else {
}
};
void top1(uint8_t* x60,int x61) {
x59();
uint8_t* x62 = x60;
int x63 = x61;
x28(x62,x63);
x40();
x50();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
