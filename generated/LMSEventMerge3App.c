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
bool x85;
int x86;
bool x97;
int x98;
bool x123;
int x124;
int x136;
void x149() {
int x137 = x136;
bool x138 = x137 == 0;
if (x138) {
x136 = 1;
} else {
}
x97 = false;
x1 = false;
x123 = false;
x30 = false;
x59 = false;
x85 = false;
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
void x84() {
bool x61 = x1;
bool x62 = x30;
bool x63 = x61 && x62;
if (x63) {
x59 = true;
int x65 = x2;
int x66 = x31;
int x67 = x65 * x66;
x60 = x67;
} else {
if (x61) {
x59 = true;
int x65 = x2;
x60 = x65;
} else {
if (x62) {
x59 = true;
int x66 = x31;
x60 = x66;
} else {
x59 = false;
}
}
}
};
void x122() {
bool x99 = x59;
bool x100 = x85;
bool x101 = x99 && x100;
if (x101) {
x97 = true;
int x103 = x60;
int x104 = x86;
int x105 = x103 + x104;
x98 = x105;
} else {
if (x99) {
x97 = true;
int x103 = x60;
x98 = x103;
} else {
if (x100) {
x97 = true;
int x104 = x86;
x98 = x104;
} else {
x97 = false;
}
}
}
};
void x135() {
bool x125 = x97;
if (x125) {
x123 = true;
int x127 = x98;
int x128 = x127 * 2;
x124 = x128;
} else {
x123 = false;
}
};
void x168(uint8_t* x161,int x162) {
uint8_t* x163 = x161;
uint8_t x165 = *x163;
printf("%u\n",x165);
};
void x174() {
bool x160 = x123;
if (x160) {
int x169 = x124;
x168((uint8_t*)&x169, sizeof(x169));
} else {
}
};
void top1(uint8_t* x150,int x151) {
x149();
uint8_t* x152 = x150;
int x153 = x151;
x29(x152,x153);
x84();
x122();
x135();
x174();
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
void x96() {
bool x87 = x30;
if (x87) {
x85 = true;
int x89 = x31;
x86 = 2;
} else {
x85 = false;
}
};
void top2(uint8_t* x179,int x180) {
x149();
uint8_t* x181 = x179;
int x182 = x180;
x58(x181,x182);
x84();
x96();
x122();
x135();
x174();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
