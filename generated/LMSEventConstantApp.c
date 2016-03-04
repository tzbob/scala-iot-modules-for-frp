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
bool  x18;
int32_t  x19;
void x2 () {
x0 = true;
x1 = 5;
};
void x8 () {
bool x9 = x0;
if (x9) {
x6 = true;
int32_t x11 = x1;
x7 = 10;
} else {
x6 = false;
}
};
void x20 () {
bool x21 = x6;
if (x21) {
x18 = true;
int32_t x23 = x7;
int32_t x24 = 2 * x23;
x19 = x24;
} else {
x18 = false;
}
};
void x31 () {
x2();
x8();
x20();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
