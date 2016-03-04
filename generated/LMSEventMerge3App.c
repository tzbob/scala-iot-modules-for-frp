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
x1 = 10;
};
bool  x7;
int32_t  x8;
void x9 () {
x7 = true;
x8 = 5;
};
bool  x14;
int32_t  x15;
void x16 () {
bool x17 = x0;
if (x17) {
x14 = true;
int32_t x19 = x1;
x15 = 2;
} else {
x14 = false;
}
};
bool  x27;
int32_t  x28;
void x29 () {
bool x30 = x7;
bool x31 = x0;
bool x32 = x30 && x31;
if (x32) {
x27 = true;
int32_t x34 = x8;
int32_t x35 = x1;
int32_t x36 = x34 * x35;
x28 = x36;
} else {
if (x30) {
x27 = true;
int32_t x40 = x8;
x28 = x40;
} else {
if (x31) {
x27 = true;
int32_t x44 = x1;
x28 = x44;
} else {
x27 = false;
}
}
}
};
bool  x56;
int32_t  x57;
void x58 () {
bool x59 = x27;
bool x60 = x14;
bool x61 = x59 && x60;
if (x61) {
x56 = true;
int32_t x63 = x28;
int32_t x64 = x15;
int32_t x65 = x63 + x64;
x57 = x65;
} else {
if (x59) {
x56 = true;
int32_t x69 = x28;
x57 = x69;
} else {
if (x60) {
x56 = true;
int32_t x73 = x15;
x57 = x73;
} else {
x56 = false;
}
}
}
};
bool  x85;
int32_t  x86;
void x87 () {
bool x88 = x56;
if (x88) {
x85 = true;
int32_t x90 = x57;
int32_t x91 = x90 * 2;
x86 = x91;
} else {
x85 = false;
}
};
void x99 () {
x2();
x9();
x16();
x29();
x58();
x87();
};
void x108 () {
x2();
x9();
x16();
x29();
x58();
x87();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
