/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool  x0;
int32_t  x1;
void x2 () {
x0 = true;
x1 = 5;
};
bool  x7;
int32_t  x8;
void x9 () {
bool x10 = x0;
if (x10) {
x7 = true;
int32_t x12 = x1;
int32_t x13 = x12 + 1;
x8 = x13;
} else {
x7 = false;
}
};
bool  x21;
int32_t  x22;
void x23 () {
bool x24 = x7;
if (x24) {
x21 = true;
int32_t x26 = x8;
int32_t x27 = x26 * 2;
x22 = x27;
} else {
x21 = false;
}
};
bool  x35;
int32_t  x36;
void x37 () {
bool x38 = x21;
if (x38) {
x35 = true;
int32_t x40 = x22;
x36 = 1;
} else {
x35 = false;
}
};
bool  x48;
int32_t  x49;
void x50 () {
bool x51 = x21;
if (x51) {
x48 = true;
int32_t x53 = x22;
x49 = 2;
} else {
x48 = false;
}
};
bool  x61;
int32_t  x62;
void x63 () {
bool x64 = x48;
if (x64) {
int32_t x65 = x49;
int32_t x66 = x65 % 2;
bool x67 = x66 == 0;
if (x67) {
x61 = true;
x62 = x65;
} else {
x61 = false;
}
} else {
x61 = false;
}
};
bool  x80;
int32_t  x81;
void x82 () {
bool x83 = x35;
if (x83) {
int32_t x84 = x36;
int32_t x85 = x84 % 2;
bool x86 = x85 == 0;
if (x86) {
x80 = true;
x81 = x84;
} else {
x80 = false;
}
} else {
x80 = false;
}
};
bool  x99;
int32_t  x100;
void x101 () {
bool x102 = x61;
if (x102) {
x99 = true;
int32_t x104 = x62;
int32_t x105 = x104 + 1;
x100 = x105;
} else {
x99 = false;
}
};
bool  x113;
int32_t  x114;
void x115 () {
bool x116 = x80;
if (x116) {
x113 = true;
int32_t x118 = x81;
int32_t x119 = x118 + 1;
x114 = x119;
} else {
x113 = false;
}
};
bool  x127;
int32_t  x128;
void x129 () {
bool x130 = x113;
bool x131 = x99;
bool x132 = x130 && x131;
if (x132) {
x127 = true;
int32_t x134 = x114;
int32_t x135 = x100;
int32_t x136 = x134 + x135;
x128 = x136;
} else {
if (x130) {
x127 = true;
int32_t x140 = x114;
x128 = x140;
} else {
if (x131) {
x127 = true;
int32_t x144 = x100;
x128 = x144;
} else {
x127 = false;
}
}
}
};
bool  x156;
int32_t  x157;
void x158 () {
bool x159 = x127;
if (x159) {
x156 = true;
int32_t x161 = x128;
int32_t x162 = x161 * 2;
x157 = x162;
} else {
x156 = false;
}
};
void x170 () {
x2();
x9();
x23();
x37();
x50();
x63();
x82();
x101();
x115();
x129();
x158();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
