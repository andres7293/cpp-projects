#include <iostream>
using namespace std;

template <typename T>
T add (T a, T b) {
    return a + b;
}

int main (int argc, char *argv[]) {
    cout << add(1, 1) << endl;
    cout << add(0.5, 0.5) << endl;
    cout << add(-0.5, 0.5) << endl;
    return 0;
}
