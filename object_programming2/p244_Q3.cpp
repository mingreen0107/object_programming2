#include <iostream>

using namespace std;

class BankAccount {
private:
    int balance;
    double rate;

public:
    // 매개 변수가 있는 생성자: 매개 변수로 전달된 값을 멤버 변수에 할당
    BankAccount(int initial_balance = 0, double initial_rate = 0.05) : balance(initial_balance), rate(initial_rate) {}

    // deposit() 멤버 함수: 예금 계좌에 입금
    void deposit(int amount) { balance += amount; }

    // withdraw() 멤버 함수: 예금 계좌에서 출금
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
