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
bool  x42;
int32_t  x43;
bool  x70;
int32_t  x71;
bool  x83;
int32_t  x84;
bool  x111;
int32_t  x112;
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
bool x33 = x0;
if (x33) {
x30 = true;
int32_t x35 = x1;
x31 = 3;
} else {
x30 = false;
}
};
void x44 () {
bool x45 = x6;
bool x46 = x18;
bool x47 = x45 && x46;
if (x47) {
x42 = true;
int32_t x49 = x7;
int32_t x50 = x19;
int32_t x51 = x49 + x50;
x43 = x51;
} else {
if (x45) {
x42 = true;
int32_t x55 = x7;
x43 = x55;
} else {
if (x46) {
x42 = true;
int32_t x59 = x19;
x43 = x59;
} else {
x42 = false;
}
}
}
};
void x72 () {
bool x73 = x42;
if (x73) {
x70 = true;
int32_t x75 = x43;
int32_t x76 = x75 + 2;
x71 = x76;
} else {
x70 = false;
}
};
void x85 () {
bool x86 = x70;
bool x87 = x30;
bool x88 = x86 && x87;
if (x88) {
x83 = true;
int32_t x90 = x71;
int32_t x91 = x31;
int32_t x92 = x90 + x91;
x84 = x92;
} else {
if (x86) {
x83 = true;
int32_t x96 = x71;
x84 = x96;
} else {
if (x87) {
x83 = true;
int32_t x100 = x31;
x84 = x100;
} else {
x83 = false;
}
}
}
};
void x113 () {
bool x114 = x83;
if (x114) {
x111 = true;
int32_t x116 = x84;
int32_t x117 = x116 * 2;
x112 = x117;
} else {
x111 = false;
}
};
void x124 () {
x2();
x8();
x20();
x32();
x44();
x72();
x85();
x113();
};
/*****************************************
  End of C Generated Code                  
*******************************************/
