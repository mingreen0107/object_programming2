// 사용자로부터 받은 문자열에서 각각의 문자가 나타나는 빈도를 계산하여 출력

#include <iostream>
#include <string>

using namespace std;

int main() {

	int cnt[26] = { 0 };
	char apb = 'a';
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