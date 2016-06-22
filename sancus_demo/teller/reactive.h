#ifndef REACTIVE_H
#define REACTIVE_H

#include <sancus/sm_support.h>

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

typedef unsigned io_id;

void reactive_handle_output(const char* output,
                            const uint8_t* data, size_t len);
void reactive_add_connection(sm_id from_sm, const char* from_output,
                             sm_id to_sm, io_id to_input);

#define REACTIVE_CONNECT(from_sm, from_output, to_sm, to_input) \
    reactive_add_connection(from_sm.id, #from_output,           \
                            to_sm.id, SM_GET_ENTRY_IDX(to_sm, to_input))


#define SM_OUTPUT_AUX(sm, name) \
    SM_FUNC(sm) void name(const uint8_t* data, size_t len)  \
    {                                                       \
        uint8_t* copy = malloc(len);                        \
        if (copy == NULL)                                   \
            puts(#sm ":" #name ": OOM");                    \
        else                                                \
        {                                                   \
            for (size_t i = 0; i < len; i++)                \
                copy[i] = data[i];                          \
            reactive_handle_output(#name, copy, len);       \
            free(copy);                                     \
        }                                                   \
    }

#define SM_OUTPUT(sm, name) SM_OUTPUT_AUX(sm, name)

#define SM_INPUT_AUX(sm, name, data_name, len_name)         \
    SM_ENTRY(sm) void name(const uint8_t* data_name, size_t len_name)

#define SM_INPUT(sm, name, data_name, len_name)             \
    SM_INPUT_AUX(sm, name, data_name, len_name)

#endif

