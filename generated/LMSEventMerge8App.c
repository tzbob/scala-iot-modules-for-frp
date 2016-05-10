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
bool x76;
int x77;
bool x94;
int x95;
bool x108;
int x109;
bool x121;
int x122;
bool x148;
int x149;
bool x162;
int x163;
bool x189;
int x190;
bool x203;
int x204;
int x217;
void x236() {
int x218 = x217;
bool x219 = x218 == 0;
if (x219) {
x217 = 1;
} else {
}
x58 = false;
x162 = false;
x1 = false;
x94 = false;
x30 = false;
x44 = false;
x189 = false;
x121 = false;
x76 = false;
x203 = false;
x148 = false;
x108 = false;
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
printf("%s\n","map9");
int x36 = x34 + 10;
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
printf("%s\n","map2");
int x50 = x48 + 1;
x45 = x50;
} else {
x44 = false;
}
};
void x75() {
bool x60 = x44;
if (x60) {
int x61 = x45;
printf("%s\n","filter5");
bool x63 = x61 == 1;
if (x63) {
x58 = true;
x59 = x61;
} else {
x58 = false;
}
} else {
x58 = false;
}
};
void x93() {
bool x78 = x44;
if (x78) {
int x79 = x45;
printf("%s\n","filter3");
bool x81 = x79 == 1;
if (x81) {
x76 = true;
x77 = x79;
} else {
x76 = false;
}
} else {
x76 = false;
}
};
void x107() {
bool x96 = x58;
if (x96) {
x94 = true;
int x98 = x59;
printf("%s\n","map6");
int x100 = x98 * 2;
x95 = x100;
} else {
x94 = false;
}
};
void x120() {
bool x110 = x76;
if (x110) {
x108 = true;
int x112 = x77;
printf("%s\n","constant4");
x109 = 2;
} else {
x108 = false;
}
};
void x147() {
bool x123 = x108;
bool x124 = x94;
bool x125 = x123 && x124;
if (x125) {
x121 = true;
int x127 = x109;
int x128 = x95;
printf("%s\n","merge7");
int x130 = x127 + x128;
x122 = x130;
} else {
if (x123) {
x121 = true;
int x127 = x109;
x122 = x127;
} else {
if (x124) {
x121 = true;
int x128 = x95;
x122 = x128;
} else {
x121 = false;
}
}
}
};
void x161() {
bool x150 = x121;
if (x150) {
x148 = true;
int x152 = x122;
printf("%s\n","map8");
int x154 = x152 + 3;
x149 = x154;
} else {
x148 = false;
}
};
void x188() {
bool x164 = x148;
bool x165 = x30;
bool x166 = x164 && x165;
if (x166) {
x162 = true;
int x168 = x149;
int x169 = x31;
printf("%s\n","merge10");
int x171 = x168 + x169;
x163 = x171;
} else {
if (x164) {
x162 = true;
int x168 = x149;
x163 = x168;
} else {
if (x165) {
x162 = true;
int x169 = x31;
x163 = x169;
} else {
x162 = false;
}
}
}
};
void x202() {
bool x191 = x162;
if (x191) {
x189 = true;
int x193 = x163;
printf("%s\n","map12");
int x195 = x193 * 2;
x190 = x195;
} else {
x189 = false;
}
};
void x216() {
bool x205 = x162;
if (x205) {
x203 = true;
int x207 = x163;
printf("%s\n","map11");
int x209 = x207 * 2;
x204 = x209;
} else {
x203 = false;
}
};
void x263(uint8_t* x256,int x257) {
uint8_t* x258 = x256;
uint8_t x260 = *x258;
printf("%u\n",x260);
};
void x269() {
bool x255 = x189;
if (x255) {
int x264 = x190;
x263((uint8_t*)&x264, sizeof(x264));
} else {
}
};
void x272(uint8_t* x237,int x238) { //top1
x236();
uint8_t* x239 = x237;
int x240 = x238;
x29(x239,x240);
x43();
x57();
x75();
x93();
x107();
x120();
x147();
x161();
x188();
x202();
x216();
x269();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
