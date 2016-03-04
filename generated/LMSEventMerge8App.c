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
int32_t x14 = x12 + 1;
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
printf("%s\n",string("map9").c_str());
int32_t x29 = x27 + 10;
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
int32_t x41 = x8;
printf("%s\n",string("filter5").c_str());
bool x43 = x41 == 1;
if (x43) {
x37 = true;
x38 = x41;
} else {
x37 = false;
}
} else {
x37 = false;
}
};
bool  x56;
int32_t  x57;
void x58 () {
bool x59 = x7;
if (x59) {
int32_t x60 = x8;
printf("%s\n",string("filter3").c_str());
bool x62 = x60 == 1;
if (x62) {
x56 = true;
x57 = x60;
} else {
x56 = false;
}
} else {
x56 = false;
}
};
bool  x75;
int32_t  x76;
void x77 () {
bool x78 = x56;
if (x78) {
x75 = true;
int32_t x80 = x57;
printf("%s\n",string("constant4").c_str());
x76 = 2;
} else {
x75 = false;
}
};
bool  x89;
int32_t  x90;
void x91 () {
bool x92 = x37;
if (x92) {
x89 = true;
int32_t x94 = x38;
printf("%s\n",string("map6").c_str());
int32_t x96 = x94 * 2;
x90 = x96;
} else {
x89 = false;
}
};
bool  x104;
int32_t  x105;
void x106 () {
bool x107 = x75;
bool x108 = x89;
bool x109 = x107 && x108;
if (x109) {
x104 = true;
int32_t x111 = x76;
int32_t x112 = x90;
printf("%s\n",string("merge7").c_str());
int32_t x114 = x111 + x112;
x105 = x114;
} else {
if (x107) {
x104 = true;
int32_t x118 = x76;
x105 = x118;
} else {
if (x108) {
x104 = true;
int32_t x122 = x90;
x105 = x122;
} else {
x104 = false;
}
}
}
};
bool  x134;
int32_t  x135;
void x136 () {
bool x137 = x104;
if (x137) {
x134 = true;
int32_t x139 = x105;
printf("%s\n",string("map8").c_str());
int32_t x141 = x139 + 3;
x135 = x141;
} else {
x134 = false;
}
};
bool  x149;
int32_t  x150;
void x151 () {
bool x152 = x134;
bool x153 = x22;
bool x154 = x152 && x153;
if (x154) {
x149 = true;
int32_t x156 = x135;
int32_t x157 = x23;
printf("%s\n",string("merge10").c_str());
int32_t x159 = x156 + x157;
x150 = x159;
} else {
if (x152) {
x149 = true;
int32_t x163 = x135;
x150 = x163;
} else {
if (x153) {
x149 = true;
int32_t x167 = x23;
x150 = x167;
} else {
x149 = false;
}
}
}
};
bool  x179;
int32_t  x180;
void x181 () {
bool x182 = x149;
if (x182) {
x179 = true;
int32_t x184 = x150;
printf("%s\n",string("map11").c_str());
int32_t x186 = x184 * 2;
x180 = x186;
} else {
x179 = false;
}
};
bool  x194;
int32_t  x195;
void x196 () {
bool x197 = x149;
if (x197) {
x194 = true;
int32_t x199 = x150;
printf("%s\n",string("map12").c_str());
int32_t x201 = x199 * 2;
x195 = x201;
} else {
x194 = false;
}
};
void x209 () {
x2();
x9();
x24();
x39();
x58();
x77();
x91();
x106();
x136();
x151();
x181();
x196();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
