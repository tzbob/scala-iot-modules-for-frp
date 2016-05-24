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

SM_DATA(mod1) int x166;
SM_DATA(mod1) int x182;
SM_FUNC(mod1) void x181 () {
int x178 = x166;
pmodcls_set_cursor_position(0,0);
lcd_printf_int("Counter: %d", x178);
}
SM_FUNC(mod1) void x191 () {
int x183 = x182;
bool x184 = x183 == 0;
if (x184) {
x166 = 0;
x181();
x182 = 1;
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
SM_FUNC(mod1) void x78 (int x63,bool x64,int* x65,bool* x66) {
bool x68 = x64;
if (x68) {
bool* x70 = x66;
*x70 = true;
int* x69 = x65;
*x69 = 5;
} else {
bool* x70 = x66;
*x70 = false;
}
}
SM_FUNC(mod1) void x143 (int x112,bool x113,int x114,bool x115,int* x116,bool* x117) {
bool x119 = x113;
bool x121 = x115;
bool x124 = x119 && x121;
if (x124) {
bool* x123 = x117;
*x123 = true;
int* x122 = x116;
int x118 = x112;
int x120 = x114;
int x126 = x118 + x120;
*x122 = x126;
} else {
if (x119) {
bool* x123 = x117;
*x123 = true;
int* x122 = x116;
int x118 = x112;
*x122 = x118;
} else {
if (x121) {
bool* x123 = x117;
*x123 = true;
int* x122 = x116;
int x120 = x114;
*x122 = x120;
} else {
bool* x123 = x117;
*x123 = false;
}
}
}
}
SM_FUNC(mod1) void x165 (int x144,bool x145,int* x146,bool* x147) {
bool x149 = x145;
if (x149) {
int x148 = x144;
int x152 = abs(x148);
bool x153 = x152 < 10;
if (x153) {
bool* x151 = x147;
*x151 = true;
int* x150 = x146;
*x150 = x148;
} else {
bool* x151 = x147;
*x151 = false;
}
} else {
bool* x151 = x147;
*x151 = true;
}
}
SM_FUNC(mod1) void x177 (int x167,bool x168) {
bool x170 = x168;
if (x170) {
int x171 = x166;
int x169 = x167;
int x172 = x171 + x169;
x166 = x172;
} else {
}
}
SM_INPUT(mod1,x237,x192,x193) { //top1
x191();
bool x197 = false;
int x198;
int x199 = x198;
int* x200 = &x199;
bool x201 = x197;
bool* x202 = &x201;
uint8_t* x194 = x192;
int x195 = x193;
x31(x194,x195,x200,x202);
bool x205 = false;
int x206;
int x207 = x206;
int* x208 = &x207;
bool x209 = x205;
bool* x210 = &x209;
x78(x199,x201,x208,x210);
bool x213 = false;
int x214;
int x215;
bool x216 = false;
int x217 = x215;
bool x218 = x216;
int x219 = x214;
int* x220 = &x219;
bool x221 = x213;
bool* x222 = &x221;
x143(x207,x209,x217,x218,x220,x222);
bool x225 = false;
int x226;
int x227 = x226;
int* x228 = &x227;
bool x229 = x225;
bool* x230 = &x229;
x165(x219,x221,x228,x230);
x177(x227,x229);
x181();
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
SM_FUNC(mod1) void x94 (int x79,bool x80,int* x81,bool* x82) {
bool x84 = x80;
if (x84) {
bool* x86 = x82;
*x86 = true;
int* x85 = x81;
*x85 = 1;
} else {
bool* x86 = x82;
*x86 = false;
}
}
SM_FUNC(mod1) void x111 (int x95,bool x96,int* x97,bool* x98) {
bool x100 = x96;
if (x100) {
bool* x102 = x98;
*x102 = true;
int* x101 = x97;
int x99 = x95;
int x104 = 0 - x99;
*x101 = x104;
} else {
bool* x102 = x98;
*x102 = false;
}
}
SM_INPUT(mod1,x292,x239,x240) { //top3
x191();
bool x244 = false;
int x245;
int x246 = x245;
int* x247 = &x246;
bool x248 = x244;
bool* x249 = &x248;
uint8_t* x241 = x239;
int x242 = x240;
x62(x241,x242,x247,x249);
bool x252 = false;
int x253;
int x254 = x253;
int* x255 = &x254;
bool x256 = x252;
bool* x257 = &x256;
x94(x246,x248,x255,x257);
bool x260 = false;
int x261;
int x262 = x261;
int* x263 = &x262;
bool x264 = x260;
bool* x265 = &x264;
x111(x254,x256,x263,x265);
bool x268 = false;
int x269;
int x270;
bool x271 = false;
int x272 = x270;
bool x273 = x271;
int x274 = x269;
int* x275 = &x274;
bool x276 = x268;
bool* x277 = &x276;
x143(x272,x273,x262,x264,x275,x277);
bool x280 = false;
int x281;
int x282 = x281;
int* x283 = &x282;
bool x284 = x280;
bool* x285 = &x284;
x165(x274,x276,x283,x285);
x177(x282,x284);
x181();
}
DECLARE_SM(mod1, 0x1234);
void timer_handler() {
tsc_t time = tsc_read();
static int intervals_5s = 0;
int currTime = (float)time / 100000000;

if(currTime > intervals_5s){

intervals_5s = currTime;

int x314 = 5;
int x315 = x314;
uint8_t x316 = (uint8_t ) x315;
uint8_t* x317 = &x316;
size_t x318 = sizeof(x316);
x237(x317,x318);
}

};
static void x310 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x313 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);

}
static void x307 (int x295) {
bool x296 = x295 == 1;
if (x296) {
int x297 = 1;
int x298 = x297;
uint8_t x299 = (uint8_t ) x298;
uint8_t* x300 = &x299;
size_t x301 = sizeof(x299);
x292(x300,x301);
} else {
}
}
int main() {
x310();
puts("main started");
x313();
buttons_register_callback(Button1,x307);
while(1) {
  buttons_handle_events();
  timer_handler();
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
