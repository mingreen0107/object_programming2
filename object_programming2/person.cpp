#include <iostream>
#include <string>

using namespace std;

class Person {
	string name;
	int birthYear;

public:
	Person(string name, int year) {
		this->name = name;
		this->birthYear = year;
	}
	void print() {
		cout << "name: " << name << endl;
		cout << "birthday: " << birthYear << endl;
	}
};
class Student :public Person {
	string university;

public:
	Student(string name, int year, string university) :Person(name, year) {
		this->university = university;
	}
	void print() {
		Person::print();
		cout << "university: " << university << endl;
	}
};

int main() {

	Student s("minju", 2002, "GWNU");
	s.print();
	return 0;
}