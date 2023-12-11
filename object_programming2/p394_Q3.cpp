#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass(const char* str);
	MyClass(const MyClass& obj);
	~MyClass();

private:
	char* stored;
};
MyClass::MyClass(const char* str) {
	stored = new char[strlen(str) + 1];
	strcpy(stored, str);
}
MyClass::MyClass(const MyClass& obj) {
	stored = new char[strlen(obj.stored) + 1];
	strcpy(stored, obj.stored);
}
MyClass::~MyClass() {
	delete[] stored;
}

int main() {
	
	MyClass original("mimm");
	MyClass copy = original;

	return 0;
}