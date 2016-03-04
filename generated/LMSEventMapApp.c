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
bool  x22;
void x23 () {
bool x24 = x7;
if (x24) {
x21 = true;
int32_t x26 = x8;
int32_t x27 = x26 % 2;
bool x28 = x27 == 0;
x22 = x28;
} else {
x21 = false;
}
};
void x36 () {
x2();
x9();
x23();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
