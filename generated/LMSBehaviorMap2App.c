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
int32_t x86 = 5;
int32_t x87 = x86;
int32_t* x88 = &x87;
void x73 (int32_t* x74) {
int32_t x75 = x74[1];
printf("%d\n",x75);
int32_t x77 = 5;
int32_t x78 = x77;
int32_t* x79 = &x78;
int32_t x80 = *x79;
printf("%d\n",x80);
*x79 = 3;
int32_t x83 = *x79;
printf("%d\n",x83);
};
void x89 () {
x73(x88);
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
void x93 () {
x8();
x14();
x37();
x60();
};
int32_t x113 = 5;
int32_t x114 = x113;
int32_t* x115 = &x114;
void x100 (int32_t* x101) {
int32_t x102 = x101[1];
printf("%d\n",x102);
int32_t x104 = 5;
int32_t x105 = x104;
int32_t* x106 = &x105;
int32_t x107 = *x106;
printf("%d\n",x107);
*x106 = 3;
int32_t x110 = *x106;
printf("%d\n",x110);
};
void x116 () {
x100(x115);
};
/*****************************************
  End of C Generated Code                  
*******************************************/
