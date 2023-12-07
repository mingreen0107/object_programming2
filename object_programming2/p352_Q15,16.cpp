#include <iostream>
#include<string>

using namespace std;

class Rect {
private:
	int width, height;

public:
	Rect(int w, int h) :width(w), height(h) { }

	int getWidth() { return width; }
	void setWidth(int w) { width = w; }
	int getHeight() { return height; }
	void setHeight(int h) { height = h; }

	int Area() { return width * height; }
	int Perimeter() { return (width + height) * 2; }

	
};

bool is_equal(Rect r1, Rect r2) {
		return (r1.getWidth() == r2.getWidth()) && (r1.getHeight() == r2.getHeight());
	}

int main() {

	Rect* r1 = new Rect(1, 2);
	Rect* r2 = new Rect(1, 2);

	cout << "equl?: " << (is_equal(*r1, *r2) ? "Y" : "N"); 

	delete r1;
	delete r2;

	return 0;
}