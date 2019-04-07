#ifndef FIFO_H__
#define FIFO_H__

#include <stdint.h>

class Fifo {
    public:
        uint8_t *Buffer;
        int     Head;
        int     Tail;
        int     Size;

        int init (uint8_t *buffer, int size);
        int push (uint8_t *in, int size);
        int pop (uint8_t *out, int size);
        int size (void);
        int available (void);
};

#endif
