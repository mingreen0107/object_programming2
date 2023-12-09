#include <iostream>

using namespace std;

class Human {
    string name;
    int age;

public:
    Human(string n, int a) : name(n), age(a) { }

    string getName() { return name; }
    void setName(string n) { name = n; }
    int getAge() { return age; }
    void setAge(int a) { age = a; }

    void print() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
class Student : public Human {
    string major;

public:
    Student(string n, int a, string m) : Human(n, a), major(m) { }

    string getMajor() { return major; }
    void setMajor(string m) { major = m; }

    void print() {
        Human::print();
        cout << "Major: " << major << endl;
    }
};

int main() {

    Human human("╧наж", 22);
    human.print();

    return 0;
}