#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	const int startcash = 50;
	const int targetcash = 250;

	cout << "초기 금액 $" << startcash << endl;
	cout << "목표 금액 $" << targetcash << endl;

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
	cout << "이긴 횟수 " << win << endl;
	cout << "배팅 횟수 " << bets;

	return 0;
}