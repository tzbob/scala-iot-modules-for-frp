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
SM_DATA(mod2) int x229;
SM_DATA(mod2) int x296;
SM_ENTRY(mod2) void x305() {
int x297 = x296;
bool x298 = x297 == 0;
if (x298) {
x139 = 0;
x229 = 0;
x296 = 1;
} else {
}
}
SM_FUNC(mod2) void x306 () {
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
SM_FUNC(mod2) void x171 (bool x157,int* x158,bool* x159) {
bool x160 = x157;
if (x160) {
bool* x162 = x159;
*x162 = true;
int x164 = x139;
int* x161 = x158;
*x161 = x164;
} else {
bool* x162 = x159;
*x162 = false;
}
}
SM_FUNC(mod2) void x228 (int x208,bool x209,int* x210,bool* x211) {
bool x213 = x209;
if (x213) {
int x212 = x208;
bool x216 = x212 == 1;
if (x216) {
bool* x215 = x211;
*x215 = true;
int* x214 = x210;
*x214 = x212;
} else {
bool* x215 = x211;
*x215 = false;
}
} else {
bool* x215 = x211;
*x215 = true;
}
}
SM_FUNC(mod2) void x262 (int x230,bool x231,int x232,bool x233,bool* x234) {
bool x236 = x231;
bool x238 = x233;
bool x240 = x236 && x238;
if (x240) {
bool* x239 = x234;
*x239 = true;
int x242 = x229;
x229 = 0;
} else {
if (x236) {
bool* x239 = x234;
*x239 = true;
int x246 = x229;
x229 = 0;
} else {
if (x238) {
bool* x239 = x234;
*x239 = true;
int x250 = x229;
int x251 = x250 + 1;
x229 = x251;
} else {
bool* x239 = x234;
*x239 = false;
}
}
}
}
SM_FUNC(mod2) void x277 (bool x263,int* x264,bool* x265) {
bool x266 = x263;
if (x266) {
bool* x268 = x265;
*x268 = true;
} else {
bool* x268 = x265;
*x268 = false;
}
int x274 = x229;
int* x267 = x264;
*x267 = x274;
}
SM_FUNC(mod2) void x295 (int x278,bool x279,int* x280,bool* x281) {
bool x283 = x279;
if (x283) {
bool* x285 = x281;
*x285 = true;
int* x284 = x280;
int x282 = x278;
bool x287 = x282 >= 2;
int x288;
if (x287) {
x288 = 1;
} else {
x288 = 0;
}
*x284 = x288;
} else {
bool* x285 = x281;
*x285 = false;
}
}
SM_OUTPUT(mod2,x373);
SM_FUNC(mod2) void x378 (int x362,bool x363) {
bool x365 = x363;
if (x365) {
int x364 = x362;
x373((const uint8_t*)&x364, sizeof(x364));
} else {
}
}
SM_INPUT(mod2,x382,x307,x308) { //top6
x305();
x306();
bool x313 = false;
int x314;
int x315 = x314;
int* x316 = &x315;
bool x317 = x313;
bool* x318 = &x317;
uint8_t* x309 = x307;
int x310 = x308;
x107(x309,x310,x316,x318);
bool x321 = false;
int x322;
int x323 = x322;
int* x324 = &x323;
bool x325 = x321;
bool* x326 = &x325;
x171(x317,x324,x326);
bool x329 = false;
int x330;
int x331 = x330;
int* x332 = &x331;
bool x333 = x329;
bool* x334 = &x333;
x228(x323,x325,x332,x334);
bool x337 = false;
int x338;
bool x339 = false;
int x340 = x338;
bool x341 = x339;
bool x342 = x337;
bool* x343 = &x342;
x262(x340,x341,x331,x333,x343);
bool x346 = false;
int x347;
int x348 = x347;
int* x349 = &x348;
bool x350 = x346;
bool* x351 = &x350;
x277(x342,x349,x351);
bool x354 = false;
int x355;
int x356 = x355;
int* x357 = &x356;
bool x358 = x354;
bool* x359 = &x358;
x295(x348,x350,x357,x359);
x378(x356,x358);
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
SM_FUNC(mod2) void x156 (int x140,bool x141,bool* x142) {
bool x144 = x141;
if (x144) {
bool* x145 = x142;
*x145 = true;
int x147 = x139;
bool x148 = x147 == 0;
int x149;
if (x148) {
x149 = 1;
} else {
x149 = 0;
}
x139 = x149;
} else {
bool* x145 = x142;
*x145 = false;
}
}
SM_FUNC(mod2) void x186 (bool x172,int* x173,bool* x174) {
bool x175 = x172;
if (x175) {
bool* x177 = x174;
*x177 = true;
} else {
bool* x177 = x174;
*x177 = false;
}
int x183 = x139;
int* x176 = x173;
*x176 = x183;
}
SM_FUNC(mod2) void x207 (int x187,bool x188,int* x189,bool* x190) {
bool x192 = x188;
if (x192) {
int x191 = x187;
bool x195 = x191 == 0;
if (x195) {
bool* x194 = x190;
*x194 = true;
int* x193 = x189;
*x193 = x191;
} else {
bool* x194 = x190;
*x194 = false;
}
} else {
bool* x194 = x190;
*x194 = true;
}
}
SM_INPUT(mod2,x447,x384,x385) { //top2
x305();
x306();
bool x390 = false;
int x391;
int x392 = x391;
int* x393 = &x392;
bool x394 = x390;
bool* x395 = &x394;
uint8_t* x386 = x384;
int x387 = x385;
x138(x386,x387,x393,x395);
bool x398 = false;
bool x399 = x398;
bool* x400 = &x399;
x156(x392,x394,x400);
bool x403 = false;
int x404;
int x405 = x404;
int* x406 = &x405;
bool x407 = x403;
bool* x408 = &x407;
x186(x399,x406,x408);
bool x411 = false;
int x412;
int x413 = x412;
int* x414 = &x413;
bool x415 = x411;
bool* x416 = &x415;
x207(x405,x407,x414,x416);
bool x419 = false;
int x420;
bool x421 = false;
int x422 = x420;
bool x423 = x421;
bool x424 = x419;
bool* x425 = &x424;
x262(x413,x415,x422,x423,x425);
bool x428 = false;
int x429;
int x430 = x429;
int* x431 = &x430;
bool x432 = x428;
bool* x433 = &x432;
x277(x424,x431,x433);
bool x436 = false;
int x437;
int x438 = x437;
int* x439 = &x438;
bool x440 = x436;
bool* x441 = &x440;
x295(x430,x432,x439,x441);
x378(x438,x440);
}
SM_DATA(mod3) int x511;
SM_DATA(mod3) int x601;
SM_DATA(mod3) int x668;
SM_ENTRY(mod3) void x677() {
int x669 = x668;
bool x670 = x669 == 0;
if (x670) {
x511 = 0;
x601 = 0;
x668 = 1;
} else {
}
}
SM_FUNC(mod3) void x678 () {
}
SM_FUNC(mod3) void x479 (uint8_t* x449,int x450,int* x451,bool* x452) {
int x457 = 0;
int x458 = 0;
int x454 = x450;
uint8_t* x453 = x449;
for (;;) {
int x459 = x458;
bool x460 = x459 < x454;
if (!x460) break;
int x462 = x458;
uint8_t x463 = x453[x462];
int x467 = x457;
int x464 = (int ) x463;
int x465 = x462 * 8;
int x466 = x464 << x465;
int x468 = x467 + x466;
x457 = x468;
int x470 = x462 + 1;
x458 = x470;
}
bool* x456 = x452;
*x456 = true;
int x475 = x457;
int* x455 = x451;
int x476 = (int ) x475;
*x455 = x476;
}
SM_FUNC(mod3) void x528 (int x512,bool x513,bool* x514) {
bool x516 = x513;
if (x516) {
bool* x517 = x514;
*x517 = true;
int x519 = x511;
bool x520 = x519 == 0;
int x521;
if (x520) {
x521 = 1;
} else {
x521 = 0;
}
x511 = x521;
} else {
bool* x517 = x514;
*x517 = false;
}
}
SM_FUNC(mod3) void x543 (bool x529,int* x530,bool* x531) {
bool x532 = x529;
if (x532) {
bool* x534 = x531;
*x534 = true;
} else {
bool* x534 = x531;
*x534 = false;
}
int x540 = x511;
int* x533 = x530;
*x533 = x540;
}
SM_FUNC(mod3) void x600 (int x580,bool x581,int* x582,bool* x583) {
bool x585 = x581;
if (x585) {
int x584 = x580;
bool x588 = x584 == 0;
if (x588) {
bool* x587 = x583;
*x587 = true;
int* x586 = x582;
*x586 = x584;
} else {
bool* x587 = x583;
*x587 = false;
}
} else {
bool* x587 = x583;
*x587 = true;
}
}
SM_FUNC(mod3) void x634 (int x602,bool x603,int x604,bool x605,bool* x606) {
bool x608 = x603;
bool x610 = x605;
bool x612 = x608 && x610;
if (x612) {
bool* x611 = x606;
*x611 = true;
int x614 = x601;
x601 = 0;
} else {
if (x608) {
bool* x611 = x606;
*x611 = true;
int x618 = x601;
x601 = 0;
} else {
if (x610) {
bool* x611 = x606;
*x611 = true;
int x622 = x601;
int x623 = x622 + 1;
x601 = x623;
} else {
bool* x611 = x606;
*x611 = false;
}
}
}
}
SM_FUNC(mod3) void x649 (bool x635,int* x636,bool* x637) {
bool x638 = x635;
if (x638) {
bool* x640 = x637;
*x640 = true;
} else {
bool* x640 = x637;
*x640 = false;
}
int x646 = x601;
int* x639 = x636;
*x639 = x646;
}
SM_FUNC(mod3) void x667 (int x650,bool x651,int* x652,bool* x653) {
bool x655 = x651;
if (x655) {
bool* x657 = x653;
*x657 = true;
int* x656 = x652;
int x654 = x650;
bool x659 = x654 >= 2;
int x660;
if (x659) {
x660 = 1;
} else {
x660 = 0;
}
*x656 = x660;
} else {
bool* x657 = x653;
*x657 = false;
}
}
SM_OUTPUT(mod3,x750);
SM_FUNC(mod3) void x755 (int x739,bool x740) {
bool x742 = x740;
if (x742) {
int x741 = x739;
x750((const uint8_t*)&x741, sizeof(x741));
} else {
}
}
SM_INPUT(mod3,x759,x679,x680) { //top12
x677();
x678();
bool x685 = false;
int x686;
int x687 = x686;
int* x688 = &x687;
bool x689 = x685;
bool* x690 = &x689;
uint8_t* x681 = x679;
int x682 = x680;
x479(x681,x682,x688,x690);
bool x693 = false;
bool x694 = x693;
bool* x695 = &x694;
x528(x687,x689,x695);
bool x698 = false;
int x699;
int x700 = x699;
int* x701 = &x700;
bool x702 = x698;
bool* x703 = &x702;
x543(x694,x701,x703);
bool x706 = false;
int x707;
int x708 = x707;
int* x709 = &x708;
bool x710 = x706;
bool* x711 = &x710;
x600(x700,x702,x709,x711);
bool x714 = false;
int x715;
bool x716 = false;
int x717 = x715;
bool x718 = x716;
bool x719 = x714;
bool* x720 = &x719;
x634(x708,x710,x717,x718,x720);
bool x723 = false;
int x724;
int x725 = x724;
int* x726 = &x725;
bool x727 = x723;
bool* x728 = &x727;
x649(x719,x726,x728);
bool x731 = false;
int x732;
int x733 = x732;
int* x734 = &x733;
bool x735 = x731;
bool* x736 = &x735;
x667(x725,x727,x734,x736);
x755(x733,x735);
}
SM_FUNC(mod3) void x510 (uint8_t* x480,int x481,int* x482,bool* x483) {
int x488 = 0;
int x489 = 0;
int x485 = x481;
uint8_t* x484 = x480;
for (;;) {
int x490 = x489;
bool x491 = x490 < x485;
if (!x491) break;
int x493 = x489;
uint8_t x494 = x484[x493];
int x498 = x488;
int x495 = (int ) x494;
int x496 = x493 * 8;
int x497 = x495 << x496;
int x499 = x498 + x497;
x488 = x499;
int x501 = x493 + 1;
x489 = x501;
}
bool* x487 = x483;
*x487 = true;
int x506 = x488;
int* x486 = x482;
int x507 = (int ) x506;
*x486 = x507;
}
SM_FUNC(mod3) void x558 (bool x544,int* x545,bool* x546) {
bool x547 = x544;
if (x547) {
bool* x549 = x546;
*x549 = true;
int x551 = x511;
int* x548 = x545;
*x548 = x551;
} else {
bool* x549 = x546;
*x549 = false;
}
}
SM_FUNC(mod3) void x579 (int x559,bool x560,int* x561,bool* x562) {
bool x564 = x560;
if (x564) {
int x563 = x559;
bool x567 = x563 == 1;
if (x567) {
bool* x566 = x562;
*x566 = true;
int* x565 = x561;
*x565 = x563;
} else {
bool* x566 = x562;
*x566 = false;
}
} else {
bool* x566 = x562;
*x566 = true;
}
}
SM_INPUT(mod3,x819,x761,x762) { //top16
x677();
x678();
bool x767 = false;
int x768;
int x769 = x768;
int* x770 = &x769;
bool x771 = x767;
bool* x772 = &x771;
uint8_t* x763 = x761;
int x764 = x762;
x510(x763,x764,x770,x772);
bool x775 = false;
int x776;
int x777 = x776;
int* x778 = &x777;
bool x779 = x775;
bool* x780 = &x779;
x558(x771,x778,x780);
bool x783 = false;
int x784;
int x785 = x784;
int* x786 = &x785;
bool x787 = x783;
bool* x788 = &x787;
x579(x777,x779,x786,x788);
bool x791 = false;
int x792;
bool x793 = false;
int x794 = x792;
bool x795 = x793;
bool x796 = x791;
bool* x797 = &x796;
x634(x794,x795,x785,x787,x797);
bool x800 = false;
int x801;
int x802 = x801;
int* x803 = &x802;
bool x804 = x800;
bool* x805 = &x804;
x649(x796,x803,x805);
bool x808 = false;
int x809;
int x810 = x809;
int* x811 = &x810;
bool x812 = x808;
bool* x813 = &x812;
x667(x802,x804,x811,x813);
x755(x810,x812);
}
SM_DATA(mod4) int x914;
SM_DATA(mod4) int x927;
SM_DATA(mod4) int x940;
SM_DATA(mod4) int x966;
SM_FUNC(mod4) void x965 () {
lcd_clear();
int x958 = x914;
pmodcls_set_cursor_position(0,0);
lcd_printf_int("A: %d", x958);
int x960 = x927;
pmodcls_set_cursor_position(1,0);
lcd_printf_int("B: %d", x960);
int x962 = x940;
pmodcls_set_cursor_position(0,10);
lcd_printf_int("T: %d", x962);
}
SM_ENTRY(mod4) void x977() {
int x967 = x966;
bool x968 = x967 == 0;
if (x968) {
x914 = 0;
x927 = 0;
x940 = 0;
x965();
x966 = 1;
} else {
}
}
SM_FUNC(mod4) void x978 () {
}
SM_FUNC(mod4) void x851 (uint8_t* x821,int x822,int* x823,bool* x824) {
int x829 = 0;
int x830 = 0;
int x826 = x822;
uint8_t* x825 = x821;
for (;;) {
int x831 = x830;
bool x832 = x831 < x826;
if (!x832) break;
int x834 = x830;
uint8_t x835 = x825[x834];
int x839 = x829;
int x836 = (int ) x835;
int x837 = x834 * 8;
int x838 = x836 << x837;
int x840 = x839 + x838;
x829 = x840;
int x842 = x834 + 1;
x830 = x842;
}
bool* x828 = x824;
*x828 = true;
int x847 = x829;
int* x827 = x823;
int x848 = (int ) x847;
*x827 = x848;
}
SM_FUNC(mod4) void x926 (int x915,bool x916,bool* x917) {
bool x919 = x916;
if (x919) {
bool* x920 = x917;
*x920 = true;
int x918 = x915;
x914 = x918;
} else {
}
}
SM_INPUT(mod4,x1000,x979,x980) { //top24
x977();
x978();
bool x985 = false;
int x986;
int x987 = x986;
int* x988 = &x987;
bool x989 = x985;
bool* x990 = &x989;
uint8_t* x981 = x979;
int x982 = x980;
x851(x981,x982,x988,x990);
bool x993 = false;
bool x994 = x993;
bool* x995 = &x994;
x926(x987,x989,x995);
x965();
}
SM_FUNC(mod4) void x882 (uint8_t* x852,int x853,int* x854,bool* x855) {
int x860 = 0;
int x861 = 0;
int x857 = x853;
uint8_t* x856 = x852;
for (;;) {
int x862 = x861;
bool x863 = x862 < x857;
if (!x863) break;
int x865 = x861;
uint8_t x866 = x856[x865];
int x870 = x860;
int x867 = (int ) x866;
int x868 = x865 * 8;
int x869 = x867 << x868;
int x871 = x870 + x869;
x860 = x871;
int x873 = x865 + 1;
x861 = x873;
}
bool* x859 = x855;
*x859 = true;
int x878 = x860;
int* x858 = x854;
int x879 = (int ) x878;
*x858 = x879;
}
SM_FUNC(mod4) void x956 (int x941,bool x942,bool* x943) {
bool x945 = x942;
if (x945) {
bool* x946 = x943;
*x946 = true;
int x948 = x940;
int x949 = x948 + 1;
x940 = x949;
} else {
bool* x946 = x943;
*x946 = false;
}
}
SM_INPUT(mod4,x1023,x1002,x1003) { //top22
x977();
x978();
bool x1008 = false;
int x1009;
int x1010 = x1009;
int* x1011 = &x1010;
bool x1012 = x1008;
bool* x1013 = &x1012;
uint8_t* x1004 = x1002;
int x1005 = x1003;
x882(x1004,x1005,x1011,x1013);
bool x1016 = false;
bool x1017 = x1016;
bool* x1018 = &x1017;
x956(x1010,x1012,x1018);
x965();
}
SM_FUNC(mod4) void x913 (uint8_t* x883,int x884,int* x885,bool* x886) {
int x891 = 0;
int x892 = 0;
int x888 = x884;
uint8_t* x887 = x883;
for (;;) {
int x893 = x892;
bool x894 = x893 < x888;
if (!x894) break;
int x896 = x892;
uint8_t x897 = x887[x896];
int x901 = x891;
int x898 = (int ) x897;
int x899 = x896 * 8;
int x900 = x898 << x899;
int x902 = x901 + x900;
x891 = x902;
int x904 = x896 + 1;
x892 = x904;
}
bool* x890 = x886;
*x890 = true;
int x909 = x891;
int* x889 = x885;
int x910 = (int ) x909;
*x889 = x910;
}
SM_FUNC(mod4) void x939 (int x928,bool x929,bool* x930) {
bool x932 = x929;
if (x932) {
bool* x933 = x930;
*x933 = true;
int x931 = x928;
x927 = x931;
} else {
}
}
SM_INPUT(mod4,x1046,x1025,x1026) { //top26
x977();
x978();
bool x1031 = false;
int x1032;
int x1033 = x1032;
int* x1034 = &x1033;
bool x1035 = x1031;
bool* x1036 = &x1035;
uint8_t* x1027 = x1025;
int x1028 = x1026;
x913(x1027,x1028,x1034,x1036);
bool x1039 = false;
bool x1040 = x1039;
bool* x1041 = &x1040;
x939(x1033,x1035,x1041);
x965();
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

int x1085 = 5;
int x1086 = x1085;
uint8_t x1087 = (uint8_t ) x1086;
uint8_t* x1088 = &x1087;
size_t x1089 = sizeof(x1087);
x75(x1088,x1089);
}

};
static void x1076 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x1084 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);
  sancus_enable(&mod2);
  sm_register_existing(&mod2);
  sancus_enable(&mod3);
  sm_register_existing(&mod3);
  sancus_enable(&mod4);
  sm_register_existing(&mod4);

  REACTIVE_CONNECT(mod1, x66, mod2, x382);
  REACTIVE_CONNECT(mod1, x66, mod3, x819);
  REACTIVE_CONNECT(mod1, x66, mod4, x1023);
  REACTIVE_CONNECT(mod2, x373, mod4, x1000);
  REACTIVE_CONNECT(mod3, x750, mod4, x1046);
}
static void x1062 (int x1052) {
uint8_t x1053 = (uint8_t ) x1052;
size_t x1054 = sizeof(x1053);
uint8_t* x1055 = &x1053;
bool x1056 = x1052 == 1;
if (x1056) {
x759(x1055,x1054);
} else {
}
}
static void x1073 (int x1063) {
uint8_t x1064 = (uint8_t ) x1063;
size_t x1065 = sizeof(x1064);
uint8_t* x1066 = &x1064;
bool x1067 = x1063 == 1;
if (x1067) {
x447(x1066,x1065);
} else {
}
}
int main() {
x1076();
puts("main started");
x1084();
buttons_register_callback(Button2,x1062);
buttons_register_callback(Button1,x1073);

// modules inits;
x39();
x305();
x677();
x977();
while(1) {
  buttons_handle_events();
  timer_handler();
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
