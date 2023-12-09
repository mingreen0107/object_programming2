#include <iostream>

using namespace std;

int main() {

	int age;

	try {
		cout << "input age: ";
		cin >> age;

		if (age < 0) throw age;

		cout << "age: " << age;
	}
	catch(int a) {
		cout << "Is your age " << age << "?";
	}
	return 0;
}