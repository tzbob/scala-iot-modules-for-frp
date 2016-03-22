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
bool x56;
int32_t x57;
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
bool x33 = x6;
bool x34 = x18;
bool x35 = x33 && x34;
if (x35) {
x30 = true;
int32_t x37 = x7;
int32_t x38 = x19;
int32_t x39 = x37 + x38;
x31 = x39;
} else {
if (x33) {
x30 = true;
int32_t x37 = x7;
x31 = x37;
} else {
if (x34) {
x30 = true;
int32_t x38 = x19;
x31 = x38;
} else {
x30 = false;
}
}
}
};
void x58 () {
bool x59 = x30;
if (x59) {
x56 = true;
int32_t x61 = x31;
int32_t x62 = x61 * 2;
x57 = x62;
} else {
x56 = false;
}
};
void x69 () {
x2();
x8();
x20();
x32();
x58();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
