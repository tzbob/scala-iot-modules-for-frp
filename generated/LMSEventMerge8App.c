/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
bool x0;
int x1;
bool x29;
int x30;
bool x43;
int x44;
bool x57;
int x58;
bool x75;
int x76;
bool x93;
int x94;
bool x107;
int x108;
bool x120;
int x121;
bool x147;
int x148;
bool x161;
int x162;
bool x188;
int x189;
bool x202;
int x203;
int x216;
void x28(uint8_t* x2,int x3) {
int x6 = 0;
int x7 = 0;
int x5 = x3;
uint8_t* x4 = x2;
for (;;) {
int x8 = x7;
bool x9 = x8 < x5;
if (!x9) break;
int x11 = x7;
uint8_t x12 = x4[x11];
int x16 = x6;
int x13 = (int ) x12;
int x14 = x11 * 8;
int x15 = x13 << x14;
int x17 = x16 + x15;
x6 = x17;
int x19 = x11 + 1;
x7 = x19;
}
x0 = true;
int x24 = x6;
int x25 = (int ) x24;
x1 = x25;
};
void x42() {
bool x31 = x0;
if (x31) {
x29 = true;
int x33 = x1;
printf("%s\n","map9");
int x35 = x33 + 10;
x30 = x35;
} else {
x29 = false;
}
};
void x56() {
bool x45 = x0;
if (x45) {
x43 = true;
int x47 = x1;
printf("%s\n","map2");
int x49 = x47 + 1;
x44 = x49;
} else {
x43 = false;
}
};
void x74() {
bool x59 = x43;
if (x59) {
int x60 = x44;
printf("%s\n","filter5");
bool x62 = x60 == 1;
if (x62) {
x57 = true;
x58 = x60;
} else {
x57 = false;
}
} else {
x57 = false;
}
};
void x92() {
bool x77 = x43;
if (x77) {
int x78 = x44;
printf("%s\n","filter3");
bool x80 = x78 == 1;
if (x80) {
x75 = true;
x76 = x78;
} else {
x75 = false;
}
} else {
x75 = false;
}
};
void x106() {
bool x95 = x57;
if (x95) {
x93 = true;
int x97 = x58;
printf("%s\n","map6");
int x99 = x97 * 2;
x94 = x99;
} else {
x93 = false;
}
};
void x119() {
bool x109 = x75;
if (x109) {
x107 = true;
int x111 = x76;
printf("%s\n","constant4");
x108 = 2;
} else {
x107 = false;
}
};
void x146() {
bool x122 = x107;
bool x123 = x93;
bool x124 = x122 && x123;
if (x124) {
x120 = true;
int x126 = x108;
int x127 = x94;
printf("%s\n","merge7");
int x129 = x126 + x127;
x121 = x129;
} else {
if (x122) {
x120 = true;
int x126 = x108;
x121 = x126;
} else {
if (x123) {
x120 = true;
int x127 = x94;
x121 = x127;
} else {
x120 = false;
}
}
}
};
void x160() {
bool x149 = x120;
if (x149) {
x147 = true;
int x151 = x121;
printf("%s\n","map8");
int x153 = x151 + 3;
x148 = x153;
} else {
x147 = false;
}
};
void x187() {
bool x163 = x147;
bool x164 = x29;
bool x165 = x163 && x164;
if (x165) {
x161 = true;
int x167 = x148;
int x168 = x30;
printf("%s\n","merge10");
int x170 = x167 + x168;
x162 = x170;
} else {
if (x163) {
x161 = true;
int x167 = x148;
x162 = x167;
} else {
if (x164) {
x161 = true;
int x168 = x30;
x162 = x168;
} else {
x161 = false;
}
}
}
};
void x201() {
bool x190 = x161;
if (x190) {
x188 = true;
int x192 = x162;
printf("%s\n","map12");
int x194 = x192 * 2;
x189 = x194;
} else {
x188 = false;
}
};
void x215() {
bool x204 = x161;
if (x204) {
x202 = true;
int x206 = x162;
printf("%s\n","map11");
int x208 = x206 * 2;
x203 = x208;
} else {
x202 = false;
}
};
void top1(uint8_t* x236,int x237) {
uint8_t* x238 = x236;
int x239 = x237;
x28(x238,x239);
x42();
x56();
x74();
x92();
x106();
x119();
x146();
x160();
x187();
x201();
x215();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
