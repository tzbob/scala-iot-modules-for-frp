/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool x0;
int32_t x1;
int32_t x29 = 1;
bool x39;
int32_t x40;
int32_t x46 = 10;
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
void x30 () {
bool x31 = x0;
if (x31) {
int32_t x32 = x29;
int32_t x33 = x1;
int32_t x34 = x32 + x33;
x29 = x34;
} else {
}
};
void x41 () {
x39 = true;
int32_t x43 = x29;
x40 = x43;
};
void x47 () {
bool x48 = x39;
if (x48) {
int32_t x49 = x46;
int32_t x50 = x40;
int32_t x51 = x49 + x50;
x46 = x51;
} else {
}
};
SM_INPUT(module1,x66,x56,x57) {
uint8_t* x58 = x56;
int32_t x59 = x57;
x2(x58,x59);
x30();
x41();
x47();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
