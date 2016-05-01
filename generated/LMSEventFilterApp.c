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
int x44;
bool x61;
int x62;
int x74;
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
void x60() {
bool x45 = x30;
if (x45) {
int x46 = x31;
int x47 = x46 % 2;
bool x48 = x47 == 0;
if (x48) {
x43 = true;
x44 = x46;
} else {
x43 = false;
}
} else {
x43 = false;
}
};
void x73() {
bool x63 = x43;
if (x63) {
x61 = true;
int x65 = x44;
int x66 = x65 + 1;
x62 = x66;
} else {
x61 = false;
}
};
void top1(uint8_t* x86,int x87) {
uint8_t* x88 = x86;
int x89 = x87;
x29(x88,x89);
x42();
x60();
x73();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
