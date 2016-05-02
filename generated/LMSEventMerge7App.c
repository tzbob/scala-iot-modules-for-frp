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
bool x71;
int x72;
bool x88;
int x89;
bool x101;
int x102;
bool x118;
int x119;
bool x131;
int x132;
bool x157;
int x158;
int x170;
void x187() {
int x171 = x170;
bool x172 = x171 == 0;
if (x172) {
x170 = 1;
} else {
}
x118 = false;
x157 = false;
x1 = false;
x30 = false;
x131 = false;
x42 = false;
x54 = false;
x71 = false;
x88 = false;
x101 = false;
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
void x70() {
bool x56 = x30;
if (x56) {
int x57 = x31;
bool x58 = x57 == 3;
if (x58) {
x54 = true;
x55 = x57;
} else {
x54 = false;
}
} else {
x54 = false;
}
};
void x87() {
bool x73 = x42;
if (x73) {
int x74 = x43;
bool x75 = x74 == 1;
if (x75) {
x71 = true;
x72 = x74;
} else {
x71 = false;
}
} else {
x71 = false;
}
};
void x100() {
bool x90 = x54;
if (x90) {
x88 = true;
int x92 = x55;
int x93 = x92 * 3;
x89 = x93;
} else {
x88 = false;
}
};
void x117() {
bool x103 = x71;
if (x103) {
int x104 = x72;
bool x105 = x104 == 2;
if (x105) {
x101 = true;
x102 = x104;
} else {
x101 = false;
}
} else {
x101 = false;
}
};
void x130() {
bool x120 = x101;
if (x120) {
x118 = true;
int x122 = x102;
int x123 = x122 + 1;
x119 = x123;
} else {
x118 = false;
}
};
void x156() {
bool x133 = x118;
bool x134 = x88;
bool x135 = x133 && x134;
if (x135) {
x131 = true;
int x137 = x119;
int x138 = x89;
int x139 = x137 + x138;
x132 = x139;
} else {
if (x133) {
x131 = true;
int x137 = x119;
x132 = x137;
} else {
if (x134) {
x131 = true;
int x138 = x89;
x132 = x138;
} else {
x131 = false;
}
}
}
};
void x169() {
bool x159 = x131;
if (x159) {
x157 = true;
int x161 = x132;
int x162 = x161 * 2;
x158 = x162;
} else {
x157 = false;
}
};
void x212(uint8_t* x205,int x206) {
uint8_t* x207 = x205;
uint8_t x209 = *x207;
printf("%u\n",x209);
};
void x218() {
bool x204 = x157;
if (x204) {
int x213 = x158;
x212((uint8_t*)&x213, sizeof(x213));
} else {
}
};
void top1(uint8_t* x188,int x189) {
x187();
uint8_t* x190 = x188;
int x191 = x189;
x29(x190,x191);
x41();
x53();
x70();
x87();
x100();
x117();
x130();
x156();
x169();
x218();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
