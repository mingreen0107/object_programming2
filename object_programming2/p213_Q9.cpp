#include <iostream>

using namespace std;

class Triangle {
	int b, h;

public:
	void setTriangle(int x, int y) {
		b = x;
		h = y;
	}
	int area() {
		return (b * h) / 2;
	}
};

int main() {

	Triangle obj;
	obj.setTriangle(3, 4);

	cout << "area = " << obj.area();

	return 0;
}