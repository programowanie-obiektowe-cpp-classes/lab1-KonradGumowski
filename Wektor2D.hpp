#include <iostream>
class Wektor2D
{
public:
    Wektor2D() { }
    int norm() {
        return sqrt(x * x + y * y);
    }
    void print() {
        std::cout << 333333 << std::endl;
    }
    int x;
    int y;
};