#include <iostream>
#include <string>

using namespace std;

int main() {

	string s{ "Hello World!" };
	int i = s.find("W", 0);
	cout << i;

	return 0;
}