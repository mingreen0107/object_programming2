#include <iostream>

using namespace std;

class BankAccount {
private:
    int balance;
    double rate;

public:
    // �Ű� ������ �ִ� ������: �Ű� ������ ���޵� ���� ��� ������ �Ҵ�
    BankAccount(int initial_balance = 0, double initial_rate = 0.05) : balance(initial_balance), rate(initial_rate) {}

    // deposit() ��� �Լ�: ���� ���¿� �Ա�
    void deposit(int amount) { balance += amount; }

    // withdraw() ��� �Լ�: ���� ���¿��� ���
    void withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount;
        }
        else 
            cout << "Insufficient funds!" << endl;
    }
};

int main() {

    BankAccount obj;

    obj.deposit(10000);
    obj.withdraw(500);

    return 0;
}
