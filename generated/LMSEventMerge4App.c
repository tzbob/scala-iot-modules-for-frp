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
x21 = 3;
} else {
x20 = false;
}
};
bool  x33;
int32_t  x34;
void x35 () {
bool x36 = x0;
if (x36) {
x33 = true;
int32_t x38 = x1;
x34 = 2;
} else {
x33 = false;
}
};
bool  x46;
int32_t  x47;
void x48 () {
bool x49 = x7;
bool x50 = x33;
bool x51 = x49 && x50;
if (x51) {
x46 = true;
int32_t x53 = x8;
int32_t x54 = x34;
int32_t x55 = x53 + x54;
x47 = x55;
} else {
if (x49) {
x46 = true;
int32_t x59 = x8;
x47 = x59;
} else {
if (x50) {
x46 = true;
int32_t x63 = x34;
x47 = x63;
} else {
x46 = false;
}
}
}
};
bool  x75;
int32_t  x76;
void x77 () {
bool x78 = x46;
if (x78) {
x75 = true;
int32_t x80 = x47;
int32_t x81 = x80 + 2;
x76 = x81;
} else {
x75 = false;
}
};
bool  x89;
int32_t  x90;
void x91 () {
bool x92 = x75;
bool x93 = x20;
bool x94 = x92 && x93;
if (x94) {
x89 = true;
int32_t x96 = x76;
int32_t x97 = x21;
int32_t x98 = x96 + x97;
x90 = x98;
} else {
if (x92) {
x89 = true;
int32_t x102 = x76;
x90 = x102;
} else {
if (x93) {
x89 = true;
int32_t x106 = x21;
x90 = x106;
} else {
x89 = false;
}
}
}
};
bool  x118;
int32_t  x119;
void x120 () {
bool x121 = x89;
if (x121) {
x118 = true;
int32_t x123 = x90;
int32_t x124 = x123 * 2;
x119 = x124;
} else {
x118 = false;
}
};
void x132 () {
x2();
x9();
x22();
x35();
x48();
x77();
x91();
x120();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
