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
bool  x20;
int32_t  x21;
bool  x34;
int32_t  x35;
bool  x48;
int32_t  x49;
bool  x61;
int32_t  x62;
bool  x88;
int32_t  x89;
bool  x101;
int32_t  x102;
void x2 () {
x0 = true;
x1 = 5;
};
void x8 () {
bool x9 = x0;
if (x9) {
x6 = true;
int32_t x11 = x1;
printf("%s\n","mleft");
int32_t x13 = x11 * 2;
x7 = x13;
} else {
x6 = false;
}
};
void x22 () {
bool x23 = x0;
if (x23) {
x20 = true;
int32_t x25 = x1;
printf("%s\n","mright");
int32_t x27 = x25 + 3;
x21 = x27;
} else {
x20 = false;
}
};
void x36 () {
bool x37 = x6;
if (x37) {
x34 = true;
int32_t x39 = x7;
printf("%s\n","mleftleft");
int32_t x41 = x39 * 2;
x35 = x41;
} else {
x34 = false;
}
};
void x50 () {
bool x51 = x6;
if (x51) {
x48 = true;
int32_t x53 = x7;
printf("%s\n","mleftright");
x49 = x53;
} else {
x48 = false;
}
};
void x63 () {
bool x64 = x34;
bool x65 = x48;
bool x66 = x64 && x65;
if (x66) {
x61 = true;
int32_t x68 = x35;
int32_t x69 = x49;
printf("%s\n","mleftmerge");
int32_t x71 = x68 + x69;
x62 = x71;
} else {
if (x64) {
x61 = true;
int32_t x68 = x35;
x62 = x68;
} else {
if (x65) {
x61 = true;
int32_t x69 = x49;
x62 = x69;
} else {
x61 = false;
}
}
}
};
void x90 () {
bool x91 = x61;
if (x91) {
x88 = true;
int32_t x93 = x62;
printf("%s\n","e1");
x89 = x93;
} else {
x88 = false;
}
};
void x103 () {
bool x104 = x61;
bool x105 = x20;
bool x106 = x104 && x105;
if (x106) {
x101 = true;
int32_t x108 = x62;
int32_t x109 = x21;
printf("%s\n","e2");
int32_t x111 = x108 + x109;
x102 = x111;
} else {
if (x104) {
x101 = true;
int32_t x108 = x62;
x102 = x108;
} else {
if (x105) {
x101 = true;
int32_t x109 = x21;
x102 = x109;
} else {
x101 = false;
}
}
}
};
void x128 () {
x2();
x8();
x22();
x36();
x50();
x63();
x90();
x103();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
