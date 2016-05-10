/*****************************************
  Emitting C Generated Code                  
*******************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <math.h>
#include <stdbool.h>

int x134;
int x155;
void x163() {
int x156 = x155;
bool x157 = x156 == 0;
if (x157) {
x134 = 0;
x155 = 1;
} else {
}
};
void x31(uint8_t* x1,int x2,int* x3,bool* x4) {
int x9 = 0;
int x10 = 0;
int x6 = x2;
uint8_t* x5 = x1;
for (;;) {
int x11 = x10;
bool x12 = x11 < x6;
if (!x12) break;
int x14 = x10;
uint8_t x15 = x5[x14];
int x19 = x9;
int x16 = (int ) x15;
int x17 = x14 * 8;
int x18 = x16 << x17;
int x20 = x19 + x18;
x9 = x20;
int x22 = x14 + 1;
x10 = x22;
}
bool* x8 = x4;
*x8 = true;
int x27 = x9;
int* x7 = x3;
int x28 = (int ) x27;
*x7 = x28;
};
void x111(int x80,bool x81,int x82,bool x83,int* x84,bool* x85) {
bool x87 = x81;
bool x89 = x83;
bool x92 = x87 && x89;
if (x92) {
bool* x91 = x85;
*x91 = true;
int* x90 = x84;
int x86 = x80;
int x88 = x82;
int x94 = x86 + x88;
*x90 = x94;
} else {
if (x87) {
bool* x91 = x85;
*x91 = true;
int* x90 = x84;
int x86 = x80;
*x90 = x86;
} else {
if (x89) {
bool* x91 = x85;
*x91 = true;
int* x90 = x84;
int x88 = x82;
*x90 = x88;
} else {
bool* x91 = x85;
*x91 = false;
}
}
}
};
void x133(int x112,bool x113,int* x114,bool* x115) {
bool x117 = x113;
if (x117) {
int x116 = x112;
int x120 = fabs(x116);
bool x121 = x120 < 10;
if (x121) {
bool* x119 = x115;
*x119 = true;
int* x118 = x114;
*x118 = x116;
} else {
bool* x119 = x115;
*x119 = false;
}
} else {
bool* x119 = x115;
*x119 = true;
}
};
void x145(int x135,bool x136) {
bool x138 = x136;
if (x138) {
int x139 = x134;
int x137 = x135;
int x140 = x139 + x137;
x134 = x140;
} else {
}
};
void x154(int* x146,bool* x147) {
bool* x149 = x147;
*x149 = true;
int x151 = x134;
int* x148 = x146;
*x148 = x151;
};
void x218(uint8_t* x211,int x212) {
uint8_t* x213 = x211;
uint8_t x215 = *x213;
printf("%u\n",x215);
};
void x223(int x207,bool x208) {
bool x210 = x208;
if (x210) {
int x209 = x207;
x218((uint8_t*)&x209, sizeof(x209));
} else {
}
};
void x227(uint8_t* x164,int x165) { //top1
x163();
bool x169 = false;
int x170;
int x171 = x170;
int* x172 = &x171;
bool x173 = x169;
bool* x174 = &x173;
uint8_t* x166 = x164;
int x167 = x165;
x31(x166,x167,x172,x174);
bool x177 = false;
int x178;
int x179;
bool x180 = false;
int x181 = x179;
bool x182 = x180;
int x183 = x178;
int* x184 = &x183;
bool x185 = x177;
bool* x186 = &x185;
x111(x171,x173,x181,x182,x184,x186);
bool x189 = false;
int x190;
int x191 = x190;
int* x192 = &x191;
bool x193 = x189;
bool* x194 = &x193;
x133(x183,x185,x192,x194);
x145(x191,x193);
bool x199 = false;
int x200;
int x201 = x200;
int* x202 = &x201;
bool x203 = x199;
bool* x204 = &x203;
x154(x202,x204);
x223(x201,x203);
};
void x62(uint8_t* x32,int x33,int* x34,bool* x35) {
int x40 = 0;
int x41 = 0;
int x37 = x33;
uint8_t* x36 = x32;
for (;;) {
int x42 = x41;
bool x43 = x42 < x37;
if (!x43) break;
int x45 = x41;
uint8_t x46 = x36[x45];
int x50 = x40;
int x47 = (int ) x46;
int x48 = x45 * 8;
int x49 = x47 << x48;
int x51 = x50 + x49;
x40 = x51;
int x53 = x45 + 1;
x41 = x53;
}
bool* x39 = x35;
*x39 = true;
int x58 = x40;
int* x38 = x34;
int x59 = (int ) x58;
*x38 = x59;
};
void x79(int x63,bool x64,int* x65,bool* x66) {
bool x68 = x64;
if (x68) {
bool* x70 = x66;
*x70 = true;
int* x69 = x65;
int x67 = x63;
int x72 = 0 - x67;
*x69 = x72;
} else {
bool* x70 = x66;
*x70 = false;
}
};
void x283(uint8_t* x229,int x230) { //top2
x163();
bool x234 = false;
int x235;
int x236 = x235;
int* x237 = &x236;
bool x238 = x234;
bool* x239 = &x238;
uint8_t* x231 = x229;
int x232 = x230;
x62(x231,x232,x237,x239);
bool x242 = false;
int x243;
int x244 = x243;
int* x245 = &x244;
bool x246 = x242;
bool* x247 = &x246;
x79(x236,x238,x245,x247);
bool x250 = false;
int x251;
int x252;
bool x253 = false;
int x254 = x252;
bool x255 = x253;
int x256 = x251;
int* x257 = &x256;
bool x258 = x250;
bool* x259 = &x258;
x111(x254,x255,x244,x246,x257,x259);
bool x262 = false;
int x263;
int x264 = x263;
int* x265 = &x264;
bool x266 = x262;
bool* x267 = &x266;
x133(x256,x258,x265,x267);
x145(x264,x266);
bool x272 = false;
int x273;
int x274 = x273;
int* x275 = &x274;
bool x276 = x272;
bool* x277 = &x276;
x154(x275,x277);
x223(x274,x276);
};
/*****************************************
  End of C Generated Code                  
*******************************************/
