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
bool x36 = x20;
if (x36) {
int32_t x37 = x21;
bool x38 = x37 == 3;
if (x38) {
x33 = true;
x34 = x37;
} else {
x33 = false;
}
} else {
x33 = false;
}
};
bool  x51;
int32_t  x52;
void x53 () {
bool x54 = x7;
if (x54) {
int32_t x55 = x8;
bool x56 = x55 == 1;
if (x56) {
x51 = true;
x52 = x55;
} else {
x51 = false;
}
} else {
x51 = false;
}
};
bool  x69;
int32_t  x70;
void x71 () {
bool x72 = x33;
if (x72) {
x69 = true;
int32_t x74 = x34;
int32_t x75 = x74 * 3;
x70 = x75;
} else {
x69 = false;
}
};
bool  x83;
int32_t  x84;
void x85 () {
bool x86 = x51;
if (x86) {
int32_t x87 = x52;
bool x88 = x87 == 2;
if (x88) {
x83 = true;
x84 = x87;
} else {
x83 = false;
}
} else {
x83 = false;
}
};
bool  x101;
int32_t  x102;
void x103 () {
bool x104 = x83;
if (x104) {
x101 = true;
int32_t x106 = x84;
int32_t x107 = x106 + 1;
x102 = x107;
} else {
x101 = false;
}
};
bool  x115;
int32_t  x116;
void x117 () {
bool x118 = x101;
bool x119 = x69;
bool x120 = x118 && x119;
if (x120) {
x115 = true;
int32_t x122 = x102;
int32_t x123 = x70;
int32_t x124 = x122 + x123;
x116 = x124;
} else {
if (x118) {
x115 = true;
int32_t x128 = x102;
x116 = x128;
} else {
if (x119) {
x115 = true;
int32_t x132 = x70;
x116 = x132;
} else {
x115 = false;
}
}
}
};
bool  x144;
int32_t  x145;
void x146 () {
bool x147 = x115;
if (x147) {
x144 = true;
int32_t x149 = x116;
int32_t x150 = x149 * 2;
x145 = x150;
} else {
x144 = false;
}
};
void x158 () {
x2();
x9();
x22();
x35();
x53();
x71();
x85();
x103();
x117();
x146();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
