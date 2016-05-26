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

SM_DATA(mod1) int x127;
SM_DATA(mod1) int x159;
SM_FUNC(mod1) void x167 () {
int x160 = x159;
bool x161 = x160 == 0;
if (x161) {
x127 = 1;
x159 = 1;
} else {
}
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
SM_FUNC(mod1) void x78 (int x63,bool x64,int* x65,bool* x66) {
bool x68 = x64;
if (x68) {
bool* x70 = x66;
*x70 = true;
int* x69 = x65;
*x69 = 1;
} else {
bool* x70 = x66;
*x70 = false;
}
}
SM_FUNC(mod1) void x126 (int x95,bool x96,int x97,bool x98,int* x99,bool* x100) {
bool x102 = x96;
bool x104 = x98;
bool x107 = x102 && x104;
if (x107) {
bool* x106 = x100;
*x106 = true;
int* x105 = x99;
int x101 = x95;
int x103 = x97;
int x109 = x101 + x103;
*x105 = x109;
} else {
if (x102) {
bool* x106 = x100;
*x106 = true;
int* x105 = x99;
int x101 = x95;
*x105 = x101;
} else {
if (x104) {
bool* x106 = x100;
*x106 = true;
int* x105 = x99;
int x103 = x97;
*x105 = x103;
} else {
bool* x106 = x100;
*x106 = false;
}
}
}
}
SM_FUNC(mod1) void x143 (int x128,bool x129,bool* x130) {
bool x132 = x129;
if (x132) {
bool* x133 = x130;
*x133 = true;
int x135 = x127;
int x131 = x128;
int x136 = x135 + x131;
x127 = x136;
} else {
bool* x133 = x130;
*x133 = false;
}
}
SM_FUNC(mod1) void x158 (bool x144,int* x145,bool* x146) {
bool x147 = x144;
if (x147) {
bool* x149 = x146;
*x149 = true;
} else {
bool* x149 = x146;
*x149 = false;
}
int x155 = x127;
int* x148 = x145;
*x148 = x155;
}
SM_OUTPUT(mod1,x225);
SM_FUNC(mod1) void x230 (int x214,bool x215) {
bool x217 = x215;
if (x217) {
int x216 = x214;
x225((const uint8_t*)&x216, sizeof(x216));
} else {
}
}
SM_INPUT(mod1,x234,x168,x169) { //top1
x167();
bool x173 = false;
int x174;
int x175 = x174;
int* x176 = &x175;
bool x177 = x173;
bool* x178 = &x177;
uint8_t* x170 = x168;
int x171 = x169;
x31(x170,x171,x176,x178);
bool x181 = false;
int x182;
int x183 = x182;
int* x184 = &x183;
bool x185 = x181;
bool* x186 = &x185;
x78(x175,x177,x184,x186);
bool x189 = false;
int x190;
int x191;
bool x192 = false;
int x193 = x191;
bool x194 = x192;
int x195 = x190;
int* x196 = &x195;
bool x197 = x189;
bool* x198 = &x197;
x126(x183,x185,x193,x194,x196,x198);
bool x201 = false;
bool x202 = x201;
bool* x203 = &x202;
x143(x195,x197,x203);
bool x206 = false;
int x207;
int x208 = x207;
int* x209 = &x208;
bool x210 = x206;
bool* x211 = &x210;
x158(x202,x209,x211);
x230(x208,x210);
}
SM_FUNC(mod1) void x62 (uint8_t* x32,int x33,int* x34,bool* x35) {
int x40 = 0;
int x41 = 0;
int x37 = x33;
uint8_t* x36 = x32;
for (;;) {
int x42 = x41;
bool x43 = x42 < x37;
if (!x43) break;
int x45 = x41;
uint8_t x46 = x36[x45];
int x50 = x40;
int x47 = (int ) x46;
int x48 = x45 * 8;
int x49 = x47 << x48;
int x51 = x50 + x49;
x40 = x51;
int x53 = x45 + 1;
x41 = x53;
}
bool* x39 = x35;
*x39 = true;
int x58 = x40;
int* x38 = x34;
int x59 = (int ) x58;
*x38 = x59;
}
SM_FUNC(mod1) void x94 (int x79,bool x80,int* x81,bool* x82) {
bool x84 = x80;
if (x84) {
bool* x86 = x82;
*x86 = true;
int* x85 = x81;
*x85 = -1;
} else {
bool* x86 = x82;
*x86 = false;
}
}
SM_INPUT(mod1,x285,x236,x237) { //top3
x167();
bool x241 = false;
int x242;
int x243 = x242;
int* x244 = &x243;
bool x245 = x241;
bool* x246 = &x245;
uint8_t* x238 = x236;
int x239 = x237;
x62(x238,x239,x244,x246);
bool x249 = false;
int x250;
int x251 = x250;
int* x252 = &x251;
bool x253 = x249;
bool* x254 = &x253;
x94(x243,x245,x252,x254);
bool x257 = false;
int x258;
int x259;
bool x260 = false;
int x261 = x259;
bool x262 = x260;
int x263 = x258;
int* x264 = &x263;
bool x265 = x257;
bool* x266 = &x265;
x126(x261,x262,x251,x253,x264,x266);
bool x269 = false;
bool x270 = x269;
bool* x271 = &x270;
x143(x263,x265,x271);
bool x274 = false;
int x275;
int x276 = x275;
int* x277 = &x276;
bool x278 = x274;
bool* x279 = &x278;
x158(x270,x277,x279);
x230(x276,x278);
}
SM_DATA(mod2) int x380;
SM_DATA(mod2) int x494;
SM_DATA(mod2) int x526;
SM_FUNC(mod2) void x535 () {
int x527 = x526;
bool x528 = x527 == 0;
if (x528) {
x380 = 1;
x494 = 0;
x526 = 1;
} else {
}
}
SM_FUNC(mod2) void x317 (uint8_t* x287,int x288,int* x289,bool* x290) {
int x295 = 0;
int x296 = 0;
int x292 = x288;
uint8_t* x291 = x287;
for (;;) {
int x297 = x296;
bool x298 = x297 < x292;
if (!x298) break;
int x300 = x296;
uint8_t x301 = x291[x300];
int x305 = x295;
int x302 = (int ) x301;
int x303 = x300 * 8;
int x304 = x302 << x303;
int x306 = x305 + x304;
x295 = x306;
int x308 = x300 + 1;
x296 = x308;
}
bool* x294 = x290;
*x294 = true;
int x313 = x295;
int* x293 = x289;
int x314 = (int ) x313;
*x293 = x314;
}
SM_FUNC(mod2) void x422 (bool x408,int* x409,bool* x410) {
bool x411 = x408;
if (x411) {
bool* x413 = x410;
*x413 = true;
int x415 = x380;
int* x412 = x409;
*x412 = x415;
} else {
bool* x413 = x410;
*x413 = false;
}
}
SM_FUNC(mod2) void x471 (int x440,bool x441,int x442,bool x443,int* x444,bool* x445) {
bool x447 = x441;
bool x449 = x443;
bool x452 = x447 && x449;
if (x452) {
bool* x451 = x445;
*x451 = true;
int* x450 = x444;
int x446 = x440;
int x448 = x442;
int x454 = x446 + x448;
*x450 = x454;
} else {
if (x447) {
bool* x451 = x445;
*x451 = true;
int* x450 = x444;
int x446 = x440;
*x450 = x446;
} else {
if (x449) {
bool* x451 = x445;
*x451 = true;
int* x450 = x444;
int x448 = x442;
*x450 = x448;
} else {
bool* x451 = x445;
*x451 = false;
}
}
}
}
SM_FUNC(mod2) void x493 (int x472,bool x473,int* x474,bool* x475) {
bool x477 = x473;
if (x477) {
int x476 = x472;
int x480 = abs(x476);
bool x481 = x480 < 10;
if (x481) {
bool* x479 = x475;
*x479 = true;
int* x478 = x474;
*x478 = x476;
} else {
bool* x479 = x475;
*x479 = false;
}
} else {
bool* x479 = x475;
*x479 = true;
}
}
SM_FUNC(mod2) void x510 (int x495,bool x496,bool* x497) {
bool x499 = x496;
if (x499) {
bool* x500 = x497;
*x500 = true;
int x502 = x494;
int x498 = x495;
int x503 = x502 + x498;
x494 = x503;
} else {
bool* x500 = x497;
*x500 = false;
}
}
SM_FUNC(mod2) void x525 (bool x511,int* x512,bool* x513) {
bool x514 = x511;
if (x514) {
bool* x516 = x513;
*x516 = true;
} else {
bool* x516 = x513;
*x516 = false;
}
int x522 = x494;
int* x515 = x512;
*x515 = x522;
}
SM_OUTPUT(mod2,x601);
SM_FUNC(mod2) void x606 (int x590,bool x591) {
bool x593 = x591;
if (x593) {
int x592 = x590;
x601((const uint8_t*)&x592, sizeof(x592));
} else {
}
}
SM_INPUT(mod2,x610,x536,x537) { //top10
x535();
bool x541 = false;
int x542;
int x543 = x542;
int* x544 = &x543;
bool x545 = x541;
bool* x546 = &x545;
uint8_t* x538 = x536;
int x539 = x537;
x317(x538,x539,x544,x546);
bool x549 = false;
int x550;
int x551 = x550;
int* x552 = &x551;
bool x553 = x549;
bool* x554 = &x553;
x422(x545,x552,x554);
bool x557 = false;
int x558;
int x559;
bool x560 = false;
int x561 = x559;
bool x562 = x560;
int x563 = x558;
int* x564 = &x563;
bool x565 = x557;
bool* x566 = &x565;
x471(x551,x553,x561,x562,x564,x566);
bool x569 = false;
int x570;
int x571 = x570;
int* x572 = &x571;
bool x573 = x569;
bool* x574 = &x573;
x493(x563,x565,x572,x574);
bool x577 = false;
bool x578 = x577;
bool* x579 = &x578;
x510(x571,x573,x579);
bool x582 = false;
int x583;
int x584 = x583;
int* x585 = &x584;
bool x586 = x582;
bool* x587 = &x586;
x525(x578,x585,x587);
x606(x584,x586);
}
SM_FUNC(mod2) void x348 (uint8_t* x318,int x319,int* x320,bool* x321) {
int x326 = 0;
int x327 = 0;
int x323 = x319;
uint8_t* x322 = x318;
for (;;) {
int x328 = x327;
bool x329 = x328 < x323;
if (!x329) break;
int x331 = x327;
uint8_t x332 = x322[x331];
int x336 = x326;
int x333 = (int ) x332;
int x334 = x331 * 8;
int x335 = x333 << x334;
int x337 = x336 + x335;
x326 = x337;
int x339 = x331 + 1;
x327 = x339;
}
bool* x325 = x321;
*x325 = true;
int x344 = x326;
int* x324 = x320;
int x345 = (int ) x344;
*x324 = x345;
}
SM_FUNC(mod2) void x407 (bool x393,int* x394,bool* x395) {
bool x396 = x393;
if (x396) {
bool* x398 = x395;
*x398 = true;
int x400 = x380;
int* x397 = x394;
*x397 = x400;
} else {
bool* x398 = x395;
*x398 = false;
}
}
SM_FUNC(mod2) void x439 (int x423,bool x424,int* x425,bool* x426) {
bool x428 = x424;
if (x428) {
bool* x430 = x426;
*x430 = true;
int* x429 = x425;
int x427 = x423;
int x432 = 0 - x427;
*x429 = x432;
} else {
bool* x430 = x426;
*x430 = false;
}
}
SM_INPUT(mod2,x677,x612,x613) { //top12
x535();
bool x617 = false;
int x618;
int x619 = x618;
int* x620 = &x619;
bool x621 = x617;
bool* x622 = &x621;
uint8_t* x614 = x612;
int x615 = x613;
x348(x614,x615,x620,x622);
bool x625 = false;
int x626;
int x627 = x626;
int* x628 = &x627;
bool x629 = x625;
bool* x630 = &x629;
x407(x621,x628,x630);
bool x633 = false;
int x634;
int x635 = x634;
int* x636 = &x635;
bool x637 = x633;
bool* x638 = &x637;
x439(x627,x629,x636,x638);
bool x641 = false;
int x642;
int x643;
bool x644 = false;
int x645 = x643;
bool x646 = x644;
int x647 = x642;
int* x648 = &x647;
bool x649 = x641;
bool* x650 = &x649;
x471(x645,x646,x635,x637,x648,x650);
bool x653 = false;
int x654;
int x655 = x654;
int* x656 = &x655;
bool x657 = x653;
bool* x658 = &x657;
x493(x647,x649,x656,x658);
bool x661 = false;
bool x662 = x661;
bool* x663 = &x662;
x510(x655,x657,x663);
bool x666 = false;
int x667;
int x668 = x667;
int* x669 = &x668;
bool x670 = x666;
bool* x671 = &x670;
x525(x662,x669,x671);
x606(x668,x670);
}
SM_FUNC(mod2) void x379 (uint8_t* x349,int x350,int* x351,bool* x352) {
int x357 = 0;
int x358 = 0;
int x354 = x350;
uint8_t* x353 = x349;
for (;;) {
int x359 = x358;
bool x360 = x359 < x354;
if (!x360) break;
int x362 = x358;
uint8_t x363 = x353[x362];
int x367 = x357;
int x364 = (int ) x363;
int x365 = x362 * 8;
int x366 = x364 << x365;
int x368 = x367 + x366;
x357 = x368;
int x370 = x362 + 1;
x358 = x370;
}
bool* x356 = x352;
*x356 = true;
int x375 = x357;
int* x355 = x351;
int x376 = (int ) x375;
*x355 = x376;
}
SM_FUNC(mod2) void x392 (int x381,bool x382,bool* x383) {
bool x385 = x382;
if (x385) {
bool* x386 = x383;
*x386 = true;
int x384 = x381;
x380 = x384;
} else {
}
}
SM_INPUT(mod2,x698,x679,x680) { //top8
x535();
bool x684 = false;
int x685;
int x686 = x685;
int* x687 = &x686;
bool x688 = x684;
bool* x689 = &x688;
uint8_t* x681 = x679;
int x682 = x680;
x379(x681,x682,x687,x689);
bool x692 = false;
bool x693 = x692;
bool* x694 = &x693;
x392(x686,x688,x694);
}
SM_DATA(mod3) int x762;
SM_DATA(mod3) int x775;
SM_DATA(mod3) int x795;
SM_FUNC(mod3) void x794 () {
lcd_clear();
int x789 = x775;
pmodcls_set_cursor_position(0,0);
lcd_printf_int("Counter: %d", x789);
int x791 = x762;
pmodcls_set_cursor_position(1,0);
lcd_printf_int("Amount: %d", x791);
}
SM_FUNC(mod3) void x805 () {
int x796 = x795;
bool x797 = x796 == 0;
if (x797) {
x762 = 1;
x775 = 0;
x794();
x795 = 1;
} else {
}
}
SM_FUNC(mod3) void x730 (uint8_t* x700,int x701,int* x702,bool* x703) {
int x708 = 0;
int x709 = 0;
int x705 = x701;
uint8_t* x704 = x700;
for (;;) {
int x710 = x709;
bool x711 = x710 < x705;
if (!x711) break;
int x713 = x709;
uint8_t x714 = x704[x713];
int x718 = x708;
int x715 = (int ) x714;
int x716 = x713 * 8;
int x717 = x715 << x716;
int x719 = x718 + x717;
x708 = x719;
int x721 = x713 + 1;
x709 = x721;
}
bool* x707 = x703;
*x707 = true;
int x726 = x708;
int* x706 = x702;
int x727 = (int ) x726;
*x706 = x727;
}
SM_FUNC(mod3) void x787 (int x776,bool x777,bool* x778) {
bool x780 = x777;
if (x780) {
bool* x781 = x778;
*x781 = true;
int x779 = x776;
x775 = x779;
} else {
}
}
SM_INPUT(mod3,x826,x806,x807) { //top20
x805();
bool x811 = false;
int x812;
int x813 = x812;
int* x814 = &x813;
bool x815 = x811;
bool* x816 = &x815;
uint8_t* x808 = x806;
int x809 = x807;
x730(x808,x809,x814,x816);
bool x819 = false;
bool x820 = x819;
bool* x821 = &x820;
x787(x813,x815,x821);
x794();
}
SM_FUNC(mod3) void x761 (uint8_t* x731,int x732,int* x733,bool* x734) {
int x739 = 0;
int x740 = 0;
int x736 = x732;
uint8_t* x735 = x731;
for (;;) {
int x741 = x740;
bool x742 = x741 < x736;
if (!x742) break;
int x744 = x740;
uint8_t x745 = x735[x744];
int x749 = x739;
int x746 = (int ) x745;
int x747 = x744 * 8;
int x748 = x746 << x747;
int x750 = x749 + x748;
x739 = x750;
int x752 = x744 + 1;
x740 = x752;
}
bool* x738 = x734;
*x738 = true;
int x757 = x739;
int* x737 = x733;
int x758 = (int ) x757;
*x737 = x758;
}
SM_FUNC(mod3) void x774 (int x763,bool x764,bool* x765) {
bool x767 = x764;
if (x767) {
bool* x768 = x765;
*x768 = true;
int x766 = x763;
x762 = x766;
} else {
}
}
SM_INPUT(mod3,x848,x828,x829) { //top19
x805();
bool x833 = false;
int x834;
int x835 = x834;
int* x836 = &x835;
bool x837 = x833;
bool* x838 = &x837;
uint8_t* x830 = x828;
int x831 = x829;
x761(x830,x831,x836,x838);
bool x841 = false;
bool x842 = x841;
bool* x843 = &x842;
x774(x835,x837,x843);
x794();
}
DECLARE_SM(mod1, 0x1234);
DECLARE_SM(mod2, 0x1234);
DECLARE_SM(mod3, 0x1234);
static void x907 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x913 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);
  sancus_enable(&mod2);
  sm_register_existing(&mod2);
  sancus_enable(&mod3);
  sm_register_existing(&mod3);

  REACTIVE_CONNECT(mod1, x225, mod2, x698);
  REACTIVE_CONNECT(mod1, x225, mod3, x848);
  REACTIVE_CONNECT(mod2, x601, mod3, x826);
}
static void x865 (int x853) {
bool x854 = x853 == 1;
if (x854) {
int x855 = 2;
int x856 = x855;
uint8_t x857 = (uint8_t ) x856;
uint8_t* x858 = &x857;
size_t x859 = sizeof(x857);
x677(x858,x859);
} else {
}
}
static void x878 (int x866) {
bool x867 = x866 == 1;
if (x867) {
int x868 = 4;
int x869 = x868;
uint8_t x870 = (uint8_t ) x869;
uint8_t* x871 = &x870;
size_t x872 = sizeof(x870);
x285(x871,x872);
} else {
}
}
static void x891 (int x879) {
bool x880 = x879 == 1;
if (x880) {
int x881 = 1;
int x882 = x881;
uint8_t x883 = (uint8_t ) x882;
uint8_t* x884 = &x883;
size_t x885 = sizeof(x883);
x610(x884,x885);
} else {
}
}
static void x904 (int x892) {
bool x893 = x892 == 1;
if (x893) {
int x894 = 3;
int x895 = x894;
uint8_t x896 = (uint8_t ) x895;
uint8_t* x897 = &x896;
size_t x898 = sizeof(x896);
x234(x897,x898);
} else {
}
}
int main() {
x907();
puts("main started");
x913();
buttons_register_callback(Button2,x865);
buttons_register_callback(Button4,x878);
buttons_register_callback(Button1,x891);
buttons_register_callback(Button3,x904);
while(1) {
  buttons_handle_events();
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
