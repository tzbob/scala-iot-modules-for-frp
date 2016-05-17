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
int x42;
bool x52;
int x53;
int x59;
void x70() {
int x60 = x59;
bool x61 = x60 == 0;
if (x61) {
x42 = 1;
x59 = 1;
} else {
}
x30 = false;
x52 = false;
x1 = false;
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
void x51() {
bool x43 = x30;
if (x43) {
int x44 = x31;
int x45 = x42;
int x46 = x44 + x45;
x42 = x46;
} else {
}
};
void x58() {
x52 = true;
int x55 = x42;
x53 = x55;
};
void x90(uint8_t* x83,int x84) {
uint8_t* x85 = x83;
uint8_t x87 = *x85;
printf("%u\n",x87);
};
void x96() {
bool x82 = x52;
if (x82) {
int x91 = x53;
x90((uint8_t*)&x91, sizeof(x91));
} else {
}
};
void x100(uint8_t* x71,int x72) { //top1
x70();
uint8_t* x73 = x71;
int x74 = x72;
x29(x73,x74);
x41();
x51();
x58();
x96();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
