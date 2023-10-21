#include <iostream>

using namespace std;

class Time {
public:
	int hour;
	int minute;

	Time(int h = 0, int m = 0) : hour(h), minute(m) { }

	void print() {
		cout << hour << ":" << minute;
	}
};

int main() {

	Time a(10, 30);
	a.print();
}