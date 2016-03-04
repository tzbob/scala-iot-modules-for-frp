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
int32_t x39 = x22;
int32_t x40 = x39 % 2;
bool x41 = x40 == 0;
if (x41) {
x35 = true;
x36 = x39;
} else {
x35 = false;
}
} else {
x35 = false;
}
};
bool  x54;
int32_t  x55;
void x56 () {
bool x57 = x21;
if (x57) {
x54 = true;
int32_t x59 = x22;
int32_t x60 = x59 + 1;
x55 = x60;
} else {
x54 = false;
}
};
bool  x68;
int32_t  x69;
void x70 () {
bool x71 = x35;
if (x71) {
x68 = true;
int32_t x73 = x36;
int32_t x74 = x73 + 1;
x69 = x74;
} else {
x68 = false;
}
};
bool  x82;
int32_t  x83;
void x84 () {
bool x85 = x68;
bool x86 = x54;
bool x87 = x85 && x86;
if (x87) {
x82 = true;
int32_t x89 = x69;
int32_t x90 = x55;
int32_t x91 = x89 + x90;
x83 = x91;
} else {
if (x85) {
x82 = true;
int32_t x95 = x69;
x83 = x95;
} else {
if (x86) {
x82 = true;
int32_t x99 = x55;
x83 = x99;
} else {
x82 = false;
}
}
}
};
bool  x111;
int32_t  x112;
void x113 () {
bool x114 = x82;
if (x114) {
x111 = true;
int32_t x116 = x83;
int32_t x117 = x116 * 2;
x112 = x117;
} else {
x111 = false;
}
};
void x125 () {
x2();
x9();
x23();
x37();
x56();
x70();
x84();
x113();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
