#include <iostream>

using namespace std;

class Box {
private:
	double length;
	double width;
	double height;

	static int count;

public:
	Box(double l = 2.0, double w = 2.0, double h = 2.0) {
		length = l;
		width = w;
		height = h;
		count++;
	}
	double Volume() {
		return length * width * height;
	}
	static int getCount() {
		return count;
	}
};
int Box::count = 0;

int main() {
	cout << "Initial Box count: " << Box::getCount() << endl;

	Box box1;
	cout << "Box count after creating box1: " << Box::getCount() << endl;

	Box box2(3.0, 4.0, 5.0);
	cout << "Box count after creating box2: " << Box::getCount() << endl;

	return 0;
}