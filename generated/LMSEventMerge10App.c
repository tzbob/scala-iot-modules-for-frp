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
bool  x90;
int32_t  x91;
bool  x103;
int32_t  x104;
void x2 () {
x0 = true;
x1 = 5;
};
void x8 () {
bool x9 = x0;
if (x9) {
x6 = true;
int32_t x11 = x1;
printf("%s\n",string("mleft").c_str());
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
printf("%s\n",string("mright").c_str());
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
printf("%s\n",string("mleftleft").c_str());
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
printf("%s\n",string("mleftright").c_str());
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
printf("%s\n",string("mleftmerge").c_str());
int32_t x71 = x68 + x69;
x62 = x71;
} else {
if (x64) {
x61 = true;
int32_t x75 = x35;
x62 = x75;
} else {
if (x65) {
x61 = true;
int32_t x79 = x49;
x62 = x79;
} else {
x61 = false;
}
}
}
};
void x92 () {
bool x93 = x61;
if (x93) {
x90 = true;
int32_t x95 = x62;
printf("%s\n",string("e1").c_str());
x91 = x95;
} else {
x90 = false;
}
};
void x105 () {
bool x106 = x61;
bool x107 = x20;
bool x108 = x106 && x107;
if (x108) {
x103 = true;
int32_t x110 = x62;
int32_t x111 = x21;
printf("%s\n",string("e2").c_str());
int32_t x113 = x110 + x111;
x104 = x113;
} else {
if (x106) {
x103 = true;
int32_t x117 = x62;
x104 = x117;
} else {
if (x107) {
x103 = true;
int32_t x121 = x21;
x104 = x121;
} else {
x103 = false;
}
}
}
};
void x132 () {
x2();
x8();
x22();
x36();
x50();
x63();
x92();
x105();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
