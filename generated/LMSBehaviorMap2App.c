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
int x83;
bool x84;
int x97;
bool x98;
int x111;
bool x112;
bool x127;
int x128;
int x139;
void x157() {
int x140 = x139;
bool x141 = x140 == 0;
if (x141) {
x83 = 1;
x97 = 1;
int x144 = x97;
int x145 = x83;
int x146 = x144 + x145;
x111 = x146;
x139 = 1;
} else {
}
x59 = false;
x1 = false;
x71 = false;
x127 = false;
x30 = false;
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
x98 = true;
int x101 = x72;
int x102 = x97;
int x103 = x101 + x102;
x97 = x103;
} else {
x98 = false;
}
};
void x126() {
bool x113 = x98;
bool x114 = x84;
bool x115 = x113 || x114;
if (x115) {
int x116 = x97;
int x117 = x83;
int x118 = x116 + x117;
x111 = x118;
x112 = true;
} else {
x112 = false;
}
};
void x138() {
bool x129 = x112;
if (x129) {
x127 = true;
int x131 = x111;
x128 = x131;
} else {
x127 = false;
}
};
void x177(uint8_t* x170,int x171) {
uint8_t* x172 = x170;
uint8_t x174 = *x172;
printf("%u\n",x174);
};
void x183() {
bool x169 = x127;
if (x169) {
int x178 = x128;
x177((uint8_t*)&x178, sizeof(x178));
} else {
}
};
void x186(uint8_t* x158,int x159) { //top1
x157();
uint8_t* x160 = x158;
int x161 = x159;
x29(x160,x161);
x82();
x110();
x126();
x138();
x183();
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
x84 = true;
int x87 = x60;
int x88 = x83;
int x89 = x87 + x88;
x83 = x89;
} else {
x84 = false;
}
};
void x201(uint8_t* x188,int x189) { //top4
x157();
uint8_t* x190 = x188;
int x191 = x189;
x58(x190,x191);
x70();
x96();
x126();
x138();
x183();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
