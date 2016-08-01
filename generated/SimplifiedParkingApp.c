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
SM_OUTPUT(mod1,x67);
SM_FUNC(mod1) void x72 (int x56,bool x57) {
bool x59 = x57;
if (x59) {
int x58 = x56;
x67((const uint8_t*)&x58, sizeof(x58));
} else {
}
}
SM_INPUT(mod1,x76,x41,x42) { //top1
printf("%s\n","This is inputfun");
x39();
x40();
bool x48 = false;
int x49;
int x50 = x49;
int* x51 = &x50;
bool x52 = x48;
bool* x53 = &x52;
uint8_t* x43 = x41;
int x44 = x42;
x31(x43,x44,x51,x53);
x72(x50,x52);
}
SM_DATA(mod3) bool x140;
SM_DATA(mod3) int x168;
SM_DATA(mod3) int x218;
SM_ENTRY(mod3) void x227() {
int x219 = x218;
bool x220 = x219 == 0;
if (x220) {
x140 = false;
x168 = 0;
x218 = 1;
} else {
}
}
SM_FUNC(mod3) void x228 () {
}
SM_FUNC(mod3) void x108 (uint8_t* x78,int x79,bool* x80,bool* x81) {
int x86 = 0;
int x87 = 0;
int x83 = x79;
uint8_t* x82 = x78;
for (;;) {
int x88 = x87;
bool x89 = x88 < x83;
if (!x89) break;
int x91 = x87;
uint8_t x92 = x82[x91];
int x96 = x86;
int x93 = (int ) x92;
int x94 = x91 * 8;
int x95 = x93 << x94;
int x97 = x96 + x95;
x86 = x97;
int x99 = x91 + 1;
x87 = x99;
}
bool* x85 = x81;
*x85 = true;
int x104 = x86;
bool* x84 = x80;
bool x105 = (bool ) x104;
*x84 = x105;
}
SM_FUNC(mod3) void x152 (bool x141,bool x142,bool* x143) {
bool x145 = x142;
if (x145) {
bool* x146 = x143;
*x146 = true;
bool x144 = x141;
x140 = x144;
} else {
}
}
SM_INPUT(mod3,x250,x229,x230) { //top5
printf("%s\n","This is inputfun");
x227();
x228();
bool x236 = false;
bool x237;
bool x238 = x237;
bool* x239 = &x238;
bool x240 = x236;
bool* x241 = &x240;
uint8_t* x231 = x229;
int x232 = x230;
x108(x231,x232,x239,x241);
bool x244 = false;
bool x245 = x244;
bool* x246 = &x245;
x152(x238,x240,x246);
}
SM_FUNC(mod3) void x139 (uint8_t* x109,int x110,int* x111,bool* x112) {
int x117 = 0;
int x118 = 0;
int x114 = x110;
uint8_t* x113 = x109;
for (;;) {
int x119 = x118;
bool x120 = x119 < x114;
if (!x120) break;
int x122 = x118;
uint8_t x123 = x113[x122];
int x127 = x117;
int x124 = (int ) x123;
int x125 = x122 * 8;
int x126 = x124 << x125;
int x128 = x127 + x126;
x117 = x128;
int x130 = x122 + 1;
x118 = x130;
}
bool* x116 = x112;
*x116 = true;
int x135 = x117;
int* x115 = x111;
int x136 = (int ) x135;
*x115 = x136;
}
SM_FUNC(mod3) void x167 (bool x153,bool* x154,bool* x155) {
bool x156 = x153;
if (x156) {
bool* x158 = x155;
*x158 = true;
bool x160 = x140;
bool* x157 = x154;
*x157 = x160;
} else {
bool* x158 = x155;
*x158 = false;
}
}
SM_FUNC(mod3) void x185 (bool x169,bool x170,bool* x171) {
bool x173 = x170;
if (x173) {
bool* x174 = x171;
*x174 = true;
int x176 = x168;
bool x172 = x169;
int x178;
if (x172) {
int x177 = x176 + 1;
x178 = x177;
} else {
x178 = 0;
}
x168 = x178;
} else {
bool* x174 = x171;
*x174 = false;
}
}
SM_FUNC(mod3) void x200 (bool x186,int* x187,bool* x188) {
bool x189 = x186;
if (x189) {
bool* x191 = x188;
*x191 = true;
} else {
bool* x191 = x188;
*x191 = false;
}
int x197 = x168;
int* x190 = x187;
*x190 = x197;
}
SM_FUNC(mod3) void x217 (int x201,bool x202,bool* x203,bool* x204) {
bool x206 = x202;
if (x206) {
bool* x208 = x204;
*x208 = true;
bool* x207 = x203;
int x205 = x201;
bool x210 = x205 >= 3;
*x207 = x210;
} else {
bool* x208 = x204;
*x208 = false;
}
}
SM_OUTPUT(mod3,x307);
SM_FUNC(mod3) void x312 (bool x296,bool x297) {
bool x299 = x297;
if (x299) {
bool x298 = x296;
x307((const uint8_t*)&x298, sizeof(x298));
} else {
}
}
SM_INPUT(mod3,x316,x252,x253) { //top6
printf("%s\n","This is inputfun");
x227();
x228();
bool x259 = false;
int x260;
int x261 = x260;
int* x262 = &x261;
bool x263 = x259;
bool* x264 = &x263;
uint8_t* x254 = x252;
int x255 = x253;
x139(x254,x255,x262,x264);
bool x267 = false;
bool x268;
bool x269 = x268;
bool* x270 = &x269;
bool x271 = x267;
bool* x272 = &x271;
x167(x263,x270,x272);
bool x275 = false;
bool x276 = x275;
bool* x277 = &x276;
x185(x269,x271,x277);
bool x280 = false;
int x281;
int x282 = x281;
int* x283 = &x282;
bool x284 = x280;
bool* x285 = &x284;
x200(x276,x283,x285);
bool x288 = false;
bool x289;
bool x290 = x289;
bool* x291 = &x290;
bool x292 = x288;
bool* x293 = &x292;
x217(x282,x284,x291,x293);
x312(x290,x292);
}
SM_DATA(mod2) bool x349;
SM_DATA(mod2) int x381;
SM_ENTRY(mod2) void x389() {
int x382 = x381;
bool x383 = x382 == 0;
if (x383) {
x349 = false;
x381 = 1;
} else {
}
}
SM_FUNC(mod2) void x390 () {
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
SM_FUNC(mod2) void x365 (int x350,bool x351,bool* x352) {
bool x354 = x351;
if (x354) {
bool* x355 = x352;
*x355 = true;
bool x357 = x349;
bool x358 = !x357;
x349 = x358;
} else {
bool* x355 = x352;
*x355 = false;
}
}
SM_FUNC(mod2) void x380 (bool x366,bool* x367,bool* x368) {
bool x369 = x366;
if (x369) {
bool* x371 = x368;
*x371 = true;
} else {
bool* x371 = x368;
*x371 = false;
}
bool x377 = x349;
bool* x370 = x367;
*x370 = x377;
}
SM_OUTPUT(mod2,x430);
SM_FUNC(mod2) void x435 (bool x419,bool x420) {
bool x422 = x420;
if (x422) {
bool x421 = x419;
x430((const uint8_t*)&x421, sizeof(x421));
} else {
}
}
SM_INPUT(mod2,x439,x391,x392) { //top2
printf("%s\n","This is inputfun");
x389();
x390();
bool x398 = false;
int x399;
int x400 = x399;
int* x401 = &x400;
bool x402 = x398;
bool* x403 = &x402;
uint8_t* x393 = x391;
int x394 = x392;
x348(x393,x394,x401,x403);
bool x406 = false;
bool x407 = x406;
bool* x408 = &x407;
x365(x400,x402,x408);
bool x411 = false;
bool x412;
bool x413 = x412;
bool* x414 = &x413;
bool x415 = x411;
bool* x416 = &x415;
x380(x407,x414,x416);
x435(x413,x415);
}
DECLARE_SM(mod1, 0x1234);
DECLARE_SM(mod3, 0x1234);
DECLARE_SM(mod2, 0x1234);
void timer_handler() {
tsc_t time = tsc_read();
static int intervals_5s = 0;
int currTime = (float)time / 100000000;

if(currTime > intervals_5s){

intervals_5s = currTime;

int x463 = 5;
int x464 = x463;
uint8_t x465 = (uint8_t ) x464;
uint8_t* x466 = &x465;
size_t x467 = sizeof(x465);
x76(x466,x467);
}

};
static void x457 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x462 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);
  sancus_enable(&mod3);
  sm_register_existing(&mod3);
  sancus_enable(&mod2);
  sm_register_existing(&mod2);

  REACTIVE_CONNECT(mod2, x430, mod3, x250);
  REACTIVE_CONNECT(mod1, x67, mod3, x316);
}
static void x454 (int x444) {
uint8_t x445 = (uint8_t ) x444;
size_t x446 = sizeof(x445);
uint8_t* x447 = &x445;
bool x448 = x444 == 1;
if (x448) {
x439(x447,x446);
} else {
}
}
int main() {
x457();
puts("main started");
x462();
buttons_register_callback(Button1,x454);

// modules inits;
x39();
x227();
x389();
while(1) {
  buttons_handle_events();
  timer_handler();
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
