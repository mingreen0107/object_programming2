#include <iostream>

using namespace std;

int main() {

	int n;
	int i = 1;

	cout << "출력하고 싶은 단을 입력하시오: ";
	cin >> n;

	while (i < 10) {
		cout << n << "*" << i << "=" << n * i << endl;
		i++;
	}

	return 0;
}