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
bool  x52;
int32_t  x53;
bool  x65;
int32_t  x66;
bool  x93;
int32_t  x94;
void x2 () {
x0 = true;
x1 = 10;
};
void x8 () {
x6 = true;
x7 = 5;
};
void x14 () {
bool x15 = x0;
if (x15) {
x12 = true;
int32_t x17 = x1;
x13 = 2;
} else {
x12 = false;
}
};
void x26 () {
bool x27 = x6;
bool x28 = x0;
bool x29 = x27 && x28;
if (x29) {
x24 = true;
int32_t x31 = x7;
int32_t x32 = x1;
int32_t x33 = x31 * x32;
x25 = x33;
} else {
if (x27) {
x24 = true;
int32_t x37 = x7;
x25 = x37;
} else {
if (x28) {
x24 = true;
int32_t x41 = x1;
x25 = x41;
} else {
x24 = false;
}
}
}
};
void x54 () {
bool x55 = x24;
if (x55) {
x52 = true;
int32_t x57 = x25;
int32_t x58 = x57 * 3;
x53 = x58;
} else {
x52 = false;
}
};
void x67 () {
bool x68 = x52;
bool x69 = x12;
bool x70 = x68 && x69;
if (x70) {
x65 = true;
int32_t x72 = x53;
int32_t x73 = x13;
int32_t x74 = x72 + x73;
x66 = x74;
} else {
if (x68) {
x65 = true;
int32_t x78 = x53;
x66 = x78;
} else {
if (x69) {
x65 = true;
int32_t x82 = x13;
x66 = x82;
} else {
x65 = false;
}
}
}
};
void x95 () {
bool x96 = x65;
if (x96) {
x93 = true;
int32_t x98 = x66;
int32_t x99 = x98 * 2;
x94 = x99;
} else {
x93 = false;
}
};
void x106 () {
x2();
x8();
x14();
x26();
x54();
x67();
x95();
};
void x116 () {
x2();
x8();
x14();
x26();
x54();
x67();
x95();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
