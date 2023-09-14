#include <iostream>

using namespace std;

int main() {
	int x, y;

	cout << "x값을 입력하시오: ";
	cin >> x;

	cout << "y값을 입력하시오: ";
	cin >> y;

	if (x > y)
		cout << "x>y" << endl;
	else if (x == y)
		cout << "x=y" << endl;
	else
		cout << "x<y" << endl;

	return 0;
}