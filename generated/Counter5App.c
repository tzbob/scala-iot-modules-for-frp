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

SM_DATA(mod1) int x189;
SM_DATA(mod1) int x302;
SM_DATA(mod1) int x323;
SM_FUNC(mod1) void x332 () {
int x324 = x323;
bool x325 = x324 == 0;
if (x325) {
x189 = 0;
x302 = 0;
x323 = 1;
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
SM_FUNC(mod1) void x200 (int x190,bool x191) {
bool x193 = x191;
if (x193) {
int x194 = x189;
int x192 = x190;
int x195 = x194 + x192;
x189 = x195;
} else {
}
}
SM_INPUT(mod1,x369,x333,x334) { //top1
x332();
bool x338 = false;
int x339;
int x340 = x339;
int* x341 = &x340;
bool x342 = x338;
bool* x343 = &x342;
uint8_t* x335 = x333;
int x336 = x334;
x31(x335,x336,x341,x343);
bool x346 = false;
int x347;
int x348 = x347;
int* x349 = &x348;
bool x350 = x346;
bool* x351 = &x350;
x140(x340,x342,x349,x351);
bool x354 = false;
int x355;
int x356;
bool x357 = false;
int x358 = x356;
bool x359 = x357;
int x360 = x355;
int* x361 = &x360;
bool x362 = x354;
bool* x363 = &x362;
x188(x348,x350,x358,x359,x361,x363);
x200(x360,x362);
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
SM_FUNC(mod1) void x215 (bool x201,int* x202,bool* x203) {
bool x204 = x201;
if (x204) {
bool* x206 = x203;
*x206 = true;
int x208 = x189;
int* x205 = x202;
*x205 = x208;
} else {
bool* x206 = x203;
*x206 = false;
}
}
SM_FUNC(mod1) void x247 (int x231,bool x232,int* x233,bool* x234) {
bool x236 = x232;
if (x236) {
bool* x238 = x234;
*x238 = true;
int* x237 = x233;
int x235 = x231;
int x240 = 0 - x235;
*x237 = x240;
} else {
bool* x238 = x234;
*x238 = false;
}
}
SM_FUNC(mod1) void x279 (int x248,bool x249,int x250,bool x251,int* x252,bool* x253) {
bool x255 = x249;
bool x257 = x251;
bool x260 = x255 && x257;
if (x260) {
bool* x259 = x253;
*x259 = true;
int* x258 = x252;
int x254 = x248;
int x256 = x250;
int x262 = x254 + x256;
*x258 = x262;
} else {
if (x255) {
bool* x259 = x253;
*x259 = true;
int* x258 = x252;
int x254 = x248;
*x258 = x254;
} else {
if (x257) {
bool* x259 = x253;
*x259 = true;
int* x258 = x252;
int x256 = x250;
*x258 = x256;
} else {
bool* x259 = x253;
*x259 = false;
}
}
}
}
SM_FUNC(mod1) void x301 (int x280,bool x281,int* x282,bool* x283) {
bool x285 = x281;
if (x285) {
int x284 = x280;
int x288 = abs(x284);
bool x289 = x288 < 10;
if (x289) {
bool* x287 = x283;
*x287 = true;
int* x286 = x282;
*x286 = x284;
} else {
bool* x287 = x283;
*x287 = false;
}
} else {
bool* x287 = x283;
*x287 = true;
}
}
SM_FUNC(mod1) void x313 (int x303,bool x304) {
bool x306 = x304;
if (x306) {
int x307 = x302;
int x305 = x303;
int x308 = x307 + x305;
x302 = x308;
} else {
}
}
SM_FUNC(mod1) void x322 (int* x314,bool* x315) {
bool* x317 = x315;
*x317 = true;
int x319 = x302;
int* x316 = x314;
*x316 = x319;
}
SM_OUTPUT(mod1,x441);
SM_FUNC(mod1) void x446 (int x430,bool x431) {
bool x433 = x431;
if (x433) {
int x432 = x430;
x441((const uint8_t*)&x432, sizeof(x432));
} else {
}
}
SM_INPUT(mod1,x450,x371,x372) { //top9
x332();
bool x376 = false;
int x377;
int x378 = x377;
int* x379 = &x378;
bool x380 = x376;
bool* x381 = &x380;
uint8_t* x373 = x371;
int x374 = x372;
x62(x373,x374,x379,x381);
bool x384 = false;
int x385;
int x386 = x385;
int* x387 = &x386;
bool x388 = x384;
bool* x389 = &x388;
x215(x380,x387,x389);
bool x392 = false;
int x393;
int x394 = x393;
int* x395 = &x394;
bool x396 = x392;
bool* x397 = &x396;
x247(x386,x388,x395,x397);
bool x400 = false;
int x401;
int x402;
bool x403 = false;
int x404 = x402;
bool x405 = x403;
int x406 = x401;
int* x407 = &x406;
bool x408 = x400;
bool* x409 = &x408;
x279(x404,x405,x394,x396,x407,x409);
bool x412 = false;
int x413;
int x414 = x413;
int* x415 = &x414;
bool x416 = x412;
bool* x417 = &x416;
x301(x406,x408,x415,x417);
x313(x414,x416);
bool x422 = false;
int x423;
int x424 = x423;
int* x425 = &x424;
bool x426 = x422;
bool* x427 = &x426;
x322(x425,x427);
x446(x424,x426);
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
SM_FUNC(mod1) void x230 (bool x216,int* x217,bool* x218) {
bool x219 = x216;
if (x219) {
bool* x221 = x218;
*x221 = true;
int x223 = x189;
int* x220 = x217;
*x220 = x223;
} else {
bool* x221 = x218;
*x221 = false;
}
}
SM_INPUT(mod1,x506,x452,x453) { //top7
x332();
bool x457 = false;
int x458;
int x459 = x458;
int* x460 = &x459;
bool x461 = x457;
bool* x462 = &x461;
uint8_t* x454 = x452;
int x455 = x453;
x93(x454,x455,x460,x462);
bool x465 = false;
int x466;
int x467 = x466;
int* x468 = &x467;
bool x469 = x465;
bool* x470 = &x469;
x230(x461,x468,x470);
bool x473 = false;
int x474;
int x475;
bool x476 = false;
int x477 = x475;
bool x478 = x476;
int x479 = x474;
int* x480 = &x479;
bool x481 = x473;
bool* x482 = &x481;
x279(x467,x469,x477,x478,x480,x482);
bool x485 = false;
int x486;
int x487 = x486;
int* x488 = &x487;
bool x489 = x485;
bool* x490 = &x489;
x301(x479,x481,x488,x490);
x313(x487,x489);
bool x495 = false;
int x496;
int x497 = x496;
int* x498 = &x497;
bool x499 = x495;
bool* x500 = &x499;
x322(x498,x500);
x446(x497,x499);
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
SM_INPUT(mod1,x544,x508,x509) { //top3
x332();
bool x513 = false;
int x514;
int x515 = x514;
int* x516 = &x515;
bool x517 = x513;
bool* x518 = &x517;
uint8_t* x510 = x508;
int x511 = x509;
x124(x510,x511,x516,x518);
bool x521 = false;
int x522;
int x523 = x522;
int* x524 = &x523;
bool x525 = x521;
bool* x526 = &x525;
x156(x515,x517,x524,x526);
bool x529 = false;
int x530;
int x531;
bool x532 = false;
int x533 = x531;
bool x534 = x532;
int x535 = x530;
int* x536 = &x535;
bool x537 = x529;
bool* x538 = &x537;
x188(x533,x534,x523,x525,x536,x538);
x200(x535,x537);
}
SM_DATA(mod2) int x577;
SM_DATA(mod2) int x592;
SM_FUNC(mod2) void x591 () {
lcd_clear();
int x588 = x577;
pmodcls_set_cursor_position(0,0);
lcd_printf_int("Counter: %d", x588);
}
SM_FUNC(mod2) void x601 () {
int x593 = x592;
bool x594 = x593 == 0;
if (x594) {
x577 = 0;
x591();
x592 = 1;
} else {
}
}
SM_FUNC(mod2) void x576 (uint8_t* x546,int x547,int* x548,bool* x549) {
int x554 = 0;
int x555 = 0;
int x551 = x547;
uint8_t* x550 = x546;
for (;;) {
int x556 = x555;
bool x557 = x556 < x551;
if (!x557) break;
int x559 = x555;
uint8_t x560 = x550[x559];
int x564 = x554;
int x561 = (int ) x560;
int x562 = x559 * 8;
int x563 = x561 << x562;
int x565 = x564 + x563;
x554 = x565;
int x567 = x559 + 1;
x555 = x567;
}
bool* x553 = x549;
*x553 = true;
int x572 = x554;
int* x552 = x548;
int x573 = (int ) x572;
*x552 = x573;
}
SM_FUNC(mod2) void x586 (int x578,bool x579) {
bool x581 = x579;
if (x581) {
int x580 = x578;
x577 = x580;
} else {
}
}
SM_INPUT(mod2,x619,x602,x603) { //top16
x601();
bool x607 = false;
int x608;
int x609 = x608;
int* x610 = &x609;
bool x611 = x607;
bool* x612 = &x611;
uint8_t* x604 = x602;
int x605 = x603;
x576(x604,x605,x610,x612);
x586(x609,x611);
x591();
}
DECLARE_SM(mod1, 0x1234);
DECLARE_SM(mod2, 0x1234);
static void x677 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x681 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);
  sancus_enable(&mod2);
  sm_register_existing(&mod2);

  REACTIVE_CONNECT(mod1, x441, mod2, x619);
}
static void x635 (int x623) {
bool x624 = x623 == 1;
if (x624) {
int x625 = 2;
int x626 = x625;
uint8_t x627 = (uint8_t ) x626;
uint8_t* x628 = &x627;
size_t x629 = sizeof(x627);
x450(x628,x629);
} else {
}
}
static void x648 (int x636) {
bool x637 = x636 == 1;
if (x637) {
int x638 = 4;
int x639 = x638;
uint8_t x640 = (uint8_t ) x639;
uint8_t* x641 = &x640;
size_t x642 = sizeof(x640);
x544(x641,x642);
} else {
}
}
static void x661 (int x649) {
bool x650 = x649 == 1;
if (x650) {
int x651 = 1;
int x652 = x651;
uint8_t x653 = (uint8_t ) x652;
uint8_t* x654 = &x653;
size_t x655 = sizeof(x653);
x506(x654,x655);
} else {
}
}
static void x674 (int x662) {
bool x663 = x662 == 1;
if (x663) {
int x664 = 3;
int x665 = x664;
uint8_t x666 = (uint8_t ) x665;
uint8_t* x667 = &x666;
size_t x668 = sizeof(x666);
x369(x667,x668);
} else {
}
}
int main() {
x677();
puts("main started");
x681();
buttons_register_callback(Button2,x635);
buttons_register_callback(Button4,x648);
buttons_register_callback(Button1,x661);
buttons_register_callback(Button3,x674);
while(1) {
  buttons_handle_events();
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
