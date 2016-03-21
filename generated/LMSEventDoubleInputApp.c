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
bool  x26;
int32_t  x27;
void x2 () {
x0 = true;
x1 = 5;
};
void x14 () {
bool x15 = x0;
if (x15) {
x12 = true;
int32_t x17 = x1;
printf("%s\n","m1");
int32_t x19 = x17 * 2;
x13 = x19;
} else {
x12 = false;
}
};
void x40 () {
x2();
x14();
};
void x8 () {
x6 = true;
x7 = 5;
};
void x28 () {
bool x29 = x6;
if (x29) {
x26 = true;
int32_t x31 = x7;
printf("%s\n","m2");
int32_t x33 = x31 * 2;
x27 = x33;
} else {
x26 = false;
}
};
void x45 () {
x8();
x28();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
