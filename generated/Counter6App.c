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

SM_DATA(mod1) int x166;
SM_DATA(mod1) int x188;
SM_FUNC(mod1) void x187 () {
lcd_clear();
int x184 = x166;
pmodcls_set_cursor_position(0,0);
lcd_printf_int("Counter: %d", x184);
}
SM_ENTRY(mod1) void x197() {
int x189 = x188;
bool x190 = x189 == 0;
if (x190) {
x166 = 0;
x187();
x188 = 1;
} else {
}
}
SM_FUNC(mod1) void x198 () {
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
SM_FUNC(mod1) void x182 (int x167,bool x168,bool* x169) {
bool x171 = x168;
if (x171) {
bool* x172 = x169;
*x172 = true;
int x174 = x166;
int x170 = x167;
int x175 = x174 + x170;
x166 = x175;
} else {
bool* x172 = x169;
*x172 = false;
}
}
SM_INPUT(mod1,x248,x199,x200) { //top1
x197();
x198();
bool x205 = false;
int x206;
int x207 = x206;
int* x208 = &x207;
bool x209 = x205;
bool* x210 = &x209;
uint8_t* x201 = x199;
int x202 = x200;
x31(x201,x202,x208,x210);
bool x213 = false;
int x214;
int x215 = x214;
int* x216 = &x215;
bool x217 = x213;
bool* x218 = &x217;
x78(x207,x209,x216,x218);
bool x221 = false;
int x222;
int x223;
bool x224 = false;
int x225 = x223;
bool x226 = x224;
int x227 = x222;
int* x228 = &x227;
bool x229 = x221;
bool* x230 = &x229;
x143(x215,x217,x225,x226,x228,x230);
bool x233 = false;
int x234;
int x235 = x234;
int* x236 = &x235;
bool x237 = x233;
bool* x238 = &x237;
x165(x227,x229,x236,x238);
bool x241 = false;
bool x242 = x241;
bool* x243 = &x242;
x182(x235,x237,x243);
x187();
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
SM_INPUT(mod1,x307,x250,x251) { //top3
x197();
x198();
bool x256 = false;
int x257;
int x258 = x257;
int* x259 = &x258;
bool x260 = x256;
bool* x261 = &x260;
uint8_t* x252 = x250;
int x253 = x251;
x62(x252,x253,x259,x261);
bool x264 = false;
int x265;
int x266 = x265;
int* x267 = &x266;
bool x268 = x264;
bool* x269 = &x268;
x94(x258,x260,x267,x269);
bool x272 = false;
int x273;
int x274 = x273;
int* x275 = &x274;
bool x276 = x272;
bool* x277 = &x276;
x111(x266,x268,x275,x277);
bool x280 = false;
int x281;
int x282;
bool x283 = false;
int x284 = x282;
bool x285 = x283;
int x286 = x281;
int* x287 = &x286;
bool x288 = x280;
bool* x289 = &x288;
x143(x284,x285,x274,x276,x287,x289);
bool x292 = false;
int x293;
int x294 = x293;
int* x295 = &x294;
bool x296 = x292;
bool* x297 = &x296;
x165(x286,x288,x295,x297);
bool x300 = false;
bool x301 = x300;
bool* x302 = &x301;
x182(x294,x296,x302);
x187();
}
DECLARE_SM(mod1, 0x1234);
void timer_handler() {
tsc_t time = tsc_read();
static int intervals_5s = 0;
int currTime = (float)time / 100000000;

if(currTime > intervals_5s){

intervals_5s = currTime;

int x327 = 5;
int x328 = x327;
uint8_t x329 = (uint8_t ) x328;
uint8_t* x330 = &x329;
size_t x331 = sizeof(x329);
x248(x330,x331);
}

};
static void x323 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x326 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);

}
static void x320 (int x310) {
uint8_t x311 = (uint8_t ) x310;
size_t x312 = sizeof(x311);
uint8_t* x313 = &x311;
bool x314 = x310 == 1;
if (x314) {
x307(x313,x312);
} else {
}
}
int main() {
x323();
puts("main started");
x326();
buttons_register_callback(Button1,x320);

// modules inits;
x197();
while(1) {
  buttons_handle_events();
  timer_handler();
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
