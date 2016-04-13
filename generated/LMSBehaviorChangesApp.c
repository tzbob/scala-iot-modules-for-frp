/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
SM_DATA(module1) bool x0;
SM_DATA(module1) int x1;
SM_DATA(module1) int x29;
SM_DATA(module1) bool x39;
SM_DATA(module1) int x40;
SM_DATA(module1) int x46;
SM_DATA(module1) int x56;
SM_FUNC(module1) void x65 () {
int x57 = x56;
bool x58 = x57 == 0;
if (x58) {
x29 = 1;
x46 = 10;
x56 = 1;
} else {
}
}
SM_FUNC(module1) void x28 (uint8_t* x2,int x3) {
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
}
SM_FUNC(module1) void x38 () {
bool x30 = x0;
if (x30) {
int x31 = x29;
int x32 = x1;
int x33 = x31 + x32;
x29 = x33;
} else {
}
}
SM_FUNC(module1) void x45 () {
x39 = true;
int x42 = x29;
x40 = x42;
}
SM_FUNC(module1) void x55 () {
bool x47 = x39;
if (x47) {
int x48 = x46;
int x49 = x40;
int x50 = x48 + x49;
x46 = x50;
} else {
}
}
SM_INPUT(module1,top1,x66,x67) {
x65();
uint8_t* x68 = x66;
int x69 = x67;
x28(x68,x69);
x38();
x45();
x55();
}
/*****************************************
  End of C Generated Code                  
*******************************************/
