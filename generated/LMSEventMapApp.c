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
bool x19;
bool x20;
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
x19 = true;
int32_t x24 = x7;
int32_t x25 = x24 % 2;
bool x26 = x25 == 0;
x20 = x26;
} else {
x19 = false;
}
};
void x33 () {
x2();
x8();
x21();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
