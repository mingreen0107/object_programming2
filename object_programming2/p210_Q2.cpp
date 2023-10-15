#include <iostream>
#include <string>

using namespace std;

class Computer {
	string name;
	int RAM;
	double cpu_speed;

public:
	void setComputer(string n, int r, double c) {
		name = n;
		RAM = r;
		cpu_speed = c;
	}
	void print() {
		cout << "name: " << name << endl;
		cout << "RAM: " << RAM << endl;
		cout << "cpu_speed: " << cpu_speed << endl;
	}
};

int main() {

	Computer obj;

	obj.setComputer("오피스컴퓨터", 8, 4.2);
	obj.print();

	return 0;
}