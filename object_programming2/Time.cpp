#include <iostream>

using namespace std;

class Time {
	int hour, min, sec;

public:
	Time(int h, int m, int s) :hour(h), min(m), sec(s) { }

	bool operator==(Time& t) {
		return (hour = t.hour && min == t.min && sec == t.sec);
	}
};

int main() {

	Time t1(1, 2, 3), t2(1, 2, 3);

	cout.setf(cout.boolalpha);
	cout << (t1 == t2);

	return 0;
}