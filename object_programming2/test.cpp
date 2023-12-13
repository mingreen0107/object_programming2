#include <iostream>

using namespace std;

class C {
private:
	double r, i;

public:
	C(double r = 0.0, double i = 0.0) :r(r), i(i) { }

	double getReal() { return r; }
	double getImag() { return i; }

	C operator+=(C& obj);
};
C C::operator+=(C& obj) {
	return (this->r + obj.r, this->i + obj.i);
}
int main() {

	C a(1.1, 1.1), b(1.1, 1.1);

	a += b;

	cout << a.getReal() << " " << a.getImag();

	return 0;
}