#ifndef __FIFO_H__
#define __FIFO_H__

template <typename T, int N>
class Fifo {
    public:
        Fifo () {
            this->Head = 0;
            this->Tail = 0;
        }

        int push (T *in, int len) {
            int i;
            for (i = 0; i < len; i++) {
                if (this->Head > N) {
                    this->Head = 0;
                }
                this->Buffer[this->Head++] = in[i];
            }
            return i;
        }

        int pop (T *out, int len) {
            int i;
            for (i = 0; i < len; i++) {
                if (this->Head == this->Tail) {
                    return i;
                }
                if (this->Tail > N) {
                    this->Tail = 0;
                }
                out[i] = this->Buffer[this->Tail++];
            }
            return i;
        }

        int available () {
            if (this->Head != this->Tail) {
                return 1;
            }
            else {
                return 0;
            }
        }
    private:
        T Buffer[N];
        int Head;
        int Tail;
};

#endif
