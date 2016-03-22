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
bool x42;
int32_t x43;
bool x68;
int32_t x69;
bool x81;
int32_t x82;
bool x107;
int32_t x108;
void x2 () {
x0 = true;
x1 = 5;
};
void x8 () {
bool x9 = x0;
if (x9) {
x6 = true;
int32_t x11 = x1;
x7 = 1;
} else {
x6 = false;
}
};
void x20 () {
bool x21 = x0;
if (x21) {
x18 = true;
int32_t x23 = x1;
x19 = 2;
} else {
x18 = false;
}
};
void x32 () {
bool x33 = x0;
if (x33) {
x30 = true;
int32_t x35 = x1;
x31 = 3;
} else {
x30 = false;
}
};
void x44 () {
bool x45 = x6;
bool x46 = x18;
bool x47 = x45 && x46;
if (x47) {
x42 = true;
int32_t x49 = x7;
int32_t x50 = x19;
int32_t x51 = x49 + x50;
x43 = x51;
} else {
if (x45) {
x42 = true;
int32_t x49 = x7;
x43 = x49;
} else {
if (x46) {
x42 = true;
int32_t x50 = x19;
x43 = x50;
} else {
x42 = false;
}
}
}
};
void x70 () {
bool x71 = x42;
if (x71) {
x68 = true;
int32_t x73 = x43;
int32_t x74 = x73 + 2;
x69 = x74;
} else {
x68 = false;
}
};
void x83 () {
bool x84 = x68;
bool x85 = x30;
bool x86 = x84 && x85;
if (x86) {
x81 = true;
int32_t x88 = x69;
int32_t x89 = x31;
int32_t x90 = x88 + x89;
x82 = x90;
} else {
if (x84) {
x81 = true;
int32_t x88 = x69;
x82 = x88;
} else {
if (x85) {
x81 = true;
int32_t x89 = x31;
x82 = x89;
} else {
x81 = false;
}
}
}
};
void x109 () {
bool x110 = x81;
if (x110) {
x107 = true;
int32_t x112 = x82;
int32_t x113 = x112 * 2;
x108 = x113;
} else {
x107 = false;
}
};
void x120 () {
x2();
x8();
x20();
x32();
x44();
x70();
x83();
x109();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
