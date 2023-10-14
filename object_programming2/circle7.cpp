#include <iostream>
#include <string>

using namespace std;

class Circle {
public:
	double calaArea();

	int radius;
	string color;
};

double Circle::calaArea() {
	return 3.14 * radius * radius;
}

int main() {

	Circle c;
	c.radius = 10;
	cout << c.calaArea();

	return 0;
}