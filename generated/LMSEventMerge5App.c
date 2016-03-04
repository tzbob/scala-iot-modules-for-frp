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
bool  x30;
int32_t  x31;
bool  x49;
int32_t  x50;
bool  x68;
int32_t  x69;
bool  x82;
int32_t  x83;
bool  x96;
int32_t  x97;
bool  x125;
int32_t  x126;
void x2 () {
x0 = true;
x1 = 5;
};
void x8 () {
bool x9 = x0;
if (x9) {
x6 = true;
int32_t x11 = x1;
x7 = 1;
} else {
x6 = false;
}
};
void x20 () {
bool x21 = x0;
if (x21) {
x18 = true;
int32_t x23 = x1;
x19 = 2;
} else {
x18 = false;
}
};
void x32 () {
bool x33 = x6;
if (x33) {
int32_t x34 = x7;
printf("%s\n",string("filter3").c_str());
int32_t x36 = x34 % 2;
bool x37 = x36 == 0;
if (x37) {
x30 = true;
x31 = x34;
} else {
x30 = false;
}
} else {
x30 = false;
}
};
void x51 () {
bool x52 = x18;
if (x52) {
int32_t x53 = x19;
printf("%s\n",string("filter6").c_str());
int32_t x55 = x53 % 2;
bool x56 = x55 == 0;
if (x56) {
x49 = true;
x50 = x53;
} else {
x49 = false;
}
} else {
x49 = false;
}
};
void x70 () {
bool x71 = x30;
if (x71) {
x68 = true;
int32_t x73 = x31;
printf("%s\n",string("map4").c_str());
int32_t x75 = x73 + 1;
x69 = x75;
} else {
x68 = false;
}
};
void x84 () {
bool x85 = x49;
if (x85) {
x82 = true;
int32_t x87 = x50;
printf("%s\n",string("map7").c_str());
int32_t x89 = x87 + 1;
x83 = x89;
} else {
x82 = false;
}
};
void x98 () {
bool x99 = x68;
bool x100 = x82;
bool x101 = x99 && x100;
if (x101) {
x96 = true;
int32_t x103 = x69;
int32_t x104 = x83;
printf("%s\n",string("merge8").c_str());
int32_t x106 = x103 + x104;
x97 = x106;
} else {
if (x99) {
x96 = true;
int32_t x110 = x69;
x97 = x110;
} else {
if (x100) {
x96 = true;
int32_t x114 = x83;
x97 = x114;
} else {
x96 = false;
}
}
}
};
void x127 () {
bool x128 = x96;
if (x128) {
x125 = true;
int32_t x130 = x97;
printf("%s\n",string("map9").c_str());
int32_t x132 = x130 * 2;
x126 = x132;
} else {
x125 = false;
}
};
void x139 () {
x2();
x8();
x20();
x32();
x51();
x70();
x84();
x98();
x127();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
