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
SM_DATA(module1) bool x58;
SM_DATA(module1) int32_t x59;
SM_DATA(module1) bool x72;
SM_DATA(module1) int32_t x73;
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
SM_FUNC(module1) void x71 () {
bool x60 = x0;
if (x60) {
x58 = true;
int32_t x62 = x1;
printf("%s\n","m1");
int32_t x64 = x62 * 2;
x59 = x64;
} else {
x58 = false;
}
};
SM_INPUT(module1,x94,x86,x87) {
uint8_t* x88 = x86;
int32_t x89 = x87;
x28(x88,x89);
x71();
};
SM_FUNC(module1) void x57 (uint8_t* x31,int32_t x32) {
int32_t x35 = 0;
int32_t x36 = 0;
int32_t x34 = x32;
uint8_t* x33 = x31;
for (;;) {
int32_t x37 = x36;
bool x38 = x37 < x34;
if (!x38) break;
int32_t x40 = x36;
uint8_t x41 = x33[x40];
int32_t x45 = x35;
int32_t x42 = (int32_t ) x41;
int32_t x43 = x40 * 8;
int32_t x44 = x42 << x43;
int32_t x46 = x45 + x44;
x35 = x46;
int32_t x48 = x40 + 1;
x36 = x48;
}
x29 = true;
int32_t x53 = x35;
int32_t x54 = (int32_t ) x53;
x30 = x54;
};
SM_FUNC(module1) void x85 () {
bool x74 = x29;
if (x74) {
x72 = true;
int32_t x76 = x30;
printf("%s\n","m2");
int32_t x78 = x76 * 2;
x73 = x78;
} else {
x72 = false;
}
};
SM_INPUT(module1,x104,x96,x97) {
uint8_t* x98 = x96;
int32_t x99 = x97;
x57(x98,x99);
x85();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
