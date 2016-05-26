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

SM_DATA(mod1) int x189;
SM_DATA(mod1) int x307;
SM_DATA(mod1) int x339;
SM_FUNC(mod1) void x348 () {
int x340 = x339;
bool x341 = x340 == 0;
if (x341) {
x189 = 0;
x307 = 0;
x339 = 1;
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
SM_FUNC(mod1) void x140 (int x125,bool x126,int* x127,bool* x128) {
bool x130 = x126;
if (x130) {
bool* x132 = x128;
*x132 = true;
int* x131 = x127;
*x131 = 1;
} else {
bool* x132 = x128;
*x132 = false;
}
}
SM_FUNC(mod1) void x188 (int x157,bool x158,int x159,bool x160,int* x161,bool* x162) {
bool x164 = x158;
bool x166 = x160;
bool x169 = x164 && x166;
if (x169) {
bool* x168 = x162;
*x168 = true;
int* x167 = x161;
int x163 = x157;
int x165 = x159;
int x171 = x163 + x165;
*x167 = x171;
} else {
if (x164) {
bool* x168 = x162;
*x168 = true;
int* x167 = x161;
int x163 = x157;
*x167 = x163;
} else {
if (x166) {
bool* x168 = x162;
*x168 = true;
int* x167 = x161;
int x165 = x159;
*x167 = x165;
} else {
bool* x168 = x162;
*x168 = false;
}
}
}
}
SM_FUNC(mod1) void x205 (int x190,bool x191,bool* x192) {
bool x194 = x191;
if (x194) {
bool* x195 = x192;
*x195 = true;
int x197 = x189;
int x193 = x190;
int x198 = x197 + x193;
x189 = x198;
} else {
bool* x195 = x192;
*x195 = false;
}
}
SM_INPUT(mod1,x388,x349,x350) { //top1
x348();
bool x354 = false;
int x355;
int x356 = x355;
int* x357 = &x356;
bool x358 = x354;
bool* x359 = &x358;
uint8_t* x351 = x349;
int x352 = x350;
x31(x351,x352,x357,x359);
bool x362 = false;
int x363;
int x364 = x363;
int* x365 = &x364;
bool x366 = x362;
bool* x367 = &x366;
x140(x356,x358,x365,x367);
bool x370 = false;
int x371;
int x372;
bool x373 = false;
int x374 = x372;
bool x375 = x373;
int x376 = x371;
int* x377 = &x376;
bool x378 = x370;
bool* x379 = &x378;
x188(x364,x366,x374,x375,x377,x379);
bool x382 = false;
bool x383 = x382;
bool* x384 = &x383;
x205(x376,x378,x384);
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
SM_FUNC(mod1) void x220 (bool x206,int* x207,bool* x208) {
bool x209 = x206;
if (x209) {
bool* x211 = x208;
*x211 = true;
int x213 = x189;
int* x210 = x207;
*x210 = x213;
} else {
bool* x211 = x208;
*x211 = false;
}
}
SM_FUNC(mod1) void x252 (int x236,bool x237,int* x238,bool* x239) {
bool x241 = x237;
if (x241) {
bool* x243 = x239;
*x243 = true;
int* x242 = x238;
int x240 = x236;
int x245 = 0 - x240;
*x242 = x245;
} else {
bool* x243 = x239;
*x243 = false;
}
}
SM_FUNC(mod1) void x284 (int x253,bool x254,int x255,bool x256,int* x257,bool* x258) {
bool x260 = x254;
bool x262 = x256;
bool x265 = x260 && x262;
if (x265) {
bool* x264 = x258;
*x264 = true;
int* x263 = x257;
int x259 = x253;
int x261 = x255;
int x267 = x259 + x261;
*x263 = x267;
} else {
if (x260) {
bool* x264 = x258;
*x264 = true;
int* x263 = x257;
int x259 = x253;
*x263 = x259;
} else {
if (x262) {
bool* x264 = x258;
*x264 = true;
int* x263 = x257;
int x261 = x255;
*x263 = x261;
} else {
bool* x264 = x258;
*x264 = false;
}
}
}
}
SM_FUNC(mod1) void x306 (int x285,bool x286,int* x287,bool* x288) {
bool x290 = x286;
if (x290) {
int x289 = x285;
int x293 = abs(x289);
bool x294 = x293 < 10;
if (x294) {
bool* x292 = x288;
*x292 = true;
int* x291 = x287;
*x291 = x289;
} else {
bool* x292 = x288;
*x292 = false;
}
} else {
bool* x292 = x288;
*x292 = true;
}
}
SM_FUNC(mod1) void x323 (int x308,bool x309,bool* x310) {
bool x312 = x309;
if (x312) {
bool* x313 = x310;
*x313 = true;
int x315 = x307;
int x311 = x308;
int x316 = x315 + x311;
x307 = x316;
} else {
bool* x313 = x310;
*x313 = false;
}
}
SM_FUNC(mod1) void x338 (bool x324,int* x325,bool* x326) {
bool x327 = x324;
if (x327) {
bool* x329 = x326;
*x329 = true;
} else {
bool* x329 = x326;
*x329 = false;
}
int x335 = x307;
int* x328 = x325;
*x328 = x335;
}
SM_OUTPUT(mod1,x463);
SM_FUNC(mod1) void x468 (int x452,bool x453) {
bool x455 = x453;
if (x455) {
int x454 = x452;
x463((const uint8_t*)&x454, sizeof(x454));
} else {
}
}
SM_INPUT(mod1,x472,x390,x391) { //top9
x348();
bool x395 = false;
int x396;
int x397 = x396;
int* x398 = &x397;
bool x399 = x395;
bool* x400 = &x399;
uint8_t* x392 = x390;
int x393 = x391;
x62(x392,x393,x398,x400);
bool x403 = false;
int x404;
int x405 = x404;
int* x406 = &x405;
bool x407 = x403;
bool* x408 = &x407;
x220(x399,x406,x408);
bool x411 = false;
int x412;
int x413 = x412;
int* x414 = &x413;
bool x415 = x411;
bool* x416 = &x415;
x252(x405,x407,x414,x416);
bool x419 = false;
int x420;
int x421;
bool x422 = false;
int x423 = x421;
bool x424 = x422;
int x425 = x420;
int* x426 = &x425;
bool x427 = x419;
bool* x428 = &x427;
x284(x423,x424,x413,x415,x426,x428);
bool x431 = false;
int x432;
int x433 = x432;
int* x434 = &x433;
bool x435 = x431;
bool* x436 = &x435;
x306(x425,x427,x434,x436);
bool x439 = false;
bool x440 = x439;
bool* x441 = &x440;
x323(x433,x435,x441);
bool x444 = false;
int x445;
int x446 = x445;
int* x447 = &x446;
bool x448 = x444;
bool* x449 = &x448;
x338(x440,x447,x449);
x468(x446,x448);
}
SM_FUNC(mod1) void x93 (uint8_t* x63,int x64,int* x65,bool* x66) {
int x71 = 0;
int x72 = 0;
int x68 = x64;
uint8_t* x67 = x63;
for (;;) {
int x73 = x72;
bool x74 = x73 < x68;
if (!x74) break;
int x76 = x72;
uint8_t x77 = x67[x76];
int x81 = x71;
int x78 = (int ) x77;
int x79 = x76 * 8;
int x80 = x78 << x79;
int x82 = x81 + x80;
x71 = x82;
int x84 = x76 + 1;
x72 = x84;
}
bool* x70 = x66;
*x70 = true;
int x89 = x71;
int* x69 = x65;
int x90 = (int ) x89;
*x69 = x90;
}
SM_FUNC(mod1) void x235 (bool x221,int* x222,bool* x223) {
bool x224 = x221;
if (x224) {
bool* x226 = x223;
*x226 = true;
int x228 = x189;
int* x225 = x222;
*x225 = x228;
} else {
bool* x226 = x223;
*x226 = false;
}
}
SM_INPUT(mod1,x531,x474,x475) { //top7
x348();
bool x479 = false;
int x480;
int x481 = x480;
int* x482 = &x481;
bool x483 = x479;
bool* x484 = &x483;
uint8_t* x476 = x474;
int x477 = x475;
x93(x476,x477,x482,x484);
bool x487 = false;
int x488;
int x489 = x488;
int* x490 = &x489;
bool x491 = x487;
bool* x492 = &x491;
x235(x483,x490,x492);
bool x495 = false;
int x496;
int x497;
bool x498 = false;
int x499 = x497;
bool x500 = x498;
int x501 = x496;
int* x502 = &x501;
bool x503 = x495;
bool* x504 = &x503;
x284(x489,x491,x499,x500,x502,x504);
bool x507 = false;
int x508;
int x509 = x508;
int* x510 = &x509;
bool x511 = x507;
bool* x512 = &x511;
x306(x501,x503,x510,x512);
bool x515 = false;
bool x516 = x515;
bool* x517 = &x516;
x323(x509,x511,x517);
bool x520 = false;
int x521;
int x522 = x521;
int* x523 = &x522;
bool x524 = x520;
bool* x525 = &x524;
x338(x516,x523,x525);
x468(x522,x524);
}
SM_FUNC(mod1) void x124 (uint8_t* x94,int x95,int* x96,bool* x97) {
int x102 = 0;
int x103 = 0;
int x99 = x95;
uint8_t* x98 = x94;
for (;;) {
int x104 = x103;
bool x105 = x104 < x99;
if (!x105) break;
int x107 = x103;
uint8_t x108 = x98[x107];
int x112 = x102;
int x109 = (int ) x108;
int x110 = x107 * 8;
int x111 = x109 << x110;
int x113 = x112 + x111;
x102 = x113;
int x115 = x107 + 1;
x103 = x115;
}
bool* x101 = x97;
*x101 = true;
int x120 = x102;
int* x100 = x96;
int x121 = (int ) x120;
*x100 = x121;
}
SM_FUNC(mod1) void x156 (int x141,bool x142,int* x143,bool* x144) {
bool x146 = x142;
if (x146) {
bool* x148 = x144;
*x148 = true;
int* x147 = x143;
*x147 = -1;
} else {
bool* x148 = x144;
*x148 = false;
}
}
SM_INPUT(mod1,x572,x533,x534) { //top3
x348();
bool x538 = false;
int x539;
int x540 = x539;
int* x541 = &x540;
bool x542 = x538;
bool* x543 = &x542;
uint8_t* x535 = x533;
int x536 = x534;
x124(x535,x536,x541,x543);
bool x546 = false;
int x547;
int x548 = x547;
int* x549 = &x548;
bool x550 = x546;
bool* x551 = &x550;
x156(x540,x542,x549,x551);
bool x554 = false;
int x555;
int x556;
bool x557 = false;
int x558 = x556;
bool x559 = x557;
int x560 = x555;
int* x561 = &x560;
bool x562 = x554;
bool* x563 = &x562;
x188(x558,x559,x548,x550,x561,x563);
bool x566 = false;
bool x567 = x566;
bool* x568 = &x567;
x205(x560,x562,x568);
}
SM_DATA(mod2) int x605;
SM_DATA(mod2) int x623;
SM_FUNC(mod2) void x622 () {
lcd_clear();
int x619 = x605;
pmodcls_set_cursor_position(0,0);
lcd_printf_int("Counter: %d", x619);
}
SM_FUNC(mod2) void x632 () {
int x624 = x623;
bool x625 = x624 == 0;
if (x625) {
x605 = 0;
x622();
x623 = 1;
} else {
}
}
SM_FUNC(mod2) void x604 (uint8_t* x574,int x575,int* x576,bool* x577) {
int x582 = 0;
int x583 = 0;
int x579 = x575;
uint8_t* x578 = x574;
for (;;) {
int x584 = x583;
bool x585 = x584 < x579;
if (!x585) break;
int x587 = x583;
uint8_t x588 = x578[x587];
int x592 = x582;
int x589 = (int ) x588;
int x590 = x587 * 8;
int x591 = x589 << x590;
int x593 = x592 + x591;
x582 = x593;
int x595 = x587 + 1;
x583 = x595;
}
bool* x581 = x577;
*x581 = true;
int x600 = x582;
int* x580 = x576;
int x601 = (int ) x600;
*x580 = x601;
}
SM_FUNC(mod2) void x617 (int x606,bool x607,bool* x608) {
bool x610 = x607;
if (x610) {
bool* x611 = x608;
*x611 = true;
int x609 = x606;
x605 = x609;
} else {
}
}
SM_INPUT(mod2,x653,x633,x634) { //top16
x632();
bool x638 = false;
int x639;
int x640 = x639;
int* x641 = &x640;
bool x642 = x638;
bool* x643 = &x642;
uint8_t* x635 = x633;
int x636 = x634;
x604(x635,x636,x641,x643);
bool x646 = false;
bool x647 = x646;
bool* x648 = &x647;
x617(x640,x642,x648);
x622();
}
DECLARE_SM(mod1, 0x1234);
DECLARE_SM(mod2, 0x1234);
static void x711 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x715 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);
  sancus_enable(&mod2);
  sm_register_existing(&mod2);

  REACTIVE_CONNECT(mod1, x463, mod2, x653);
}
static void x669 (int x657) {
bool x658 = x657 == 1;
if (x658) {
int x659 = 2;
int x660 = x659;
uint8_t x661 = (uint8_t ) x660;
uint8_t* x662 = &x661;
size_t x663 = sizeof(x661);
x472(x662,x663);
} else {
}
}
static void x682 (int x670) {
bool x671 = x670 == 1;
if (x671) {
int x672 = 4;
int x673 = x672;
uint8_t x674 = (uint8_t ) x673;
uint8_t* x675 = &x674;
size_t x676 = sizeof(x674);
x572(x675,x676);
} else {
}
}
static void x695 (int x683) {
bool x684 = x683 == 1;
if (x684) {
int x685 = 1;
int x686 = x685;
uint8_t x687 = (uint8_t ) x686;
uint8_t* x688 = &x687;
size_t x689 = sizeof(x687);
x531(x688,x689);
} else {
}
}
static void x708 (int x696) {
bool x697 = x696 == 1;
if (x697) {
int x698 = 3;
int x699 = x698;
uint8_t x700 = (uint8_t ) x699;
uint8_t* x701 = &x700;
size_t x702 = sizeof(x700);
x388(x701,x702);
} else {
}
}
int main() {
x711();
puts("main started");
x715();
buttons_register_callback(Button2,x669);
buttons_register_callback(Button4,x682);
buttons_register_callback(Button1,x695);
buttons_register_callback(Button3,x708);
while(1) {
  buttons_handle_events();
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
