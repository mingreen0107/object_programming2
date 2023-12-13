#include <iostream>

using namespace std;

const int SIZE = 10;

class MyArray {
private:
	int a[SIZE];

public:
	MyArray() {
		for (int i = 0; i < SIZE; i++) {
			a[i] = 0;
		}
	}
	int &operator[](int i) {
		if (i >= SIZE) {
			return a[0];
		}
		else
			return a[i];
	}
};

int main(){

	MyArray A;

	A[3] = 9;

	return 0;
}