#include "buttons.h"

#include <msp430.h>

#include <stdio.h>

enum
{
    Button1Bit = 0x80,
    Button2Bit = 0x20,
    Button3Bit = 0x08,
    Button4Bit = 0x02
};

typedef enum
{
    ButtonNotChanged,
    ButtonPressed,
    ButtonReleased
} ButtonEvent;

static int initialized = 0;
static ButtonEvent button1_event, button2_event, button3_event, button4_event;
static ButtonCallback callbacks[4];

static ButtonEvent check_button(uint8_t button_bit)
{
    ButtonEvent event = ButtonNotChanged;

    if (!(P1IFG & button_bit))
        return event;

    int down = P1IN & button_bit;

    if (down)
    {
        // IRQ on rising edge.
        P1IES |= button_bit;
        event = ButtonPressed;
    }
    else
    {
        // IRQ on falling edge.
        P1IES &= ~button_bit;
        event = ButtonReleased;
    }

    return event;
}

#undef interrupt
static void __attribute__((interrupt(4))) buttons_isr()
{
    button1_event = check_button(Button1Bit);
    button2_event = check_button(Button2Bit);
    button3_event = check_button(Button3Bit);
    button4_event = check_button(Button4Bit);

    // Clear all PORT1 interrupt flags.
    P1IFG = 0;
}

static void buttons_driver_init()
{
    if (initialized)
        return;

    P1SEL = 0x00;
    P1DIR = 0x00;
    P1IES = 0x00;
    P1IE  = 0xff;

    button1_event = button2_event = button3_event = button4_event = ButtonNotChanged;
    initialized = 1;
}

static void do_callback(Button button, ButtonEvent* event)
{
    if (*event == ButtonNotChanged)
        return;

    ButtonCallback cb = callbacks[button];

    // The event will either be handled by the callback or ignored. In either
    // case, we should forget that the event happened now to ensure that we
    // don't try to handle the same event again.
    int pressed = *event == ButtonPressed;
    *event = ButtonNotChanged;

    if (cb == NULL)
        return;

    asm("dint");
    cb(pressed);
    asm("eint");
}

static void button1_cb(int pressed)
{
    printf("Button1 %s\n", pressed ? "pressed" : "released");
}

void buttons_init()
{
    buttons_driver_init();
    buttons_register_callback(Button1, &button1_cb);
}

int buttons_register_callback(Button button, ButtonCallback  cb)
{
    if (button != Button1 && button != Button2 && button != Button3 && button != Button4)
        return 0;

    callbacks[button] = cb;
    return 1;
}

void buttons_handle_events()
{
    do_callback(Button1, &button1_event);
    do_callback(Button2, &button2_event);
    do_callback(Button3, &button3_event);
    do_callback(Button4, &button4_event);
}
