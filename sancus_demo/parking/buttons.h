#ifndef BUTTONS_H
#define BUTTONS_H

typedef enum
{
    Button1 = 0,
    Button2 = 1,
    Button3 = 2,
    Button4 = 3
} Button;

typedef void (*ButtonCallback)(int);

void buttons_init(void);
int buttons_register_callback(Button button, ButtonCallback  cb);
void buttons_handle_events(void);

#endif
