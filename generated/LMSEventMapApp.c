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
bool x43;
int x56;
void x66() {
int x57 = x56;
bool x58 = x57 == 0;
if (x58) {
x56 = 1;
} else {
}
x30 = false;
x1 = false;
x42 = false;
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
x31 = x34;
} else {
x30 = false;
}
};
void x55() {
bool x44 = x30;
if (x44) {
x42 = true;
int x46 = x31;
int x47 = x46 % 2;
bool x48 = x47 == 0;
x43 = x48;
} else {
x42 = false;
}
};
void x85(uint8_t* x78,int x79) {
uint8_t* x80 = x78;
uint8_t x82 = *x80;
printf("%u\n",x82);
};
void x91() {
bool x77 = x42;
if (x77) {
bool x86 = x43;
x85((uint8_t*)&x86, sizeof(x86));
} else {
}
};
void x95(uint8_t* x67,int x68) { //top1
x66();
uint8_t* x69 = x67;
int x70 = x68;
x29(x69,x70);
x41();
x55();
x91();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
