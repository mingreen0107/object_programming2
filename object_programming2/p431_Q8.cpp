#include <iostream>

using namespace std;

class Complex {
private:
    double real, imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) { }

    friend Complex operator+(const Complex& a, const Complex& b);
    friend Complex operator-(const Complex& a, const Complex& b);
    friend ostream& operator<<(ostream& os, const Complex& c);
    friend istream& operator>>(istream& is, Complex& c);
    friend bool operator==(const Complex& a, const Complex& b);
    friend bool operator!=(const Complex& a, const Complex& b);

    Complex& operator+=(const Complex& rhs) {
        real += rhs.real;
        imag += rhs.imag;
        return *this;
    }
    Complex& operator-=(const Complex& rhs) {
        real -= rhs.real;
        imag -= rhs.imag;
        return *this;
    }
};
Complex operator+(const Complex& a, const Complex& b) {
    return Complex(a.real + b.real, a.imag + b.imag);
}
Complex operator-(const Complex& a, const Complex& b) {
    return Complex(a.real - b.real, a.imag - b.imag);
}
ostream& operator<<(ostream& os, const Complex& c) {
    os << "(" << c.real << ", " << c.imag << ")";
    return os;
}
istream& operator>>(istream& is, Complex& c) {
    is >> c.real >> c.imag;
    return is;
}
bool operator==(const Complex& a, const Complex& b) {
    return a.real == b.real && a.imag == b.imag;
}
bool operator!=(const Complex& a, const Complex& b) {
    return !(a == b);
}

int main() {

    Complex c1(1.0, 7.0), c2(3.0, 8.0);
    Complex sum = c1 + c2;

    cout << "Sum: " << sum << endl;

    return 0;
}