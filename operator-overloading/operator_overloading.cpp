#include <iostream>
using namespace std;

class Point {
    public:
        Point(int x, int y) { this->x = x; this->y = y;};
        Point() { this->x = 0; this->y = 0;}

        friend Point operator+ (const Point &A, const Point &B) {
            Point point(A.x + B.x, A.y + B.y);
            return point;
        }

        friend Point operator- (const Point &A, const Point &B) {
            Point point(A.x - B.x, A.y - B.y);
            return point;
        }

        friend Point operator* (const Point &A, const Point &B) {
            Point point(A.x * B.x, A.y * B.y);
            return point;
        }

        friend Point operator/ (const Point &A, const Point &B) {
            Point point;
            if (B.x == 0 || B.y == 0) {
                cout << "Error divide by zero" << endl;
                return point;
            }
            else {
                point.x = A.x / B.x;
                point.y = A.y / B.y;
                return point;
            }
        }

        int x;
        int y;
};

int main (void) {
    Point A(1, 1);
    Point B(1, 1);

    Point C = A + B;
    cout << "C.x = " << C.x << endl;
    cout << "C.y = " << C.y << endl;

    C = A - B;
    cout << "C.x = " << C.x << endl;
    cout << "C.y = " << C.y << endl;

    C = A * B;
    cout << "C.x = " << C.x << endl;
    cout << "C.y = " << C.y << endl;

    C = A / B;
    cout << "C.x = " << C.x << endl;
    cout << "C.y = " << C.y << endl;

    return 0;
}
