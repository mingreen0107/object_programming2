#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	const int startcash = 50;
	const int targetcash = 250;

	cout << "�ʱ� �ݾ� $" << startcash << endl;
	cout << "��ǥ �ݾ� $" << targetcash << endl;

	int bets = 0;
	int cash = startcash;
	int win = 0;

	while (cash <= targetcash) {
		bets++;
		if ((double)rand() / RAND_MAX < 0.5) {
			cash++;
			win++;
		}
		else cash--;
		if (cash == 0) break;
	}
	cout << "�̱� Ƚ�� " << win << endl;
	cout << "���� Ƚ�� " << bets;

	return 0;
}