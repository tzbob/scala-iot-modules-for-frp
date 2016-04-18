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
bool x42;
bool x43;
int x56;
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
void x55() {
bool x44 = x29;
if (x44) {
x42 = true;
int x46 = x30;
int x47 = x46 % 2;
bool x48 = x47 == 0;
x43 = x48;
} else {
x42 = false;
}
};
void top1(uint8_t* x67,int x68) {
uint8_t* x69 = x67;
int x70 = x68;
x28(x69,x70);
x41();
x55();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
