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
bool  x37;
int32_t  x38;
void x2 () {
x0 = true;
x1 = 5;
};
void x8 () {
bool x9 = x0;
if (x9) {
x6 = true;
int32_t x11 = x1;
int32_t x12 = 2 * x11;
x7 = x12;
} else {
x6 = false;
}
};
void x21 () {
bool x22 = x6;
if (x22) {
int32_t x23 = x7;
int32_t x24 = x23 % 2;
bool x25 = x24 == 0;
if (x25) {
x19 = true;
x20 = x23;
} else {
x19 = false;
}
} else {
x19 = false;
}
};
void x39 () {
bool x40 = x19;
if (x40) {
x37 = true;
int32_t x42 = x20;
int32_t x43 = x42 + 1;
x38 = x43;
} else {
x37 = false;
}
};
void x50 () {
x2();
x8();
x21();
x39();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
