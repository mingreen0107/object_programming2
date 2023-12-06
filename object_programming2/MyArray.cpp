#include <iostream>

using namespace std;

class MyArray {
public:
	int size;
	int* data;
	MyArray(int size);
	MyArray(const MyArray& other);
	~MyArray();
};
MyArray::MyArray(int size) {
	this->size = size;
	data = new int[size];
}
MyArray::MyArray(const MyArray& other) {
	this->size = other.size;
	this->data = new int[other.size];
	for (int i = 0; i < size; i++)
		this->data[i] = other.data[i];
}
MyArray::~MyArray() {
	if (data != nullptr) delete[] this->data;
	data = nullptr;
}