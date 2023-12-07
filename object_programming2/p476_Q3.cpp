#include <iostream>

using namespace std;

class Employee {
    string name;
    int salary;

public:
    Employee(string name, int salary) : name(name), salary(salary) {}

    string getName() const { return name; }
    void setName(string newName) { name = newName; }
    int getSalary() const { return salary; }
    void setSalary(int newSalary) { salary = newSalary; }

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