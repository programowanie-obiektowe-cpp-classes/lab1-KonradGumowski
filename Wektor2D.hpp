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
    double getX() { return x; }
    double getY() { return y; }
friend Wektor2D operator+(Wektor2D A, Wektor2D B);
friend Wektor2D operator*(Wektor2D A, Wektor2D B);
private:
    double x;
    double y;
};

Wektor2D operator+(Wektor2D A, Wektor2D B) {
//    Wektor2D C{ A.getX() + B.getX(), A.getY() + B.getY() };
        Wektor2D C{ A.x + B.x, A.y + B.y };
    return C;
}
Wektor2D operator*(Wektor2D A, Wektor2D B) {
        Wektor2D C{ A.x * A.y+ B.x * B.y };
    return C;
}
