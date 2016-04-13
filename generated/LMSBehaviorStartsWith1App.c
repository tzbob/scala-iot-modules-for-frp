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
int x49;
void x57() {
int x50 = x49;
bool x51 = x50 == 0;
if (x51) {
x41 = 1;
x49 = 1;
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
void x48() {
bool x42 = x29;
if (x42) {
int x43 = x30;
x41 = x43;
} else {
}
};
void top1(uint8_t* x58,int x59) {
x57();
uint8_t* x60 = x58;
int x61 = x59;
x28(x60,x61);
x40();
x48();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
