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
int x29;
bool x39;
int x40;
int x46;
bool x56;
int x57;
int x63;
void x75() {
int x64 = x63;
bool x65 = x64 == 0;
if (x65) {
x29 = 1;
x46 = 10;
x63 = 1;
} else {
}
x56 = false;
x0 = false;
x39 = false;
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
void x38() {
bool x30 = x0;
if (x30) {
int x31 = x29;
int x32 = x1;
int x33 = x31 + x32;
x29 = x33;
} else {
}
};
void x45() {
x39 = true;
int x42 = x29;
x40 = x42;
};
void x55() {
bool x47 = x39;
if (x47) {
int x48 = x46;
int x49 = x40;
int x50 = x48 + x49;
x46 = x50;
} else {
}
};
void x62() {
x56 = true;
int x59 = x46;
x57 = x59;
};
void x95(uint8_t* x88,int x89) {
uint8_t* x90 = x88;
uint8_t x92 = *x90;
printf("%u\n",x92);
};
void x101() {
bool x87 = x56;
if (x87) {
int x96 = x57;
x95((uint8_t*)&x96, sizeof(x96));
} else {
}
};
void top1(uint8_t* x76,int x77) {
x75();
uint8_t* x78 = x76;
int x79 = x77;
x28(x78,x79);
x38();
x45();
x55();
x62();
x101();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
