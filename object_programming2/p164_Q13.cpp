#include <iostream>
#include <string>

using namespace std;

int main() {

	string password;
	int num = 0, big = 0, small = 0;
	cout << "��ȣ�� �Է��Ͻÿ�: ";
	cin >> password;

	for (int i = 0; i < password.size(); i++) {
		if (48 <= password[i] && password[i] <= 57)
			num++;
		else if (65 <= password[i] && password[i] <= 90)
			big++;
		else if (97 <= password[i] && password[i] <= 122)
			small++;
	}
	if (num == 1 && big == 1 && small == 1)
		cout << "�����մϴ�.";
	else
		cout << "�������� �ʽ��ϴ�.";

	return 0;
}