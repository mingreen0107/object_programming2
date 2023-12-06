#include <iostream>
#include <Windows.h>
#include <vector>

using namespace std;

class Color {
public:
	int red, green, blue;
	Color() {
		red = rand() % 256;
		green = rand() % 256;
		blue = rand() % 256;
	}
};
class Circle {
	int x, y;
	int radius;
	Color color;

public:
	Circle(int x, int y, int r, Color c) :x(x), y(y), radius(r), color(c) { }
	void draw();
};
void Circle::draw() {
	int r = radius / 2;
	HDC hdc = GetWindowDC(GetForegroundWindow());
	SelectObject(hdc, GetStockObject(DC_BRUSH));
	SetDCBrushColor(hdc, RGB(color.red, color.green, color.blue));
	Ellipse(hdc, x - r, y - r, x + r, y + r);
}

int main() {

	for (int i = 0; i < 100; i++) {
		Circle obj(rand() % 500, rand() % 500, rand() % 100, Color());
		obj.draw();
	}
	return 0;
}