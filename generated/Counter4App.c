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
SM_DATA(mod1) bool x275;
SM_DATA(mod1) int x276;
SM_DATA(mod1) int x288;
SM_FUNC(mod1) void x311 () {
int x289 = x288;
bool x290 = x289 == 0;
if (x290) {
x167 = 0;
x258 = 0;
x288 = 1;
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
x275 = false;
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
SM_INPUT(mod1,x325,x312,x313) { //top1
asm("dint");

x311();
uint8_t* x314 = x312;
int x315 = x313;
x29(x314,x315);
x128();
x166();
x176();
asm("eint");

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
SM_FUNC(mod1) void x287 () {
bool x277 = x268;
if (x277) {
x275 = true;
int x279 = x269;
x276 = x279;
lcd_printf_int("%d ", x279);
} else {
x275 = false;
}
}
SM_OUTPUT(mod1,x350);
SM_FUNC(mod1) void x356 () {
bool x342 = x275;
if (x342) {
int x351 = x276;
x350((const uint8_t*)&x351, sizeof(x351));
} else {
}
}
SM_INPUT(mod1,x360,x327,x328) { //top9
asm("dint");

x311();
uint8_t* x329 = x327;
int x330 = x328;
x58(x329,x330);
x188();
x213();
x239();
x257();
x267();
x274();
x287();
x356();
asm("eint");

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
SM_INPUT(mod1,x379,x362,x363) { //top7
asm("dint");

x311();
uint8_t* x364 = x362;
int x365 = x363;
x87(x364,x365);
x200();
x239();
x257();
x267();
x274();
x287();
x356();
asm("eint");

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
SM_INPUT(mod1,x394,x381,x382) { //top3
asm("dint");

x311();
uint8_t* x383 = x381;
int x384 = x382;
x116(x383,x384);
x140();
x166();
x176();
asm("eint");

}
DECLARE_SM(mod1, 0x1234);
static void x447 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x450 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);

}
static void x408 (int x397) {
bool x398 = (bool ) x397;
if (x398) {
int x399 = 2;
int x400 = x399;
uint8_t x401 = (uint8_t ) x400;
uint8_t* x402 = &x401;
x360(x402,1);
} else {
}
}
static void x420 (int x409) {
bool x410 = (bool ) x409;
if (x410) {
int x411 = 4;
int x412 = x411;
uint8_t x413 = (uint8_t ) x412;
uint8_t* x414 = &x413;
x394(x414,1);
} else {
}
}
static void x432 (int x421) {
bool x422 = (bool ) x421;
if (x422) {
int x423 = 1;
int x424 = x423;
uint8_t x425 = (uint8_t ) x424;
uint8_t* x426 = &x425;
x379(x426,1);
} else {
}
}
static void x444 (int x433) {
bool x434 = (bool ) x433;
if (x434) {
int x435 = 3;
int x436 = x435;
uint8_t x437 = (uint8_t ) x436;
uint8_t* x438 = &x437;
x325(x438,1);
} else {
}
}
int main() {
x447();
puts("main started");
x450();
buttons_register_callback(Button2,x408);
buttons_register_callback(Button4,x420);
buttons_register_callback(Button1,x432);
buttons_register_callback(Button3,x444);
while(1)
  buttons_handle_events();
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
