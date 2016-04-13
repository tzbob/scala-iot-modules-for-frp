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
bool x41;
int x42;
bool x53;
int x54;
bool x79;
int x80;
int x92;
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
x30 = 1;
} else {
x29 = false;
}
};
void x52() {
bool x43 = x0;
if (x43) {
x41 = true;
int x45 = x1;
x42 = 2;
} else {
x41 = false;
}
};
void x78() {
bool x55 = x29;
bool x56 = x41;
bool x57 = x55 && x56;
if (x57) {
x53 = true;
int x59 = x30;
int x60 = x42;
int x61 = x59 + x60;
x54 = x61;
} else {
if (x55) {
x53 = true;
int x59 = x30;
x54 = x59;
} else {
if (x56) {
x53 = true;
int x60 = x42;
x54 = x60;
} else {
x53 = false;
}
}
}
};
void x91() {
bool x81 = x53;
if (x81) {
x79 = true;
int x83 = x54;
int x84 = x83 * 2;
x80 = x84;
} else {
x79 = false;
}
};
void top1(uint8_t* x100,int x101) {
uint8_t* x102 = x100;
int x103 = x101;
x28(x102,x103);
x40();
x52();
x78();
x91();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
