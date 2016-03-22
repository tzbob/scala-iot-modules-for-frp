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
SM_DATA(module1) bool x41;
SM_DATA(module1) int32_t x42;
SM_DATA(module1) bool x53;
SM_DATA(module1) int32_t x54;
SM_DATA(module1) bool x79;
SM_DATA(module1) int32_t x80;
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
SM_FUNC(module1) void x40 () {
bool x31 = x0;
if (x31) {
x29 = true;
int32_t x33 = x1;
x30 = 1;
} else {
x29 = false;
}
};
SM_FUNC(module1) void x52 () {
bool x43 = x0;
if (x43) {
x41 = true;
int32_t x45 = x1;
x42 = 2;
} else {
x41 = false;
}
};
SM_FUNC(module1) void x78 () {
bool x55 = x29;
bool x56 = x41;
bool x57 = x55 && x56;
if (x57) {
x53 = true;
int32_t x59 = x30;
int32_t x60 = x42;
int32_t x61 = x59 + x60;
x54 = x61;
} else {
if (x55) {
x53 = true;
int32_t x59 = x30;
x54 = x59;
} else {
if (x56) {
x53 = true;
int32_t x60 = x42;
x54 = x60;
} else {
x53 = false;
}
}
}
};
SM_FUNC(module1) void x91 () {
bool x81 = x53;
if (x81) {
x79 = true;
int32_t x83 = x54;
int32_t x84 = x83 * 2;
x80 = x84;
} else {
x79 = false;
}
};
SM_INPUT(module1,x103,x92,x93) {
uint8_t* x94 = x92;
int32_t x95 = x93;
x28(x94,x95);
x40();
x52();
x78();
x91();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
