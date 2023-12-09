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
    bool operator==(Box& other) {
        return this->volume() == other.volume();
    }
};

int main() {

    Box box1(10, 10, 10), box2(20, 10, 5), box3(10, 10, 10);

    cout << "Box1 is " << (box1 == box2 ? "equal" : "not equal") << " to Box2" << endl;
    cout << "Box1 is " << (box1 == box3 ? "equal" : "not equal") << " to Box3" << endl;

    return 0;
}