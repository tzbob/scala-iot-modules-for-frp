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
bool x66;
int x67;
bool x92;
int x93;
bool x105;
int x106;
bool x131;
int x132;
int x144;
void x159() {
int x145 = x144;
bool x146 = x145 == 0;
if (x146) {
x144 = 1;
} else {
}
x66 = false;
x1 = false;
x92 = false;
x30 = false;
x105 = false;
x42 = false;
x131 = false;
x54 = false;
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
x31 = 1;
} else {
x30 = false;
}
};
void x53() {
bool x44 = x1;
if (x44) {
x42 = true;
int x46 = x2;
x43 = 2;
} else {
x42 = false;
}
};
void x65() {
bool x56 = x1;
if (x56) {
x54 = true;
int x58 = x2;
x55 = 3;
} else {
x54 = false;
}
};
void x91() {
bool x68 = x30;
bool x69 = x42;
bool x70 = x68 && x69;
if (x70) {
x66 = true;
int x72 = x31;
int x73 = x43;
int x74 = x72 + x73;
x67 = x74;
} else {
if (x68) {
x66 = true;
int x72 = x31;
x67 = x72;
} else {
if (x69) {
x66 = true;
int x73 = x43;
x67 = x73;
} else {
x66 = false;
}
}
}
};
void x104() {
bool x94 = x66;
if (x94) {
x92 = true;
int x96 = x67;
int x97 = x96 + 2;
x93 = x97;
} else {
x92 = false;
}
};
void x130() {
bool x107 = x92;
bool x108 = x54;
bool x109 = x107 && x108;
if (x109) {
x105 = true;
int x111 = x93;
int x112 = x55;
int x113 = x111 + x112;
x106 = x113;
} else {
if (x107) {
x105 = true;
int x111 = x93;
x106 = x111;
} else {
if (x108) {
x105 = true;
int x112 = x55;
x106 = x112;
} else {
x105 = false;
}
}
}
};
void x143() {
bool x133 = x105;
if (x133) {
x131 = true;
int x135 = x106;
int x136 = x135 * 2;
x132 = x136;
} else {
x131 = false;
}
};
void x182(uint8_t* x175,int x176) {
uint8_t* x177 = x175;
uint8_t x179 = *x177;
printf("%u\n",x179);
};
void x188() {
bool x174 = x131;
if (x174) {
int x183 = x132;
x182((uint8_t*)&x183, sizeof(x183));
} else {
}
};
void top1(uint8_t* x160,int x161) {
x159();
uint8_t* x162 = x160;
int x163 = x161;
x29(x162,x163);
x41();
x53();
x65();
x91();
x104();
x130();
x143();
x188();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
