#include <iostream>
#include <string>

using namespace std;

int main() {

	int cnt[26] = { 0 };
	char apb = 97;
	string s;

	cout << "문자열을 입력하시오: ";
	getline(cin, s);

	for (int i = 0; i < s.size(); i++)
		cnt[s[i] - 97]++;

	for (int i = 0; i < 26; i++) {
		cout << apb << ": " << cnt[i] << endl;
		apb++;
	}

	return 0;
}