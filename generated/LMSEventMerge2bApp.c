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
SM_DATA(module1) bool x47;
SM_DATA(module1) int32_t x48;
SM_DATA(module1) bool x59;
SM_DATA(module1) int32_t x60;
SM_DATA(module1) bool x71;
SM_DATA(module1) int32_t x72;
SM_DATA(module1) bool x97;
SM_DATA(module1) int32_t x98;
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
SM_FUNC(module1) void x46 () {
bool x31 = x0;
if (x31) {
int32_t x32 = x1;
int32_t x33 = x32 % 2;
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
SM_FUNC(module1) void x58 () {
bool x49 = x0;
if (x49) {
x47 = true;
int32_t x51 = x1;
x48 = 2;
} else {
x47 = false;
}
};
SM_FUNC(module1) void x70 () {
bool x61 = x29;
if (x61) {
x59 = true;
int32_t x63 = x30;
x60 = 1;
} else {
x59 = false;
}
};
SM_FUNC(module1) void x96 () {
bool x73 = x59;
bool x74 = x47;
bool x75 = x73 && x74;
if (x75) {
x71 = true;
int32_t x77 = x60;
int32_t x78 = x48;
int32_t x79 = x77 + x78;
x72 = x79;
} else {
if (x73) {
x71 = true;
int32_t x77 = x60;
x72 = x77;
} else {
if (x74) {
x71 = true;
int32_t x78 = x48;
x72 = x78;
} else {
x71 = false;
}
}
}
};
SM_FUNC(module1) void x109 () {
bool x99 = x71;
if (x99) {
x97 = true;
int32_t x101 = x72;
int32_t x102 = x101 * 2;
x98 = x102;
} else {
x97 = false;
}
};
SM_INPUT(module1,x122,x110,x111) {
uint8_t* x112 = x110;
int32_t x113 = x111;
x28(x112,x113);
x46();
x58();
x70();
x96();
x109();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
