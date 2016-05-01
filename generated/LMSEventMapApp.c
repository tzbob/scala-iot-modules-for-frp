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
bool x43;
bool x44;
int x57;
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
void x42() {
bool x32 = x1;
if (x32) {
x30 = true;
int x34 = x2;
int x35 = 2 * x34;
x31 = x35;
} else {
x30 = false;
}
};
void x56() {
bool x45 = x30;
if (x45) {
x43 = true;
int x47 = x31;
int x48 = x47 % 2;
bool x49 = x48 == 0;
x44 = x49;
} else {
x43 = false;
}
};
void top1(uint8_t* x68,int x69) {
uint8_t* x70 = x68;
int x71 = x69;
x29(x70,x71);
x42();
x56();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
