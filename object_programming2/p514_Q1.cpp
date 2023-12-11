#include <iostream>

using namespace std;

class Shape {
protected:
    int x, y;

public:
    Shape(int x, int y) : x(x), y(y) {}
    virtual double getArea() = 0;
};
class Rect : public Shape {
public:
    Rect(int width, int height) : Shape(width, height) {}
    double getArea() { return x * y; }
};
class Circle : public Shape {
public:
    Circle(int radius) : Shape(radius, 0) {}
    double getArea() { return 3.14 * x * x; }
};
class Triangle : public Shape {
public:
    Triangle(int base, int height) : Shape(base, height) {}
    double getArea() { return 0.5 * x * y; }
};

int main() {

    Shape* a = new Rect(10, 20);
    cout << "a area: " << a->getArea() << endl;

    Shape* b = new Circle(5);
    cout << "b area: " << b->getArea() << endl;

    Shape* c = new Triangle(10, 5);
    cout << "c area: " << c->getArea() << endl;

    return 0;
}