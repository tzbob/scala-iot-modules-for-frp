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
bool  x83;
int32_t  x84;
bool  x97;
int32_t  x98;
bool  x126;
int32_t  x127;
bool  x140;
int32_t  x141;
bool  x169;
int32_t  x170;
bool  x183;
int32_t  x184;
void x2 () {
x0 = true;
x1 = 2;
};
void x8 () {
bool x9 = x0;
if (x9) {
x6 = true;
int32_t x11 = x1;
printf("%s\n",string("map2").c_str());
int32_t x13 = x11 + 1;
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
printf("%s\n",string("map9").c_str());
int32_t x27 = x25 + 10;
x21 = x27;
} else {
x20 = false;
}
};
void x36 () {
bool x37 = x6;
if (x37) {
int32_t x38 = x7;
printf("%s\n",string("filter5").c_str());
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
bool x55 = x6;
if (x55) {
int32_t x56 = x7;
printf("%s\n",string("filter3").c_str());
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
bool x73 = x52;
if (x73) {
x70 = true;
int32_t x75 = x53;
printf("%s\n",string("constant4").c_str());
x71 = 2;
} else {
x70 = false;
}
};
void x85 () {
bool x86 = x34;
if (x86) {
x83 = true;
int32_t x88 = x35;
printf("%s\n",string("map6").c_str());
int32_t x90 = x88 * 2;
x84 = x90;
} else {
x83 = false;
}
};
void x99 () {
bool x100 = x70;
bool x101 = x83;
bool x102 = x100 && x101;
if (x102) {
x97 = true;
int32_t x104 = x71;
int32_t x105 = x84;
printf("%s\n",string("merge7").c_str());
int32_t x107 = x104 + x105;
x98 = x107;
} else {
if (x100) {
x97 = true;
int32_t x111 = x71;
x98 = x111;
} else {
if (x101) {
x97 = true;
int32_t x115 = x84;
x98 = x115;
} else {
x97 = false;
}
}
}
};
void x128 () {
bool x129 = x97;
if (x129) {
x126 = true;
int32_t x131 = x98;
printf("%s\n",string("map8").c_str());
int32_t x133 = x131 + 3;
x127 = x133;
} else {
x126 = false;
}
};
void x142 () {
bool x143 = x126;
bool x144 = x20;
bool x145 = x143 && x144;
if (x145) {
x140 = true;
int32_t x147 = x127;
int32_t x148 = x21;
printf("%s\n",string("merge10").c_str());
int32_t x150 = x147 + x148;
x141 = x150;
} else {
if (x143) {
x140 = true;
int32_t x154 = x127;
x141 = x154;
} else {
if (x144) {
x140 = true;
int32_t x158 = x21;
x141 = x158;
} else {
x140 = false;
}
}
}
};
void x171 () {
bool x172 = x140;
if (x172) {
x169 = true;
int32_t x174 = x141;
printf("%s\n",string("map11").c_str());
int32_t x176 = x174 * 2;
x170 = x176;
} else {
x169 = false;
}
};
void x185 () {
bool x186 = x140;
if (x186) {
x183 = true;
int32_t x188 = x141;
printf("%s\n",string("map12").c_str());
int32_t x190 = x188 * 2;
x184 = x190;
} else {
x183 = false;
}
};
void x197 () {
x2();
x8();
x22();
x36();
x54();
x72();
x85();
x99();
x128();
x142();
x171();
x185();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
