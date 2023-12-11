#include <iostream>

using namespace std;

class Box {
private:
    double length, width, height;

public:
    Box(double l = 0.0, double w = 0.0, double h = 0.0) : length(l), width(w), height(h) { }

    Box operator+(Box& b) {
        return Box(length + b.length, width + b.width, height + b.height);
    }
    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Height : " << height << endl;
    }
};

int main() {

    Box a(10, 10, 10), b(20, 20, 20), c;
    c = a + b;

    cout << "Box a: ";
    a.display();
    cout << "Box b: ";
    b.display();
    cout << "Box c (a+b): ";
    c.display();

    return 0;
}