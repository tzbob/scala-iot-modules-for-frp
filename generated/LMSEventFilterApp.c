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
int32_t x13 = 2 * x12;
x8 = x13;
} else {
x7 = false;
}
};
bool  x21;
int32_t  x22;
void x23 () {
bool x24 = x7;
if (x24) {
int32_t x25 = x8;
int32_t x26 = x25 % 2;
bool x27 = x26 == 0;
if (x27) {
x21 = true;
x22 = x25;
} else {
x21 = false;
}
} else {
x21 = false;
}
};
bool  x40;
int32_t  x41;
void x42 () {
bool x43 = x21;
if (x43) {
x40 = true;
int32_t x45 = x22;
int32_t x46 = x45 + 1;
x41 = x46;
} else {
x40 = false;
}
};
void x54 () {
x2();
x9();
x23();
x42();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
