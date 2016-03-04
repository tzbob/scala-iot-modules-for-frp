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
bool  x52;
int32_t  x53;
bool  x80;
int32_t  x81;
void x2 () {
x0 = true;
x1 = 10;
};
void x8 () {
x6 = true;
x7 = 5;
};
void x14 () {
bool x15 = x0;
if (x15) {
x12 = true;
int32_t x17 = x1;
x13 = 2;
} else {
x12 = false;
}
};
void x26 () {
bool x27 = x6;
bool x28 = x0;
bool x29 = x27 && x28;
if (x29) {
x24 = true;
int32_t x31 = x7;
int32_t x32 = x1;
int32_t x33 = x31 * x32;
x25 = x33;
} else {
if (x27) {
x24 = true;
int32_t x37 = x7;
x25 = x37;
} else {
if (x28) {
x24 = true;
int32_t x41 = x1;
x25 = x41;
} else {
x24 = false;
}
}
}
};
void x54 () {
bool x55 = x24;
bool x56 = x12;
bool x57 = x55 && x56;
if (x57) {
x52 = true;
int32_t x59 = x25;
int32_t x60 = x13;
int32_t x61 = x59 + x60;
x53 = x61;
} else {
if (x55) {
x52 = true;
int32_t x65 = x25;
x53 = x65;
} else {
if (x56) {
x52 = true;
int32_t x69 = x13;
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
x8();
x14();
x26();
x54();
x82();
};
void x102 () {
x2();
x8();
x14();
x26();
x54();
x82();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
