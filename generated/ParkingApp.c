/*****************************************
  Emitting C Generated Code                  
*******************************************/

#include <sancus/sm_support.h>

#include <sancus_support/uart.h>
#include <sancus_support/pmodcls.h>
#include <sancus_support/tsc.h>
#include <sancus_support/sm_control.h>

#include <msp430.h>

#include "reactive.h"
#include "buttons.h"
#include "string.h"
#include <stdbool.h>

static int lcd_printf(const char* fmt, ...)
{
    va_list va;
    va_start(va, fmt);
    int result = vuprintf(pmodcls_putchar, fmt, va);
    va_end(va);
  return result;
}

static void __attribute__((noinline)) lcd_clear()
{
  lcd_printf("%s","                                ");
}
static void __attribute__((noinline)) lcd_printf_int(const char* fmt, int i)
{
    lcd_printf(fmt, i);
}

static void __attribute__((noinline)) lcd_printf_string(char* s)
{
    lcd_printf("%s", s);
}

static void __attribute__((noinline)) printf_int(const char* fmt, int i)
{
  printf(fmt, i);
}

SM_DATA(mod1) int x32;
SM_ENTRY(mod1) void x39() {
int x33 = x32;
bool x34 = x33 == 0;
if (x34) {
x32 = 1;
} else {
}
}
SM_FUNC(mod1) void x40 () {
}
SM_FUNC(mod1) void x31 (uint8_t* x1,int x2,int* x3,bool* x4) {
int x9 = 0;
int x10 = 0;
int x6 = x2;
uint8_t* x5 = x1;
for (;;) {
int x11 = x10;
bool x12 = x11 < x6;
if (!x12) break;
int x14 = x10;
uint8_t x15 = x5[x14];
int x19 = x9;
int x16 = (int ) x15;
int x17 = x14 * 8;
int x18 = x16 << x17;
int x20 = x19 + x18;
x9 = x20;
int x22 = x14 + 1;
x10 = x22;
}
bool* x8 = x4;
*x8 = true;
int x27 = x9;
int* x7 = x3;
int x28 = (int ) x27;
*x7 = x28;
}
SM_OUTPUT(mod1,x66);
SM_FUNC(mod1) void x71 (int x55,bool x56) {
bool x58 = x56;
if (x58) {
int x57 = x55;
x66((const uint8_t*)&x57, sizeof(x57));
} else {
}
}
SM_INPUT(mod1,x75,x41,x42) { //top1
x39();
x40();
bool x47 = false;
int x48;
int x49 = x48;
int* x50 = &x49;
bool x51 = x47;
bool* x52 = &x51;
uint8_t* x43 = x41;
int x44 = x42;
x31(x43,x44,x50,x52);
x71(x49,x51);
}
SM_DATA(mod2) int x139;
SM_DATA(mod2) int x224;
SM_DATA(mod2) int x291;
SM_ENTRY(mod2) void x300() {
int x292 = x291;
bool x293 = x292 == 0;
if (x293) {
x139 = 0;
x224 = 0;
x291 = 1;
} else {
}
}
SM_FUNC(mod2) void x301 () {
}
SM_FUNC(mod2) void x107 (uint8_t* x77,int x78,int* x79,bool* x80) {
int x85 = 0;
int x86 = 0;
int x82 = x78;
uint8_t* x81 = x77;
for (;;) {
int x87 = x86;
bool x88 = x87 < x82;
if (!x88) break;
int x90 = x86;
uint8_t x91 = x81[x90];
int x95 = x85;
int x92 = (int ) x91;
int x93 = x90 * 8;
int x94 = x92 << x93;
int x96 = x95 + x94;
x85 = x96;
int x98 = x90 + 1;
x86 = x98;
}
bool* x84 = x80;
*x84 = true;
int x103 = x85;
int* x83 = x79;
int x104 = (int ) x103;
*x83 = x104;
}
SM_FUNC(mod2) void x166 (bool x152,int* x153,bool* x154) {
bool x155 = x152;
if (x155) {
bool* x157 = x154;
*x157 = true;
int x159 = x139;
int* x156 = x153;
*x156 = x159;
} else {
bool* x157 = x154;
*x157 = false;
}
}
SM_FUNC(mod2) void x223 (int x203,bool x204,int* x205,bool* x206) {
bool x208 = x204;
if (x208) {
int x207 = x203;
bool x211 = x207 == 1;
if (x211) {
bool* x210 = x206;
*x210 = true;
int* x209 = x205;
*x209 = x207;
} else {
bool* x210 = x206;
*x210 = false;
}
} else {
bool* x210 = x206;
*x210 = true;
}
}
SM_FUNC(mod2) void x257 (int x225,bool x226,int x227,bool x228,bool* x229) {
bool x231 = x226;
bool x233 = x228;
bool x235 = x231 && x233;
if (x235) {
bool* x234 = x229;
*x234 = true;
int x237 = x224;
x224 = 0;
} else {
if (x231) {
bool* x234 = x229;
*x234 = true;
int x241 = x224;
x224 = 0;
} else {
if (x233) {
bool* x234 = x229;
*x234 = true;
int x245 = x224;
int x246 = x245 + 1;
x224 = x246;
} else {
bool* x234 = x229;
*x234 = false;
}
}
}
}
SM_FUNC(mod2) void x272 (bool x258,int* x259,bool* x260) {
bool x261 = x258;
if (x261) {
bool* x263 = x260;
*x263 = true;
} else {
bool* x263 = x260;
*x263 = false;
}
int x269 = x224;
int* x262 = x259;
*x262 = x269;
}
SM_FUNC(mod2) void x290 (int x273,bool x274,int* x275,bool* x276) {
bool x278 = x274;
if (x278) {
bool* x280 = x276;
*x280 = true;
int* x279 = x275;
int x277 = x273;
bool x282 = x277 >= 2;
int x283;
if (x282) {
x283 = 1;
} else {
x283 = 0;
}
*x279 = x283;
} else {
bool* x280 = x276;
*x280 = false;
}
}
SM_OUTPUT(mod2,x368);
SM_FUNC(mod2) void x373 (int x357,bool x358) {
bool x360 = x358;
if (x360) {
int x359 = x357;
x368((const uint8_t*)&x359, sizeof(x359));
} else {
}
}
SM_INPUT(mod2,x377,x302,x303) { //top6
x300();
x301();
bool x308 = false;
int x309;
int x310 = x309;
int* x311 = &x310;
bool x312 = x308;
bool* x313 = &x312;
uint8_t* x304 = x302;
int x305 = x303;
x107(x304,x305,x311,x313);
bool x316 = false;
int x317;
int x318 = x317;
int* x319 = &x318;
bool x320 = x316;
bool* x321 = &x320;
x166(x312,x319,x321);
bool x324 = false;
int x325;
int x326 = x325;
int* x327 = &x326;
bool x328 = x324;
bool* x329 = &x328;
x223(x318,x320,x327,x329);
bool x332 = false;
int x333;
bool x334 = false;
int x335 = x333;
bool x336 = x334;
bool x337 = x332;
bool* x338 = &x337;
x257(x335,x336,x326,x328,x338);
bool x341 = false;
int x342;
int x343 = x342;
int* x344 = &x343;
bool x345 = x341;
bool* x346 = &x345;
x272(x337,x344,x346);
bool x349 = false;
int x350;
int x351 = x350;
int* x352 = &x351;
bool x353 = x349;
bool* x354 = &x353;
x290(x343,x345,x352,x354);
x373(x351,x353);
}
SM_FUNC(mod2) void x138 (uint8_t* x108,int x109,int* x110,bool* x111) {
int x116 = 0;
int x117 = 0;
int x113 = x109;
uint8_t* x112 = x108;
for (;;) {
int x118 = x117;
bool x119 = x118 < x113;
if (!x119) break;
int x121 = x117;
uint8_t x122 = x112[x121];
int x126 = x116;
int x123 = (int ) x122;
int x124 = x121 * 8;
int x125 = x123 << x124;
int x127 = x126 + x125;
x116 = x127;
int x129 = x121 + 1;
x117 = x129;
}
bool* x115 = x111;
*x115 = true;
int x134 = x116;
int* x114 = x110;
int x135 = (int ) x134;
*x114 = x135;
}
SM_FUNC(mod2) void x151 (int x140,bool x141,bool* x142) {
bool x144 = x141;
if (x144) {
bool* x145 = x142;
*x145 = true;
int x143 = x140;
x139 = x143;
} else {
}
}
SM_FUNC(mod2) void x181 (bool x167,int* x168,bool* x169) {
bool x170 = x167;
if (x170) {
bool* x172 = x169;
*x172 = true;
} else {
bool* x172 = x169;
*x172 = false;
}
int x178 = x139;
int* x171 = x168;
*x171 = x178;
}
SM_FUNC(mod2) void x202 (int x182,bool x183,int* x184,bool* x185) {
bool x187 = x183;
if (x187) {
int x186 = x182;
bool x190 = x186 == 0;
if (x190) {
bool* x189 = x185;
*x189 = true;
int* x188 = x184;
*x188 = x186;
} else {
bool* x189 = x185;
*x189 = false;
}
} else {
bool* x189 = x185;
*x189 = true;
}
}
SM_INPUT(mod2,x442,x379,x380) { //top2
x300();
x301();
bool x385 = false;
int x386;
int x387 = x386;
int* x388 = &x387;
bool x389 = x385;
bool* x390 = &x389;
uint8_t* x381 = x379;
int x382 = x380;
x138(x381,x382,x388,x390);
bool x393 = false;
bool x394 = x393;
bool* x395 = &x394;
x151(x387,x389,x395);
bool x398 = false;
int x399;
int x400 = x399;
int* x401 = &x400;
bool x402 = x398;
bool* x403 = &x402;
x181(x394,x401,x403);
bool x406 = false;
int x407;
int x408 = x407;
int* x409 = &x408;
bool x410 = x406;
bool* x411 = &x410;
x202(x400,x402,x409,x411);
bool x414 = false;
int x415;
bool x416 = false;
int x417 = x415;
bool x418 = x416;
bool x419 = x414;
bool* x420 = &x419;
x257(x408,x410,x417,x418,x420);
bool x423 = false;
int x424;
int x425 = x424;
int* x426 = &x425;
bool x427 = x423;
bool* x428 = &x427;
x272(x419,x426,x428);
bool x431 = false;
int x432;
int x433 = x432;
int* x434 = &x433;
bool x435 = x431;
bool* x436 = &x435;
x290(x425,x427,x434,x436);
x373(x433,x435);
}
SM_DATA(mod3) int x506;
SM_DATA(mod3) int x591;
SM_DATA(mod3) int x658;
SM_ENTRY(mod3) void x667() {
int x659 = x658;
bool x660 = x659 == 0;
if (x660) {
x506 = 0;
x591 = 0;
x658 = 1;
} else {
}
}
SM_FUNC(mod3) void x668 () {
}
SM_FUNC(mod3) void x474 (uint8_t* x444,int x445,int* x446,bool* x447) {
int x452 = 0;
int x453 = 0;
int x449 = x445;
uint8_t* x448 = x444;
for (;;) {
int x454 = x453;
bool x455 = x454 < x449;
if (!x455) break;
int x457 = x453;
uint8_t x458 = x448[x457];
int x462 = x452;
int x459 = (int ) x458;
int x460 = x457 * 8;
int x461 = x459 << x460;
int x463 = x462 + x461;
x452 = x463;
int x465 = x457 + 1;
x453 = x465;
}
bool* x451 = x447;
*x451 = true;
int x470 = x452;
int* x450 = x446;
int x471 = (int ) x470;
*x450 = x471;
}
SM_FUNC(mod3) void x518 (int x507,bool x508,bool* x509) {
bool x511 = x508;
if (x511) {
bool* x512 = x509;
*x512 = true;
int x510 = x507;
x506 = x510;
} else {
}
}
SM_FUNC(mod3) void x533 (bool x519,int* x520,bool* x521) {
bool x522 = x519;
if (x522) {
bool* x524 = x521;
*x524 = true;
} else {
bool* x524 = x521;
*x524 = false;
}
int x530 = x506;
int* x523 = x520;
*x523 = x530;
}
SM_FUNC(mod3) void x590 (int x570,bool x571,int* x572,bool* x573) {
bool x575 = x571;
if (x575) {
int x574 = x570;
bool x578 = x574 == 0;
if (x578) {
bool* x577 = x573;
*x577 = true;
int* x576 = x572;
*x576 = x574;
} else {
bool* x577 = x573;
*x577 = false;
}
} else {
bool* x577 = x573;
*x577 = true;
}
}
SM_FUNC(mod3) void x624 (int x592,bool x593,int x594,bool x595,bool* x596) {
bool x598 = x593;
bool x600 = x595;
bool x602 = x598 && x600;
if (x602) {
bool* x601 = x596;
*x601 = true;
int x604 = x591;
x591 = 0;
} else {
if (x598) {
bool* x601 = x596;
*x601 = true;
int x608 = x591;
x591 = 0;
} else {
if (x600) {
bool* x601 = x596;
*x601 = true;
int x612 = x591;
int x613 = x612 + 1;
x591 = x613;
} else {
bool* x601 = x596;
*x601 = false;
}
}
}
}
SM_FUNC(mod3) void x639 (bool x625,int* x626,bool* x627) {
bool x628 = x625;
if (x628) {
bool* x630 = x627;
*x630 = true;
} else {
bool* x630 = x627;
*x630 = false;
}
int x636 = x591;
int* x629 = x626;
*x629 = x636;
}
SM_FUNC(mod3) void x657 (int x640,bool x641,int* x642,bool* x643) {
bool x645 = x641;
if (x645) {
bool* x647 = x643;
*x647 = true;
int* x646 = x642;
int x644 = x640;
bool x649 = x644 >= 2;
int x650;
if (x649) {
x650 = 1;
} else {
x650 = 0;
}
*x646 = x650;
} else {
bool* x647 = x643;
*x647 = false;
}
}
SM_OUTPUT(mod3,x740);
SM_FUNC(mod3) void x745 (int x729,bool x730) {
bool x732 = x730;
if (x732) {
int x731 = x729;
x740((const uint8_t*)&x731, sizeof(x731));
} else {
}
}
SM_INPUT(mod3,x749,x669,x670) { //top12
x667();
x668();
bool x675 = false;
int x676;
int x677 = x676;
int* x678 = &x677;
bool x679 = x675;
bool* x680 = &x679;
uint8_t* x671 = x669;
int x672 = x670;
x474(x671,x672,x678,x680);
bool x683 = false;
bool x684 = x683;
bool* x685 = &x684;
x518(x677,x679,x685);
bool x688 = false;
int x689;
int x690 = x689;
int* x691 = &x690;
bool x692 = x688;
bool* x693 = &x692;
x533(x684,x691,x693);
bool x696 = false;
int x697;
int x698 = x697;
int* x699 = &x698;
bool x700 = x696;
bool* x701 = &x700;
x590(x690,x692,x699,x701);
bool x704 = false;
int x705;
bool x706 = false;
int x707 = x705;
bool x708 = x706;
bool x709 = x704;
bool* x710 = &x709;
x624(x698,x700,x707,x708,x710);
bool x713 = false;
int x714;
int x715 = x714;
int* x716 = &x715;
bool x717 = x713;
bool* x718 = &x717;
x639(x709,x716,x718);
bool x721 = false;
int x722;
int x723 = x722;
int* x724 = &x723;
bool x725 = x721;
bool* x726 = &x725;
x657(x715,x717,x724,x726);
x745(x723,x725);
}
SM_FUNC(mod3) void x505 (uint8_t* x475,int x476,int* x477,bool* x478) {
int x483 = 0;
int x484 = 0;
int x480 = x476;
uint8_t* x479 = x475;
for (;;) {
int x485 = x484;
bool x486 = x485 < x480;
if (!x486) break;
int x488 = x484;
uint8_t x489 = x479[x488];
int x493 = x483;
int x490 = (int ) x489;
int x491 = x488 * 8;
int x492 = x490 << x491;
int x494 = x493 + x492;
x483 = x494;
int x496 = x488 + 1;
x484 = x496;
}
bool* x482 = x478;
*x482 = true;
int x501 = x483;
int* x481 = x477;
int x502 = (int ) x501;
*x481 = x502;
}
SM_FUNC(mod3) void x548 (bool x534,int* x535,bool* x536) {
bool x537 = x534;
if (x537) {
bool* x539 = x536;
*x539 = true;
int x541 = x506;
int* x538 = x535;
*x538 = x541;
} else {
bool* x539 = x536;
*x539 = false;
}
}
SM_FUNC(mod3) void x569 (int x549,bool x550,int* x551,bool* x552) {
bool x554 = x550;
if (x554) {
int x553 = x549;
bool x557 = x553 == 1;
if (x557) {
bool* x556 = x552;
*x556 = true;
int* x555 = x551;
*x555 = x553;
} else {
bool* x556 = x552;
*x556 = false;
}
} else {
bool* x556 = x552;
*x556 = true;
}
}
SM_INPUT(mod3,x809,x751,x752) { //top16
x667();
x668();
bool x757 = false;
int x758;
int x759 = x758;
int* x760 = &x759;
bool x761 = x757;
bool* x762 = &x761;
uint8_t* x753 = x751;
int x754 = x752;
x505(x753,x754,x760,x762);
bool x765 = false;
int x766;
int x767 = x766;
int* x768 = &x767;
bool x769 = x765;
bool* x770 = &x769;
x548(x761,x768,x770);
bool x773 = false;
int x774;
int x775 = x774;
int* x776 = &x775;
bool x777 = x773;
bool* x778 = &x777;
x569(x767,x769,x776,x778);
bool x781 = false;
int x782;
bool x783 = false;
int x784 = x782;
bool x785 = x783;
bool x786 = x781;
bool* x787 = &x786;
x624(x784,x785,x775,x777,x787);
bool x790 = false;
int x791;
int x792 = x791;
int* x793 = &x792;
bool x794 = x790;
bool* x795 = &x794;
x639(x786,x793,x795);
bool x798 = false;
int x799;
int x800 = x799;
int* x801 = &x800;
bool x802 = x798;
bool* x803 = &x802;
x657(x792,x794,x801,x803);
x745(x800,x802);
}
SM_DATA(mod4) int x873;
SM_DATA(mod4) int x886;
SM_DATA(mod4) int x906;
SM_FUNC(mod4) void x905 () {
lcd_clear();
int x900 = x886;
pmodcls_set_cursor_position(0,0);
lcd_printf_int("A: %d", x900);
int x902 = x873;
pmodcls_set_cursor_position(1,0);
lcd_printf_int("B: %d", x902);
}
SM_ENTRY(mod4) void x916() {
int x907 = x906;
bool x908 = x907 == 0;
if (x908) {
x873 = 0;
x886 = 0;
x905();
x906 = 1;
} else {
}
}
SM_FUNC(mod4) void x917 () {
}
SM_FUNC(mod4) void x841 (uint8_t* x811,int x812,int* x813,bool* x814) {
int x819 = 0;
int x820 = 0;
int x816 = x812;
uint8_t* x815 = x811;
for (;;) {
int x821 = x820;
bool x822 = x821 < x816;
if (!x822) break;
int x824 = x820;
uint8_t x825 = x815[x824];
int x829 = x819;
int x826 = (int ) x825;
int x827 = x824 * 8;
int x828 = x826 << x827;
int x830 = x829 + x828;
x819 = x830;
int x832 = x824 + 1;
x820 = x832;
}
bool* x818 = x814;
*x818 = true;
int x837 = x819;
int* x817 = x813;
int x838 = (int ) x837;
*x817 = x838;
}
SM_FUNC(mod4) void x885 (int x874,bool x875,bool* x876) {
bool x878 = x875;
if (x878) {
bool* x879 = x876;
*x879 = true;
int x877 = x874;
x873 = x877;
} else {
}
}
SM_INPUT(mod4,x939,x918,x919) { //top24
x916();
x917();
bool x924 = false;
int x925;
int x926 = x925;
int* x927 = &x926;
bool x928 = x924;
bool* x929 = &x928;
uint8_t* x920 = x918;
int x921 = x919;
x841(x920,x921,x927,x929);
bool x932 = false;
bool x933 = x932;
bool* x934 = &x933;
x885(x926,x928,x934);
x905();
}
SM_FUNC(mod4) void x872 (uint8_t* x842,int x843,int* x844,bool* x845) {
int x850 = 0;
int x851 = 0;
int x847 = x843;
uint8_t* x846 = x842;
for (;;) {
int x852 = x851;
bool x853 = x852 < x847;
if (!x853) break;
int x855 = x851;
uint8_t x856 = x846[x855];
int x860 = x850;
int x857 = (int ) x856;
int x858 = x855 * 8;
int x859 = x857 << x858;
int x861 = x860 + x859;
x850 = x861;
int x863 = x855 + 1;
x851 = x863;
}
bool* x849 = x845;
*x849 = true;
int x868 = x850;
int* x848 = x844;
int x869 = (int ) x868;
*x848 = x869;
}
SM_FUNC(mod4) void x898 (int x887,bool x888,bool* x889) {
bool x891 = x888;
if (x891) {
bool* x892 = x889;
*x892 = true;
int x890 = x887;
x886 = x890;
} else {
}
}
SM_INPUT(mod4,x962,x941,x942) { //top22
x916();
x917();
bool x947 = false;
int x948;
int x949 = x948;
int* x950 = &x949;
bool x951 = x947;
bool* x952 = &x951;
uint8_t* x943 = x941;
int x944 = x942;
x872(x943,x944,x950,x952);
bool x955 = false;
bool x956 = x955;
bool* x957 = &x956;
x898(x949,x951,x957);
x905();
}
DECLARE_SM(mod1, 0x1234);
DECLARE_SM(mod2, 0x1234);
DECLARE_SM(mod3, 0x1234);
DECLARE_SM(mod4, 0x1234);
void timer_handler() {
tsc_t time = tsc_read();
static int intervals_5s = 0;
int currTime = (float)time / 100000000;

if(currTime > intervals_5s){

intervals_5s = currTime;

int x1010 = 5;
int x1011 = x1010;
uint8_t x1012 = (uint8_t ) x1011;
uint8_t* x1013 = &x1012;
size_t x1014 = sizeof(x1012);
x75(x1013,x1014);
}

};
static void x1002 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x1009 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);
  sancus_enable(&mod2);
  sm_register_existing(&mod2);
  sancus_enable(&mod3);
  sm_register_existing(&mod3);
  sancus_enable(&mod4);
  sm_register_existing(&mod4);

  REACTIVE_CONNECT(mod1, x66, mod2, x377);
  REACTIVE_CONNECT(mod1, x66, mod3, x809);
  REACTIVE_CONNECT(mod2, x368, mod4, x962);
  REACTIVE_CONNECT(mod3, x740, mod4, x939);
}
static void x983 (int x968) {
uint8_t x969 = (uint8_t ) x968;
size_t x970 = sizeof(x969);
uint8_t* x971 = &x969;
bool x972 = x968 == 1;
if (x972) {
x749(x971,x970);
} else {
bool x976 = x968 == 0;
if (x976) {
x749(x971,x970);
} else {
}
}
}
static void x999 (int x984) {
uint8_t x985 = (uint8_t ) x984;
size_t x986 = sizeof(x985);
uint8_t* x987 = &x985;
bool x988 = x984 == 1;
if (x988) {
x442(x987,x986);
} else {
bool x992 = x984 == 0;
if (x992) {
x442(x987,x986);
} else {
}
}
}
int main() {
x1002();
puts("main started");
x1009();
buttons_register_callback(Button2,x983);
buttons_register_callback(Button1,x999);

// modules inits;
x39();
x300();
x667();
x916();
while(1) {
  buttons_handle_events();
  timer_handler();
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
