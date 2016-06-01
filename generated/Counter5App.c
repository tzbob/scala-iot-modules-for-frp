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
SM_ENTRY(mod1) void x348() {
int x340 = x339;
bool x341 = x340 == 0;
if (x341) {
x189 = 0;
x307 = 0;
x339 = 1;
} else {
}
}
SM_FUNC(mod1) void x349 () {
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
SM_INPUT(mod1,x390,x350,x351) { //top1
x348();
x349();
bool x356 = false;
int x357;
int x358 = x357;
int* x359 = &x358;
bool x360 = x356;
bool* x361 = &x360;
uint8_t* x352 = x350;
int x353 = x351;
x31(x352,x353,x359,x361);
bool x364 = false;
int x365;
int x366 = x365;
int* x367 = &x366;
bool x368 = x364;
bool* x369 = &x368;
x140(x358,x360,x367,x369);
bool x372 = false;
int x373;
int x374;
bool x375 = false;
int x376 = x374;
bool x377 = x375;
int x378 = x373;
int* x379 = &x378;
bool x380 = x372;
bool* x381 = &x380;
x188(x366,x368,x376,x377,x379,x381);
bool x384 = false;
bool x385 = x384;
bool* x386 = &x385;
x205(x378,x380,x386);
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
SM_OUTPUT(mod1,x466);
SM_FUNC(mod1) void x471 (int x455,bool x456) {
bool x458 = x456;
if (x458) {
int x457 = x455;
x466((const uint8_t*)&x457, sizeof(x457));
} else {
}
}
SM_INPUT(mod1,x475,x392,x393) { //top9
x348();
x349();
bool x398 = false;
int x399;
int x400 = x399;
int* x401 = &x400;
bool x402 = x398;
bool* x403 = &x402;
uint8_t* x394 = x392;
int x395 = x393;
x62(x394,x395,x401,x403);
bool x406 = false;
int x407;
int x408 = x407;
int* x409 = &x408;
bool x410 = x406;
bool* x411 = &x410;
x220(x402,x409,x411);
bool x414 = false;
int x415;
int x416 = x415;
int* x417 = &x416;
bool x418 = x414;
bool* x419 = &x418;
x252(x408,x410,x417,x419);
bool x422 = false;
int x423;
int x424;
bool x425 = false;
int x426 = x424;
bool x427 = x425;
int x428 = x423;
int* x429 = &x428;
bool x430 = x422;
bool* x431 = &x430;
x284(x426,x427,x416,x418,x429,x431);
bool x434 = false;
int x435;
int x436 = x435;
int* x437 = &x436;
bool x438 = x434;
bool* x439 = &x438;
x306(x428,x430,x437,x439);
bool x442 = false;
bool x443 = x442;
bool* x444 = &x443;
x323(x436,x438,x444);
bool x447 = false;
int x448;
int x449 = x448;
int* x450 = &x449;
bool x451 = x447;
bool* x452 = &x451;
x338(x443,x450,x452);
x471(x449,x451);
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
SM_INPUT(mod1,x535,x477,x478) { //top7
x348();
x349();
bool x483 = false;
int x484;
int x485 = x484;
int* x486 = &x485;
bool x487 = x483;
bool* x488 = &x487;
uint8_t* x479 = x477;
int x480 = x478;
x93(x479,x480,x486,x488);
bool x491 = false;
int x492;
int x493 = x492;
int* x494 = &x493;
bool x495 = x491;
bool* x496 = &x495;
x235(x487,x494,x496);
bool x499 = false;
int x500;
int x501;
bool x502 = false;
int x503 = x501;
bool x504 = x502;
int x505 = x500;
int* x506 = &x505;
bool x507 = x499;
bool* x508 = &x507;
x284(x493,x495,x503,x504,x506,x508);
bool x511 = false;
int x512;
int x513 = x512;
int* x514 = &x513;
bool x515 = x511;
bool* x516 = &x515;
x306(x505,x507,x514,x516);
bool x519 = false;
bool x520 = x519;
bool* x521 = &x520;
x323(x513,x515,x521);
bool x524 = false;
int x525;
int x526 = x525;
int* x527 = &x526;
bool x528 = x524;
bool* x529 = &x528;
x338(x520,x527,x529);
x471(x526,x528);
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
SM_INPUT(mod1,x577,x537,x538) { //top3
x348();
x349();
bool x543 = false;
int x544;
int x545 = x544;
int* x546 = &x545;
bool x547 = x543;
bool* x548 = &x547;
uint8_t* x539 = x537;
int x540 = x538;
x124(x539,x540,x546,x548);
bool x551 = false;
int x552;
int x553 = x552;
int* x554 = &x553;
bool x555 = x551;
bool* x556 = &x555;
x156(x545,x547,x554,x556);
bool x559 = false;
int x560;
int x561;
bool x562 = false;
int x563 = x561;
bool x564 = x562;
int x565 = x560;
int* x566 = &x565;
bool x567 = x559;
bool* x568 = &x567;
x188(x563,x564,x553,x555,x566,x568);
bool x571 = false;
bool x572 = x571;
bool* x573 = &x572;
x205(x565,x567,x573);
}
SM_DATA(mod2) int x610;
SM_DATA(mod2) int x628;
SM_FUNC(mod2) void x627 () {
lcd_clear();
int x624 = x610;
pmodcls_set_cursor_position(0,0);
lcd_printf_int("Counter: %d", x624);
}
SM_ENTRY(mod2) void x637() {
int x629 = x628;
bool x630 = x629 == 0;
if (x630) {
x610 = 0;
x627();
x628 = 1;
} else {
}
}
SM_FUNC(mod2) void x638 () {
}
SM_FUNC(mod2) void x609 (uint8_t* x579,int x580,int* x581,bool* x582) {
int x587 = 0;
int x588 = 0;
int x584 = x580;
uint8_t* x583 = x579;
for (;;) {
int x589 = x588;
bool x590 = x589 < x584;
if (!x590) break;
int x592 = x588;
uint8_t x593 = x583[x592];
int x597 = x587;
int x594 = (int ) x593;
int x595 = x592 * 8;
int x596 = x594 << x595;
int x598 = x597 + x596;
x587 = x598;
int x600 = x592 + 1;
x588 = x600;
}
bool* x586 = x582;
*x586 = true;
int x605 = x587;
int* x585 = x581;
int x606 = (int ) x605;
*x585 = x606;
}
SM_FUNC(mod2) void x622 (int x611,bool x612,bool* x613) {
bool x615 = x612;
if (x615) {
bool* x616 = x613;
*x616 = true;
int x614 = x611;
x610 = x614;
} else {
}
}
SM_INPUT(mod2,x660,x639,x640) { //top16
x637();
x638();
bool x645 = false;
int x646;
int x647 = x646;
int* x648 = &x647;
bool x649 = x645;
bool* x650 = &x649;
uint8_t* x641 = x639;
int x642 = x640;
x609(x641,x642,x648,x650);
bool x653 = false;
bool x654 = x653;
bool* x655 = &x654;
x622(x647,x649,x655);
x627();
}
DECLARE_SM(mod1, 0x1234);
DECLARE_SM(mod2, 0x1234);
static void x710 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x714 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);
  sancus_enable(&mod2);
  sm_register_existing(&mod2);

  REACTIVE_CONNECT(mod1, x466, mod2, x660);
}
static void x674 (int x664) {
uint8_t x665 = (uint8_t ) x664;
size_t x666 = sizeof(x665);
uint8_t* x667 = &x665;
bool x668 = x664 == 1;
if (x668) {
x475(x667,x666);
} else {
}
}
static void x685 (int x675) {
uint8_t x676 = (uint8_t ) x675;
size_t x677 = sizeof(x676);
uint8_t* x678 = &x676;
bool x679 = x675 == 1;
if (x679) {
x577(x678,x677);
} else {
}
}
static void x696 (int x686) {
uint8_t x687 = (uint8_t ) x686;
size_t x688 = sizeof(x687);
uint8_t* x689 = &x687;
bool x690 = x686 == 1;
if (x690) {
x535(x689,x688);
} else {
}
}
static void x707 (int x697) {
uint8_t x698 = (uint8_t ) x697;
size_t x699 = sizeof(x698);
uint8_t* x700 = &x698;
bool x701 = x697 == 1;
if (x701) {
x390(x700,x699);
} else {
}
}
int main() {
x710();
puts("main started");
x714();
buttons_register_callback(Button2,x674);
buttons_register_callback(Button4,x685);
buttons_register_callback(Button1,x696);
buttons_register_callback(Button3,x707);

// modules inits;
x348();
x637();
while(1) {
  buttons_handle_events();
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
