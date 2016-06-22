#include <stdio.h>
#include <msp430.h>

#include "sancus_support/uart.h"

int putchar(int c)
{
    if (c == '\n')
        putchar('\r');

#ifdef SIMULATE
    P1OUT = c;
    P1OUT |= 0x80;
#else
    uart_write_byte(c);
#endif

    return c;
}

