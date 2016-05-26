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
SM_DATA(mod1) int x167;
SM_DATA(mod1) bool x177;
SM_DATA(mod1) int x178;
SM_DATA(mod1) bool x189;
SM_DATA(mod1) int x190;
SM_DATA(mod1) bool x201;
SM_DATA(mod1) int x202;
SM_DATA(mod1) bool x214;
SM_DATA(mod1) int x215;
SM_DATA(mod1) bool x240;
SM_DATA(mod1) int x241;
SM_DATA(mod1) int x258;
SM_DATA(mod1) int x273;
SM_FUNC(mod1) void x272 () {
lcd_clear();
int x269 = x258;
pmodcls_set_cursor_position(0,0);
lcd_printf_int("%d", x269);
}
SM_FUNC(mod1) void x295 () {
int x274 = x273;
bool x275 = x274 == 0;
if (x275) {
x167 = 0;
x258 = 0;
x272();
x273 = 1;
} else {
}
x141 = false;
x177 = false;
x1 = false;
x30 = false;
x240 = false;
x117 = false;
x214 = false;
x59 = false;
x88 = false;
x201 = false;
x189 = false;
x129 = false;
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
SM_FUNC(mod1) void x176 () {
bool x168 = x141;
if (x168) {
int x169 = x142;
int x170 = x167;
int x171 = x170 + x169;
x167 = x171;
} else {
}
}
SM_INPUT(mod1,x307,x296,x297) { //top1
x295();
uint8_t* x298 = x296;
int x299 = x297;
x29(x298,x299);
x128();
x166();
x176();
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
SM_FUNC(mod1) void x188 () {
bool x179 = x30;
if (x179) {
x177 = true;
int x181 = x167;
x178 = x181;
} else {
x177 = false;
}
}
SM_FUNC(mod1) void x213 () {
bool x203 = x177;
if (x203) {
x201 = true;
int x205 = x178;
int x206 = 0 - x205;
x202 = x206;
} else {
x201 = false;
}
}
SM_FUNC(mod1) void x239 () {
bool x216 = x189;
bool x217 = x201;
bool x218 = x216 && x217;
if (x218) {
x214 = true;
int x220 = x190;
int x221 = x202;
int x222 = x220 + x221;
x215 = x222;
} else {
if (x216) {
x214 = true;
int x220 = x190;
x215 = x220;
} else {
if (x217) {
x214 = true;
int x221 = x202;
x215 = x221;
} else {
x214 = false;
}
}
}
}
SM_FUNC(mod1) void x257 () {
bool x242 = x214;
if (x242) {
int x243 = x215;
int x244 = abs(x243);
bool x245 = x244 < 10;
if (x245) {
x240 = true;
x241 = x243;
} else {
x240 = false;
}
} else {
x240 = false;
}
}
SM_FUNC(mod1) void x267 () {
bool x259 = x240;
if (x259) {
int x260 = x241;
int x261 = x258;
int x262 = x261 + x260;
x258 = x262;
} else {
}
}
SM_INPUT(mod1,x323,x309,x310) { //top9
x295();
uint8_t* x311 = x309;
int x312 = x310;
x58(x311,x312);
x188();
x213();
x239();
x257();
x267();
x272();
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
SM_FUNC(mod1) void x200 () {
bool x191 = x59;
if (x191) {
x189 = true;
int x193 = x167;
x190 = x193;
} else {
x189 = false;
}
}
SM_INPUT(mod1,x338,x325,x326) { //top7
x295();
uint8_t* x327 = x325;
int x328 = x326;
x87(x327,x328);
x200();
x239();
x257();
x267();
x272();
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
SM_INPUT(mod1,x351,x340,x341) { //top3
x295();
uint8_t* x342 = x340;
int x343 = x341;
x116(x342,x343);
x140();
x166();
x176();
}
DECLARE_SM(mod1, 0x1234);
static void x408 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x411 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);

}
static void x366 (int x354) {
bool x355 = x354 == 1;
if (x355) {
int x356 = 2;
int x357 = x356;
uint8_t x358 = (uint8_t ) x357;
uint8_t* x359 = &x358;
size_t x360 = sizeof(x358);
x323(x359,x360);
} else {
}
}
static void x379 (int x367) {
bool x368 = x367 == 1;
if (x368) {
int x369 = 4;
int x370 = x369;
uint8_t x371 = (uint8_t ) x370;
uint8_t* x372 = &x371;
size_t x373 = sizeof(x371);
x351(x372,x373);
} else {
}
}
static void x392 (int x380) {
bool x381 = x380 == 1;
if (x381) {
int x382 = 1;
int x383 = x382;
uint8_t x384 = (uint8_t ) x383;
uint8_t* x385 = &x384;
size_t x386 = sizeof(x384);
x338(x385,x386);
} else {
}
}
static void x405 (int x393) {
bool x394 = x393 == 1;
if (x394) {
int x395 = 3;
int x396 = x395;
uint8_t x397 = (uint8_t ) x396;
uint8_t* x398 = &x397;
size_t x399 = sizeof(x397);
x307(x398,x399);
} else {
}
}
int main() {
x408();
puts("main started");
x411();
buttons_register_callback(Button2,x366);
buttons_register_callback(Button4,x379);
buttons_register_callback(Button1,x392);
buttons_register_callback(Button3,x405);
while(1) {
  buttons_handle_events();
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
