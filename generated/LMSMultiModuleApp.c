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
SM_ENTRY(mod1) void x91() {
int x83 = x82;
bool x84 = x83 == 0;
if (x84) {
x31 = 1;
x57 = 10;
x82 = 1;
} else {
}
}
SM_FUNC(mod1) void x98 () {
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
SM_OUTPUT(mod1,x119);
SM_FUNC(mod1) void x125 () {
bool x111 = x70;
if (x111) {
int x120 = x71;
x119((const uint8_t*)&x120, sizeof(x120));
} else {
}
}
SM_INPUT(mod1,x128,x99,x100) { //top1
x91();
x98();
uint8_t* x101 = x99;
int x102 = x100;
x29(x101,x102);
x43();
x55();
x69();
x81();
x125();
}
SM_DATA(mod2) bool x130;
SM_DATA(mod2) int x131;
SM_DATA(mod2) bool x159;
SM_DATA(mod2) int x160;
SM_DATA(mod2) bool x173;
SM_DATA(mod2) int x174;
SM_DATA(mod2) bool x185;
SM_DATA(mod2) int x186;
SM_DATA(mod2) bool x199;
SM_DATA(mod2) int x200;
SM_DATA(mod2) int x211;
SM_ENTRY(mod2) void x220() {
int x212 = x211;
bool x213 = x212 == 0;
if (x213) {
x160 = 2;
x186 = 20;
x211 = 1;
} else {
}
}
SM_FUNC(mod2) void x227 () {
x199 = false;
x130 = false;
x173 = false;
x185 = false;
x159 = false;
}
SM_FUNC(mod2) void x158 (uint8_t* x132,int x133) {
int x136 = 0;
int x137 = 0;
int x135 = x133;
uint8_t* x134 = x132;
for (;;) {
int x138 = x137;
bool x139 = x138 < x135;
if (!x139) break;
int x141 = x137;
uint8_t x142 = x134[x141];
int x146 = x136;
int x143 = (int ) x142;
int x144 = x141 * 8;
int x145 = x143 << x144;
int x147 = x146 + x145;
x136 = x147;
int x149 = x141 + 1;
x137 = x149;
}
x130 = true;
int x154 = x136;
int x155 = (int ) x154;
x131 = x155;
}
SM_FUNC(mod2) void x172 () {
bool x161 = x130;
if (x161) {
x159 = true;
int x163 = x131;
int x164 = x160;
int x165 = x163 + x164;
x160 = x165;
} else {
x159 = false;
}
}
SM_FUNC(mod2) void x184 () {
bool x175 = x159;
if (x175) {
x173 = true;
int x177 = x160;
x174 = x177;
} else {
x173 = false;
}
}
SM_FUNC(mod2) void x198 () {
bool x187 = x173;
if (x187) {
x185 = true;
int x189 = x174;
int x190 = x186;
int x191 = x189 + x190;
x186 = x191;
} else {
x185 = false;
}
}
SM_FUNC(mod2) void x210 () {
bool x201 = x185;
if (x201) {
x199 = true;
int x203 = x186;
x200 = x203;
} else {
x199 = false;
}
}
SM_OUTPUT(mod2,x248);
SM_FUNC(mod2) void x254 () {
bool x240 = x199;
if (x240) {
int x249 = x200;
x248((const uint8_t*)&x249, sizeof(x249));
} else {
}
}
SM_INPUT(mod2,x257,x228,x229) { //top6
x220();
x227();
uint8_t* x230 = x228;
int x231 = x229;
x158(x230,x231);
x172();
x184();
x198();
x210();
x254();
}
DECLARE_SM(mod1, 0x1234);
DECLARE_SM(mod2, 0x1234);
static void x263 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x267 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);
  sancus_enable(&mod2);
  sm_register_existing(&mod2);

  REACTIVE_CONNECT(mod1, x119, mod2, x257);
}
int main() {
x263();
puts("main started");
x267();

// modules inits;
x91();
x220();
while(1) {
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
