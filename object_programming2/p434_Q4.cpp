#include <iostream>

using namespace std;

class Box {
private:
    double length, width, height;

public:
    Box(double l = 0.0, double w = 0.0, double h = 0.0) : length(l), width(w), height(h) { }

    friend void printBox(Box a);
};
void printBox(Box a) {
    cout << a.length << ", " << a.width << ", " << a.height << endl;
}

int main() {

    Box a(10, 20, 30);

    printBox(a);

    return 0;
}