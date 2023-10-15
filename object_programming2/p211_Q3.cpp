#include <iostream>
#include <string>

using namespace std;

class Sum {
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

	Sum obj;

	obj.init(10, 20);
	cout << "result = " << obj.add();
}