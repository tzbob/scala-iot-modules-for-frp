/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool  x0;
int32_t  x1;
bool  x6;
int32_t  x7;
bool  x12;
int32_t  x13;
bool  x24;
int32_t  x25;
int32_t x36 = 1;
int32_t x46 = 1;
int32_t x56 = x46;
int32_t x57 = x36;
int32_t x58 = x56 * x57;
int32_t x59 = x58;
void x2 () {
x0 = true;
x1 = 1;
};
void x26 () {
bool x27 = x0;
if (x27) {
x24 = true;
int32_t x29 = x1;
x25 = 1;
} else {
x24 = false;
}
};
void x47 () {
bool x48 = x24;
if (x48) {
int32_t x49 = x46;
int32_t x50 = x25;
int32_t x51 = x49 + x50;
x46 = x51;
} else {
}
};
void x60 () {
int32_t x61 = x46;
int32_t x62 = x36;
int32_t x63 = x61 * x62;
x59 = x63;
};
void x66 () {
x2();
x26();
x47();
x60();
};
int32_t x88 = 5;
int32_t x89 = x88;
int32_t* x90 = &x89;
void x73 (int32_t* x74) {
int32_t x75 = x74[1];
printf("%d\n",x75);
int32_t* x77 = x74;
*x77 = 20;
int32_t x79 = 5;
int32_t x80 = x79;
int32_t* x81 = &x80;
int32_t x82 = *x81;
printf("%d\n",x82);
*x81 = 3;
int32_t x85 = *x81;
printf("%d\n",x85);
};
void x91 () {
x73(x90);
};
void x95 (int32_t* x96) {
int32_t x97[5];
x97[0] = 1;
x97[1] = 2;
x97[2] = 3;
int32_t x101 = x97[0];
printf("%d\n",x101);
};
void x104 () {
int32_t x105[5];
int32_t* x106 = x105;
x95(x106);
};
void x8 () {
x6 = true;
x7 = 2;
};
void x14 () {
bool x15 = x6;
if (x15) {
x12 = true;
int32_t x17 = x7;
x13 = 2;
} else {
x12 = false;
}
};
void x37 () {
bool x38 = x12;
if (x38) {
int32_t x39 = x36;
int32_t x40 = x13;
int32_t x41 = x39 + x40;
x36 = x41;
} else {
}
};
void x110 () {
x8();
x14();
x37();
x60();
};
int32_t x132 = 5;
int32_t x133 = x132;
int32_t* x134 = &x133;
void x117 (int32_t* x118) {
int32_t x119 = x118[1];
printf("%d\n",x119);
int32_t* x121 = x118;
*x121 = 20;
int32_t x123 = 5;
int32_t x124 = x123;
int32_t* x125 = &x124;
int32_t x126 = *x125;
printf("%d\n",x126);
*x125 = 3;
int32_t x129 = *x125;
printf("%d\n",x129);
};
void x135 () {
x117(x134);
};
void x139 (int32_t* x140) {
int32_t x141[5];
x141[0] = 1;
x141[1] = 2;
x141[2] = 3;
int32_t x145 = x141[0];
printf("%d\n",x145);
};
void x148 () {
int32_t x149[5];
int32_t* x150 = x149;
x139(x150);
};
/*****************************************
  End of C Generated Code                  
*******************************************/
