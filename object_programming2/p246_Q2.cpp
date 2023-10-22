#include <iostream>
#include <string>

using namespace std;

class Airplan {
private:
	string name;
	int capacity;
	double speed;

public:
	// 중복정의
	Airplan() {}
	Airplan(string n, int c, double s) :name(n), capacity(c), speed(s) {}

	string getName() { return name; }
	int getCapacity() { return capacity; }
	double getSpeed() { return speed; }
	void setName(string n) { name = n; }
	void setCapacity(int c) { capacity = c; }
	void setSpeed(double s) { speed = s; }

	void print() {
		cout << "name: " << name << endl;
		cout << "capacity: " << capacity << endl;
		cout << "speed: " << speed << endl;
	}
};

int main() {

	Airplan plane1;
	Airplan plane2("a", 250, 900.0);

	plane1.setName("b");
	plane1.setCapacity(200);
	plane1.setSpeed(850.0);

	cout << "plane 1: " << endl;
	plane1.print();
	cout << endl;

	cout << "plane 2: " << endl;
	plane2.print();

	return 0;
}