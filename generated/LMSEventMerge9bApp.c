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
bool  x63;
int32_t  x64;
void x2 () {
x0 = true;
x1 = 2;
};
void x8 () {
bool x9 = x0;
if (x9) {
x6 = true;
int32_t x11 = x1;
printf("%s\n",string("map2").c_str());
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
printf("%s\n",string("map3").c_str());
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
printf("%s\n",string("merge4").c_str());
int32_t x44 = x41 + x42;
x35 = x44;
} else {
if (x37) {
x34 = true;
int32_t x48 = x7;
x35 = x48;
} else {
if (x38) {
x34 = true;
int32_t x52 = x21;
x35 = x52;
} else {
x34 = false;
}
}
}
};
void x65 () {
bool x66 = x20;
bool x67 = x34;
bool x68 = x66 && x67;
if (x68) {
x63 = true;
int32_t x70 = x21;
int32_t x71 = x35;
printf("%s\n",string("merge5").c_str());
int32_t x73 = x70 + x71;
x64 = x73;
} else {
if (x66) {
x63 = true;
int32_t x77 = x21;
x64 = x77;
} else {
if (x67) {
x63 = true;
int32_t x81 = x35;
x64 = x81;
} else {
x63 = false;
}
}
}
};
void x92 () {
x2();
x8();
x22();
x36();
x65();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
