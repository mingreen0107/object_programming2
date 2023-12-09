#include <iostream>

using namespace std;

class Employee {
    string name;
    int salary;

public:
    Employee(string n, int s) : name(n), salary(s) {}

    string getName() { return name; }
    void setName(string n) { name = n; }
    int getSalary() { return salary; }
    void setSalary(int s) { salary = s; }

    int computeSalary(int workingDays) {
        return salary * workingDays;
    }
};

int main() {

    Employee employee("ȫ�浿", 10000);

    cout << "Employee Name: " << employee.getName() << endl;
    cout << "Monthly Salary: " << employee.computeSalary(20) << endl;

    return 0;
}