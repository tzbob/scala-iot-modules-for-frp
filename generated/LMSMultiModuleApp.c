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
SM_DATA(mod1) int x30;
SM_DATA(mod1) bool x31;
SM_DATA(mod1) bool x44;
SM_DATA(mod1) int x45;
SM_DATA(mod1) int x56;
SM_DATA(mod1) bool x57;
SM_DATA(mod1) bool x70;
SM_DATA(mod1) int x71;
SM_DATA(mod1) int x82;
SM_FUNC(mod1) void x94 () {
int x83 = x82;
bool x84 = x83 == 0;
if (x84) {
x30 = 1;
x56 = 10;
x82 = 1;
} else {
}
x70 = false;
x1 = false;
x44 = false;
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
x31 = true;
int x34 = x2;
int x35 = x30;
int x36 = x34 + x35;
x30 = x36;
} else {
x31 = false;
}
}
SM_FUNC(mod1) void x55 () {
bool x46 = x31;
if (x46) {
x44 = true;
int x48 = x30;
x45 = x48;
} else {
x44 = false;
}
}
SM_FUNC(mod1) void x69 () {
bool x58 = x44;
if (x58) {
x57 = true;
int x60 = x45;
int x61 = x56;
int x62 = x60 + x61;
x56 = x62;
} else {
x57 = false;
}
}
SM_FUNC(mod1) void x81 () {
bool x72 = x57;
if (x72) {
x70 = true;
int x74 = x56;
x71 = x74;
} else {
x70 = false;
}
}
SM_OUTPUT(mod1,x114);
SM_FUNC(mod1) void x120 () {
bool x106 = x70;
if (x106) {
int x115 = x71;
x114((const uint8_t*)&x115, sizeof(x115));
} else {
}
}
SM_INPUT(mod1,x123,x95,x96) { //top1
x94();
uint8_t* x97 = x95;
int x98 = x96;
x29(x97,x98);
x43();
x55();
x69();
x81();
x120();
}
SM_DATA(mod2) bool x125;
SM_DATA(mod2) int x126;
SM_DATA(mod2) int x154;
SM_DATA(mod2) bool x155;
SM_DATA(mod2) bool x168;
SM_DATA(mod2) int x169;
SM_DATA(mod2) int x180;
SM_DATA(mod2) bool x181;
SM_DATA(mod2) bool x194;
SM_DATA(mod2) int x195;
SM_DATA(mod2) int x206;
SM_FUNC(mod2) void x218 () {
int x207 = x206;
bool x208 = x207 == 0;
if (x208) {
x154 = 2;
x180 = 20;
x206 = 1;
} else {
}
x194 = false;
x125 = false;
x168 = false;
}
SM_FUNC(mod2) void x153 (uint8_t* x127,int x128) {
int x131 = 0;
int x132 = 0;
int x130 = x128;
uint8_t* x129 = x127;
for (;;) {
int x133 = x132;
bool x134 = x133 < x130;
if (!x134) break;
int x136 = x132;
uint8_t x137 = x129[x136];
int x141 = x131;
int x138 = (int ) x137;
int x139 = x136 * 8;
int x140 = x138 << x139;
int x142 = x141 + x140;
x131 = x142;
int x144 = x136 + 1;
x132 = x144;
}
x125 = true;
int x149 = x131;
int x150 = (int ) x149;
x126 = x150;
}
SM_FUNC(mod2) void x167 () {
bool x156 = x125;
if (x156) {
x155 = true;
int x158 = x126;
int x159 = x154;
int x160 = x158 + x159;
x154 = x160;
} else {
x155 = false;
}
}
SM_FUNC(mod2) void x179 () {
bool x170 = x155;
if (x170) {
x168 = true;
int x172 = x154;
x169 = x172;
} else {
x168 = false;
}
}
SM_FUNC(mod2) void x193 () {
bool x182 = x168;
if (x182) {
x181 = true;
int x184 = x169;
int x185 = x180;
int x186 = x184 + x185;
x180 = x186;
} else {
x181 = false;
}
}
SM_FUNC(mod2) void x205 () {
bool x196 = x181;
if (x196) {
x194 = true;
int x198 = x180;
x195 = x198;
} else {
x194 = false;
}
}
SM_OUTPUT(mod2,x238);
SM_FUNC(mod2) void x244 () {
bool x230 = x194;
if (x230) {
int x239 = x195;
x238((const uint8_t*)&x239, sizeof(x239));
} else {
}
}
SM_INPUT(mod2,x247,x219,x220) { //top6
x218();
uint8_t* x221 = x219;
int x222 = x220;
x153(x221,x222);
x167();
x179();
x193();
x205();
x244();
}
DECLARE_SM(mod1, 0x1234);
DECLARE_SM(mod2, 0x1234);
static void x253 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x257 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);
  sancus_enable(&mod2);
  sm_register_existing(&mod2);

  REACTIVE_CONNECT(mod1, x114, mod2, x247);
}
int main() {
x253();
puts("main started");
x257();
while(1) {
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
