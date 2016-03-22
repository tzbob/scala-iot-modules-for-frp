/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool x0;
int32_t x1;
int32_t x29;
bool x39;
int32_t x40;
int32_t x46;
void x28(uint8_t* x2,int32_t x3) {
int32_t x6 = 0;
int32_t x7 = 0;
int32_t x5 = x3;
uint8_t* x4 = x2;
for (;;) {
int32_t x8 = x7;
bool x9 = x8 < x5;
if (!x9) break;
int32_t x11 = x7;
uint8_t x12 = x4[x11];
int32_t x16 = x6;
int32_t x13 = (int32_t ) x12;
int32_t x14 = x11 * 8;
int32_t x15 = x13 << x14;
int32_t x17 = x16 + x15;
x6 = x17;
int32_t x19 = x11 + 1;
x7 = x19;
}
x0 = true;
int32_t x24 = x6;
int32_t x25 = (int32_t ) x24;
x1 = x25;
};
void x38 () {
bool x30 = x0;
if (x30) {
int32_t x31 = x29;
int32_t x32 = x1;
int32_t x33 = x31 + x32;
x29 = x33;
} else {
}
};
void x45() {
x39 = true;
int32_t x42 = x29;
x40 = x42;
};
void x55 () {
bool x47 = x39;
if (x47) {
int32_t x48 = x46;
int32_t x49 = x40;
int32_t x50 = x48 + x49;
x46 = x50;
} else {
}
};
void x66(uint8_t* x56,int32_t x57) {
uint8_t* x58 = x56;
int32_t x59 = x57;
x28(x58,x59);
x38();
x45();
x55();
};
void x71() {
x29 = 1;
x46 = 10;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
