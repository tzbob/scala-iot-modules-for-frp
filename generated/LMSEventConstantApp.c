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
int x55;
void x65() {
int x56 = x55;
bool x57 = x56 == 0;
if (x57) {
x55 = 1;
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
x31 = 10;
} else {
x30 = false;
}
};
void x54() {
bool x44 = x30;
if (x44) {
x42 = true;
int x46 = x31;
int x47 = 2 * x46;
x43 = x47;
} else {
x42 = false;
}
};
void x83(uint8_t* x76,int x77) {
uint8_t* x78 = x76;
uint8_t x80 = *x78;
printf("%u\n",x80);
};
void x89() {
bool x75 = x42;
if (x75) {
int x84 = x43;
x83((uint8_t*)&x84, sizeof(x84));
} else {
}
};
void top1(uint8_t* x66,int x67) {
x65();
uint8_t* x68 = x66;
int x69 = x67;
x29(x68,x69);
x41();
x54();
x89();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
