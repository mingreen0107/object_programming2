#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Dice {
	int result;

public:
	void roll() {
		result = (int)(rand() % 6 + 1);
	}
	int getResult() {
		return result;
	}
};

int main() {

	Dice obj;
	obj.roll();
	cout << obj.getResult();
}

/*class Dice {
	int face;
public:
	Dice() {
		srand(time(NULL));
		face = 1;
	}
	void roll() {
		face = (int)(rand() % 6 + 1);
	}
	int getFace() {
		return face;
	}
};

int main() {
	Dice dice;

	dice.roll();
	cout << "face: " << dice.getFace() << endl;

	dice.roll();
	cout << "face: " << dice.getFace();

	return 0;
}*/