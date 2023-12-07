#include <iostream>

using namespace std;

class Human {
    string name;
    int age;

public:
    Human(string name, int age) : name(name), age(age) { }

    string getName() const { return name; }
    void setName(string newName) { name = newName; }
    int getAge() const { return age; }
    void setAge(int newAge) { age = newAge; }

    void print() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
class Student : public Human {
    string major;

public:
    Student(string name, int age, string major) : Human(name, age), major(major) {}

    string getMajor() const { return major; }
    void setMajor(string newMajor) { major = newMajor; }

    void print() const {
        Human::print();
        cout << "Major: " << major << endl;
    }
};

int main() {

    Human human("╧наж", 22);
    human.print();

    return 0;
}