#include <iostream>

using namespace std;

template <typename T>
T getSmallest(T arr[], int n) {
	T small = arr[0];

	for (int i = 0; i < n; i++) {
		if (small > arr[i]) small = arr[i];
	}
	cout << small << endl;

	return small;
}

int main() {

	double list1[] = { 1.2, 2.3, 1.1 };
	getSmallest(list1, 3);

	int list2[] = { 3, 2, 1 };
	getSmallest(list2, 3);

	return 0;
}