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
bool  x47;
int32_t  x48;
bool  x61;
int32_t  x62;
bool  x90;
int32_t  x91;
bool  x119;
int32_t  x120;
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
printf("%s\n",string("mleftright").c_str());
x35 = x39;
} else {
x34 = false;
}
};
void x49 () {
bool x50 = x6;
if (x50) {
x47 = true;
int32_t x52 = x7;
printf("%s\n",string("mleftleft").c_str());
int32_t x54 = x52 * 2;
x48 = x54;
} else {
x47 = false;
}
};
void x63 () {
bool x64 = x47;
bool x65 = x34;
bool x66 = x64 && x65;
if (x66) {
x61 = true;
int32_t x68 = x48;
int32_t x69 = x35;
printf("%s\n",string("mleftmerge").c_str());
int32_t x71 = x68 + x69;
x62 = x71;
} else {
if (x64) {
x61 = true;
int32_t x75 = x48;
x62 = x75;
} else {
if (x65) {
x61 = true;
int32_t x79 = x35;
x62 = x79;
} else {
x61 = false;
}
}
}
};
void x92 () {
bool x93 = x61;
bool x94 = x20;
bool x95 = x93 && x94;
if (x95) {
x90 = true;
int32_t x97 = x62;
int32_t x98 = x21;
printf("%s\n",string("e2").c_str());
int32_t x100 = x97 + x98;
x91 = x100;
} else {
if (x93) {
x90 = true;
int32_t x104 = x62;
x91 = x104;
} else {
if (x94) {
x90 = true;
int32_t x108 = x21;
x91 = x108;
} else {
x90 = false;
}
}
}
};
void x121 () {
bool x122 = x61;
if (x122) {
x119 = true;
int32_t x124 = x62;
printf("%s\n",string("e1").c_str());
x120 = x124;
} else {
x119 = false;
}
};
void x132 () {
x2();
x8();
x22();
x36();
x49();
x63();
x92();
x121();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
