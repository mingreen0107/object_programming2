#include <iostream>
#include <windows.h>

using namespace std;

class Circle {
public:
	int x, y, radius;
	string color;

	double calaArea() {
		return 3.14 * radius * radius;
	}
	void draw() {
		HDC hdc = GetWindowDC(GetForegroundWindow());
		Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
	}
};

int main() {
	Circle c;

	for (int i = 100; i < 201; i += 10)
		c.x = i;
	c.y = 100;
	c.radius = 50;
	c.draw();

	return 0;
}