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
SM_ENTRY(mod1) void x167() {
int x160 = x159;
bool x161 = x160 == 0;
if (x161) {
x127 = 1;
x159 = 1;
} else {
}
}
SM_FUNC(mod1) void x168 () {
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
SM_OUTPUT(mod1,x227);
SM_FUNC(mod1) void x232 (int x216,bool x217) {
bool x219 = x217;
if (x219) {
int x218 = x216;
x227((const uint8_t*)&x218, sizeof(x218));
} else {
}
}
SM_INPUT(mod1,x236,x169,x170) { //top1
x167();
x168();
bool x175 = false;
int x176;
int x177 = x176;
int* x178 = &x177;
bool x179 = x175;
bool* x180 = &x179;
uint8_t* x171 = x169;
int x172 = x170;
x31(x171,x172,x178,x180);
bool x183 = false;
int x184;
int x185 = x184;
int* x186 = &x185;
bool x187 = x183;
bool* x188 = &x187;
x78(x177,x179,x186,x188);
bool x191 = false;
int x192;
int x193;
bool x194 = false;
int x195 = x193;
bool x196 = x194;
int x197 = x192;
int* x198 = &x197;
bool x199 = x191;
bool* x200 = &x199;
x126(x185,x187,x195,x196,x198,x200);
bool x203 = false;
bool x204 = x203;
bool* x205 = &x204;
x143(x197,x199,x205);
bool x208 = false;
int x209;
int x210 = x209;
int* x211 = &x210;
bool x212 = x208;
bool* x213 = &x212;
x158(x204,x211,x213);
x232(x210,x212);
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
SM_INPUT(mod1,x288,x238,x239) { //top3
x167();
x168();
bool x244 = false;
int x245;
int x246 = x245;
int* x247 = &x246;
bool x248 = x244;
bool* x249 = &x248;
uint8_t* x240 = x238;
int x241 = x239;
x62(x240,x241,x247,x249);
bool x252 = false;
int x253;
int x254 = x253;
int* x255 = &x254;
bool x256 = x252;
bool* x257 = &x256;
x94(x246,x248,x255,x257);
bool x260 = false;
int x261;
int x262;
bool x263 = false;
int x264 = x262;
bool x265 = x263;
int x266 = x261;
int* x267 = &x266;
bool x268 = x260;
bool* x269 = &x268;
x126(x264,x265,x254,x256,x267,x269);
bool x272 = false;
bool x273 = x272;
bool* x274 = &x273;
x143(x266,x268,x274);
bool x277 = false;
int x278;
int x279 = x278;
int* x280 = &x279;
bool x281 = x277;
bool* x282 = &x281;
x158(x273,x280,x282);
x232(x279,x281);
}
SM_DATA(mod2) int x383;
SM_DATA(mod2) int x497;
SM_DATA(mod2) int x529;
SM_ENTRY(mod2) void x538() {
int x530 = x529;
bool x531 = x530 == 0;
if (x531) {
x383 = 1;
x497 = 0;
x529 = 1;
} else {
}
}
SM_FUNC(mod2) void x539 () {
}
SM_FUNC(mod2) void x320 (uint8_t* x290,int x291,int* x292,bool* x293) {
int x298 = 0;
int x299 = 0;
int x295 = x291;
uint8_t* x294 = x290;
for (;;) {
int x300 = x299;
bool x301 = x300 < x295;
if (!x301) break;
int x303 = x299;
uint8_t x304 = x294[x303];
int x308 = x298;
int x305 = (int ) x304;
int x306 = x303 * 8;
int x307 = x305 << x306;
int x309 = x308 + x307;
x298 = x309;
int x311 = x303 + 1;
x299 = x311;
}
bool* x297 = x293;
*x297 = true;
int x316 = x298;
int* x296 = x292;
int x317 = (int ) x316;
*x296 = x317;
}
SM_FUNC(mod2) void x425 (bool x411,int* x412,bool* x413) {
bool x414 = x411;
if (x414) {
bool* x416 = x413;
*x416 = true;
int x418 = x383;
int* x415 = x412;
*x415 = x418;
} else {
bool* x416 = x413;
*x416 = false;
}
}
SM_FUNC(mod2) void x474 (int x443,bool x444,int x445,bool x446,int* x447,bool* x448) {
bool x450 = x444;
bool x452 = x446;
bool x455 = x450 && x452;
if (x455) {
bool* x454 = x448;
*x454 = true;
int* x453 = x447;
int x449 = x443;
int x451 = x445;
int x457 = x449 + x451;
*x453 = x457;
} else {
if (x450) {
bool* x454 = x448;
*x454 = true;
int* x453 = x447;
int x449 = x443;
*x453 = x449;
} else {
if (x452) {
bool* x454 = x448;
*x454 = true;
int* x453 = x447;
int x451 = x445;
*x453 = x451;
} else {
bool* x454 = x448;
*x454 = false;
}
}
}
}
SM_FUNC(mod2) void x496 (int x475,bool x476,int* x477,bool* x478) {
bool x480 = x476;
if (x480) {
int x479 = x475;
int x483 = abs(x479);
bool x484 = x483 < 10;
if (x484) {
bool* x482 = x478;
*x482 = true;
int* x481 = x477;
*x481 = x479;
} else {
bool* x482 = x478;
*x482 = false;
}
} else {
bool* x482 = x478;
*x482 = true;
}
}
SM_FUNC(mod2) void x513 (int x498,bool x499,bool* x500) {
bool x502 = x499;
if (x502) {
bool* x503 = x500;
*x503 = true;
int x505 = x497;
int x501 = x498;
int x506 = x505 + x501;
x497 = x506;
} else {
bool* x503 = x500;
*x503 = false;
}
}
SM_FUNC(mod2) void x528 (bool x514,int* x515,bool* x516) {
bool x517 = x514;
if (x517) {
bool* x519 = x516;
*x519 = true;
} else {
bool* x519 = x516;
*x519 = false;
}
int x525 = x497;
int* x518 = x515;
*x518 = x525;
}
SM_OUTPUT(mod2,x606);
SM_FUNC(mod2) void x611 (int x595,bool x596) {
bool x598 = x596;
if (x598) {
int x597 = x595;
x606((const uint8_t*)&x597, sizeof(x597));
} else {
}
}
SM_INPUT(mod2,x615,x540,x541) { //top10
x538();
x539();
bool x546 = false;
int x547;
int x548 = x547;
int* x549 = &x548;
bool x550 = x546;
bool* x551 = &x550;
uint8_t* x542 = x540;
int x543 = x541;
x320(x542,x543,x549,x551);
bool x554 = false;
int x555;
int x556 = x555;
int* x557 = &x556;
bool x558 = x554;
bool* x559 = &x558;
x425(x550,x557,x559);
bool x562 = false;
int x563;
int x564;
bool x565 = false;
int x566 = x564;
bool x567 = x565;
int x568 = x563;
int* x569 = &x568;
bool x570 = x562;
bool* x571 = &x570;
x474(x556,x558,x566,x567,x569,x571);
bool x574 = false;
int x575;
int x576 = x575;
int* x577 = &x576;
bool x578 = x574;
bool* x579 = &x578;
x496(x568,x570,x577,x579);
bool x582 = false;
bool x583 = x582;
bool* x584 = &x583;
x513(x576,x578,x584);
bool x587 = false;
int x588;
int x589 = x588;
int* x590 = &x589;
bool x591 = x587;
bool* x592 = &x591;
x528(x583,x590,x592);
x611(x589,x591);
}
SM_FUNC(mod2) void x351 (uint8_t* x321,int x322,int* x323,bool* x324) {
int x329 = 0;
int x330 = 0;
int x326 = x322;
uint8_t* x325 = x321;
for (;;) {
int x331 = x330;
bool x332 = x331 < x326;
if (!x332) break;
int x334 = x330;
uint8_t x335 = x325[x334];
int x339 = x329;
int x336 = (int ) x335;
int x337 = x334 * 8;
int x338 = x336 << x337;
int x340 = x339 + x338;
x329 = x340;
int x342 = x334 + 1;
x330 = x342;
}
bool* x328 = x324;
*x328 = true;
int x347 = x329;
int* x327 = x323;
int x348 = (int ) x347;
*x327 = x348;
}
SM_FUNC(mod2) void x410 (bool x396,int* x397,bool* x398) {
bool x399 = x396;
if (x399) {
bool* x401 = x398;
*x401 = true;
int x403 = x383;
int* x400 = x397;
*x400 = x403;
} else {
bool* x401 = x398;
*x401 = false;
}
}
SM_FUNC(mod2) void x442 (int x426,bool x427,int* x428,bool* x429) {
bool x431 = x427;
if (x431) {
bool* x433 = x429;
*x433 = true;
int* x432 = x428;
int x430 = x426;
int x435 = 0 - x430;
*x432 = x435;
} else {
bool* x433 = x429;
*x433 = false;
}
}
SM_INPUT(mod2,x683,x617,x618) { //top12
x538();
x539();
bool x623 = false;
int x624;
int x625 = x624;
int* x626 = &x625;
bool x627 = x623;
bool* x628 = &x627;
uint8_t* x619 = x617;
int x620 = x618;
x351(x619,x620,x626,x628);
bool x631 = false;
int x632;
int x633 = x632;
int* x634 = &x633;
bool x635 = x631;
bool* x636 = &x635;
x410(x627,x634,x636);
bool x639 = false;
int x640;
int x641 = x640;
int* x642 = &x641;
bool x643 = x639;
bool* x644 = &x643;
x442(x633,x635,x642,x644);
bool x647 = false;
int x648;
int x649;
bool x650 = false;
int x651 = x649;
bool x652 = x650;
int x653 = x648;
int* x654 = &x653;
bool x655 = x647;
bool* x656 = &x655;
x474(x651,x652,x641,x643,x654,x656);
bool x659 = false;
int x660;
int x661 = x660;
int* x662 = &x661;
bool x663 = x659;
bool* x664 = &x663;
x496(x653,x655,x662,x664);
bool x667 = false;
bool x668 = x667;
bool* x669 = &x668;
x513(x661,x663,x669);
bool x672 = false;
int x673;
int x674 = x673;
int* x675 = &x674;
bool x676 = x672;
bool* x677 = &x676;
x528(x668,x675,x677);
x611(x674,x676);
}
SM_FUNC(mod2) void x382 (uint8_t* x352,int x353,int* x354,bool* x355) {
int x360 = 0;
int x361 = 0;
int x357 = x353;
uint8_t* x356 = x352;
for (;;) {
int x362 = x361;
bool x363 = x362 < x357;
if (!x363) break;
int x365 = x361;
uint8_t x366 = x356[x365];
int x370 = x360;
int x367 = (int ) x366;
int x368 = x365 * 8;
int x369 = x367 << x368;
int x371 = x370 + x369;
x360 = x371;
int x373 = x365 + 1;
x361 = x373;
}
bool* x359 = x355;
*x359 = true;
int x378 = x360;
int* x358 = x354;
int x379 = (int ) x378;
*x358 = x379;
}
SM_FUNC(mod2) void x395 (int x384,bool x385,bool* x386) {
bool x388 = x385;
if (x388) {
bool* x389 = x386;
*x389 = true;
int x387 = x384;
x383 = x387;
} else {
}
}
SM_INPUT(mod2,x705,x685,x686) { //top8
x538();
x539();
bool x691 = false;
int x692;
int x693 = x692;
int* x694 = &x693;
bool x695 = x691;
bool* x696 = &x695;
uint8_t* x687 = x685;
int x688 = x686;
x382(x687,x688,x694,x696);
bool x699 = false;
bool x700 = x699;
bool* x701 = &x700;
x395(x693,x695,x701);
}
SM_DATA(mod3) int x769;
SM_DATA(mod3) int x782;
SM_DATA(mod3) int x802;
SM_FUNC(mod3) void x801 () {
lcd_clear();
int x796 = x782;
pmodcls_set_cursor_position(0,0);
lcd_printf_int("Counter: %d", x796);
int x798 = x769;
pmodcls_set_cursor_position(1,0);
lcd_printf_int("Amount: %d", x798);
}
SM_ENTRY(mod3) void x812() {
int x803 = x802;
bool x804 = x803 == 0;
if (x804) {
x769 = 1;
x782 = 0;
x801();
x802 = 1;
} else {
}
}
SM_FUNC(mod3) void x813 () {
}
SM_FUNC(mod3) void x737 (uint8_t* x707,int x708,int* x709,bool* x710) {
int x715 = 0;
int x716 = 0;
int x712 = x708;
uint8_t* x711 = x707;
for (;;) {
int x717 = x716;
bool x718 = x717 < x712;
if (!x718) break;
int x720 = x716;
uint8_t x721 = x711[x720];
int x725 = x715;
int x722 = (int ) x721;
int x723 = x720 * 8;
int x724 = x722 << x723;
int x726 = x725 + x724;
x715 = x726;
int x728 = x720 + 1;
x716 = x728;
}
bool* x714 = x710;
*x714 = true;
int x733 = x715;
int* x713 = x709;
int x734 = (int ) x733;
*x713 = x734;
}
SM_FUNC(mod3) void x794 (int x783,bool x784,bool* x785) {
bool x787 = x784;
if (x787) {
bool* x788 = x785;
*x788 = true;
int x786 = x783;
x782 = x786;
} else {
}
}
SM_INPUT(mod3,x835,x814,x815) { //top20
x812();
x813();
bool x820 = false;
int x821;
int x822 = x821;
int* x823 = &x822;
bool x824 = x820;
bool* x825 = &x824;
uint8_t* x816 = x814;
int x817 = x815;
x737(x816,x817,x823,x825);
bool x828 = false;
bool x829 = x828;
bool* x830 = &x829;
x794(x822,x824,x830);
x801();
}
SM_FUNC(mod3) void x768 (uint8_t* x738,int x739,int* x740,bool* x741) {
int x746 = 0;
int x747 = 0;
int x743 = x739;
uint8_t* x742 = x738;
for (;;) {
int x748 = x747;
bool x749 = x748 < x743;
if (!x749) break;
int x751 = x747;
uint8_t x752 = x742[x751];
int x756 = x746;
int x753 = (int ) x752;
int x754 = x751 * 8;
int x755 = x753 << x754;
int x757 = x756 + x755;
x746 = x757;
int x759 = x751 + 1;
x747 = x759;
}
bool* x745 = x741;
*x745 = true;
int x764 = x746;
int* x744 = x740;
int x765 = (int ) x764;
*x744 = x765;
}
SM_FUNC(mod3) void x781 (int x770,bool x771,bool* x772) {
bool x774 = x771;
if (x774) {
bool* x775 = x772;
*x775 = true;
int x773 = x770;
x769 = x773;
} else {
}
}
SM_INPUT(mod3,x858,x837,x838) { //top19
x812();
x813();
bool x843 = false;
int x844;
int x845 = x844;
int* x846 = &x845;
bool x847 = x843;
bool* x848 = &x847;
uint8_t* x839 = x837;
int x840 = x838;
x768(x839,x840,x846,x848);
bool x851 = false;
bool x852 = x851;
bool* x853 = &x852;
x781(x845,x847,x853);
x801();
}
DECLARE_SM(mod1, 0x1234);
DECLARE_SM(mod2, 0x1234);
DECLARE_SM(mod3, 0x1234);
static void x909 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x915 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);
  sancus_enable(&mod2);
  sm_register_existing(&mod2);
  sancus_enable(&mod3);
  sm_register_existing(&mod3);

  REACTIVE_CONNECT(mod1, x227, mod2, x705);
  REACTIVE_CONNECT(mod1, x227, mod3, x858);
  REACTIVE_CONNECT(mod2, x606, mod3, x835);
}
static void x873 (int x863) {
uint8_t x864 = (uint8_t ) x863;
size_t x865 = sizeof(x864);
uint8_t* x866 = &x864;
bool x867 = x863 == 1;
if (x867) {
x683(x866,x865);
} else {
}
}
static void x884 (int x874) {
uint8_t x875 = (uint8_t ) x874;
size_t x876 = sizeof(x875);
uint8_t* x877 = &x875;
bool x878 = x874 == 1;
if (x878) {
x288(x877,x876);
} else {
}
}
static void x895 (int x885) {
uint8_t x886 = (uint8_t ) x885;
size_t x887 = sizeof(x886);
uint8_t* x888 = &x886;
bool x889 = x885 == 1;
if (x889) {
x615(x888,x887);
} else {
}
}
static void x906 (int x896) {
uint8_t x897 = (uint8_t ) x896;
size_t x898 = sizeof(x897);
uint8_t* x899 = &x897;
bool x900 = x896 == 1;
if (x900) {
x236(x899,x898);
} else {
}
}
int main() {
x909();
puts("main started");
x915();
buttons_register_callback(Button2,x873);
buttons_register_callback(Button4,x884);
buttons_register_callback(Button1,x895);
buttons_register_callback(Button3,x906);

// modules inits;
x167();
x538();
x812();
while(1) {
  buttons_handle_events();
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
