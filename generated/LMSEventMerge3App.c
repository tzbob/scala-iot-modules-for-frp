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
bool  x38;
int32_t  x39;
bool  x50;
int32_t  x51;
bool  x76;
int32_t  x77;
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
int32_t x19 = x1;
x13 = x19;
} else {
if (x16) {
x12 = true;
int32_t x20 = x7;
x13 = x20;
} else {
x12 = false;
}
}
}
};
void x52 () {
bool x53 = x12;
bool x54 = x38;
bool x55 = x53 && x54;
if (x55) {
x50 = true;
int32_t x57 = x13;
int32_t x58 = x39;
int32_t x59 = x57 + x58;
x51 = x59;
} else {
if (x53) {
x50 = true;
int32_t x57 = x13;
x51 = x57;
} else {
if (x54) {
x50 = true;
int32_t x58 = x39;
x51 = x58;
} else {
x50 = false;
}
}
}
};
void x78 () {
bool x79 = x50;
if (x79) {
x76 = true;
int32_t x81 = x51;
int32_t x82 = x81 * 2;
x77 = x82;
} else {
x76 = false;
}
};
void x89 () {
x2();
x14();
x52();
x78();
};
void x8 () {
x6 = true;
x7 = 10;
};
void x40 () {
bool x41 = x6;
if (x41) {
x38 = true;
int32_t x43 = x7;
x39 = 2;
} else {
x38 = false;
}
};
void x96 () {
x8();
x14();
x40();
x52();
x78();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
