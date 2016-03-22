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
int32_t x58 = 0;
bool x68;
int32_t x69;
int32_t x80 = 0;
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
void x59 () {
bool x60 = x0;
if (x60) {
int32_t x61 = x58;
int32_t x62 = x1;
int32_t x63 = x61 + x62;
x58 = x63;
} else {
}
};
SM_INPUT(module1,x98,x90,x91) {
uint8_t* x92 = x90;
int32_t x93 = x91;
x2(x92,x93);
x59();
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
void x70 () {
bool x71 = x29;
if (x71) {
x68 = true;
int32_t x73 = x58;
x69 = x73;
} else {
x68 = false;
}
};
void x81 () {
bool x82 = x68;
if (x82) {
int32_t x83 = x80;
int32_t x84 = x69;
int32_t x85 = x83 + x84;
x80 = x85;
} else {
}
};
SM_INPUT(module1,x109,x100,x101) {
uint8_t* x102 = x100;
int32_t x103 = x101;
x31(x102,x103);
x70();
x81();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
