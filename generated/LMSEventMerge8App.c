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
bool  x20;
int32_t  x21;
bool  x34;
int32_t  x35;
bool  x52;
int32_t  x53;
bool  x70;
int32_t  x71;
bool  x84;
int32_t  x85;
bool  x97;
int32_t  x98;
bool  x124;
int32_t  x125;
bool  x138;
int32_t  x139;
bool  x165;
int32_t  x166;
bool  x179;
int32_t  x180;
void x2 () {
x0 = true;
x1 = 0;
};
void x8 () {
bool x9 = x0;
if (x9) {
x6 = true;
int32_t x11 = x1;
printf("%s\n","map9");
int32_t x13 = x11 + 10;
x7 = x13;
} else {
x6 = false;
}
};
void x22 () {
bool x23 = x0;
if (x23) {
x20 = true;
int32_t x25 = x1;
printf("%s\n","map2");
int32_t x27 = x25 + 1;
x21 = x27;
} else {
x20 = false;
}
};
void x36 () {
bool x37 = x20;
if (x37) {
int32_t x38 = x21;
printf("%s\n","filter5");
bool x40 = x38 == 1;
if (x40) {
x34 = true;
x35 = x38;
} else {
x34 = false;
}
} else {
x34 = false;
}
};
void x54 () {
bool x55 = x20;
if (x55) {
int32_t x56 = x21;
printf("%s\n","filter3");
bool x58 = x56 == 1;
if (x58) {
x52 = true;
x53 = x56;
} else {
x52 = false;
}
} else {
x52 = false;
}
};
void x72 () {
bool x73 = x34;
if (x73) {
x70 = true;
int32_t x75 = x35;
printf("%s\n","map6");
int32_t x77 = x75 * 2;
x71 = x77;
} else {
x70 = false;
}
};
void x86 () {
bool x87 = x52;
if (x87) {
x84 = true;
int32_t x89 = x53;
printf("%s\n","constant4");
x85 = 2;
} else {
x84 = false;
}
};
void x99 () {
bool x100 = x84;
bool x101 = x70;
bool x102 = x100 && x101;
if (x102) {
x97 = true;
int32_t x104 = x85;
int32_t x105 = x71;
printf("%s\n","merge7");
int32_t x107 = x104 + x105;
x98 = x107;
} else {
if (x100) {
x97 = true;
int32_t x104 = x85;
x98 = x104;
} else {
if (x101) {
x97 = true;
int32_t x105 = x71;
x98 = x105;
} else {
x97 = false;
}
}
}
};
void x126 () {
bool x127 = x97;
if (x127) {
x124 = true;
int32_t x129 = x98;
printf("%s\n","map8");
int32_t x131 = x129 + 3;
x125 = x131;
} else {
x124 = false;
}
};
void x140 () {
bool x141 = x124;
bool x142 = x6;
bool x143 = x141 && x142;
if (x143) {
x138 = true;
int32_t x145 = x125;
int32_t x146 = x7;
printf("%s\n","merge10");
int32_t x148 = x145 + x146;
x139 = x148;
} else {
if (x141) {
x138 = true;
int32_t x145 = x125;
x139 = x145;
} else {
if (x142) {
x138 = true;
int32_t x146 = x7;
x139 = x146;
} else {
x138 = false;
}
}
}
};
void x167 () {
bool x168 = x138;
if (x168) {
x165 = true;
int32_t x170 = x139;
printf("%s\n","map12");
int32_t x172 = x170 * 2;
x166 = x172;
} else {
x165 = false;
}
};
void x181 () {
bool x182 = x138;
if (x182) {
x179 = true;
int32_t x184 = x139;
printf("%s\n","map11");
int32_t x186 = x184 * 2;
x180 = x186;
} else {
x179 = false;
}
};
void x193 () {
x2();
x8();
x22();
x36();
x54();
x72();
x86();
x99();
x126();
x140();
x167();
x181();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
