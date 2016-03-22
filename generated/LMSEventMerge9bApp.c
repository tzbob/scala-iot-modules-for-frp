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
SM_DATA(module1) bool x43;
SM_DATA(module1) int32_t x44;
SM_DATA(module1) bool x57;
SM_DATA(module1) int32_t x58;
SM_DATA(module1) bool x84;
SM_DATA(module1) int32_t x85;
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
SM_FUNC(module1) void x42 () {
bool x31 = x0;
if (x31) {
x29 = true;
int32_t x33 = x1;
printf("%s\n","map2");
int32_t x35 = x33 * 2;
x30 = x35;
} else {
x29 = false;
}
};
SM_FUNC(module1) void x56 () {
bool x45 = x0;
if (x45) {
x43 = true;
int32_t x47 = x1;
printf("%s\n","map3");
int32_t x49 = x47 * 2;
x44 = x49;
} else {
x43 = false;
}
};
SM_FUNC(module1) void x83 () {
bool x59 = x29;
bool x60 = x43;
bool x61 = x59 && x60;
if (x61) {
x57 = true;
int32_t x63 = x30;
int32_t x64 = x44;
printf("%s\n","merge4");
int32_t x66 = x63 + x64;
x58 = x66;
} else {
if (x59) {
x57 = true;
int32_t x63 = x30;
x58 = x63;
} else {
if (x60) {
x57 = true;
int32_t x64 = x44;
x58 = x64;
} else {
x57 = false;
}
}
}
};
SM_FUNC(module1) void x110 () {
bool x86 = x43;
bool x87 = x57;
bool x88 = x86 && x87;
if (x88) {
x84 = true;
int32_t x90 = x44;
int32_t x91 = x58;
printf("%s\n","merge5");
int32_t x93 = x90 + x91;
x85 = x93;
} else {
if (x86) {
x84 = true;
int32_t x90 = x44;
x85 = x90;
} else {
if (x87) {
x84 = true;
int32_t x91 = x58;
x85 = x91;
} else {
x84 = false;
}
}
}
};
SM_INPUT(module1,x122,x111,x112) {
uint8_t* x113 = x111;
int32_t x114 = x112;
x28(x113,x114);
x42();
x56();
x83();
x110();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
