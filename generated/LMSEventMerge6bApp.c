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
bool  x19;
int32_t  x20;
bool  x32;
int32_t  x33;
bool  x44;
int32_t  x45;
bool  x56;
int32_t  x57;
bool  x74;
int32_t  x75;
bool  x92;
int32_t  x93;
bool  x105;
int32_t  x106;
bool  x118;
int32_t  x119;
bool  x146;
int32_t  x147;
void x2 () {
x0 = true;
x1 = 5;
};
void x8 () {
bool x9 = x0;
if (x9) {
x6 = true;
int32_t x11 = x1;
int32_t x12 = x11 + 1;
x7 = x12;
} else {
x6 = false;
}
};
void x21 () {
bool x22 = x6;
if (x22) {
x19 = true;
int32_t x24 = x7;
int32_t x25 = x24 * 2;
x20 = x25;
} else {
x19 = false;
}
};
void x34 () {
bool x35 = x19;
if (x35) {
x32 = true;
int32_t x37 = x20;
x33 = 1;
} else {
x32 = false;
}
};
void x46 () {
bool x47 = x19;
if (x47) {
x44 = true;
int32_t x49 = x20;
x45 = 2;
} else {
x44 = false;
}
};
void x58 () {
bool x59 = x44;
if (x59) {
int32_t x60 = x45;
int32_t x61 = x60 % 2;
bool x62 = x61 == 0;
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
void x76 () {
bool x77 = x32;
if (x77) {
int32_t x78 = x33;
int32_t x79 = x78 % 2;
bool x80 = x79 == 0;
if (x80) {
x74 = true;
x75 = x78;
} else {
x74 = false;
}
} else {
x74 = false;
}
};
void x94 () {
bool x95 = x56;
if (x95) {
x92 = true;
int32_t x97 = x57;
int32_t x98 = x97 + 1;
x93 = x98;
} else {
x92 = false;
}
};
void x107 () {
bool x108 = x74;
if (x108) {
x105 = true;
int32_t x110 = x75;
int32_t x111 = x110 + 1;
x106 = x111;
} else {
x105 = false;
}
};
void x120 () {
bool x121 = x105;
bool x122 = x92;
bool x123 = x121 && x122;
if (x123) {
x118 = true;
int32_t x125 = x106;
int32_t x126 = x93;
int32_t x127 = x125 + x126;
x119 = x127;
} else {
if (x121) {
x118 = true;
int32_t x131 = x106;
x119 = x131;
} else {
if (x122) {
x118 = true;
int32_t x135 = x93;
x119 = x135;
} else {
x118 = false;
}
}
}
};
void x148 () {
bool x149 = x118;
if (x149) {
x146 = true;
int32_t x151 = x119;
int32_t x152 = x151 * 2;
x147 = x152;
} else {
x146 = false;
}
};
void x159 () {
x2();
x8();
x21();
x34();
x46();
x58();
x76();
x94();
x107();
x120();
x148();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
