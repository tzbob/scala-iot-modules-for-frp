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
bool x59;
int x60;
bool x71;
int x72;
bool x83;
int x84;
bool x97;
int x98;
bool x111;
int x112;
bool x127;
int x128;
int x139;
void x160() {
int x140 = x139;
bool x141 = x140 == 0;
if (x141) {
x84 = 1;
x98 = 1;
int x144 = x98;
int x145 = x84;
int x146 = x144 + x145;
x112 = x146;
x139 = 1;
} else {
}
x59 = false;
x1 = false;
x71 = false;
x127 = false;
x30 = false;
x83 = false;
x111 = false;
x97 = false;
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
void x82() {
bool x73 = x1;
if (x73) {
x71 = true;
int x75 = x2;
x72 = 1;
} else {
x71 = false;
}
};
void x110() {
bool x99 = x71;
if (x99) {
x97 = true;
int x101 = x72;
int x102 = x98;
int x103 = x101 + x102;
x98 = x103;
} else {
x97 = false;
}
};
void x126() {
bool x113 = x97;
bool x114 = x83;
bool x115 = x113 || x114;
if (x115) {
int x116 = x98;
int x117 = x84;
int x118 = x116 + x117;
x112 = x118;
x111 = true;
} else {
x111 = false;
}
};
void x138() {
bool x129 = x111;
if (x129) {
x127 = true;
int x131 = x112;
x128 = x131;
} else {
x127 = false;
}
};
void x180(uint8_t* x173,int x174) {
uint8_t* x175 = x173;
uint8_t x177 = *x175;
printf("%u\n",x177);
};
void x186() {
bool x172 = x127;
if (x172) {
int x181 = x128;
x180((uint8_t*)&x181, sizeof(x181));
} else {
}
};
void x189(uint8_t* x161,int x162) { //top1
x160();
uint8_t* x163 = x161;
int x164 = x162;
x29(x163,x164);
x82();
x110();
x126();
x138();
x186();
};
void x58(uint8_t* x32,int x33) {
int x36 = 0;
int x37 = 0;
int x35 = x33;
uint8_t* x34 = x32;
for (;;) {
int x38 = x37;
bool x39 = x38 < x35;
if (!x39) break;
int x41 = x37;
uint8_t x42 = x34[x41];
int x46 = x36;
int x43 = (int ) x42;
int x44 = x41 * 8;
int x45 = x43 << x44;
int x47 = x46 + x45;
x36 = x47;
int x49 = x41 + 1;
x37 = x49;
}
x30 = true;
int x54 = x36;
int x55 = (int ) x54;
x31 = x55;
};
void x70() {
bool x61 = x30;
if (x61) {
x59 = true;
int x63 = x31;
x60 = 2;
} else {
x59 = false;
}
};
void x96() {
bool x85 = x59;
if (x85) {
x83 = true;
int x87 = x60;
int x88 = x84;
int x89 = x87 + x88;
x84 = x89;
} else {
x83 = false;
}
};
void x204(uint8_t* x191,int x192) { //top4
x160();
uint8_t* x193 = x191;
int x194 = x192;
x58(x193,x194);
x70();
x96();
x126();
x138();
x186();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
