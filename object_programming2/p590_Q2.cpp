#include <iostream>

using namespace std;

int main() {

	string hand;

	try {
		cout << "It's a rock, paper, scissors game." << endl;
		cout << "Start: ";
		cin >> hand;

		if (hand != "r" && hand != "p" && hand != "s") throw hand;

		cout << hand;
	}
	catch (string h) {
		cout << "error";
	}
	return 0;
}