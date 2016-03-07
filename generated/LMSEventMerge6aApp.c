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
bool  x19;
int32_t  x20;
bool  x32;
int32_t  x33;
bool  x45;
int32_t  x46;
bool  x63;
int32_t  x64;
bool  x76;
int32_t  x77;
bool  x104;
int32_t  x105;
void x2 () {
x0 = true;
x1 = 5;
};
void x8 () {
bool x9 = x0;
if (x9) {
x6 = true;
int32_t x11 = x1;
int32_t x12 = x11 + 1;
x7 = x12;
} else {
x6 = false;
}
};
void x21 () {
bool x22 = x6;
if (x22) {
x19 = true;
int32_t x24 = x7;
int32_t x25 = x24 * 2;
x20 = x25;
} else {
x19 = false;
}
};
void x34 () {
bool x35 = x19;
if (x35) {
x32 = true;
int32_t x37 = x20;
int32_t x38 = x37 + 1;
x33 = x38;
} else {
x32 = false;
}
};
void x47 () {
bool x48 = x19;
if (x48) {
int32_t x49 = x20;
int32_t x50 = x49 % 2;
bool x51 = x50 == 0;
if (x51) {
x45 = true;
x46 = x49;
} else {
x45 = false;
}
} else {
x45 = false;
}
};
void x65 () {
bool x66 = x45;
if (x66) {
x63 = true;
int32_t x68 = x46;
int32_t x69 = x68 + 1;
x64 = x69;
} else {
x63 = false;
}
};
void x78 () {
bool x79 = x63;
bool x80 = x32;
bool x81 = x79 && x80;
if (x81) {
x76 = true;
int32_t x83 = x64;
int32_t x84 = x33;
int32_t x85 = x83 + x84;
x77 = x85;
} else {
if (x79) {
x76 = true;
int32_t x89 = x64;
x77 = x89;
} else {
if (x80) {
x76 = true;
int32_t x93 = x33;
x77 = x93;
} else {
x76 = false;
}
}
}
};
void x106 () {
bool x107 = x76;
if (x107) {
x104 = true;
int32_t x109 = x77;
int32_t x110 = x109 * 2;
x105 = x110;
} else {
x104 = false;
}
};
void x117 () {
x2();
x8();
x21();
x34();
x47();
x65();
x78();
x106();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
