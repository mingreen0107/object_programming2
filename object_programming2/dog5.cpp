#include <iostream>
#include <memory>

using namespace std;

class Dog {
private:
	string name;
	int age;

public:
	Dog() {
		age = 1;
		name = "mimm";
	}
	~Dog() {  }
	int getAge() { return age; }
	void setAge(int dog_age) { age = dog_age; }
};

int main() {

	unique_ptr<Dog> pDog(new Dog);
	cout << "age: " << pDog->getAge() << endl;

	pDog->setAge(5);
	cout << "age: " << pDog->getAge() << endl;

	return 0;
}