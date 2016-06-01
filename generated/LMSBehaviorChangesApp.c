/*****************************************
  Emitting C Generated Code                  
*******************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <math.h>
#include <stdbool.h>

bool x1;
int x2;
bool x30;
int x31;
bool x44;
int x45;
bool x56;
int x57;
bool x70;
int x71;
int x82;
void x96() {
int x83 = x82;
bool x84 = x83 == 0;
if (x84) {
x31 = 1;
x57 = 10;
x82 = 1;
} else {
}
x70 = false;
x1 = false;
x44 = false;
x30 = false;
x56 = false;
};
void x29(uint8_t* x3,int x4) {
int x7 = 0;
int x8 = 0;
int x6 = x4;
uint8_t* x5 = x3;
for (;;) {
int x9 = x8;
bool x10 = x9 < x6;
if (!x10) break;
int x12 = x8;
uint8_t x13 = x5[x12];
int x17 = x7;
int x14 = (int ) x13;
int x15 = x12 * 8;
int x16 = x14 << x15;
int x18 = x17 + x16;
x7 = x18;
int x20 = x12 + 1;
x8 = x20;
}
x1 = true;
int x25 = x7;
int x26 = (int ) x25;
x2 = x26;
};
void x43() {
bool x32 = x1;
if (x32) {
x30 = true;
int x34 = x2;
int x35 = x31;
int x36 = x34 + x35;
x31 = x36;
} else {
x30 = false;
}
};
void x55() {
bool x46 = x30;
if (x46) {
x44 = true;
int x48 = x31;
x45 = x48;
} else {
x44 = false;
}
};
void x69() {
bool x58 = x44;
if (x58) {
x56 = true;
int x60 = x45;
int x61 = x57;
int x62 = x60 + x61;
x57 = x62;
} else {
x56 = false;
}
};
void x81() {
bool x72 = x56;
if (x72) {
x70 = true;
int x74 = x57;
x71 = x74;
} else {
x70 = false;
}
};
void x116(uint8_t* x109,int x110) {
uint8_t* x111 = x109;
uint8_t x113 = *x111;
printf("%u\n",x113);
};
void x122() {
bool x108 = x70;
if (x108) {
int x117 = x71;
x116((uint8_t*)&x117, sizeof(x117));
} else {
}
};
void x125(uint8_t* x97,int x98) { //top1
x96();
uint8_t* x99 = x97;
int x100 = x98;
x29(x99,x100);
x43();
x55();
x69();
x81();
x122();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
