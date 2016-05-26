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

SM_DATA(mod1) int x134;
SM_DATA(mod1) int x166;
SM_FUNC(mod1) void x174 () {
int x167 = x166;
bool x168 = x167 == 0;
if (x168) {
x134 = 0;
x166 = 1;
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
SM_FUNC(mod1) void x111 (int x80,bool x81,int x82,bool x83,int* x84,bool* x85) {
bool x87 = x81;
bool x89 = x83;
bool x92 = x87 && x89;
if (x92) {
bool* x91 = x85;
*x91 = true;
int* x90 = x84;
int x86 = x80;
int x88 = x82;
int x94 = x86 + x88;
*x90 = x94;
} else {
if (x87) {
bool* x91 = x85;
*x91 = true;
int* x90 = x84;
int x86 = x80;
*x90 = x86;
} else {
if (x89) {
bool* x91 = x85;
*x91 = true;
int* x90 = x84;
int x88 = x82;
*x90 = x88;
} else {
bool* x91 = x85;
*x91 = false;
}
}
}
}
SM_FUNC(mod1) void x133 (int x112,bool x113,int* x114,bool* x115) {
bool x117 = x113;
if (x117) {
int x116 = x112;
int x120 = abs(x116);
bool x121 = x120 < 10;
if (x121) {
bool* x119 = x115;
*x119 = true;
int* x118 = x114;
*x118 = x116;
} else {
bool* x119 = x115;
*x119 = false;
}
} else {
bool* x119 = x115;
*x119 = true;
}
}
SM_FUNC(mod1) void x150 (int x135,bool x136,bool* x137) {
bool x139 = x136;
if (x139) {
bool* x140 = x137;
*x140 = true;
int x142 = x134;
int x138 = x135;
int x143 = x142 + x138;
x134 = x143;
} else {
bool* x140 = x137;
*x140 = false;
}
}
SM_FUNC(mod1) void x165 (bool x151,int* x152,bool* x153) {
bool x154 = x151;
if (x154) {
bool* x156 = x153;
*x156 = true;
} else {
bool* x156 = x153;
*x156 = false;
}
int x162 = x134;
int* x155 = x152;
*x155 = x162;
}
SM_OUTPUT(mod1,x232);
SM_FUNC(mod1) void x237 (int x221,bool x222) {
bool x224 = x222;
if (x224) {
int x223 = x221;
x232((const uint8_t*)&x223, sizeof(x223));
} else {
}
}
SM_INPUT(mod1,x241,x175,x176) { //top1
x174();
bool x180 = false;
int x181;
int x182 = x181;
int* x183 = &x182;
bool x184 = x180;
bool* x185 = &x184;
uint8_t* x177 = x175;
int x178 = x176;
x31(x177,x178,x183,x185);
bool x188 = false;
int x189;
int x190;
bool x191 = false;
int x192 = x190;
bool x193 = x191;
int x194 = x189;
int* x195 = &x194;
bool x196 = x188;
bool* x197 = &x196;
x111(x182,x184,x192,x193,x195,x197);
bool x200 = false;
int x201;
int x202 = x201;
int* x203 = &x202;
bool x204 = x200;
bool* x205 = &x204;
x133(x194,x196,x203,x205);
bool x208 = false;
bool x209 = x208;
bool* x210 = &x209;
x150(x202,x204,x210);
bool x213 = false;
int x214;
int x215 = x214;
int* x216 = &x215;
bool x217 = x213;
bool* x218 = &x217;
x165(x209,x216,x218);
x237(x215,x217);
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
SM_FUNC(mod1) void x79 (int x63,bool x64,int* x65,bool* x66) {
bool x68 = x64;
if (x68) {
bool* x70 = x66;
*x70 = true;
int* x69 = x65;
int x67 = x63;
int x72 = 0 - x67;
*x69 = x72;
} else {
bool* x70 = x66;
*x70 = false;
}
}
SM_INPUT(mod1,x300,x243,x244) { //top2
x174();
bool x248 = false;
int x249;
int x250 = x249;
int* x251 = &x250;
bool x252 = x248;
bool* x253 = &x252;
uint8_t* x245 = x243;
int x246 = x244;
x62(x245,x246,x251,x253);
bool x256 = false;
int x257;
int x258 = x257;
int* x259 = &x258;
bool x260 = x256;
bool* x261 = &x260;
x79(x250,x252,x259,x261);
bool x264 = false;
int x265;
int x266;
bool x267 = false;
int x268 = x266;
bool x269 = x267;
int x270 = x265;
int* x271 = &x270;
bool x272 = x264;
bool* x273 = &x272;
x111(x268,x269,x258,x260,x271,x273);
bool x276 = false;
int x277;
int x278 = x277;
int* x279 = &x278;
bool x280 = x276;
bool* x281 = &x280;
x133(x270,x272,x279,x281);
bool x284 = false;
bool x285 = x284;
bool* x286 = &x285;
x150(x278,x280,x286);
bool x289 = false;
int x290;
int x291 = x290;
int* x292 = &x291;
bool x293 = x289;
bool* x294 = &x293;
x165(x285,x292,x294);
x237(x291,x293);
}
SM_DATA(mod2) int x333;
SM_DATA(mod2) int x351;
SM_FUNC(mod2) void x350 () {
lcd_clear();
int x347 = x333;
pmodcls_set_cursor_position(0,0);
lcd_printf_int("%d", x347);
}
SM_FUNC(mod2) void x360 () {
int x352 = x351;
bool x353 = x352 == 0;
if (x353) {
x333 = 0;
x350();
x351 = 1;
} else {
}
}
SM_FUNC(mod2) void x332 (uint8_t* x302,int x303,int* x304,bool* x305) {
int x310 = 0;
int x311 = 0;
int x307 = x303;
uint8_t* x306 = x302;
for (;;) {
int x312 = x311;
bool x313 = x312 < x307;
if (!x313) break;
int x315 = x311;
uint8_t x316 = x306[x315];
int x320 = x310;
int x317 = (int ) x316;
int x318 = x315 * 8;
int x319 = x317 << x318;
int x321 = x320 + x319;
x310 = x321;
int x323 = x315 + 1;
x311 = x323;
}
bool* x309 = x305;
*x309 = true;
int x328 = x310;
int* x308 = x304;
int x329 = (int ) x328;
*x308 = x329;
}
SM_FUNC(mod2) void x345 (int x334,bool x335,bool* x336) {
bool x338 = x335;
if (x338) {
bool* x339 = x336;
*x339 = true;
int x337 = x334;
x333 = x337;
} else {
}
}
SM_INPUT(mod2,x381,x361,x362) { //top8
x360();
bool x366 = false;
int x367;
int x368 = x367;
int* x369 = &x368;
bool x370 = x366;
bool* x371 = &x370;
uint8_t* x363 = x361;
int x364 = x362;
x332(x363,x364,x369,x371);
bool x374 = false;
bool x375 = x374;
bool* x376 = &x375;
x345(x368,x370,x376);
x350();
}
DECLARE_SM(mod1, 0x1234);
DECLARE_SM(mod2, 0x1234);
static void x413 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x417 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);
  sancus_enable(&mod2);
  sm_register_existing(&mod2);

  REACTIVE_CONNECT(mod1, x232, mod2, x381);
}
static void x397 (int x385) {
bool x386 = x385 == 1;
if (x386) {
int x387 = 2;
int x388 = x387;
uint8_t x389 = (uint8_t ) x388;
uint8_t* x390 = &x389;
size_t x391 = sizeof(x389);
x300(x390,x391);
} else {
}
}
static void x410 (int x398) {
bool x399 = x398 == 1;
if (x399) {
int x400 = 1;
int x401 = x400;
uint8_t x402 = (uint8_t ) x401;
uint8_t* x403 = &x402;
size_t x404 = sizeof(x402);
x241(x403,x404);
} else {
}
}
int main() {
x413();
puts("main started");
x417();
buttons_register_callback(Button2,x397);
buttons_register_callback(Button1,x410);
while(1) {
  buttons_handle_events();
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
