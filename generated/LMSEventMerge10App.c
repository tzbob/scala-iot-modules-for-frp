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
printf("%s\n",string("mleft").c_str());
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
printf("%s\n",string("mright").c_str());
int32_t x29 = x27 + 3;
x23 = x29;
} else {
x22 = false;
}
};
bool  x37;
int32_t  x38;
void x39 () {
bool x40 = x7;
if (x40) {
x37 = true;
int32_t x42 = x8;
printf("%s\n",string("mleftright").c_str());
x38 = x42;
} else {
x37 = false;
}
};
bool  x51;
int32_t  x52;
void x53 () {
bool x54 = x7;
if (x54) {
x51 = true;
int32_t x56 = x8;
printf("%s\n",string("mleftleft").c_str());
int32_t x58 = x56 * 2;
x52 = x58;
} else {
x51 = false;
}
};
bool  x66;
int32_t  x67;
void x68 () {
bool x69 = x51;
bool x70 = x37;
bool x71 = x69 && x70;
if (x71) {
x66 = true;
int32_t x73 = x52;
int32_t x74 = x38;
printf("%s\n",string("mleftmerge").c_str());
int32_t x76 = x73 + x74;
x67 = x76;
} else {
if (x69) {
x66 = true;
int32_t x80 = x52;
x67 = x80;
} else {
if (x70) {
x66 = true;
int32_t x84 = x38;
x67 = x84;
} else {
x66 = false;
}
}
}
};
bool  x96;
int32_t  x97;
void x98 () {
bool x99 = x66;
bool x100 = x22;
bool x101 = x99 && x100;
if (x101) {
x96 = true;
int32_t x103 = x67;
int32_t x104 = x23;
printf("%s\n",string("e2").c_str());
int32_t x106 = x103 + x104;
x97 = x106;
} else {
if (x99) {
x96 = true;
int32_t x110 = x67;
x97 = x110;
} else {
if (x100) {
x96 = true;
int32_t x114 = x23;
x97 = x114;
} else {
x96 = false;
}
}
}
};
bool  x126;
int32_t  x127;
void x128 () {
bool x129 = x66;
if (x129) {
x126 = true;
int32_t x131 = x67;
printf("%s\n",string("e1").c_str());
x127 = x131;
} else {
x126 = false;
}
};
void x140 () {
x2();
x9();
x24();
x39();
x53();
x68();
x98();
x128();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
