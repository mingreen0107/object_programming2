#include <iostream>

using namespace std;

int main() {

	int sum = 0;

	for (int i = 1; i < 11; i++)
		sum += i;

	cout << "1부터 10까지 정수 합 = " << sum << endl;

	return 0;
}