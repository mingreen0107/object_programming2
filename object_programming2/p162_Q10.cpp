#include <iostream>
#include <ctime>

using namespace std;

int flip() {
	return rand() % 2;
}

int main() {

	// ���� ������ ��� ��, 0, 1
	int result, front = 0, back = 0;

	for (int i = 0; i < 100; i++) {
		result = flip();
		
		if (result == 0) front++;
		else back++;
	}

	cout << "������ �ո�:\t" << front << endl;
	cout << "������ �޸�:\t" << back;

	return 0;
}