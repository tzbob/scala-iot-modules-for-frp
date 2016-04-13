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
bool x58;
int x59;
bool x72;
int x73;
int x86;
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
void x71() {
bool x60 = x0;
if (x60) {
x58 = true;
int x62 = x1;
printf("%s\n","m1");
int x64 = x62 * 2;
x59 = x64;
} else {
x58 = false;
}
};
void top1(uint8_t* x94,int x95) {
uint8_t* x96 = x94;
int x97 = x95;
x28(x96,x97);
x71();
};
int x104;
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
void x85() {
bool x74 = x29;
if (x74) {
x72 = true;
int x76 = x30;
printf("%s\n","m2");
int x78 = x76 * 2;
x73 = x78;
} else {
x72 = false;
}
};
void top3(uint8_t* x112,int x113) {
uint8_t* x114 = x112;
int x115 = x113;
x57(x114,x115);
x85();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
