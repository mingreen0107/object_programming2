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
			cout << "���� ����" << endl;
		if (guess < answer)
			cout << "���� ŭ" << endl;
	} while (guess != answer);

	cout << "�����Դϴ�. �õ� Ƚ�� = " << tries;

	return 0;
}