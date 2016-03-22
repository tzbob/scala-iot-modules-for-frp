/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool x0;
int32_t x1;
bool x29;
int32_t x30;
int32_t x41 = 1;
void x2 (uint8_t* x3,int32_t x4) {
int32_t x7 = 0;
int32_t x8 = 0;
int32_t x6 = x4;
uint8_t* x5 = x3;
for (;;) {
int32_t x9 = x8;
bool x10 = x9 < x6;
if (!x10) break;
int32_t x12 = x8;
uint8_t x13 = x5[x12];
int32_t x17 = x7;
int32_t x14 = (int32_t ) x13;
int32_t x15 = x12 * 8;
int32_t x16 = x14 << x15;
int32_t x18 = x17 + x16;
x7 = x18;
int32_t x20 = x12 + 1;
x8 = x20;
}
x0 = true;
int32_t x25 = x7;
int32_t x26 = (int32_t ) x25;
x1 = x26;
};
void x31 () {
bool x32 = x0;
if (x32) {
x29 = true;
int32_t x34 = x1;
x30 = 5;
} else {
x29 = false;
}
};
void x42 () {
bool x43 = x29;
if (x43) {
int32_t x44 = x41;
int32_t x45 = x30;
int32_t x46 = x44 + x45;
x41 = x46;
} else {
}
};
SM_INPUT(module1,x60,x51,x52) {
uint8_t* x53 = x51;
int32_t x54 = x52;
x2(x53,x54);
x31();
x42();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
