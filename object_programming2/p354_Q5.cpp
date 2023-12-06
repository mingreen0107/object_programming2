#include <iostream>

using namespace std;

class Student {
	string name;

public:
	Student(string name = "") :name(name) { }
	string getName() { return name; }
	void setName(string name) { this->name = name; }
};
class MyClass {
	string className;
	Student* p;
	int size;

public:
	MyClass(string name, int size) :className(name), size(size) {
		p = new Student[size];
	}
	~MyClass() {
		delete[] p;
	}
	void setStudentName(int index, string name) {
		if (index >= 0 && index < size) {
			p[index].setName(name);
		}
	}
	void printClass() {
		cout << "Class Name: " << className << endl;
		for (int i = 0; i < size; i++) {
			cout << "Student " << i + 1 << p[i].getName() << endl;
		}
	}
};

int main() {

	MyClass specialClass("special", 3);

	specialClass.setStudentName(0, "s");
	specialClass.setStudentName(1, "m");
	specialClass.setStudentName(2, "j");


	specialClass.printClass();

	return 0;
}