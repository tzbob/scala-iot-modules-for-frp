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
bool x58;
int32_t x59;
bool x70;
int32_t x71;
int32_t x82 = 1;
int32_t x92 = 1;
int32_t x102 = x92;
int32_t x103 = x82;
int32_t x104 = x102 * x103;
int32_t x105 = x104;
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
void x72 () {
bool x73 = x0;
if (x73) {
x70 = true;
int32_t x75 = x1;
x71 = 1;
} else {
x70 = false;
}
};
void x93 () {
bool x94 = x70;
if (x94) {
int32_t x95 = x92;
int32_t x96 = x71;
int32_t x97 = x95 + x96;
x92 = x97;
} else {
}
};
void x106 () {
int32_t x107 = x92;
int32_t x108 = x82;
int32_t x109 = x107 * x108;
x105 = x109;
};
SM_INPUT(module1,x122,x112,x113) {
uint8_t* x114 = x112;
int32_t x115 = x113;
x2(x114,x115);
x72();
x93();
x106();
};
void x31 (uint8_t* x32,int32_t x33) {
int32_t x36 = 0;
int32_t x37 = 0;
int32_t x35 = x33;
uint8_t* x34 = x32;
for (;;) {
int32_t x38 = x37;
bool x39 = x38 < x35;
if (!x39) break;
int32_t x41 = x37;
uint8_t x42 = x34[x41];
int32_t x46 = x36;
int32_t x43 = (int32_t ) x42;
int32_t x44 = x41 * 8;
int32_t x45 = x43 << x44;
int32_t x47 = x46 + x45;
x36 = x47;
int32_t x49 = x41 + 1;
x37 = x49;
}
x29 = true;
int32_t x54 = x36;
int32_t x55 = (int32_t ) x54;
x30 = x55;
};
void x60 () {
bool x61 = x29;
if (x61) {
x58 = true;
int32_t x63 = x30;
x59 = 2;
} else {
x58 = false;
}
};
void x83 () {
bool x84 = x58;
if (x84) {
int32_t x85 = x82;
int32_t x86 = x59;
int32_t x87 = x85 + x86;
x82 = x87;
} else {
}
};
SM_INPUT(module1,x134,x124,x125) {
uint8_t* x126 = x124;
int32_t x127 = x125;
x31(x126,x127);
x60();
x83();
x106();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
