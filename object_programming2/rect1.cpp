#include <iostream>

using namespace std;

class R {
private:
	int length;
	int width;

public:
	R() {
		width = 30;
		length = 40;
	}
	~R() {}
	void setLength(int length) { this->length = length; }
	int getLength() { return this->length; }

	void setWidth(int width) { this->width = width; }
	int getWidth() { return width; }
};

int main() {

	R rect;
	cout << "length " << rect.getLength() << endl;
	cout << "width " << rect.getWidth() << endl;

	rect.setLength(20);
	rect.setWidth(10);

	cout << "length " << rect.getLength() << endl;
	cout << "width " << rect.getWidth();

	return 0;
}