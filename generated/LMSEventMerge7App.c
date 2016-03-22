/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool x0;
int x1;
bool x29;
int x30;
bool x41;
int x42;
bool x53;
int x54;
bool x70;
int x71;
bool x87;
int x88;
bool x100;
int x101;
bool x117;
int x118;
bool x130;
int x131;
bool x156;
int x157;
void x28(uint8_t* x2,int x3) {
int x6 = 0;
int x7 = 0;
int x5 = x3;
uint8_t* x4 = x2;
for (;;) {
int x8 = x7;
bool x9 = x8 < x5;
if (!x9) break;
int x11 = x7;
uint8_t x12 = x4[x11];
int x16 = x6;
int x13 = (int ) x12;
int x14 = x11 * 8;
int x15 = x13 << x14;
int x17 = x16 + x15;
x6 = x17;
int x19 = x11 + 1;
x7 = x19;
}
x0 = true;
int x24 = x6;
int x25 = (int ) x24;
x1 = x25;
};
void x40() {
bool x31 = x0;
if (x31) {
x29 = true;
int x33 = x1;
x30 = 2;
} else {
x29 = false;
}
};
void x52() {
bool x43 = x0;
if (x43) {
x41 = true;
int x45 = x1;
x42 = 1;
} else {
x41 = false;
}
};
void x69() {
bool x55 = x29;
if (x55) {
int x56 = x30;
bool x57 = x56 == 3;
if (x57) {
x53 = true;
x54 = x56;
} else {
x53 = false;
}
} else {
x53 = false;
}
};
void x86() {
bool x72 = x41;
if (x72) {
int x73 = x42;
bool x74 = x73 == 1;
if (x74) {
x70 = true;
x71 = x73;
} else {
x70 = false;
}
} else {
x70 = false;
}
};
void x99() {
bool x89 = x53;
if (x89) {
x87 = true;
int x91 = x54;
int x92 = x91 * 3;
x88 = x92;
} else {
x87 = false;
}
};
void x116() {
bool x102 = x70;
if (x102) {
int x103 = x71;
bool x104 = x103 == 2;
if (x104) {
x100 = true;
x101 = x103;
} else {
x100 = false;
}
} else {
x100 = false;
}
};
void x129() {
bool x119 = x100;
if (x119) {
x117 = true;
int x121 = x101;
int x122 = x121 + 1;
x118 = x122;
} else {
x117 = false;
}
};
void x155() {
bool x132 = x117;
bool x133 = x87;
bool x134 = x132 && x133;
if (x134) {
x130 = true;
int x136 = x118;
int x137 = x88;
int x138 = x136 + x137;
x131 = x138;
} else {
if (x132) {
x130 = true;
int x136 = x118;
x131 = x136;
} else {
if (x133) {
x130 = true;
int x137 = x88;
x131 = x137;
} else {
x130 = false;
}
}
}
};
void x168() {
bool x158 = x130;
if (x158) {
x156 = true;
int x160 = x131;
int x161 = x160 * 2;
x157 = x161;
} else {
x156 = false;
}
};
void top1(uint8_t* x169,int x170) {
uint8_t* x171 = x169;
int x172 = x170;
x28(x171,x172);
x40();
x52();
x69();
x86();
x99();
x116();
x129();
x155();
x168();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
