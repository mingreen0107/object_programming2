#include <iostream>

using namespace std;

int main() {

	int a, b, c, largest;

	cout << "3���� ������ �Է��Ͻÿ�: ";
	cin >> a >> b >> c;

	if (a > b && a > c)
		largest = a;
	else if (b > c && b > a)
		largest = b;
	else
		largest = c;

	cout << "���� ū ���� " << largest;

	return 0;
}