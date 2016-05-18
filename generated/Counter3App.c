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
SM_DATA(mod1) bool x72;
SM_DATA(mod1) int x73;
SM_DATA(mod1) bool x98;
SM_DATA(mod1) int x99;
SM_DATA(mod1) int x116;
SM_DATA(mod1) bool x126;
SM_DATA(mod1) int x127;
SM_DATA(mod1) bool x133;
SM_DATA(mod1) int x134;
SM_DATA(mod1) int x146;
SM_FUNC(mod1) void x161 () {
int x147 = x146;
bool x148 = x147 == 0;
if (x148) {
x116 = 0;
x146 = 1;
} else {
}
x98 = false;
x1 = false;
x30 = false;
x126 = false;
x59 = false;
x133 = false;
x72 = false;
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
SM_FUNC(mod1) void x97 () {
bool x74 = x1;
bool x75 = x59;
bool x76 = x74 && x75;
if (x76) {
x72 = true;
int x78 = x2;
int x79 = x60;
int x80 = x78 + x79;
x73 = x80;
} else {
if (x74) {
x72 = true;
int x78 = x2;
x73 = x78;
} else {
if (x75) {
x72 = true;
int x79 = x60;
x73 = x79;
} else {
x72 = false;
}
}
}
}
SM_FUNC(mod1) void x115 () {
bool x100 = x72;
if (x100) {
int x101 = x73;
int x102 = abs(x101);
bool x103 = x102 < 10;
if (x103) {
x98 = true;
x99 = x101;
} else {
x98 = false;
}
} else {
x98 = false;
}
}
SM_FUNC(mod1) void x125 () {
bool x117 = x98;
if (x117) {
int x118 = x99;
int x119 = x116;
int x120 = x119 + x118;
x116 = x120;
} else {
}
}
SM_FUNC(mod1) void x132 () {
x126 = true;
int x129 = x116;
x127 = x129;
}
SM_FUNC(mod1) void x145 () {
bool x135 = x126;
if (x135) {
x133 = true;
int x137 = x127;
x134 = x137;
lcd_printf_int("%d ", x137);
} else {
x133 = false;
}
}
SM_INPUT(mod1,x175,x162,x163) { //top1
x161();
uint8_t* x164 = x162;
int x165 = x163;
x29(x164,x165);
x97();
x115();
x125();
x132();
x145();
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
SM_FUNC(mod1) void x71 () {
bool x61 = x30;
if (x61) {
x59 = true;
int x63 = x31;
int x64 = 0 - x63;
x60 = x64;
} else {
x59 = false;
}
}
SM_INPUT(mod1,x191,x177,x178) { //top2
x161();
uint8_t* x179 = x177;
int x180 = x178;
x58(x179,x180);
x71();
x97();
x115();
x125();
x132();
x145();
}
DECLARE_SM(mod1, 0x1234);
static void x222 () {
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

}
static void x206 (int x194) {
bool x195 = x194 == 1;
if (x195) {
int x196 = 2;
int x197 = x196;
uint8_t x198 = (uint8_t ) x197;
uint8_t* x199 = &x198;
size_t x200 = sizeof(x198);
x191(x199,x200);
} else {
}
}
static void x219 (int x207) {
bool x208 = x207 == 1;
if (x208) {
int x209 = 1;
int x210 = x209;
uint8_t x211 = (uint8_t ) x210;
uint8_t* x212 = &x211;
size_t x213 = sizeof(x211);
x175(x212,x213);
} else {
}
}
int main() {
x222();
puts("main started");
x225();
buttons_register_callback(Button2,x206);
buttons_register_callback(Button1,x219);
while(1)
  buttons_handle_events();
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
