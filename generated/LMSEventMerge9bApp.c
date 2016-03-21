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
bool  x20;
int32_t  x21;
bool  x34;
int32_t  x35;
bool  x61;
int32_t  x62;
void x2 () {
x0 = true;
x1 = 2;
};
void x8 () {
bool x9 = x0;
if (x9) {
x6 = true;
int32_t x11 = x1;
printf("%s\n","map2");
int32_t x13 = x11 * 2;
x7 = x13;
} else {
x6 = false;
}
};
void x22 () {
bool x23 = x0;
if (x23) {
x20 = true;
int32_t x25 = x1;
printf("%s\n","map3");
int32_t x27 = x25 * 2;
x21 = x27;
} else {
x20 = false;
}
};
void x36 () {
bool x37 = x6;
bool x38 = x20;
bool x39 = x37 && x38;
if (x39) {
x34 = true;
int32_t x41 = x7;
int32_t x42 = x21;
printf("%s\n","merge4");
int32_t x44 = x41 + x42;
x35 = x44;
} else {
if (x37) {
x34 = true;
int32_t x41 = x7;
x35 = x41;
} else {
if (x38) {
x34 = true;
int32_t x42 = x21;
x35 = x42;
} else {
x34 = false;
}
}
}
};
void x63 () {
bool x64 = x20;
bool x65 = x34;
bool x66 = x64 && x65;
if (x66) {
x61 = true;
int32_t x68 = x21;
int32_t x69 = x35;
printf("%s\n","merge5");
int32_t x71 = x68 + x69;
x62 = x71;
} else {
if (x64) {
x61 = true;
int32_t x68 = x21;
x62 = x68;
} else {
if (x65) {
x61 = true;
int32_t x69 = x35;
x62 = x69;
} else {
x61 = false;
}
}
}
};
void x88 () {
x2();
x8();
x22();
x36();
x63();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
