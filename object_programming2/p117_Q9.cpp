#include <iostream>

using namespace std;

int main() {

	float c = 0;

	for (int f = 0; f < 101; f += 10) {
		c = (f - 32) * 5 / 9.0;
		cout << f << "\t" << c << endl;
	}
	return 0;
}