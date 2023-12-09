#include <iostream>

using namespace std;

int main() {

	int pizza_slices = 0;
	int persons = -1;
	int slices_per_person = 0;

	try {
		cout << "input pizza slices: ";
		cin >> pizza_slices;
		cout << "input persons: ";
		cin >> persons;

		if (persons == 0)
			throw persons;
		slices_per_person = pizza_slices / persons;
		cout << "eat " << slices_per_person << endl;
	}
	catch (int e) {
		cout << "persons are " << e << endl;
	}
	return 0;
}