#include <iostream>

using namespace std;

class Box {
private:
    double length, width, height;

public:
    Box(double l = 0.0, double w = 0.0, double h = 0.0) : length(l), width(w), height(h) { }

    double volume() {
        return length * width * height;
    }
    bool operator<(Box& b) {
        return this->volume() < b.volume();
    }
};

int main() {

    Box a(10, 10, 10), b(20, 20, 20);

    cout << (a < b ? "true" : "flase");

    return 0;
}