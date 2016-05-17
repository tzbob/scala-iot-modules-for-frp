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
SM_DATA(mod1) int x30;
SM_DATA(mod1) bool x40;
SM_DATA(mod1) int x41;
SM_DATA(mod1) int x47;
SM_DATA(mod1) bool x57;
SM_DATA(mod1) int x58;
SM_DATA(mod1) int x64;
SM_FUNC(mod1) void x76 () {
int x65 = x64;
bool x66 = x65 == 0;
if (x66) {
x30 = 1;
x47 = 10;
x64 = 1;
} else {
}
x57 = false;
x1 = false;
x40 = false;
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
SM_FUNC(mod1) void x39 () {
bool x31 = x1;
if (x31) {
int x32 = x2;
int x33 = x30;
int x34 = x32 + x33;
x30 = x34;
} else {
}
}
SM_FUNC(mod1) void x46 () {
x40 = true;
int x43 = x30;
x41 = x43;
}
SM_FUNC(mod1) void x56 () {
bool x48 = x40;
if (x48) {
int x49 = x41;
int x50 = x47;
int x51 = x49 + x50;
x47 = x51;
} else {
}
}
SM_FUNC(mod1) void x63 () {
x57 = true;
int x60 = x47;
x58 = x60;
}
SM_OUTPUT(mod1,x96);
SM_FUNC(mod1) void x102 () {
bool x88 = x57;
if (x88) {
int x97 = x58;
x96((const uint8_t*)&x97, sizeof(x97));
} else {
}
}
SM_INPUT(mod1,x105,x77,x78) { //top1
x76();
uint8_t* x79 = x77;
int x80 = x78;
x29(x79,x80);
x39();
x46();
x56();
x63();
x102();
}
SM_DATA(mod2) bool x107;
SM_DATA(mod2) int x108;
SM_DATA(mod2) int x136;
SM_DATA(mod2) bool x146;
SM_DATA(mod2) int x147;
SM_DATA(mod2) int x153;
SM_DATA(mod2) bool x163;
SM_DATA(mod2) int x164;
SM_DATA(mod2) int x170;
SM_FUNC(mod2) void x182 () {
int x171 = x170;
bool x172 = x171 == 0;
if (x172) {
x136 = 2;
x153 = 20;
x170 = 1;
} else {
}
x163 = false;
x107 = false;
x146 = false;
}
SM_FUNC(mod2) void x135 (uint8_t* x109,int x110) {
int x113 = 0;
int x114 = 0;
int x112 = x110;
uint8_t* x111 = x109;
for (;;) {
int x115 = x114;
bool x116 = x115 < x112;
if (!x116) break;
int x118 = x114;
uint8_t x119 = x111[x118];
int x123 = x113;
int x120 = (int ) x119;
int x121 = x118 * 8;
int x122 = x120 << x121;
int x124 = x123 + x122;
x113 = x124;
int x126 = x118 + 1;
x114 = x126;
}
x107 = true;
int x131 = x113;
int x132 = (int ) x131;
x108 = x132;
}
SM_FUNC(mod2) void x145 () {
bool x137 = x107;
if (x137) {
int x138 = x108;
int x139 = x136;
int x140 = x138 + x139;
x136 = x140;
} else {
}
}
SM_FUNC(mod2) void x152 () {
x146 = true;
int x149 = x136;
x147 = x149;
}
SM_FUNC(mod2) void x162 () {
bool x154 = x146;
if (x154) {
int x155 = x147;
int x156 = x153;
int x157 = x155 + x156;
x153 = x157;
} else {
}
}
SM_FUNC(mod2) void x169 () {
x163 = true;
int x166 = x153;
x164 = x166;
}
SM_OUTPUT(mod2,x202);
SM_FUNC(mod2) void x208 () {
bool x194 = x163;
if (x194) {
int x203 = x164;
x202((const uint8_t*)&x203, sizeof(x203));
} else {
}
}
SM_INPUT(mod2,x211,x183,x184) { //top6
x182();
uint8_t* x185 = x183;
int x186 = x184;
x135(x185,x186);
x145();
x152();
x162();
x169();
x208();
}
DECLARE_SM(mod1, 0x1234);
DECLARE_SM(mod2, 0x1234);
static void x217 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x221 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);
  sancus_enable(&mod2);
  sm_register_existing(&mod2);

  REACTIVE_CONNECT(mod1, x96, mod2, x211);
}
int main() {
x217();
puts("main started");
x221();
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
