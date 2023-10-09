#include <iostream>
#include <ctime>

using namespace std;

int flip() {
	return rand() % 2;
}

int main() {

	// 난수 생성의 결과 값, 0, 1
	int result, front = 0, back = 0;

	for (int i = 0; i < 100; i++) {
		result = flip();
		
		if (result == 0) front++;
		else back++;
	}

	cout << "동전의 앞면:\t" << front << endl;
	cout << "동전의 뒷면:\t" << back;

	return 0;
}