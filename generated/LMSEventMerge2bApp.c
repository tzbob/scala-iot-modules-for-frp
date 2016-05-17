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
bool x48;
int x49;
bool x60;
int x61;
bool x72;
int x73;
int x98;
void x110() {
int x99 = x98;
bool x100 = x99 == 0;
if (x100) {
x98 = 1;
} else {
}
x72 = false;
x1 = false;
x30 = false;
x60 = false;
x48 = false;
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
void x47() {
bool x32 = x1;
if (x32) {
int x33 = x2;
int x34 = x33 % 2;
bool x35 = x34 == 0;
if (x35) {
x30 = true;
x31 = x33;
} else {
x30 = false;
}
} else {
x30 = false;
}
};
void x59() {
bool x50 = x1;
if (x50) {
x48 = true;
int x52 = x2;
x49 = 2;
} else {
x48 = false;
}
};
void x71() {
bool x62 = x30;
if (x62) {
x60 = true;
int x64 = x31;
x61 = 1;
} else {
x60 = false;
}
};
void x97() {
bool x74 = x60;
bool x75 = x48;
bool x76 = x74 && x75;
if (x76) {
x72 = true;
int x78 = x61;
int x79 = x49;
int x80 = x78 + x79;
x73 = x80;
} else {
if (x74) {
x72 = true;
int x78 = x61;
x73 = x78;
} else {
if (x75) {
x72 = true;
int x79 = x49;
x73 = x79;
} else {
x72 = false;
}
}
}
};
void x131(uint8_t* x124,int x125) {
uint8_t* x126 = x124;
uint8_t x128 = *x126;
printf("%u\n",x128);
};
void x137() {
bool x123 = x72;
if (x123) {
int x132 = x73;
x131((uint8_t*)&x132, sizeof(x132));
} else {
}
};
void x141(uint8_t* x111,int x112) { //top1
x110();
uint8_t* x113 = x111;
int x114 = x112;
x29(x113,x114);
x47();
x59();
x71();
x97();
x137();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
