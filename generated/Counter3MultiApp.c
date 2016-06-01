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
SM_ENTRY(mod1) void x174() {
int x167 = x166;
bool x168 = x167 == 0;
if (x168) {
x134 = 0;
x166 = 1;
} else {
}
}
SM_FUNC(mod1) void x175 () {
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
SM_OUTPUT(mod1,x234);
SM_FUNC(mod1) void x239 (int x223,bool x224) {
bool x226 = x224;
if (x226) {
int x225 = x223;
x234((const uint8_t*)&x225, sizeof(x225));
} else {
}
}
SM_INPUT(mod1,x243,x176,x177) { //top1
x174();
x175();
bool x182 = false;
int x183;
int x184 = x183;
int* x185 = &x184;
bool x186 = x182;
bool* x187 = &x186;
uint8_t* x178 = x176;
int x179 = x177;
x31(x178,x179,x185,x187);
bool x190 = false;
int x191;
int x192;
bool x193 = false;
int x194 = x192;
bool x195 = x193;
int x196 = x191;
int* x197 = &x196;
bool x198 = x190;
bool* x199 = &x198;
x111(x184,x186,x194,x195,x197,x199);
bool x202 = false;
int x203;
int x204 = x203;
int* x205 = &x204;
bool x206 = x202;
bool* x207 = &x206;
x133(x196,x198,x205,x207);
bool x210 = false;
bool x211 = x210;
bool* x212 = &x211;
x150(x204,x206,x212);
bool x215 = false;
int x216;
int x217 = x216;
int* x218 = &x217;
bool x219 = x215;
bool* x220 = &x219;
x165(x211,x218,x220);
x239(x217,x219);
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
SM_INPUT(mod1,x303,x245,x246) { //top2
x174();
x175();
bool x251 = false;
int x252;
int x253 = x252;
int* x254 = &x253;
bool x255 = x251;
bool* x256 = &x255;
uint8_t* x247 = x245;
int x248 = x246;
x62(x247,x248,x254,x256);
bool x259 = false;
int x260;
int x261 = x260;
int* x262 = &x261;
bool x263 = x259;
bool* x264 = &x263;
x79(x253,x255,x262,x264);
bool x267 = false;
int x268;
int x269;
bool x270 = false;
int x271 = x269;
bool x272 = x270;
int x273 = x268;
int* x274 = &x273;
bool x275 = x267;
bool* x276 = &x275;
x111(x271,x272,x261,x263,x274,x276);
bool x279 = false;
int x280;
int x281 = x280;
int* x282 = &x281;
bool x283 = x279;
bool* x284 = &x283;
x133(x273,x275,x282,x284);
bool x287 = false;
bool x288 = x287;
bool* x289 = &x288;
x150(x281,x283,x289);
bool x292 = false;
int x293;
int x294 = x293;
int* x295 = &x294;
bool x296 = x292;
bool* x297 = &x296;
x165(x288,x295,x297);
x239(x294,x296);
}
SM_DATA(mod2) int x336;
SM_DATA(mod2) int x354;
SM_FUNC(mod2) void x353 () {
lcd_clear();
int x350 = x336;
pmodcls_set_cursor_position(0,0);
lcd_printf_int("%d", x350);
}
SM_ENTRY(mod2) void x363() {
int x355 = x354;
bool x356 = x355 == 0;
if (x356) {
x336 = 0;
x353();
x354 = 1;
} else {
}
}
SM_FUNC(mod2) void x364 () {
}
SM_FUNC(mod2) void x335 (uint8_t* x305,int x306,int* x307,bool* x308) {
int x313 = 0;
int x314 = 0;
int x310 = x306;
uint8_t* x309 = x305;
for (;;) {
int x315 = x314;
bool x316 = x315 < x310;
if (!x316) break;
int x318 = x314;
uint8_t x319 = x309[x318];
int x323 = x313;
int x320 = (int ) x319;
int x321 = x318 * 8;
int x322 = x320 << x321;
int x324 = x323 + x322;
x313 = x324;
int x326 = x318 + 1;
x314 = x326;
}
bool* x312 = x308;
*x312 = true;
int x331 = x313;
int* x311 = x307;
int x332 = (int ) x331;
*x311 = x332;
}
SM_FUNC(mod2) void x348 (int x337,bool x338,bool* x339) {
bool x341 = x338;
if (x341) {
bool* x342 = x339;
*x342 = true;
int x340 = x337;
x336 = x340;
} else {
}
}
SM_INPUT(mod2,x386,x365,x366) { //top8
x363();
x364();
bool x371 = false;
int x372;
int x373 = x372;
int* x374 = &x373;
bool x375 = x371;
bool* x376 = &x375;
uint8_t* x367 = x365;
int x368 = x366;
x335(x367,x368,x374,x376);
bool x379 = false;
bool x380 = x379;
bool* x381 = &x380;
x348(x373,x375,x381);
x353();
}
DECLARE_SM(mod1, 0x1234);
DECLARE_SM(mod2, 0x1234);
static void x418 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x422 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);
  sancus_enable(&mod2);
  sm_register_existing(&mod2);

  REACTIVE_CONNECT(mod1, x234, mod2, x386);
}
static void x402 (int x390) {
bool x391 = x390 == 1;
if (x391) {
int x392 = 2;
int x393 = x392;
uint8_t x394 = (uint8_t ) x393;
uint8_t* x395 = &x394;
size_t x396 = sizeof(x394);
x303(x395,x396);
} else {
}
}
static void x415 (int x403) {
bool x404 = x403 == 1;
if (x404) {
int x405 = 1;
int x406 = x405;
uint8_t x407 = (uint8_t ) x406;
uint8_t* x408 = &x407;
size_t x409 = sizeof(x407);
x243(x408,x409);
} else {
}
}
int main() {
x418();
puts("main started");
x422();
buttons_register_callback(Button2,x402);
buttons_register_callback(Button1,x415);

// modules inits;
x174();
x363();
while(1) {
  buttons_handle_events();
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
