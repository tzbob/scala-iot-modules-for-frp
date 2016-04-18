/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
bool x0;
int x1;
bool x29;
int x30;
bool x47;
int x48;
bool x59;
int x60;
bool x71;
int x72;
bool x97;
int x98;
int x110;
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
void x46() {
bool x31 = x0;
if (x31) {
int x32 = x1;
int x33 = x32 % 2;
bool x34 = x33 == 0;
if (x34) {
x29 = true;
x30 = x32;
} else {
x29 = false;
}
} else {
x29 = false;
}
};
void x58() {
bool x49 = x0;
if (x49) {
x47 = true;
int x51 = x1;
x48 = 2;
} else {
x47 = false;
}
};
void x70() {
bool x61 = x29;
if (x61) {
x59 = true;
int x63 = x30;
x60 = 1;
} else {
x59 = false;
}
};
void x96() {
bool x73 = x59;
bool x74 = x47;
bool x75 = x73 && x74;
if (x75) {
x71 = true;
int x77 = x60;
int x78 = x48;
int x79 = x77 + x78;
x72 = x79;
} else {
if (x73) {
x71 = true;
int x77 = x60;
x72 = x77;
} else {
if (x74) {
x71 = true;
int x78 = x48;
x72 = x78;
} else {
x71 = false;
}
}
}
};
void x109() {
bool x99 = x71;
if (x99) {
x97 = true;
int x101 = x72;
int x102 = x101 * 2;
x98 = x102;
} else {
x97 = false;
}
};
void top1(uint8_t* x124,int x125) {
uint8_t* x126 = x124;
int x127 = x125;
x28(x126,x127);
x46();
x58();
x70();
x96();
x109();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
