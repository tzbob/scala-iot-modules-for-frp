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
x1 = 2;
};
bool  x7;
int32_t  x8;
void x9 () {
bool x10 = x0;
if (x10) {
x7 = true;
int32_t x12 = x1;
printf("%s\n",string("map2").c_str());
int32_t x14 = x12 * 2;
x8 = x14;
} else {
x7 = false;
}
};
bool  x22;
int32_t  x23;
void x24 () {
bool x25 = x0;
if (x25) {
x22 = true;
int32_t x27 = x1;
printf("%s\n",string("map3").c_str());
int32_t x29 = x27 * 2;
x23 = x29;
} else {
x22 = false;
}
};
bool  x37;
int32_t  x38;
void x39 () {
bool x40 = x7;
bool x41 = x22;
bool x42 = x40 && x41;
if (x42) {
x37 = true;
int32_t x44 = x8;
int32_t x45 = x23;
printf("%s\n",string("merge4").c_str());
int32_t x47 = x44 + x45;
x38 = x47;
} else {
if (x40) {
x37 = true;
int32_t x51 = x8;
x38 = x51;
} else {
if (x41) {
x37 = true;
int32_t x55 = x23;
x38 = x55;
} else {
x37 = false;
}
}
}
};
bool  x67;
int32_t  x68;
void x69 () {
bool x70 = x37;
bool x71 = x22;
bool x72 = x70 && x71;
if (x72) {
x67 = true;
int32_t x74 = x38;
int32_t x75 = x23;
printf("%s\n",string("merge5").c_str());
int32_t x77 = x74 + x75;
x68 = x77;
} else {
if (x70) {
x67 = true;
int32_t x81 = x38;
x68 = x81;
} else {
if (x71) {
x67 = true;
int32_t x85 = x23;
x68 = x85;
} else {
x67 = false;
}
}
}
};
void x97 () {
x2();
x9();
x24();
x39();
x69();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
