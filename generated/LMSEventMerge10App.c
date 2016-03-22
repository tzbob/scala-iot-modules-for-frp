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
SM_DATA(module1) bool x71;
SM_DATA(module1) int32_t x72;
SM_DATA(module1) bool x84;
SM_DATA(module1) int32_t x85;
SM_DATA(module1) bool x111;
SM_DATA(module1) int32_t x112;
SM_DATA(module1) bool x124;
SM_DATA(module1) int32_t x125;
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
printf("%s\n","mleft");
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
printf("%s\n","mright");
int32_t x49 = x47 + 3;
x44 = x49;
} else {
x43 = false;
}
};
SM_FUNC(module1) void x70 () {
bool x59 = x29;
if (x59) {
x57 = true;
int32_t x61 = x30;
printf("%s\n","mleftleft");
int32_t x63 = x61 * 2;
x58 = x63;
} else {
x57 = false;
}
};
SM_FUNC(module1) void x83 () {
bool x73 = x29;
if (x73) {
x71 = true;
int32_t x75 = x30;
printf("%s\n","mleftright");
x72 = x75;
} else {
x71 = false;
}
};
SM_FUNC(module1) void x110 () {
bool x86 = x57;
bool x87 = x71;
bool x88 = x86 && x87;
if (x88) {
x84 = true;
int32_t x90 = x58;
int32_t x91 = x72;
printf("%s\n","mleftmerge");
int32_t x93 = x90 + x91;
x85 = x93;
} else {
if (x86) {
x84 = true;
int32_t x90 = x58;
x85 = x90;
} else {
if (x87) {
x84 = true;
int32_t x91 = x72;
x85 = x91;
} else {
x84 = false;
}
}
}
};
SM_FUNC(module1) void x123 () {
bool x113 = x84;
if (x113) {
x111 = true;
int32_t x115 = x85;
printf("%s\n","e1");
x112 = x115;
} else {
x111 = false;
}
};
SM_FUNC(module1) void x150 () {
bool x126 = x84;
bool x127 = x43;
bool x128 = x126 && x127;
if (x128) {
x124 = true;
int32_t x130 = x85;
int32_t x131 = x44;
printf("%s\n","e2");
int32_t x133 = x130 + x131;
x125 = x133;
} else {
if (x126) {
x124 = true;
int32_t x130 = x85;
x125 = x130;
} else {
if (x127) {
x124 = true;
int32_t x131 = x44;
x125 = x131;
} else {
x124 = false;
}
}
}
};
SM_INPUT(module1,x165,x151,x152) {
uint8_t* x153 = x151;
int32_t x154 = x152;
x28(x153,x154);
x42();
x56();
x70();
x83();
x110();
x123();
x150();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
