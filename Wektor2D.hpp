#include <iostream>
class Wektor2D
{
public:
    Wektor2D() { }
    Wektor2D(double a, double b) {
        x = a; y = b;
        std::cout<<"pobralem wartosci" << std::endl;
    }
    double norm() {
        return sqrt(x * x + y * y);
    }
    void print() {
        std::cout << norm() << std::endl;
    }
    void setX(double a) { x = a; }
    void setY(double a) { y = a; }
        
private:
    double x;
    double y;
};