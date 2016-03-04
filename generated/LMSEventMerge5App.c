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
x8 = 1;
} else {
x7 = false;
}
};
bool  x20;
int32_t  x21;
void x22 () {
bool x23 = x0;
if (x23) {
x20 = true;
int32_t x25 = x1;
x21 = 2;
} else {
x20 = false;
}
};
bool  x33;
int32_t  x34;
void x35 () {
bool x36 = x7;
if (x36) {
int32_t x37 = x8;
printf("%s\n",string("filter3").c_str());
int32_t x39 = x37 % 2;
bool x40 = x39 == 0;
if (x40) {
x33 = true;
x34 = x37;
} else {
x33 = false;
}
} else {
x33 = false;
}
};
bool  x53;
int32_t  x54;
void x55 () {
bool x56 = x20;
if (x56) {
int32_t x57 = x21;
printf("%s\n",string("filter6").c_str());
int32_t x59 = x57 % 2;
bool x60 = x59 == 0;
if (x60) {
x53 = true;
x54 = x57;
} else {
x53 = false;
}
} else {
x53 = false;
}
};
bool  x73;
int32_t  x74;
void x75 () {
bool x76 = x33;
if (x76) {
x73 = true;
int32_t x78 = x34;
printf("%s\n",string("map4").c_str());
int32_t x80 = x78 + 1;
x74 = x80;
} else {
x73 = false;
}
};
bool  x88;
int32_t  x89;
void x90 () {
bool x91 = x53;
if (x91) {
x88 = true;
int32_t x93 = x54;
printf("%s\n",string("map7").c_str());
int32_t x95 = x93 + 1;
x89 = x95;
} else {
x88 = false;
}
};
bool  x103;
int32_t  x104;
void x105 () {
bool x106 = x73;
bool x107 = x88;
bool x108 = x106 && x107;
if (x108) {
x103 = true;
int32_t x110 = x74;
int32_t x111 = x89;
printf("%s\n",string("merge8").c_str());
int32_t x113 = x110 + x111;
x104 = x113;
} else {
if (x106) {
x103 = true;
int32_t x117 = x74;
x104 = x117;
} else {
if (x107) {
x103 = true;
int32_t x121 = x89;
x104 = x121;
} else {
x103 = false;
}
}
}
};
bool  x133;
int32_t  x134;
void x135 () {
bool x136 = x103;
if (x136) {
x133 = true;
int32_t x138 = x104;
printf("%s\n",string("map9").c_str());
int32_t x140 = x138 * 2;
x134 = x140;
} else {
x133 = false;
}
};
void x148 () {
x2();
x9();
x22();
x35();
x55();
x75();
x90();
x105();
x135();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
