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
bool x42;
int x43;
bool x54;
int x55;
bool x73;
int x74;
bool x92;
int x93;
bool x106;
int x107;
bool x120;
int x121;
bool x147;
int x148;
int x161;
void x177() {
int x162 = x161;
bool x163 = x162 == 0;
if (x163) {
x161 = 1;
} else {
}
x30 = false;
x1 = false;
x54 = false;
x147 = false;
x42 = false;
x92 = false;
x73 = false;
x120 = false;
x106 = false;
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
void x41() {
bool x32 = x1;
if (x32) {
x30 = true;
int x34 = x2;
x31 = 2;
} else {
x30 = false;
}
};
void x53() {
bool x44 = x1;
if (x44) {
x42 = true;
int x46 = x2;
x43 = 1;
} else {
x42 = false;
}
};
void x72() {
bool x56 = x30;
if (x56) {
int x57 = x31;
printf("%s\n","filter6");
int x59 = x57 % 2;
bool x60 = x59 == 0;
if (x60) {
x54 = true;
x55 = x57;
} else {
x54 = false;
}
} else {
x54 = false;
}
};
void x91() {
bool x75 = x42;
if (x75) {
int x76 = x43;
printf("%s\n","filter3");
int x78 = x76 % 2;
bool x79 = x78 == 0;
if (x79) {
x73 = true;
x74 = x76;
} else {
x73 = false;
}
} else {
x73 = false;
}
};
void x105() {
bool x94 = x54;
if (x94) {
x92 = true;
int x96 = x55;
printf("%s\n","map7");
int x98 = x96 + 1;
x93 = x98;
} else {
x92 = false;
}
};
void x119() {
bool x108 = x73;
if (x108) {
x106 = true;
int x110 = x74;
printf("%s\n","map4");
int x112 = x110 + 1;
x107 = x112;
} else {
x106 = false;
}
};
void x146() {
bool x122 = x106;
bool x123 = x92;
bool x124 = x122 && x123;
if (x124) {
x120 = true;
int x126 = x107;
int x127 = x93;
printf("%s\n","merge8");
int x129 = x126 + x127;
x121 = x129;
} else {
if (x122) {
x120 = true;
int x126 = x107;
x121 = x126;
} else {
if (x123) {
x120 = true;
int x127 = x93;
x121 = x127;
} else {
x120 = false;
}
}
}
};
void x160() {
bool x149 = x120;
if (x149) {
x147 = true;
int x151 = x121;
printf("%s\n","map9");
int x153 = x151 * 2;
x148 = x153;
} else {
x147 = false;
}
};
void x201(uint8_t* x194,int x195) {
uint8_t* x196 = x194;
uint8_t x198 = *x196;
printf("%u\n",x198);
};
void x207() {
bool x193 = x147;
if (x193) {
int x202 = x148;
x201((uint8_t*)&x202, sizeof(x202));
} else {
}
};
void x210(uint8_t* x178,int x179) { //top1
x177();
uint8_t* x180 = x178;
int x181 = x179;
x29(x180,x181);
x41();
x53();
x72();
x91();
x105();
x119();
x146();
x160();
x207();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
