#include "reactive.h"

#include <sancus/sm_support.h>
#include <sancus_support/sm_control.h>

#include <string.h>

void reactive_print_data(const char* sm, const char* output,
                         const uint8_t* data, size_t len)
{
    printf("Output (%s:%s): ", sm, output);

    for (size_t i = 0; i < len; i++)
        printf("%02x", data[i]);

    printf("\n");
}

typedef struct Connection
{
    sm_id from_sm;
    const char* from_output;
    sm_id to_sm;
    io_id to_input;
    struct Connection* next;
} Connection;

static Connection* connections_head = NULL;

void reactive_add_connection(sm_id from_sm, const char* from_output,
                             sm_id to_sm, io_id to_input)
{
    Connection* connection = malloc(sizeof(Connection));

    if (connection == NULL)
    {
        puts("OOM while adding connection");
        return;
    }

    connection->from_sm = from_sm;
    connection->from_output = from_output;
    connection->to_sm = to_sm;
    connection->to_input = to_input;
    connection->next = connections_head;
    connections_head = connection;
}

void reactive_handle_output(const char* output, const uint8_t* data, size_t len)
{
    sm_id from_sm_id = sancus_get_caller_id();
    Connection* current = connections_head;

    while (current != NULL)
    {
        if (current->from_sm == from_sm_id &&
            strcmp(current->from_output, output) == 0)
        {
            uint16_t args[] = {(uint16_t)data, (uint16_t)len};

            asm("dint");

            if (!sm_call_id(current->to_sm, current->to_input, args, 2, NULL))
                puts("Error invoking input handler");

            asm("eint");

            current = current->next;
        }
        else
            current = current->next;
    }
}
