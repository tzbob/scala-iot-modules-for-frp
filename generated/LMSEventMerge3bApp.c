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
bool x12;
int32_t x13;
bool x24;
int32_t x25;
bool x50;
int32_t x51;
bool x63;
int32_t x64;
bool x89;
int32_t x90;
void x2 () {
x0 = true;
x1 = 5;
};
void x26 () {
bool x27 = x0;
bool x28 = x6;
bool x29 = x27 && x28;
if (x29) {
x24 = true;
int32_t x31 = x1;
int32_t x32 = x7;
int32_t x33 = x31 * x32;
x25 = x33;
} else {
if (x27) {
x24 = true;
int32_t x31 = x1;
x25 = x31;
} else {
if (x28) {
x24 = true;
int32_t x32 = x7;
x25 = x32;
} else {
x24 = false;
}
}
}
};
void x52 () {
bool x53 = x24;
if (x53) {
x50 = true;
int32_t x55 = x25;
int32_t x56 = x55 * 3;
x51 = x56;
} else {
x50 = false;
}
};
void x65 () {
bool x66 = x50;
bool x67 = x12;
bool x68 = x66 && x67;
if (x68) {
x63 = true;
int32_t x70 = x51;
int32_t x71 = x13;
int32_t x72 = x70 + x71;
x64 = x72;
} else {
if (x66) {
x63 = true;
int32_t x70 = x51;
x64 = x70;
} else {
if (x67) {
x63 = true;
int32_t x71 = x13;
x64 = x71;
} else {
x63 = false;
}
}
}
};
void x91 () {
bool x92 = x63;
if (x92) {
x89 = true;
int32_t x94 = x64;
int32_t x95 = x94 * 2;
x90 = x95;
} else {
x89 = false;
}
};
void x102 () {
x2();
x26();
x52();
x65();
x91();
};
void x8 () {
x6 = true;
x7 = 10;
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
void x110 () {
x8();
x14();
x26();
x52();
x65();
x91();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
