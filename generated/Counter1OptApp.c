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
void x219(uint8_t* x212,int x213) {
uint8_t* x214 = x212;
uint8_t x216 = *x214;
printf("%u\n",x216);
};
void x224(int x208,bool x209) {
bool x211 = x209;
if (x211) {
int x210 = x208;
x219((uint8_t*)&x210, sizeof(x210));
} else {
}
};
void x229(uint8_t* x164,int x165) { //top1
x163();
bool x170 = false;
int x171;
int x172 = x171;
int* x173 = &x172;
bool x174 = x170;
bool* x175 = &x174;
uint8_t* x166 = x164;
int x167 = x165;
x31(x166,x167,x173,x175);
bool x178 = false;
int x179;
int x180;
bool x181 = false;
int x182 = x180;
bool x183 = x181;
int x184 = x179;
int* x185 = &x184;
bool x186 = x178;
bool* x187 = &x186;
x111(x172,x174,x182,x183,x185,x187);
bool x190 = false;
int x191;
int x192 = x191;
int* x193 = &x192;
bool x194 = x190;
bool* x195 = &x194;
x133(x184,x186,x193,x195);
x145(x192,x194);
bool x200 = false;
int x201;
int x202 = x201;
int* x203 = &x202;
bool x204 = x200;
bool* x205 = &x204;
x154(x203,x205);
x224(x202,x204);
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
void x287(uint8_t* x231,int x232) { //top2
x163();
bool x237 = false;
int x238;
int x239 = x238;
int* x240 = &x239;
bool x241 = x237;
bool* x242 = &x241;
uint8_t* x233 = x231;
int x234 = x232;
x62(x233,x234,x240,x242);
bool x245 = false;
int x246;
int x247 = x246;
int* x248 = &x247;
bool x249 = x245;
bool* x250 = &x249;
x79(x239,x241,x248,x250);
bool x253 = false;
int x254;
int x255;
bool x256 = false;
int x257 = x255;
bool x258 = x256;
int x259 = x254;
int* x260 = &x259;
bool x261 = x253;
bool* x262 = &x261;
x111(x257,x258,x247,x249,x260,x262);
bool x265 = false;
int x266;
int x267 = x266;
int* x268 = &x267;
bool x269 = x265;
bool* x270 = &x269;
x133(x259,x261,x268,x270);
x145(x267,x269);
bool x275 = false;
int x276;
int x277 = x276;
int* x278 = &x277;
bool x279 = x275;
bool* x280 = &x279;
x154(x278,x280);
x224(x277,x279);
};
/*****************************************
  End of C Generated Code                  
*******************************************/
