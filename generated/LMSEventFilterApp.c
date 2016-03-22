/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
SM_DATA(module1) bool x0;
SM_DATA(module1) int32_t x1;
SM_DATA(module1) bool x29;
SM_DATA(module1) int32_t x30;
SM_DATA(module1) bool x42;
SM_DATA(module1) int32_t x43;
SM_DATA(module1) bool x60;
SM_DATA(module1) int32_t x61;
SM_FUNC(module1) void x28 (uint8_t* x2,int32_t x3) {
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
SM_FUNC(module1) void x41 () {
bool x31 = x0;
if (x31) {
x29 = true;
int32_t x33 = x1;
int32_t x34 = 2 * x33;
x30 = x34;
} else {
x29 = false;
}
};
SM_FUNC(module1) void x59 () {
bool x44 = x29;
if (x44) {
int32_t x45 = x30;
int32_t x46 = x45 % 2;
bool x47 = x46 == 0;
if (x47) {
x42 = true;
x43 = x45;
} else {
x42 = false;
}
} else {
x42 = false;
}
};
SM_FUNC(module1) void x72 () {
bool x62 = x42;
if (x62) {
x60 = true;
int32_t x64 = x43;
int32_t x65 = x64 + 1;
x61 = x65;
} else {
x60 = false;
}
};
SM_INPUT(module1,x83,x73,x74) {
uint8_t* x75 = x73;
int32_t x76 = x74;
x28(x75,x76);
x41();
x59();
x72();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
