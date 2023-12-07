#include <iostream>

using namespace std;

class Box {
private:
    double length, width, height;

public:
    Box(double l = 0.0, double w = 0.0, double h = 0.0) : length(l), width(w), height(h) { }

    friend void printBox(Box box);
};
void printBox(Box box) {
    cout << "Box dimensions: " << "Length = " << box.length
        << ", Width = " << box.width << ", Height = " << box.height << endl;
}

int main() {

    Box myBox(10, 20, 30);

    printBox(myBox);

    return 0;
}