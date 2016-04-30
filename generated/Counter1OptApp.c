/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
int x133;
int x154;
void x162() {
int x155 = x154;
bool x156 = x155 == 0;
if (x156) {
x133 = 0;
x154 = 1;
} else {
}
};
void x30(uint8_t* x0,int x1,int* x2,bool* x3) {
int x8 = 0;
int x9 = 0;
int x5 = x1;
uint8_t* x4 = x0;
for (;;) {
int x10 = x9;
bool x11 = x10 < x5;
if (!x11) break;
int x13 = x9;
uint8_t x14 = x4[x13];
int x18 = x8;
int x15 = (int ) x14;
int x16 = x13 * 8;
int x17 = x15 << x16;
int x19 = x18 + x17;
x8 = x19;
int x21 = x13 + 1;
x9 = x21;
}
bool* x7 = x3;
*x7 = true;
int x26 = x8;
int* x6 = x2;
int x27 = (int ) x26;
*x6 = x27;
};
void x110(int x79,bool x80,int x81,bool x82,int* x83,bool* x84) {
bool x86 = x80;
bool x88 = x82;
bool x91 = x86 && x88;
if (x91) {
bool* x90 = x84;
*x90 = true;
int* x89 = x83;
int x85 = x79;
int x87 = x81;
int x93 = x85 + x87;
*x89 = x93;
} else {
if (x86) {
bool* x90 = x84;
*x90 = true;
int* x89 = x83;
int x85 = x79;
*x89 = x85;
} else {
if (x88) {
bool* x90 = x84;
*x90 = true;
int* x89 = x83;
int x87 = x81;
*x89 = x87;
} else {
bool* x90 = x84;
*x90 = false;
}
}
}
};
void x132(int x111,bool x112,int* x113,bool* x114) {
bool x116 = x112;
if (x116) {
int x115 = x111;
int x119 = fabs(x115);
bool x120 = x119 < 10;
if (x120) {
bool* x118 = x114;
*x118 = true;
int* x117 = x113;
*x117 = x115;
} else {
bool* x118 = x114;
*x118 = false;
}
} else {
bool* x118 = x114;
*x118 = true;
}
};
void x144(int x134,bool x135) {
bool x137 = x135;
if (x137) {
int x138 = x133;
int x136 = x134;
int x139 = x138 + x136;
x133 = x139;
} else {
}
};
void x153(int* x145,bool* x146) {
bool* x148 = x146;
*x148 = true;
int x150 = x133;
int* x147 = x145;
*x147 = x150;
};
void x217(uint8_t* x210,int x211) {
uint8_t* x212 = x210;
uint8_t x214 = *x212;
printf("%u\n",x214);
};
void x222(int x206,bool x207) {
bool x209 = x207;
if (x209) {
int x208 = x206;
x217((uint8_t*)&x208, sizeof(x208));
} else {
}
};
void top1(uint8_t* x163,int x164) {
x162();
bool x168 = false;
int x169;
int x170 = x169;
int* x171 = &x170;
bool x172 = x168;
bool* x173 = &x172;
uint8_t* x165 = x163;
int x166 = x164;
x30(x165,x166,x171,x173);
bool x176 = false;
int x177;
int x178;
bool x179 = false;
int x180 = x178;
bool x181 = x179;
int x182 = x177;
int* x183 = &x182;
bool x184 = x176;
bool* x185 = &x184;
x110(x170,x172,x180,x181,x183,x185);
bool x188 = false;
int x189;
int x190 = x189;
int* x191 = &x190;
bool x192 = x188;
bool* x193 = &x192;
x132(x182,x184,x191,x193);
x144(x190,x192);
bool x198 = false;
int x199;
int x200 = x199;
int* x201 = &x200;
bool x202 = x198;
bool* x203 = &x202;
x153(x201,x203);
x222(x200,x202);
};
void x61(uint8_t* x31,int x32,int* x33,bool* x34) {
int x39 = 0;
int x40 = 0;
int x36 = x32;
uint8_t* x35 = x31;
for (;;) {
int x41 = x40;
bool x42 = x41 < x36;
if (!x42) break;
int x44 = x40;
uint8_t x45 = x35[x44];
int x49 = x39;
int x46 = (int ) x45;
int x47 = x44 * 8;
int x48 = x46 << x47;
int x50 = x49 + x48;
x39 = x50;
int x52 = x44 + 1;
x40 = x52;
}
bool* x38 = x34;
*x38 = true;
int x57 = x39;
int* x37 = x33;
int x58 = (int ) x57;
*x37 = x58;
};
void x78(int x62,bool x63,int* x64,bool* x65) {
bool x67 = x63;
if (x67) {
bool* x69 = x65;
*x69 = true;
int* x68 = x64;
int x66 = x62;
int x71 = 0 - x66;
*x68 = x71;
} else {
bool* x69 = x65;
*x69 = false;
}
};
void top2(uint8_t* x228,int x229) {
x162();
bool x233 = false;
int x234;
int x235 = x234;
int* x236 = &x235;
bool x237 = x233;
bool* x238 = &x237;
uint8_t* x230 = x228;
int x231 = x229;
x61(x230,x231,x236,x238);
bool x241 = false;
int x242;
int x243 = x242;
int* x244 = &x243;
bool x245 = x241;
bool* x246 = &x245;
x78(x235,x237,x244,x246);
bool x249 = false;
int x250;
int x251;
bool x252 = false;
int x253 = x251;
bool x254 = x252;
int x255 = x250;
int* x256 = &x255;
bool x257 = x249;
bool* x258 = &x257;
x110(x253,x254,x243,x245,x256,x258);
bool x261 = false;
int x262;
int x263 = x262;
int* x264 = &x263;
bool x265 = x261;
bool* x266 = &x265;
x132(x255,x257,x264,x266);
x144(x263,x265);
bool x271 = false;
int x272;
int x273 = x272;
int* x274 = &x273;
bool x275 = x271;
bool* x276 = &x275;
x153(x274,x276);
x222(x273,x275);
};
/*****************************************
  End of C Generated Code                  
*******************************************/
