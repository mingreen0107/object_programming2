#include <iostream>

using namespace std;

class Time {
private:
	int hour;
	int minute;

public:
	Time(int h, int m);
	void inc_hour();
	void print();
};
Time::Time(int h, int m) :hour(h), minute(m) {}

void Time::inc_hour() {
	++hour;
	if (hour > 23) hour = 0;
}
void Time::print() {
	cout << hour << ":" << minute << endl;
}

int main() {

	Time a(24, 59);
	a.inc_hour();
	a.print();

	return 0;
}