#include <iostream>
#include <time.h>

using namespace std;

int main() {
	
	srand(time(NULL));

	int answer = rand() % 100;
	int guess;
	int tries = 0;

	do {
		cout << "guess num: ";
		cin >> guess;
		tries++;

		if (guess > answer)
			cout << "보다 작음" << endl;
		if (guess < answer)
			cout << "보다 큼" << endl;
	} while (guess != answer);

	cout << "정답입니다. 시도 횟수 = " << tries;

	return 0;
}