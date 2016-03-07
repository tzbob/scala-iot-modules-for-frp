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
bool  x40;
int32_t  x41;
bool  x52;
int32_t  x53;
bool  x80;
int32_t  x81;
void x2 () {
x0 = true;
x1 = 5;
};
void x14 () {
bool x15 = x0;
bool x16 = x6;
bool x17 = x15 && x16;
if (x17) {
x12 = true;
int32_t x19 = x1;
int32_t x20 = x7;
int32_t x21 = x19 * x20;
x13 = x21;
} else {
if (x15) {
x12 = true;
int32_t x25 = x1;
x13 = x25;
} else {
if (x16) {
x12 = true;
int32_t x29 = x7;
x13 = x29;
} else {
x12 = false;
}
}
}
};
void x54 () {
bool x55 = x12;
bool x56 = x40;
bool x57 = x55 && x56;
if (x57) {
x52 = true;
int32_t x59 = x13;
int32_t x60 = x41;
int32_t x61 = x59 + x60;
x53 = x61;
} else {
if (x55) {
x52 = true;
int32_t x65 = x13;
x53 = x65;
} else {
if (x56) {
x52 = true;
int32_t x69 = x41;
x53 = x69;
} else {
x52 = false;
}
}
}
};
void x82 () {
bool x83 = x52;
if (x83) {
x80 = true;
int32_t x85 = x53;
int32_t x86 = x85 * 2;
x81 = x86;
} else {
x80 = false;
}
};
void x93 () {
x2();
x14();
x54();
x82();
};
void x8 () {
x6 = true;
x7 = 10;
};
void x42 () {
bool x43 = x6;
if (x43) {
x40 = true;
int32_t x45 = x7;
x41 = 2;
} else {
x40 = false;
}
};
void x100 () {
x8();
x14();
x42();
x54();
x82();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
