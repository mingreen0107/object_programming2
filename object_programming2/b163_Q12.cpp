#include <iostream>
#include <string>

using namespace std;

int main() {

	int cnt[26] = { 0 };
	char apb = 97;
	string s;

	cout << "���ڿ��� �Է��Ͻÿ�: ";
	getline(cin, s);

	for (int i = 0; i < s.size(); i++)
		cnt[s[i] - 97]++;

	for (int i = 0; i < 26; i++) {
		cout << apb << ": " << cnt[i] << endl;
		apb++;
	}

	return 0;
}