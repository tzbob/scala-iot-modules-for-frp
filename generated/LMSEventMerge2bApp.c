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
int32_t x11 = x1;
int32_t x12 = x11 % 2;
bool x13 = x12 == 0;
if (x13) {
x7 = true;
x8 = x11;
} else {
x7 = false;
}
} else {
x7 = false;
}
};
bool  x26;
int32_t  x27;
void x28 () {
bool x29 = x0;
if (x29) {
x26 = true;
int32_t x31 = x1;
x27 = 2;
} else {
x26 = false;
}
};
bool  x39;
int32_t  x40;
void x41 () {
bool x42 = x7;
if (x42) {
x39 = true;
int32_t x44 = x8;
x40 = 1;
} else {
x39 = false;
}
};
bool  x52;
int32_t  x53;
void x54 () {
bool x55 = x39;
bool x56 = x26;
bool x57 = x55 && x56;
if (x57) {
x52 = true;
int32_t x59 = x40;
int32_t x60 = x27;
int32_t x61 = x59 + x60;
x53 = x61;
} else {
if (x55) {
x52 = true;
int32_t x65 = x40;
x53 = x65;
} else {
if (x56) {
x52 = true;
int32_t x69 = x27;
x53 = x69;
} else {
x52 = false;
}
}
}
};
bool  x81;
int32_t  x82;
void x83 () {
bool x84 = x52;
if (x84) {
x81 = true;
int32_t x86 = x53;
int32_t x87 = x86 * 2;
x82 = x87;
} else {
x81 = false;
}
};
void x95 () {
x2();
x9();
x28();
x41();
x54();
x83();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
