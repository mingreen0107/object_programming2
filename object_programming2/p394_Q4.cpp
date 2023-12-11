#include <iostream>

using namespace std;

class Point {
private:
	double xval, yval;

public:
	Point(double x = 0.0, double y = 0.0) : xval(x), yval(y) { }

	double getX() { return xval; }
	void setX(double x) { xval = x; }
	double getY() { return yval; }
	void setY(double y) { yval = y; }
};
void swap(Point& p1, Point& p2) {
	double tempX = p1.getX();
	double tempY = p1.getY();

	p1.setX(p2.getX());
	p1.setY(p2.getY());

	p2.setX(tempX);
	p2.setY(tempY);
}

int main() {

	Point p1(1.0, 2.0), p2(3.0, 4.0);

	cout << "before swap: " << endl;
	cout << "p1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
	cout << "p2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;

	swap(p1, p2);

	cout << "after swap: " << endl;
	cout << "p1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
	cout << "p2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;

	return 0;
}