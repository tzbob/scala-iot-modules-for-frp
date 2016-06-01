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
int x66;
void x78() {
int x67 = x66;
bool x68 = x67 == 0;
if (x68) {
x43 = 1;
x66 = 1;
} else {
}
x30 = false;
x54 = false;
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
x31 = 5;
} else {
x30 = false;
}
};
void x53() {
bool x44 = x30;
if (x44) {
x42 = true;
int x46 = x31;
x43 = x46;
} else {
x42 = false;
}
};
void x65() {
bool x56 = x42;
if (x56) {
x54 = true;
int x58 = x43;
x55 = x58;
} else {
x54 = false;
}
};
void x97(uint8_t* x90,int x91) {
uint8_t* x92 = x90;
uint8_t x94 = *x92;
printf("%u\n",x94);
};
void x103() {
bool x89 = x54;
if (x89) {
int x98 = x55;
x97((uint8_t*)&x98, sizeof(x98));
} else {
}
};
void x106(uint8_t* x79,int x80) { //top1
x78();
uint8_t* x81 = x79;
int x82 = x80;
x29(x81,x82);
x41();
x53();
x65();
x103();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
