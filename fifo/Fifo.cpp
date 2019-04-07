#include "Fifo.h"

int Fifo::init (uint8_t *buffer, int size) {
    if (buffer == 0) {
        return -1;
    }
    if (size < 0) {
        return -2;
    }
    this->Head = 0;
    this->Tail = 0;
    this->Size = size;
    return 0;
}

int Fifo::push (uint8_t *in, int size) {
    int i = 0;
    for (i = 0; i < size; i++) {
        if (this->Head > this->Size) {
            this->Buffer[0] = in[i];
            this->Head = 1;
        }
        else {
            this->Buffer[this->Head++] = in[i];
        }
    }
    return i;
}

int Fifo::pop (uint8_t *out, int size) {
    int i = 0;
    for (i = 0; i < size; i++) {
        if (this->Tail == this->Head) {
            return i;
        }
        if (this->Tail > this->Size) {
            out[i] = this->Buffer[0];
            this->Tail = 1;
        }
        else {
            out[i] = this->Buffer[this->Tail++];
        }
    }
    return i;
}

int Fifo::size (void) {
    return this->Size;
}

int Fifo::available (void) {
    if (this->Head != this->Tail) {
        return 1;
    }
    else {
        return 0;
    }
}
