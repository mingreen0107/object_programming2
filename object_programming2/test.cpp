#include <iostream>

using namespace std;

class Circle {
public:
	int x, y, radius;
	Circle(int x = 0, int y = 0, int r = 0) :x(x), y(y), radius(r) { }
	void print() {
		cout << radius << " " << x << " " << y << endl;
	}
};

int main() {

	Circle obj[10];

	for (Circle& c : obj) {
		c.x = rand() % 500;
		c.y = rand() % 300;
		c.radius = rand() % 100;
	}
	for (Circle c : obj) c.print();

	return 0;
}