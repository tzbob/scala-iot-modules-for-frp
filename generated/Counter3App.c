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
SM_DATA(mod1) bool x59;
SM_DATA(mod1) int x60;
SM_DATA(mod1) bool x72;
SM_DATA(mod1) int x73;
SM_DATA(mod1) bool x98;
SM_DATA(mod1) int x99;
SM_DATA(mod1) bool x116;
SM_DATA(mod1) int x117;
SM_DATA(mod1) int x135;
SM_FUNC(mod1) void x134 () {
lcd_clear();
int x131 = x117;
pmodcls_set_cursor_position(0,0);
lcd_printf_int("%d", x131);
}
SM_ENTRY(mod1) void x144() {
int x136 = x135;
bool x137 = x136 == 0;
if (x137) {
x117 = 0;
x134();
x135 = 1;
} else {
}
}
SM_FUNC(mod1) void x152 () {
x98 = false;
x1 = false;
x30 = false;
x59 = false;
x72 = false;
x116 = false;
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
SM_FUNC(mod1) void x129 () {
bool x118 = x98;
if (x118) {
x116 = true;
int x120 = x99;
int x121 = x117;
int x122 = x121 + x120;
x117 = x122;
} else {
x116 = false;
}
}
SM_INPUT(mod1,x166,x153,x154) { //top1
x144();
x152();
uint8_t* x155 = x153;
int x156 = x154;
x29(x155,x156);
x97();
x115();
x129();
x134();
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
SM_INPUT(mod1,x182,x168,x169) { //top2
x144();
x152();
uint8_t* x170 = x168;
int x171 = x169;
x58(x170,x171);
x71();
x97();
x115();
x129();
x134();
}
DECLARE_SM(mod1, 0x1234);
static void x213 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x216 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);

}
static void x197 (int x185) {
bool x186 = x185 == 1;
if (x186) {
int x187 = 2;
int x188 = x187;
uint8_t x189 = (uint8_t ) x188;
uint8_t* x190 = &x189;
size_t x191 = sizeof(x189);
x182(x190,x191);
} else {
}
}
static void x210 (int x198) {
bool x199 = x198 == 1;
if (x199) {
int x200 = 1;
int x201 = x200;
uint8_t x202 = (uint8_t ) x201;
uint8_t* x203 = &x202;
size_t x204 = sizeof(x202);
x166(x203,x204);
} else {
}
}
int main() {
x213();
puts("main started");
x216();
buttons_register_callback(Button2,x197);
buttons_register_callback(Button1,x210);

// modules inits;
x144();
while(1) {
  buttons_handle_events();
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
