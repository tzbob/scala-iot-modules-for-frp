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
bool x58;
int x59;
bool x72;
int x73;
bool x85;
int x86;
bool x112;
int x113;
bool x125;
int x126;
int x152;
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
printf("%s\n","mleft");
int x36 = x34 * 2;
x31 = x36;
} else {
x30 = false;
}
};
void x57() {
bool x46 = x1;
if (x46) {
x44 = true;
int x48 = x2;
printf("%s\n","mright");
int x50 = x48 + 3;
x45 = x50;
} else {
x44 = false;
}
};
void x71() {
bool x60 = x30;
if (x60) {
x58 = true;
int x62 = x31;
printf("%s\n","mleftleft");
int x64 = x62 * 2;
x59 = x64;
} else {
x58 = false;
}
};
void x84() {
bool x74 = x30;
if (x74) {
x72 = true;
int x76 = x31;
printf("%s\n","mleftright");
x73 = x76;
} else {
x72 = false;
}
};
void x111() {
bool x87 = x58;
bool x88 = x72;
bool x89 = x87 && x88;
if (x89) {
x85 = true;
int x91 = x59;
int x92 = x73;
printf("%s\n","mleftmerge");
int x94 = x91 + x92;
x86 = x94;
} else {
if (x87) {
x85 = true;
int x91 = x59;
x86 = x91;
} else {
if (x88) {
x85 = true;
int x92 = x73;
x86 = x92;
} else {
x85 = false;
}
}
}
};
void x124() {
bool x114 = x85;
if (x114) {
x112 = true;
int x116 = x86;
printf("%s\n","e1");
x113 = x116;
} else {
x112 = false;
}
};
void x151() {
bool x127 = x85;
bool x128 = x44;
bool x129 = x127 && x128;
if (x129) {
x125 = true;
int x131 = x86;
int x132 = x45;
printf("%s\n","e2");
int x134 = x131 + x132;
x126 = x134;
} else {
if (x127) {
x125 = true;
int x131 = x86;
x126 = x131;
} else {
if (x128) {
x125 = true;
int x132 = x45;
x126 = x132;
} else {
x125 = false;
}
}
}
};
void top1(uint8_t* x168,int x169) {
uint8_t* x170 = x168;
int x171 = x169;
x29(x170,x171);
x43();
x57();
x71();
x84();
x111();
x124();
x151();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
