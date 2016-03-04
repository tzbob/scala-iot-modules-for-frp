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
x7 = true;
x8 = 10;
};
bool  x14;
int32_t  x15;
void x16 () {
bool x17 = x0;
if (x17) {
x14 = true;
int32_t x19 = x1;
x15 = 1;
} else {
x14 = false;
}
};
bool  x27;
int32_t  x28;
void x29 () {
bool x30 = x7;
if (x30) {
x27 = true;
int32_t x32 = x8;
x28 = 2;
} else {
x27 = false;
}
};
bool  x40;
int32_t  x41;
void x42 () {
bool x43 = x14;
bool x44 = x27;
bool x45 = x43 && x44;
if (x45) {
x40 = true;
int32_t x47 = x15;
int32_t x48 = x28;
int32_t x49 = x47 + x48;
x41 = x49;
} else {
if (x43) {
x40 = true;
int32_t x53 = x15;
x41 = x53;
} else {
if (x44) {
x40 = true;
int32_t x57 = x28;
x41 = x57;
} else {
x40 = false;
}
}
}
};
bool  x69;
int32_t  x70;
void x71 () {
bool x72 = x40;
if (x72) {
x69 = true;
int32_t x74 = x41;
int32_t x75 = x74 * 2;
x70 = x75;
} else {
x69 = false;
}
};
void x83 () {
x2();
x9();
x16();
x29();
x42();
x71();
};
void x92 () {
x2();
x9();
x16();
x29();
x42();
x71();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
