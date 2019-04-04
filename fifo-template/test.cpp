#include <iostream>
using namespace std;

#include "Fifo.h"

int main () {
    Fifo <int, 12> fifo;
    int val = 1959;
    int ret = fifo.push(&val, 1);
    if (ret != 1) {
        cout << "Error return value push" << endl;
        return -1;
    }

    if (!fifo.available()) {
        cout << "Error data not available" << endl;
        return -2;
    }

    val = 0;
    ret = fifo.pop(&val, 1);
    if (ret != 1) {
        cout << "Error return value pop" << endl;
        return -3;
    }
    cout << "Val = " << val << endl;
    return 0;
}
