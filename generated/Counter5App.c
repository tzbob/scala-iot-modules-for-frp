/*****************************************
  Emitting C Generated Code                  
*******************************************/

#include <sancus/sm_support.h>

#include <sancus_support/uart.h>
#include <sancus_support/pmodcls.h>
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

static void __attribute__((noinline)) lcd_printf_int(const char* fmt, int i)
{
  lcd_printf(fmt, i);
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
SM_DATA(mod1) bool x268;
SM_DATA(mod1) int x269;
SM_DATA(mod1) int x275;
SM_FUNC(mod1) void x297 () {
int x276 = x275;
bool x277 = x276 == 0;
if (x277) {
x167 = 0;
x258 = 0;
x275 = 1;
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
x268 = false;
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
SM_INPUT(mod1,x309,x298,x299) { //top1
x297();
uint8_t* x300 = x298;
int x301 = x299;
x29(x300,x301);
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
SM_FUNC(mod1) void x274 () {
x268 = true;
int x271 = x258;
x269 = x271;
}
SM_OUTPUT(mod1,x332);
SM_FUNC(mod1) void x338 () {
bool x324 = x268;
if (x324) {
int x333 = x269;
x332((const uint8_t*)&x333, sizeof(x333));
} else {
}
}
SM_INPUT(mod1,x341,x311,x312) { //top9
x297();
uint8_t* x313 = x311;
int x314 = x312;
x58(x313,x314);
x188();
x213();
x239();
x257();
x267();
x274();
x338();
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
SM_INPUT(mod1,x357,x343,x344) { //top7
x297();
uint8_t* x345 = x343;
int x346 = x344;
x87(x345,x346);
x200();
x239();
x257();
x267();
x274();
x338();
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
SM_INPUT(mod1,x370,x359,x360) { //top3
x297();
uint8_t* x361 = x359;
int x362 = x360;
x116(x361,x362);
x140();
x166();
x176();
}
SM_DATA(mod2) bool x372;
SM_DATA(mod2) int x373;
SM_DATA(mod2) bool x401;
SM_DATA(mod2) int x402;
SM_DATA(mod2) int x414;
SM_FUNC(mod2) void x423 () {
int x415 = x414;
bool x416 = x415 == 0;
if (x416) {
x414 = 1;
} else {
}
x401 = false;
x372 = false;
}
SM_FUNC(mod2) void x400 (uint8_t* x374,int x375) {
int x378 = 0;
int x379 = 0;
int x377 = x375;
uint8_t* x376 = x374;
for (;;) {
int x380 = x379;
bool x381 = x380 < x377;
if (!x381) break;
int x383 = x379;
uint8_t x384 = x376[x383];
int x388 = x378;
int x385 = (int ) x384;
int x386 = x383 * 8;
int x387 = x385 << x386;
int x389 = x388 + x387;
x378 = x389;
int x391 = x383 + 1;
x379 = x391;
}
x372 = true;
int x396 = x378;
int x397 = (int ) x396;
x373 = x397;
}
SM_FUNC(mod2) void x413 () {
bool x403 = x372;
if (x403) {
x401 = true;
int x405 = x373;
x402 = x405;
lcd_printf_int("%d ", x405);
} else {
x401 = false;
}
}
SM_INPUT(mod2,x433,x424,x425) { //top16
x423();
uint8_t* x426 = x424;
int x427 = x425;
x400(x426,x427);
x413();
}
DECLARE_SM(mod1, 0x1234);
DECLARE_SM(mod2, 0x1234);
static void x487 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x491 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);
  sancus_enable(&mod2);
  sm_register_existing(&mod2);

  REACTIVE_CONNECT(mod1, x332, mod2, x433);
}
static void x448 (int x437) {
bool x438 = (bool ) x437;
if (x438) {
int x439 = 2;
int x440 = x439;
uint8_t x441 = (uint8_t ) x440;
uint8_t* x442 = &x441;
x341(x442,1);
} else {
}
}
static void x460 (int x449) {
bool x450 = (bool ) x449;
if (x450) {
int x451 = 4;
int x452 = x451;
uint8_t x453 = (uint8_t ) x452;
uint8_t* x454 = &x453;
x370(x454,1);
} else {
}
}
static void x472 (int x461) {
bool x462 = (bool ) x461;
if (x462) {
int x463 = 1;
int x464 = x463;
uint8_t x465 = (uint8_t ) x464;
uint8_t* x466 = &x465;
x357(x466,1);
} else {
}
}
static void x484 (int x473) {
bool x474 = (bool ) x473;
if (x474) {
int x475 = 3;
int x476 = x475;
uint8_t x477 = (uint8_t ) x476;
uint8_t* x478 = &x477;
x309(x478,1);
} else {
}
}
int main() {
x487();
puts("main started");
x491();
buttons_register_callback(Button2,x448);
buttons_register_callback(Button4,x460);
buttons_register_callback(Button1,x472);
buttons_register_callback(Button3,x484);
while(1)
  buttons_handle_events();
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
