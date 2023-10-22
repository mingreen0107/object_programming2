#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
	int snumber;
	int age;

public:
	Person();
	Person(string name, int snum, int age) :name(name), snumber(snum), age(age) { }
};

int main() {

	

	return 0;
}