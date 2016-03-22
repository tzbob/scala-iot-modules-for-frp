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
bool x43;
int x44;
bool x57;
int x58;
bool x84;
int x85;
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
void x42() {
bool x31 = x0;
if (x31) {
x29 = true;
int x33 = x1;
printf("%s\n","map2");
int x35 = x33 * 2;
x30 = x35;
} else {
x29 = false;
}
};
void x56() {
bool x45 = x0;
if (x45) {
x43 = true;
int x47 = x1;
printf("%s\n","map3");
int x49 = x47 * 2;
x44 = x49;
} else {
x43 = false;
}
};
void x83() {
bool x59 = x29;
bool x60 = x43;
bool x61 = x59 && x60;
if (x61) {
x57 = true;
int x63 = x30;
int x64 = x44;
printf("%s\n","merge4");
int x66 = x63 + x64;
x58 = x66;
} else {
if (x59) {
x57 = true;
int x63 = x30;
x58 = x63;
} else {
if (x60) {
x57 = true;
int x64 = x44;
x58 = x64;
} else {
x57 = false;
}
}
}
};
void x110() {
bool x86 = x43;
bool x87 = x57;
bool x88 = x86 && x87;
if (x88) {
x84 = true;
int x90 = x44;
int x91 = x58;
printf("%s\n","merge5");
int x93 = x90 + x91;
x85 = x93;
} else {
if (x86) {
x84 = true;
int x90 = x44;
x85 = x90;
} else {
if (x87) {
x84 = true;
int x91 = x58;
x85 = x91;
} else {
x84 = false;
}
}
}
};
void top1(uint8_t* x111,int x112) {
uint8_t* x113 = x111;
int x114 = x112;
x28(x113,x114);
x42();
x56();
x83();
x110();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
