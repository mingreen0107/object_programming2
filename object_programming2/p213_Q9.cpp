#include <iostream>

using namespace std;

class Triangle {
	int b, h;

public:
	void setTriangle(int x, int y) {
		b = x;
		h = y;
	}
	double calcArea() {
		double area;
		area = b * h / 2;
		return area;
	}
	/*
	int area() {
		return (b * h) / 2;
	}
	*/
};

int main() {

	Triangle obj;
	obj.setTriangle(3, 4);

	cout << "area = " << obj.calcArea();

	return 0;
}