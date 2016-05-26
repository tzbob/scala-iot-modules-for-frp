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
}static void __attribute__((noinline)) lcd_printf_int(const char* fmt, int i)
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
SM_DATA(mod1) int x148;
SM_FUNC(mod1) void x156 () {
int x149 = x148;
bool x150 = x149 == 0;
if (x150) {
x127 = 1;
x148 = 1;
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
SM_FUNC(mod1) void x138 (int x128,bool x129) {
bool x131 = x129;
if (x131) {
int x132 = x127;
int x130 = x128;
int x133 = x132 + x130;
x127 = x133;
} else {
}
}
SM_FUNC(mod1) void x147 (int* x139,bool* x140) {
bool* x142 = x140;
*x142 = true;
int x144 = x127;
int* x141 = x139;
*x141 = x144;
}
SM_OUTPUT(mod1,x211);
SM_FUNC(mod1) void x216 (int x200,bool x201) {
bool x203 = x201;
if (x203) {
int x202 = x200;
x211((const uint8_t*)&x202, sizeof(x202));
} else {
}
}
SM_INPUT(mod1,x220,x157,x158) { //top1
x156();
bool x162 = false;
int x163;
int x164 = x163;
int* x165 = &x164;
bool x166 = x162;
bool* x167 = &x166;
uint8_t* x159 = x157;
int x160 = x158;
x31(x159,x160,x165,x167);
bool x170 = false;
int x171;
int x172 = x171;
int* x173 = &x172;
bool x174 = x170;
bool* x175 = &x174;
x78(x164,x166,x173,x175);
bool x178 = false;
int x179;
int x180;
bool x181 = false;
int x182 = x180;
bool x183 = x181;
int x184 = x179;
int* x185 = &x184;
bool x186 = x178;
bool* x187 = &x186;
x126(x172,x174,x182,x183,x185,x187);
x138(x184,x186);
bool x192 = false;
int x193;
int x194 = x193;
int* x195 = &x194;
bool x196 = x192;
bool* x197 = &x196;
x147(x195,x197);
x216(x194,x196);
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
SM_INPUT(mod1,x268,x222,x223) { //top3
x156();
bool x227 = false;
int x228;
int x229 = x228;
int* x230 = &x229;
bool x231 = x227;
bool* x232 = &x231;
uint8_t* x224 = x222;
int x225 = x223;
x62(x224,x225,x230,x232);
bool x235 = false;
int x236;
int x237 = x236;
int* x238 = &x237;
bool x239 = x235;
bool* x240 = &x239;
x94(x229,x231,x238,x240);
bool x243 = false;
int x244;
int x245;
bool x246 = false;
int x247 = x245;
bool x248 = x246;
int x249 = x244;
int* x250 = &x249;
bool x251 = x243;
bool* x252 = &x251;
x126(x247,x248,x237,x239,x250,x252);
x138(x249,x251);
bool x257 = false;
int x258;
int x259 = x258;
int* x260 = &x259;
bool x261 = x257;
bool* x262 = &x261;
x147(x260,x262);
x216(x259,x261);
}
SM_DATA(mod2) int x363;
SM_DATA(mod2) int x474;
SM_DATA(mod2) int x495;
SM_FUNC(mod2) void x504 () {
int x496 = x495;
bool x497 = x496 == 0;
if (x497) {
x363 = 1;
x474 = 0;
x495 = 1;
} else {
}
}
SM_FUNC(mod2) void x300 (uint8_t* x270,int x271,int* x272,bool* x273) {
int x278 = 0;
int x279 = 0;
int x275 = x271;
uint8_t* x274 = x270;
for (;;) {
int x280 = x279;
bool x281 = x280 < x275;
if (!x281) break;
int x283 = x279;
uint8_t x284 = x274[x283];
int x288 = x278;
int x285 = (int ) x284;
int x286 = x283 * 8;
int x287 = x285 << x286;
int x289 = x288 + x287;
x278 = x289;
int x291 = x283 + 1;
x279 = x291;
}
bool* x277 = x273;
*x277 = true;
int x296 = x278;
int* x276 = x272;
int x297 = (int ) x296;
*x276 = x297;
}
SM_FUNC(mod2) void x402 (bool x388,int* x389,bool* x390) {
bool x391 = x388;
if (x391) {
bool* x393 = x390;
*x393 = true;
int x395 = x363;
int* x392 = x389;
*x392 = x395;
} else {
bool* x393 = x390;
*x393 = false;
}
}
SM_FUNC(mod2) void x451 (int x420,bool x421,int x422,bool x423,int* x424,bool* x425) {
bool x427 = x421;
bool x429 = x423;
bool x432 = x427 && x429;
if (x432) {
bool* x431 = x425;
*x431 = true;
int* x430 = x424;
int x426 = x420;
int x428 = x422;
int x434 = x426 + x428;
*x430 = x434;
} else {
if (x427) {
bool* x431 = x425;
*x431 = true;
int* x430 = x424;
int x426 = x420;
*x430 = x426;
} else {
if (x429) {
bool* x431 = x425;
*x431 = true;
int* x430 = x424;
int x428 = x422;
*x430 = x428;
} else {
bool* x431 = x425;
*x431 = false;
}
}
}
}
SM_FUNC(mod2) void x473 (int x452,bool x453,int* x454,bool* x455) {
bool x457 = x453;
if (x457) {
int x456 = x452;
int x460 = abs(x456);
bool x461 = x460 < 10;
if (x461) {
bool* x459 = x455;
*x459 = true;
int* x458 = x454;
*x458 = x456;
} else {
bool* x459 = x455;
*x459 = false;
}
} else {
bool* x459 = x455;
*x459 = true;
}
}
SM_FUNC(mod2) void x485 (int x475,bool x476) {
bool x478 = x476;
if (x478) {
int x479 = x474;
int x477 = x475;
int x480 = x479 + x477;
x474 = x480;
} else {
}
}
SM_FUNC(mod2) void x494 (int* x486,bool* x487) {
bool* x489 = x487;
*x489 = true;
int x491 = x474;
int* x488 = x486;
*x488 = x491;
}
SM_OUTPUT(mod2,x567);
SM_FUNC(mod2) void x572 (int x556,bool x557) {
bool x559 = x557;
if (x559) {
int x558 = x556;
x567((const uint8_t*)&x558, sizeof(x558));
} else {
}
}
SM_INPUT(mod2,x576,x505,x506) { //top10
x504();
bool x510 = false;
int x511;
int x512 = x511;
int* x513 = &x512;
bool x514 = x510;
bool* x515 = &x514;
uint8_t* x507 = x505;
int x508 = x506;
x300(x507,x508,x513,x515);
bool x518 = false;
int x519;
int x520 = x519;
int* x521 = &x520;
bool x522 = x518;
bool* x523 = &x522;
x402(x514,x521,x523);
bool x526 = false;
int x527;
int x528;
bool x529 = false;
int x530 = x528;
bool x531 = x529;
int x532 = x527;
int* x533 = &x532;
bool x534 = x526;
bool* x535 = &x534;
x451(x520,x522,x530,x531,x533,x535);
bool x538 = false;
int x539;
int x540 = x539;
int* x541 = &x540;
bool x542 = x538;
bool* x543 = &x542;
x473(x532,x534,x541,x543);
x485(x540,x542);
bool x548 = false;
int x549;
int x550 = x549;
int* x551 = &x550;
bool x552 = x548;
bool* x553 = &x552;
x494(x551,x553);
x572(x550,x552);
}
SM_FUNC(mod2) void x331 (uint8_t* x301,int x302,int* x303,bool* x304) {
int x309 = 0;
int x310 = 0;
int x306 = x302;
uint8_t* x305 = x301;
for (;;) {
int x311 = x310;
bool x312 = x311 < x306;
if (!x312) break;
int x314 = x310;
uint8_t x315 = x305[x314];
int x319 = x309;
int x316 = (int ) x315;
int x317 = x314 * 8;
int x318 = x316 << x317;
int x320 = x319 + x318;
x309 = x320;
int x322 = x314 + 1;
x310 = x322;
}
bool* x308 = x304;
*x308 = true;
int x327 = x309;
int* x307 = x303;
int x328 = (int ) x327;
*x307 = x328;
}
SM_FUNC(mod2) void x387 (bool x373,int* x374,bool* x375) {
bool x376 = x373;
if (x376) {
bool* x378 = x375;
*x378 = true;
int x380 = x363;
int* x377 = x374;
*x377 = x380;
} else {
bool* x378 = x375;
*x378 = false;
}
}
SM_FUNC(mod2) void x419 (int x403,bool x404,int* x405,bool* x406) {
bool x408 = x404;
if (x408) {
bool* x410 = x406;
*x410 = true;
int* x409 = x405;
int x407 = x403;
int x412 = 0 - x407;
*x409 = x412;
} else {
bool* x410 = x406;
*x410 = false;
}
}
SM_INPUT(mod2,x640,x578,x579) { //top12
x504();
bool x583 = false;
int x584;
int x585 = x584;
int* x586 = &x585;
bool x587 = x583;
bool* x588 = &x587;
uint8_t* x580 = x578;
int x581 = x579;
x331(x580,x581,x586,x588);
bool x591 = false;
int x592;
int x593 = x592;
int* x594 = &x593;
bool x595 = x591;
bool* x596 = &x595;
x387(x587,x594,x596);
bool x599 = false;
int x600;
int x601 = x600;
int* x602 = &x601;
bool x603 = x599;
bool* x604 = &x603;
x419(x593,x595,x602,x604);
bool x607 = false;
int x608;
int x609;
bool x610 = false;
int x611 = x609;
bool x612 = x610;
int x613 = x608;
int* x614 = &x613;
bool x615 = x607;
bool* x616 = &x615;
x451(x611,x612,x601,x603,x614,x616);
bool x619 = false;
int x620;
int x621 = x620;
int* x622 = &x621;
bool x623 = x619;
bool* x624 = &x623;
x473(x613,x615,x622,x624);
x485(x621,x623);
bool x629 = false;
int x630;
int x631 = x630;
int* x632 = &x631;
bool x633 = x629;
bool* x634 = &x633;
x494(x632,x634);
x572(x631,x633);
}
SM_FUNC(mod2) void x362 (uint8_t* x332,int x333,int* x334,bool* x335) {
int x340 = 0;
int x341 = 0;
int x337 = x333;
uint8_t* x336 = x332;
for (;;) {
int x342 = x341;
bool x343 = x342 < x337;
if (!x343) break;
int x345 = x341;
uint8_t x346 = x336[x345];
int x350 = x340;
int x347 = (int ) x346;
int x348 = x345 * 8;
int x349 = x347 << x348;
int x351 = x350 + x349;
x340 = x351;
int x353 = x345 + 1;
x341 = x353;
}
bool* x339 = x335;
*x339 = true;
int x358 = x340;
int* x338 = x334;
int x359 = (int ) x358;
*x338 = x359;
}
SM_FUNC(mod2) void x372 (int x364,bool x365) {
bool x367 = x365;
if (x367) {
int x366 = x364;
x363 = x366;
} else {
}
}
SM_INPUT(mod2,x658,x642,x643) { //top8
x504();
bool x647 = false;
int x648;
int x649 = x648;
int* x650 = &x649;
bool x651 = x647;
bool* x652 = &x651;
uint8_t* x644 = x642;
int x645 = x643;
x362(x644,x645,x650,x652);
x372(x649,x651);
}
SM_DATA(mod3) int x722;
SM_DATA(mod3) int x732;
SM_DATA(mod3) int x749;
SM_FUNC(mod3) void x748 () {
lcd_clear();
int x743 = x732;
pmodcls_set_cursor_position(0,0);
lcd_printf_int("Counter: %d", x743);
int x745 = x722;
pmodcls_set_cursor_position(1,0);
lcd_printf_int("Amount: %d", x745);
}
SM_FUNC(mod3) void x759 () {
int x750 = x749;
bool x751 = x750 == 0;
if (x751) {
x722 = 1;
x732 = 0;
x748();
x749 = 1;
} else {
}
}
SM_FUNC(mod3) void x690 (uint8_t* x660,int x661,int* x662,bool* x663) {
int x668 = 0;
int x669 = 0;
int x665 = x661;
uint8_t* x664 = x660;
for (;;) {
int x670 = x669;
bool x671 = x670 < x665;
if (!x671) break;
int x673 = x669;
uint8_t x674 = x664[x673];
int x678 = x668;
int x675 = (int ) x674;
int x676 = x673 * 8;
int x677 = x675 << x676;
int x679 = x678 + x677;
x668 = x679;
int x681 = x673 + 1;
x669 = x681;
}
bool* x667 = x663;
*x667 = true;
int x686 = x668;
int* x666 = x662;
int x687 = (int ) x686;
*x666 = x687;
}
SM_FUNC(mod3) void x741 (int x733,bool x734) {
bool x736 = x734;
if (x736) {
int x735 = x733;
x732 = x735;
} else {
}
}
SM_INPUT(mod3,x777,x760,x761) { //top20
x759();
bool x765 = false;
int x766;
int x767 = x766;
int* x768 = &x767;
bool x769 = x765;
bool* x770 = &x769;
uint8_t* x762 = x760;
int x763 = x761;
x690(x762,x763,x768,x770);
x741(x767,x769);
x748();
}
SM_FUNC(mod3) void x721 (uint8_t* x691,int x692,int* x693,bool* x694) {
int x699 = 0;
int x700 = 0;
int x696 = x692;
uint8_t* x695 = x691;
for (;;) {
int x701 = x700;
bool x702 = x701 < x696;
if (!x702) break;
int x704 = x700;
uint8_t x705 = x695[x704];
int x709 = x699;
int x706 = (int ) x705;
int x707 = x704 * 8;
int x708 = x706 << x707;
int x710 = x709 + x708;
x699 = x710;
int x712 = x704 + 1;
x700 = x712;
}
bool* x698 = x694;
*x698 = true;
int x717 = x699;
int* x697 = x693;
int x718 = (int ) x717;
*x697 = x718;
}
SM_FUNC(mod3) void x731 (int x723,bool x724) {
bool x726 = x724;
if (x726) {
int x725 = x723;
x722 = x725;
} else {
}
}
SM_INPUT(mod3,x796,x779,x780) { //top19
x759();
bool x784 = false;
int x785;
int x786 = x785;
int* x787 = &x786;
bool x788 = x784;
bool* x789 = &x788;
uint8_t* x781 = x779;
int x782 = x780;
x721(x781,x782,x787,x789);
x731(x786,x788);
x748();
}
DECLARE_SM(mod1, 0x1234);
DECLARE_SM(mod2, 0x1234);
DECLARE_SM(mod3, 0x1234);
static void x855 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x861 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);
  sancus_enable(&mod2);
  sm_register_existing(&mod2);
  sancus_enable(&mod3);
  sm_register_existing(&mod3);

  REACTIVE_CONNECT(mod1, x211, mod2, x658);
  REACTIVE_CONNECT(mod1, x211, mod3, x796);
  REACTIVE_CONNECT(mod2, x567, mod3, x777);
}
static void x813 (int x801) {
bool x802 = x801 == 1;
if (x802) {
int x803 = 2;
int x804 = x803;
uint8_t x805 = (uint8_t ) x804;
uint8_t* x806 = &x805;
size_t x807 = sizeof(x805);
x640(x806,x807);
} else {
}
}
static void x826 (int x814) {
bool x815 = x814 == 1;
if (x815) {
int x816 = 4;
int x817 = x816;
uint8_t x818 = (uint8_t ) x817;
uint8_t* x819 = &x818;
size_t x820 = sizeof(x818);
x268(x819,x820);
} else {
}
}
static void x839 (int x827) {
bool x828 = x827 == 1;
if (x828) {
int x829 = 1;
int x830 = x829;
uint8_t x831 = (uint8_t ) x830;
uint8_t* x832 = &x831;
size_t x833 = sizeof(x831);
x576(x832,x833);
} else {
}
}
static void x852 (int x840) {
bool x841 = x840 == 1;
if (x841) {
int x842 = 3;
int x843 = x842;
uint8_t x844 = (uint8_t ) x843;
uint8_t* x845 = &x844;
size_t x846 = sizeof(x844);
x220(x845,x846);
} else {
}
}
int main() {
x855();
puts("main started");
x861();
buttons_register_callback(Button2,x813);
buttons_register_callback(Button4,x826);
buttons_register_callback(Button1,x839);
buttons_register_callback(Button3,x852);
while(1) {
  buttons_handle_events();
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
