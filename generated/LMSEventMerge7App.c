/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool x0;
int32_t x1;
bool x6;
int32_t x7;
bool x18;
int32_t x19;
bool x30;
int32_t x31;
bool x47;
int32_t x48;
bool x64;
int32_t x65;
bool x77;
int32_t x78;
bool x94;
int32_t x95;
bool x107;
int32_t x108;
bool x133;
int32_t x134;
void x2 () {
x0 = true;
x1 = 5;
};
void x8 () {
bool x9 = x0;
if (x9) {
x6 = true;
int32_t x11 = x1;
x7 = 2;
} else {
x6 = false;
}
};
void x20 () {
bool x21 = x0;
if (x21) {
x18 = true;
int32_t x23 = x1;
x19 = 1;
} else {
x18 = false;
}
};
void x32 () {
bool x33 = x6;
if (x33) {
int32_t x34 = x7;
bool x35 = x34 == 3;
if (x35) {
x30 = true;
x31 = x34;
} else {
x30 = false;
}
} else {
x30 = false;
}
};
void x49 () {
bool x50 = x18;
if (x50) {
int32_t x51 = x19;
bool x52 = x51 == 1;
if (x52) {
x47 = true;
x48 = x51;
} else {
x47 = false;
}
} else {
x47 = false;
}
};
void x66 () {
bool x67 = x30;
if (x67) {
x64 = true;
int32_t x69 = x31;
int32_t x70 = x69 * 3;
x65 = x70;
} else {
x64 = false;
}
};
void x79 () {
bool x80 = x47;
if (x80) {
int32_t x81 = x48;
bool x82 = x81 == 2;
if (x82) {
x77 = true;
x78 = x81;
} else {
x77 = false;
}
} else {
x77 = false;
}
};
void x96 () {
bool x97 = x77;
if (x97) {
x94 = true;
int32_t x99 = x78;
int32_t x100 = x99 + 1;
x95 = x100;
} else {
x94 = false;
}
};
void x109 () {
bool x110 = x94;
bool x111 = x64;
bool x112 = x110 && x111;
if (x112) {
x107 = true;
int32_t x114 = x95;
int32_t x115 = x65;
int32_t x116 = x114 + x115;
x108 = x116;
} else {
if (x110) {
x107 = true;
int32_t x114 = x95;
x108 = x114;
} else {
if (x111) {
x107 = true;
int32_t x115 = x65;
x108 = x115;
} else {
x107 = false;
}
}
}
};
void x135 () {
bool x136 = x107;
if (x136) {
x133 = true;
int32_t x138 = x108;
int32_t x139 = x138 * 2;
x134 = x139;
} else {
x133 = false;
}
};
void x146 () {
x2();
x8();
x20();
x32();
x49();
x66();
x79();
x96();
x109();
x135();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
