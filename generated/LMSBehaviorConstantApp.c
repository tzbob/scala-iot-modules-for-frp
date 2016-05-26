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
}static void __attribute__((noinline)) lcd_printf_int(const char* fmt, int i)
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
SM_DATA(mod1) int x31;
SM_DATA(mod1) int x39;
SM_DATA(mod1) bool x46;
SM_DATA(mod1) int x47;
SM_DATA(mod1) int x53;
SM_FUNC(mod1) void x68 () {
int x54 = x53;
bool x55 = x54 == 0;
if (x55) {
x30 = 3;
x31 = 0;
int x58 = x31;
int x59 = x30;
int x60 = x58 + x59;
x39 = x60;
x53 = 1;
} else {
}
x46 = false;
x1 = false;
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
SM_FUNC(mod1) void x38 () {
bool x32 = x1;
if (x32) {
int x33 = x2;
x31 = x33;
} else {
}
}
SM_FUNC(mod1) void x45 () {
int x40 = x31;
int x41 = x30;
int x42 = x40 + x41;
x39 = x42;
}
SM_FUNC(mod1) void x52 () {
x46 = true;
int x49 = x39;
x47 = x49;
}
SM_OUTPUT(mod1,x87);
SM_FUNC(mod1) void x93 () {
bool x79 = x46;
if (x79) {
int x88 = x47;
x87((const uint8_t*)&x88, sizeof(x88));
} else {
}
}
SM_INPUT(mod1,x96,x69,x70) { //top1
x68();
uint8_t* x71 = x69;
int x72 = x70;
x29(x71,x72);
x38();
x45();
x52();
x93();
}
DECLARE_SM(mod1, 0x1234);
static void x101 () {
  //INIT FUNCTION
  WDTCTL = WDTHOLD | WDTPW;
  uart_init();
  pmodcls_init();
  pmodcls_set_wrap_mode(PmodClsWrapAt16);
  buttons_init();
  asm("eint");
}
static void x104 () {
  //DEPLOY FUNCTION
  sancus_enable(&mod1);
  sm_register_existing(&mod1);

}
int main() {
x101();
puts("main started");
x104();
while(1) {
}
return 0;
};
/*****************************************
  End of C Generated Code                  
*******************************************/
