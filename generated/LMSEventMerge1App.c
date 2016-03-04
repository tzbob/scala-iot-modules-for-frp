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
bool  x36;
int32_t  x37;
bool  x64;
int32_t  x65;
void x2 () {
x0 = true;
x1 = 5;
};
void x8 () {
x6 = true;
x7 = 10;
};
void x14 () {
bool x15 = x0;
if (x15) {
x12 = true;
int32_t x17 = x1;
x13 = 1;
} else {
x12 = false;
}
};
void x26 () {
bool x27 = x6;
if (x27) {
x24 = true;
int32_t x29 = x7;
x25 = 2;
} else {
x24 = false;
}
};
void x38 () {
bool x39 = x12;
bool x40 = x24;
bool x41 = x39 && x40;
if (x41) {
x36 = true;
int32_t x43 = x13;
int32_t x44 = x25;
int32_t x45 = x43 + x44;
x37 = x45;
} else {
if (x39) {
x36 = true;
int32_t x49 = x13;
x37 = x49;
} else {
if (x40) {
x36 = true;
int32_t x53 = x25;
x37 = x53;
} else {
x36 = false;
}
}
}
};
void x66 () {
bool x67 = x36;
if (x67) {
x64 = true;
int32_t x69 = x37;
int32_t x70 = x69 * 2;
x65 = x70;
} else {
x64 = false;
}
};
void x77 () {
x2();
x8();
x14();
x26();
x38();
x66();
};
void x86 () {
x2();
x8();
x14();
x26();
x38();
x66();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
