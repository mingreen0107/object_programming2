#include <iostream>

using namespace std;

int main() {

	char secret_code = 's';

	cout << "����ڵ带 ���纸����: ";
	char code;
	cin >> code;

	if (code < secret_code)
		cout << code << "�ڿ� ����" << endl;
	else if (code > secret_code)
		cout << code << "�տ� ����" << endl;
	else
		cout << "����" << endl;

	return 0;
}