#include <iostream>
#include <string>

using namespace std;

class Circle {
	int x, y;
	int radius;

public:
	static int count;
	Circle() :x(0), y(0), radius(0) {
		count++;
	}
	Circle(int x, int y, int r) :x(x), y(y), radius(r) {
		count++;
	}
	static int getCount() {
		return count;
	}
};
int Circle::count = 0;

int main() {

	Circle c1;
	cout << "circle sum number: " << Circle::getCount() << endl;
	Circle c2(100, 100, 30);
	cout << "circle sum number: " << Circle::getCount() << endl;

	return 0;
}