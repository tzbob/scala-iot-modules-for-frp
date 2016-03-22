/*****************************************
  Emitting C Generated Code                  
*******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool x0;
int x1;
bool x29;
int x30;
bool x41;
int x42;
bool x53;
int x54;
bool x72;
int x73;
bool x91;
int x92;
bool x105;
int x106;
bool x119;
int x120;
bool x146;
int x147;
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
void x40() {
bool x31 = x0;
if (x31) {
x29 = true;
int x33 = x1;
x30 = 2;
} else {
x29 = false;
}
};
void x52() {
bool x43 = x0;
if (x43) {
x41 = true;
int x45 = x1;
x42 = 1;
} else {
x41 = false;
}
};
void x71() {
bool x55 = x29;
if (x55) {
int x56 = x30;
printf("%s\n","filter6");
int x58 = x56 % 2;
bool x59 = x58 == 0;
if (x59) {
x53 = true;
x54 = x56;
} else {
x53 = false;
}
} else {
x53 = false;
}
};
void x90() {
bool x74 = x41;
if (x74) {
int x75 = x42;
printf("%s\n","filter3");
int x77 = x75 % 2;
bool x78 = x77 == 0;
if (x78) {
x72 = true;
x73 = x75;
} else {
x72 = false;
}
} else {
x72 = false;
}
};
void x104() {
bool x93 = x53;
if (x93) {
x91 = true;
int x95 = x54;
printf("%s\n","map7");
int x97 = x95 + 1;
x92 = x97;
} else {
x91 = false;
}
};
void x118() {
bool x107 = x72;
if (x107) {
x105 = true;
int x109 = x73;
printf("%s\n","map4");
int x111 = x109 + 1;
x106 = x111;
} else {
x105 = false;
}
};
void x145() {
bool x121 = x105;
bool x122 = x91;
bool x123 = x121 && x122;
if (x123) {
x119 = true;
int x125 = x106;
int x126 = x92;
printf("%s\n","merge8");
int x128 = x125 + x126;
x120 = x128;
} else {
if (x121) {
x119 = true;
int x125 = x106;
x120 = x125;
} else {
if (x122) {
x119 = true;
int x126 = x92;
x120 = x126;
} else {
x119 = false;
}
}
}
};
void x159() {
bool x148 = x119;
if (x148) {
x146 = true;
int x150 = x120;
printf("%s\n","map9");
int x152 = x150 * 2;
x147 = x152;
} else {
x146 = false;
}
};
void top1(uint8_t* x160,int x161) {
uint8_t* x162 = x160;
int x163 = x161;
x28(x162,x163);
x40();
x52();
x71();
x90();
x104();
x118();
x145();
x159();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
