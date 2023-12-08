#include <iostream>

using namespace std;

class Rect {
private:
	int width, height;

public:
	Rect(int w, int h) :width(w), height(h) { }

	int getWidth() const { return width; }
	void setWidth(int w) { width = w; }
	int getHeight() const { return height; }
	void setHeight(int h) { height = h; }

	int getArea() const { return width * height; }
	int getPerimeter() const { return (width + height) * 2; }
};

int main() {

	Rect* p = new Rect(0, 0);

	p->setWidth(10);
	p->setHeight(20);

	cout << "w: " << p->getWidth() << endl;
	cout << "h: " << p->getHeight() << endl;
	cout << "area: " << p->getArea() << endl;
	cout << "perimeter: " << p->getPerimeter() << endl;

	delete p;

	return 0;
}