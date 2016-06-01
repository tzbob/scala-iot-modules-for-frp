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

SM_DATA(mod1) bool x1;
SM_DATA(mod1) int x2;
SM_DATA(mod1) bool x30;
SM_DATA(mod1) int x31;
SM_DATA(mod1) bool x59;
SM_DATA(mod1) int x60;
SM_DATA(mod1) bool x88;
SM_DATA(mod1) int x89;
SM_DATA(mod1) bool x117;
SM_DATA(mod1) int x118;
SM_DATA(mod1) bool x129;
SM_DATA(mod1) int x130;
SM_DATA(mod1) bool x141;
SM_DATA(mod1) int x142;
SM_DATA(mod1) bool x167;
SM_DATA(mod1) int x168;
SM_DATA(mod1) bool x181;
SM_DATA(mod1) int x182;
SM_DATA(mod1) bool x193;
SM_DATA(mod1) int x194;
SM_DATA(mod1) bool x205;
SM_DATA(mod1) int x206;
SM_DATA(mod1) bool x218;
SM_DATA(mod1) int x219;
SM_DATA(mod1) bool x244;
SM_DATA(mod1) int x245;
SM_DATA(mod1) bool x262;
SM_DATA(mod1) int x263;
SM_DATA(mod1) int x281;
SM_FUNC(mod1) void x280 () {
lcd_clear();
int x277 = x263;
pmodcls_set_cursor_position(0,0);
lcd_printf_int("%d", x277);
}
SM_ENTRY(mod1) void x291() {
int x282 = x281;
bool x283 = x282 == 0;
if (x283) {
x168 = 0;
x263 = 0;
x280();
x281 = 1;
} else {
}
}
SM_FUNC(mod1) void x307 () {
x141 = false;
x181 = false;
x1 = false;
x30 = false;
x244 = false;
x117 = false;
x218 = false;
x59 = false;
x88 = false;
x205 = false;
x193 = false;
x129 = false;
x262 = false;
x167 = false;
}
SM_FUNC(mod1) void x29 (uint8_t* x3,int x4) {
int x7 = 0;
int x8 = 0;
int x6 = x4;
uint8_t* x5 = x3;
for (;;) {
int x9 = x8;
bool x10 = x9 < x6;
if (!x10) break;
int x12 = x8;
uint8_t x13 = x5[x12];
int x17 = x7;
int x14 = (int ) x13;
int x15 = x12 * 8;
int x16 = x14 << x15;
int x18 = x17 + x16;
x7 = x18;
int x20 = x12 + 1;
x8 = x20;
}
x1 = true;
int x25 = x7;
int x26 = (int ) x25;
x2 = x26;
}
SM_FUNC(mod1) void x128 () {
bool x119 = x1;
if (x119) {
x117 = true;
int x121 = x2;
x118 = 1;
} else {
x117 = false;
}
}
SM_FUNC(mod1) void x166 () {
bool x143 = x117;
bool x144 = x129;
bool x145 = x143 && x144;
if (x145) {
x141 = true;
int x147 = x118;
int x148 = x130;
int x149 = x147 + x148;
x142 = x149;
} else {
if (x143) {
x141 = true;
int x147 = x118;
x142 = x147;
} else {
if (x144) {
x141 = true;
int x148 = x130;
x142 = x148;
} else {
x141 = false;
}
}
}
}
SM_FUNC(mod1) void x180 () {
bool x169 = x141;
if (x169) {
x167 = true;
int x171 = x142;
int x172 = x168;
int x173 = x172 + x171;
x168 = x173;
} else {
x167 = false;
}
}
SM_INPUT(mod1,x320,x308,x309) { //top1
x291();
x307();
uint8_t* x310 = x308;
int x311 = x309;
x29(x310,x311);
x128();
x166();
x180();
}
SM_FUNC(mod1) void x58 (uint8_t* x32,int x33) {
int x36 = 0;
int x37 = 0;
int x35 = x33;
uint8_t* x34 = x32;
for (;;) {
int x38 = x37;
bool x39 = x38 < x35;
if (!x39) break;
int x41 = x37;
uint8_t x42 = x34[x41];
int x46 = x36;
int x43 = (int ) x42;
int x44 = x41 * 8;
int x45 = x43 << x44;
int x47 = x46 + x45;
x36 = x47;
int x49 = x41 + 1;
x37 = x49;
}
x30 = true;
int x54 = x36;
int x55 = (int ) x54;
x31 = x55;
}
SM_FUNC(mod1) void x192 () {
bool x183 = x30;
if (x183) {
x181 = true;
int x185 = x168;
x182 = x185;
} else {
x181 = false;
}
}
SM_FUNC(mod1) void x217 () {
bool x207 = x181;
if (x207) {
x205 = true;
int x209 = x182;
int x210 = 0 - x209;
x206 = x210;
} else {
x205 = false;
}
}
SM_FUNC(mod1) void x243 () {
bool x220 = x193;
bool x221 = x205;
bool x222 = x220 && x221;
if (x222) {
x218 = true;
int x224 = x194;
int x225 = x206;
int x226 = x224 + x225;
x219 = x226;
} else {
if (x220) {
x218 = true;
int x224 = x194;
x219 = x224;
} else {
if (x221) {
x218 = true;
int x225 = x206;
x219 = x225;
} else {
x218 = false;
}
}
}
}
SM_FUNC(mod1) void x261 () {
bool x246 = x218;
if (x246) {
int x247 = x219;
int x248 = abs(x247);
bool x249 = x248 < 10;
if (x249) {
x244 = true;
x245 = x247;
} else {
x244 = false;
}
} else {
x244 = false;
}
}
SM_FUNC(mod1) void x275 () {
bool x264 = x244;
if (x264) {
x262 = true;
int x266 = x245;
int x267 = x263;
int x268 = x267 + x266;
x263 = x268;
} else {
x262 = false;
}
}
SM_INPUT(mod1,x337,x322,x323) { //top9
x291();
x307();
uint8_t* x324 = x322;
int x325 = x323;
x58(x324,x325);
x192();
x217();
x243();
x261();
x275();
x280();
}
SM_FUNC(mod1) void x87 (uint8_t* x61,int x62) {
int x65 = 0;
int x66 = 0;
int x64 = x62;
uint8_t* x63 = x61;
for (;;) {
int x67 = x66;
bool x68 = x67 < x64;
if (!x68) break;
int x70 = x66;
uint8_t x71 = x63[x70];
int x75 = x65;
int x72 = (int ) x71;
int x73 = x70 * 8;
int x74 = x72 << x73;
int x76 = x75 + x74;
x65 = x76;
int x78 = x70 + 1;
x66 = x78;
}
x59 = true;
int x83 = x65;
int x84 = (int ) x83;
x60 = x84;
}
SM_FUNC(mod1) void x204 () {
bool x195 = x59;
if (x195) {
x193 = true;
int x197 = x168;
x194 = x197;
} else {
x193 = false;
}
}
SM_INPUT(mod1,x353,x339,x340) { //top7
x291();
x307();
uint8_t* x341 = x339;
int x342 = x340;
x87(x341,x342);
x204();
x243();
x261();
x275();
x280();
}
SM_FUNC(mod1) void x116 (uint8_t* x90,int x91) {
int x94 = 0;
int x95 = 0;
int x93 = x91;
uint8_t* x92 = x90;
for (;;) {
int x96 = x95;
bool x97 = x96 < x93;
if (!x97) break;
int x99 = x95;
uint8_t x100 = x92[x99];
int x104 = x94;
int x101 = (int ) x100;
int x102 = x99 * 8;
int x103 = x101 << x102;
int x105 = x104 + x103;
x94 = x105;
int x107 = x99 + 1;
x95 = x107;
}
x88 = true;
int x112 = x94;
int x113 = (int ) x112;
x89 = x113;
}
SM_FUNC(mod1) void x140 () {
bool x131 = x88;
if (x131) {
x129 = true;
int x133 = x89;
x130 = -1;
} else {
x129 = false;
}
}
SM_INPUT(mod1,x367,x355,x356) { //top3
x291();
x307();
uint8_t* x357 = x355;
int x358 = x356;
x116(x357,x358);
x140();
x166();
x180();
}
DECLARE_SM(mod1, 0x1234);
static void x416 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x419 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);

}
static void x380 (int x370) {
uint8_t x371 = (uint8_t ) x370;
size_t x372 = sizeof(x371);
uint8_t* x373 = &x371;
bool x374 = x370 == 1;
if (x374) {
x337(x373,x372);
} else {
}
}
static void x391 (int x381) {
uint8_t x382 = (uint8_t ) x381;
size_t x383 = sizeof(x382);
uint8_t* x384 = &x382;
bool x385 = x381 == 1;
if (x385) {
x367(x384,x383);
} else {
}
}
static void x402 (int x392) {
uint8_t x393 = (uint8_t ) x392;
size_t x394 = sizeof(x393);
uint8_t* x395 = &x393;
bool x396 = x392 == 1;
if (x396) {
x353(x395,x394);
} else {
}
}
static void x413 (int x403) {
uint8_t x404 = (uint8_t ) x403;
size_t x405 = sizeof(x404);
uint8_t* x406 = &x404;
bool x407 = x403 == 1;
if (x407) {
x320(x406,x405);
} else {
}
}
int main() {
x416();
puts("main started");
x419();
buttons_register_callback(Button2,x380);
buttons_register_callback(Button4,x391);
buttons_register_callback(Button1,x402);
buttons_register_callback(Button3,x413);

// modules inits;
x291();
while(1) {
  buttons_handle_events();
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
