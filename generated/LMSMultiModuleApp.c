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
SM_DATA(mod1) bool x44;
SM_DATA(mod1) int x45;
SM_DATA(mod1) bool x56;
SM_DATA(mod1) int x57;
SM_DATA(mod1) bool x70;
SM_DATA(mod1) int x71;
SM_DATA(mod1) int x82;
SM_FUNC(mod1) void x96 () {
int x83 = x82;
bool x84 = x83 == 0;
if (x84) {
x31 = 1;
x57 = 10;
x82 = 1;
} else {
}
x70 = false;
x1 = false;
x44 = false;
x30 = false;
x56 = false;
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
SM_FUNC(mod1) void x43 () {
bool x32 = x1;
if (x32) {
x30 = true;
int x34 = x2;
int x35 = x31;
int x36 = x34 + x35;
x31 = x36;
} else {
x30 = false;
}
}
SM_FUNC(mod1) void x55 () {
bool x46 = x30;
if (x46) {
x44 = true;
int x48 = x31;
x45 = x48;
} else {
x44 = false;
}
}
SM_FUNC(mod1) void x69 () {
bool x58 = x44;
if (x58) {
x56 = true;
int x60 = x45;
int x61 = x57;
int x62 = x60 + x61;
x57 = x62;
} else {
x56 = false;
}
}
SM_FUNC(mod1) void x81 () {
bool x72 = x56;
if (x72) {
x70 = true;
int x74 = x57;
x71 = x74;
} else {
x70 = false;
}
}
SM_OUTPUT(mod1,x116);
SM_FUNC(mod1) void x122 () {
bool x108 = x70;
if (x108) {
int x117 = x71;
x116((const uint8_t*)&x117, sizeof(x117));
} else {
}
}
SM_INPUT(mod1,x125,x97,x98) { //top1
x96();
uint8_t* x99 = x97;
int x100 = x98;
x29(x99,x100);
x43();
x55();
x69();
x81();
x122();
}
SM_DATA(mod2) bool x127;
SM_DATA(mod2) int x128;
SM_DATA(mod2) bool x156;
SM_DATA(mod2) int x157;
SM_DATA(mod2) bool x170;
SM_DATA(mod2) int x171;
SM_DATA(mod2) bool x182;
SM_DATA(mod2) int x183;
SM_DATA(mod2) bool x196;
SM_DATA(mod2) int x197;
SM_DATA(mod2) int x208;
SM_FUNC(mod2) void x222 () {
int x209 = x208;
bool x210 = x209 == 0;
if (x210) {
x157 = 2;
x183 = 20;
x208 = 1;
} else {
}
x196 = false;
x127 = false;
x170 = false;
x182 = false;
x156 = false;
}
SM_FUNC(mod2) void x155 (uint8_t* x129,int x130) {
int x133 = 0;
int x134 = 0;
int x132 = x130;
uint8_t* x131 = x129;
for (;;) {
int x135 = x134;
bool x136 = x135 < x132;
if (!x136) break;
int x138 = x134;
uint8_t x139 = x131[x138];
int x143 = x133;
int x140 = (int ) x139;
int x141 = x138 * 8;
int x142 = x140 << x141;
int x144 = x143 + x142;
x133 = x144;
int x146 = x138 + 1;
x134 = x146;
}
x127 = true;
int x151 = x133;
int x152 = (int ) x151;
x128 = x152;
}
SM_FUNC(mod2) void x169 () {
bool x158 = x127;
if (x158) {
x156 = true;
int x160 = x128;
int x161 = x157;
int x162 = x160 + x161;
x157 = x162;
} else {
x156 = false;
}
}
SM_FUNC(mod2) void x181 () {
bool x172 = x156;
if (x172) {
x170 = true;
int x174 = x157;
x171 = x174;
} else {
x170 = false;
}
}
SM_FUNC(mod2) void x195 () {
bool x184 = x170;
if (x184) {
x182 = true;
int x186 = x171;
int x187 = x183;
int x188 = x186 + x187;
x183 = x188;
} else {
x182 = false;
}
}
SM_FUNC(mod2) void x207 () {
bool x198 = x182;
if (x198) {
x196 = true;
int x200 = x183;
x197 = x200;
} else {
x196 = false;
}
}
SM_OUTPUT(mod2,x242);
SM_FUNC(mod2) void x248 () {
bool x234 = x196;
if (x234) {
int x243 = x197;
x242((const uint8_t*)&x243, sizeof(x243));
} else {
}
}
SM_INPUT(mod2,x251,x223,x224) { //top6
x222();
uint8_t* x225 = x223;
int x226 = x224;
x155(x225,x226);
x169();
x181();
x195();
x207();
x248();
}
DECLARE_SM(mod1, 0x1234);
DECLARE_SM(mod2, 0x1234);
static void x257 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x261 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);
  sancus_enable(&mod2);
  sm_register_existing(&mod2);

  REACTIVE_CONNECT(mod1, x116, mod2, x251);
}
int main() {
x257();
puts("main started");
x261();
while(1) {
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
