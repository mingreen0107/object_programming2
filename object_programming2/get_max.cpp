#include <iostream>

using namespace std;

template <typename T>
T get_max(T x, T y) {
	if (x > y) return x;
	else return y;
}

int main() {

	cout << get_max(1, 3) << endl;
	cout << get_max(3.0, 3.1);

	return 0;
}