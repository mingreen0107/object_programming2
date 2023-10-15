#include <iostream>

using namespace std;

class Complex {
public:
	double r;
	double i;

	Complex(double real=0.0, double imag=0.0):r(real), i(imag){}

	void print() {
		cout << r;
		if (i >= 0) cout << " + ";
		else cout << " - ";
		cout << fabs(i) << "i" << endl;
	}
	void set(double real, double imag) {
		r = real;
		i = imag;
	}
};

int main() {

	Complex num1(5, 3);
	Complex num2(3, 4);
	num1.print();
	num2.print();

	return 0;
}