#include <iostream>

using namespace std;

int main() {
	int x, y;

	cout << "x���� �Է��Ͻÿ�: ";
	cin >> x;

	cout << "y���� �Է��Ͻÿ�: ";
	cin >> y;

	if (x > y)
		cout << "x>y" << endl;
	else if (x == y)
		cout << "x=y" << endl;
	else
		cout << "x<y" << endl;

	return 0;
}