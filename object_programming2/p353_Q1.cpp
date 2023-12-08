#include <iostream>

using namespace std;

int main() {

	int size;
	cout << "input size: ";
	cin >> size;
	
	int* arr = new int[size];

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}
	delete[] arr;

	return 0;
}