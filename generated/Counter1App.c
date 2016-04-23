/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
bool x0;
int x1;
bool x29;
int x30;
bool x58;
int x59;
bool x71;
int x72;
bool x97;
int x98;
int x115;
bool x125;
int x126;
int x132;
void x146() {
int x133 = x132;
bool x134 = x133 == 0;
if (x134) {
x115 = 0;
x132 = 1;
} else {
}
x97 = false;
x0 = false;
x29 = false;
x125 = false;
x58 = false;
x71 = false;
};
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
void x96() {
bool x73 = x0;
bool x74 = x58;
bool x75 = x73 && x74;
if (x75) {
x71 = true;
int x77 = x1;
int x78 = x59;
int x79 = x77 + x78;
x72 = x79;
} else {
if (x73) {
x71 = true;
int x77 = x1;
x72 = x77;
} else {
if (x74) {
x71 = true;
int x78 = x59;
x72 = x78;
} else {
x71 = false;
}
}
}
};
void x114() {
bool x99 = x71;
if (x99) {
int x100 = x72;
int x101 = fabs(x100);
bool x102 = x101 < 10;
if (x102) {
x97 = true;
x98 = x100;
} else {
x97 = false;
}
} else {
x97 = false;
}
};
void x124() {
bool x116 = x97;
if (x116) {
int x117 = x115;
int x118 = x98;
int x119 = x117 + x118;
x115 = x119;
} else {
}
};
void x131() {
x125 = true;
int x128 = x115;
x126 = x128;
};
void x166(uint8_t* x159,int x160) {
uint8_t* x161 = x159;
uint8_t x163 = *x161;
printf("%u\n",x163);
};
void x172() {
bool x158 = x125;
if (x158) {
int x167 = x126;
x166((uint8_t*)&x167, sizeof(x167));
} else {
}
};
void top1(uint8_t* x147,int x148) {
x146();
uint8_t* x149 = x147;
int x150 = x148;
x28(x149,x150);
x96();
x114();
x124();
x131();
x172();
};
void x57(uint8_t* x31,int x32) {
int x35 = 0;
int x36 = 0;
int x34 = x32;
uint8_t* x33 = x31;
for (;;) {
int x37 = x36;
bool x38 = x37 < x34;
if (!x38) break;
int x40 = x36;
uint8_t x41 = x33[x40];
int x45 = x35;
int x42 = (int ) x41;
int x43 = x40 * 8;
int x44 = x42 << x43;
int x46 = x45 + x44;
x35 = x46;
int x48 = x40 + 1;
x36 = x48;
}
x29 = true;
int x53 = x35;
int x54 = (int ) x53;
x30 = x54;
};
void x70() {
bool x60 = x29;
if (x60) {
x58 = true;
int x62 = x30;
int x63 = 0 - x62;
x59 = x63;
} else {
x58 = false;
}
};
void top2(uint8_t* x177,int x178) {
x146();
uint8_t* x179 = x177;
int x180 = x178;
x57(x179,x180);
x70();
x96();
x114();
x124();
x131();
x172();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
