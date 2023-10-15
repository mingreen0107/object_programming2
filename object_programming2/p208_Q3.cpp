#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
	string name;
	int age;
	int salary;
	int years;

public:
	string getName() {
		return name;
	}
	void setName(string n) {
		name = n;
	}
	int getAge() {
		return age;
	}
	void setAge(int a) {
		age = a;
	}
	int getSalary() {
		return salary;
	}
	void setSalary(int s) {
		salary = s;
	}
	int getYears() {
		return years;
	}
	void setYears(int y) {
		years = y;
	}
};

int main() {

	Employee emp;

	emp.setName("ȫ�浿");
	emp.setAge(26);
	emp.setSalary(1000000);
	emp.setYears(1);

	cout << "name: " << emp.getName() << endl;
	cout << "age: " << emp.getAge() << endl;
	cout << "salary: " << emp.getSalary() << endl;
	cout << "years: " << emp.getYears() << endl;

	return 0;
}