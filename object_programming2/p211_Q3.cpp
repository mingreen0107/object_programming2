#include <iostream>
#include <string>

using namespace std;

class sum {
	int n1, n2;

public:
	void init(int x, int y) {
		n1 = x;
		n2 = y;
	}
	int add() {
		return n1 + n2;
	}
};

int main() {

	sum obj;
	obj.init(1, 2);
	cout << obj.add();
}