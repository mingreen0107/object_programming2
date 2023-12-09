#include <iostream>

using namespace std;

class Shape {
    int x, y;
    string color;

public:
    Shape(int x, int y, string c) : x(x), y(y), color(c) { }

    int getX() { return x; }
    void setX(int newX) { x = newX; }
    int getY() { return y; }
    void setY(int newY) { y = newY; }
    string getColor() { return color; }
    void setColor(string c) { color = c; }

    virtual double getArea() = 0;
};
class Circle : public Shape {
    double radius;

public:
    Circle(int x, int y, string c, double r) : Shape(x, y, c), radius(r) {}

    double getRadius() { return radius; }
    void setRadius(double r) { radius = r; }

    double getArea() {
        return 3.14 * radius * radius;
    }
};

int main() {

    Circle circle(10, 10, "red", 5);

    cout << "Area: " << circle.getArea() << endl;

    return 0;
}