#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string str;
	do {
		cout << "enter: ";
		getline(cin, str);
		cout << "result: " << str;
	} while (str != "over");

	return 0;
}