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
/*class Employee {
private:
	string name;
	int age;
	double salary;
	int years;

public:
	void result(string n, int a, double s, int y) {
		name = n;
		age = a;
		salary = s;
		years = y;

		cout << n << endl;
		cout << a << endl;
		cout << s << endl;
		cout << y;
	}
};

int main() {

	Employee obj;

	obj.result("minju", 20, 20.1, 2);

	return 0;
}*/