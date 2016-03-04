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
if (x59) {
x56 = true;
int32_t x61 = x28;
int32_t x62 = x61 * 3;
x57 = x62;
} else {
x56 = false;
}
};
bool  x70;
int32_t  x71;
void x72 () {
bool x73 = x56;
bool x74 = x14;
bool x75 = x73 && x74;
if (x75) {
x70 = true;
int32_t x77 = x57;
int32_t x78 = x15;
int32_t x79 = x77 + x78;
x71 = x79;
} else {
if (x73) {
x70 = true;
int32_t x83 = x57;
x71 = x83;
} else {
if (x74) {
x70 = true;
int32_t x87 = x15;
x71 = x87;
} else {
x70 = false;
}
}
}
};
bool  x99;
int32_t  x100;
void x101 () {
bool x102 = x70;
if (x102) {
x99 = true;
int32_t x104 = x71;
int32_t x105 = x104 * 2;
x100 = x105;
} else {
x99 = false;
}
};
void x113 () {
x2();
x9();
x16();
x29();
x58();
x72();
x101();
};
void x123 () {
x2();
x9();
x16();
x29();
x58();
x72();
x101();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
