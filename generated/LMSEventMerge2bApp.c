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
bool x24;
int32_t x25;
bool x36;
int32_t x37;
bool x48;
int32_t x49;
bool x74;
int32_t x75;
void x2 () {
x0 = true;
x1 = 5;
};
void x8 () {
bool x9 = x0;
if (x9) {
int32_t x10 = x1;
int32_t x11 = x10 % 2;
bool x12 = x11 == 0;
if (x12) {
x6 = true;
x7 = x10;
} else {
x6 = false;
}
} else {
x6 = false;
}
};
void x26 () {
bool x27 = x0;
if (x27) {
x24 = true;
int32_t x29 = x1;
x25 = 2;
} else {
x24 = false;
}
};
void x38 () {
bool x39 = x6;
if (x39) {
x36 = true;
int32_t x41 = x7;
x37 = 1;
} else {
x36 = false;
}
};
void x50 () {
bool x51 = x36;
bool x52 = x24;
bool x53 = x51 && x52;
if (x53) {
x48 = true;
int32_t x55 = x37;
int32_t x56 = x25;
int32_t x57 = x55 + x56;
x49 = x57;
} else {
if (x51) {
x48 = true;
int32_t x55 = x37;
x49 = x55;
} else {
if (x52) {
x48 = true;
int32_t x56 = x25;
x49 = x56;
} else {
x48 = false;
}
}
}
};
void x76 () {
bool x77 = x48;
if (x77) {
x74 = true;
int32_t x79 = x49;
int32_t x80 = x79 * 2;
x75 = x80;
} else {
x74 = false;
}
};
void x87 () {
x2();
x8();
x26();
x38();
x50();
x76();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
