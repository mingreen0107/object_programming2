#include <iostream>

using namespace std;

class BankAccount {
private:
    int balance;
    double rate;

public:
    // 1) �⺻ ������: �ܰ�� 0����, �������� 5%�� ����
    BankAccount() : balance(0), rate(0.05) {}

    // 2) �Ű� ������ �ִ� ������: �Ű� ������ ���޵� ���� ��� ������ �Ҵ�
    BankAccount(int initial_balance, double initial_rate)
        : balance(initial_balance), rate(initial_rate) {}

    // 3) deposit() ��� �Լ�: ���� ���¿� �Ա�
    void deposit(int amount) {
        balance += amount;
    }

    // 3) withdraw() ��� �Լ�: ���� ���¿��� ���
    void withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount;
        }
        else {
            // �ܰ��� ���� �ݾ��� ����Ϸ��� �� �� ���� �޽��� ��� (�Ǵ� �ٸ� ó��)
            std::cout << "Insufficient funds!" << std::endl;
        }
    }
};
