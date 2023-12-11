#include <iostream>

using namespace std;

template <typename T>
T getAverage(T arr[], int n) {
	T average = 0;

	for (int i = 0; i < n; i++) {
		average += arr[i];
	}
	average /= n;
	cout << average << endl;

	return average;
}

int main() {

	double list1[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
	getAverage(list1, 5);

	int list2[] = { 1, 2, 3, 4, 5 };
	getAverage(list2, 5);

	return 0;
}