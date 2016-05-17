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
SM_OUTPUT(mod1,x97);
SM_FUNC(mod1) void x103 () {
bool x89 = x57;
if (x89) {
int x98 = x58;
x97((const uint8_t*)&x98, sizeof(x98));
} else {
}
}
SM_INPUT(mod1,x107,x77,x78) { //top1
asm("dint");

x76();
uint8_t* x79 = x77;
int x80 = x78;
x29(x79,x80);
x39();
x46();
x56();
x63();
x103();
asm("eint");

}
SM_DATA(mod2) bool x109;
SM_DATA(mod2) int x110;
SM_DATA(mod2) int x138;
SM_DATA(mod2) bool x148;
SM_DATA(mod2) int x149;
SM_DATA(mod2) int x155;
SM_DATA(mod2) bool x165;
SM_DATA(mod2) int x166;
SM_DATA(mod2) int x172;
SM_FUNC(mod2) void x184 () {
int x173 = x172;
bool x174 = x173 == 0;
if (x174) {
x138 = 2;
x155 = 20;
x172 = 1;
} else {
}
x165 = false;
x109 = false;
x148 = false;
}
SM_FUNC(mod2) void x137 (uint8_t* x111,int x112) {
int x115 = 0;
int x116 = 0;
int x114 = x112;
uint8_t* x113 = x111;
for (;;) {
int x117 = x116;
bool x118 = x117 < x114;
if (!x118) break;
int x120 = x116;
uint8_t x121 = x113[x120];
int x125 = x115;
int x122 = (int ) x121;
int x123 = x120 * 8;
int x124 = x122 << x123;
int x126 = x125 + x124;
x115 = x126;
int x128 = x120 + 1;
x116 = x128;
}
x109 = true;
int x133 = x115;
int x134 = (int ) x133;
x110 = x134;
}
SM_FUNC(mod2) void x147 () {
bool x139 = x109;
if (x139) {
int x140 = x110;
int x141 = x138;
int x142 = x140 + x141;
x138 = x142;
} else {
}
}
SM_FUNC(mod2) void x154 () {
x148 = true;
int x151 = x138;
x149 = x151;
}
SM_FUNC(mod2) void x164 () {
bool x156 = x148;
if (x156) {
int x157 = x149;
int x158 = x155;
int x159 = x157 + x158;
x155 = x159;
} else {
}
}
SM_FUNC(mod2) void x171 () {
x165 = true;
int x168 = x155;
x166 = x168;
}
SM_OUTPUT(mod2,x205);
SM_FUNC(mod2) void x211 () {
bool x197 = x165;
if (x197) {
int x206 = x166;
x205((const uint8_t*)&x206, sizeof(x206));
} else {
}
}
SM_INPUT(mod2,x215,x185,x186) { //top6
asm("dint");

x184();
uint8_t* x187 = x185;
int x188 = x186;
x137(x187,x188);
x147();
x154();
x164();
x171();
x211();
asm("eint");

}
DECLARE_SM(mod1, 0x1234);
DECLARE_SM(mod2, 0x1234);
static void x221 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x225 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);
  sancus_enable(&mod2);
  sm_register_existing(&mod2);

  REACTIVE_CONNECT(mod1, x97, mod2, x215);
}
int main() {
x221();
puts("main started");
x225();
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
