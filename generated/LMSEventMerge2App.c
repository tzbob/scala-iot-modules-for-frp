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
x8 = 1;
} else {
x7 = false;
}
};
bool  x20;
int32_t  x21;
void x22 () {
bool x23 = x0;
if (x23) {
x20 = true;
int32_t x25 = x1;
x21 = 2;
} else {
x20 = false;
}
};
bool  x33;
int32_t  x34;
void x35 () {
bool x36 = x7;
bool x37 = x20;
bool x38 = x36 && x37;
if (x38) {
x33 = true;
int32_t x40 = x8;
int32_t x41 = x21;
int32_t x42 = x40 + x41;
x34 = x42;
} else {
if (x36) {
x33 = true;
int32_t x46 = x8;
x34 = x46;
} else {
if (x37) {
x33 = true;
int32_t x50 = x21;
x34 = x50;
} else {
x33 = false;
}
}
}
};
bool  x62;
int32_t  x63;
void x64 () {
bool x65 = x33;
if (x65) {
x62 = true;
int32_t x67 = x34;
int32_t x68 = x67 * 2;
x63 = x68;
} else {
x62 = false;
}
};
void x76 () {
x2();
x9();
x22();
x35();
x64();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
