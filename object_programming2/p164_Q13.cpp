// 암호 안에 대문자, 소문자, 숫자가 들어가있는지 확인

#include <iostream>
#include <string>

using namespace std;

int main() {

	string password;
	int num = 0, big = 0, small = 0;
	cout << "enter password: ";
	cin >> password;

	for (int i = 0; i < password.size(); i++) {
		if (48 <= password[i] && password[i] <= 57)
			num++;
		else if (65 <= password[i] && password[i] <= 90)
			big++;
		else if (97 <= password[i] && password[i] <= 122)
			small++;
	}
	if (num > 0 && big > 0 && small > 0)
		cout << "안전합니다.";
	else
		cout << "안전하지 않습니다.";

	return 0;
}