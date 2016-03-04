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
x8 = 10;
} else {
x7 = false;
}
};
bool  x20;
int32_t  x21;
void x22 () {
bool x23 = x7;
if (x23) {
x20 = true;
int32_t x25 = x8;
int32_t x26 = 2 * x25;
x21 = x26;
} else {
x20 = false;
}
};
void x34 () {
x2();
x9();
x22();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
