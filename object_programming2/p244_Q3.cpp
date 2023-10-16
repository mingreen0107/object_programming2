#include <iostream>

using namespace std;

class BankAccount {
private:
    int balance;
    double rate;

public:
    // 1) 기본 생성자: 잔고는 0으로, 이자율은 5%로 설정
    BankAccount() : balance(0), rate(0.05) {}

    // 2) 매개 변수가 있는 생성자: 매개 변수로 전달된 값을 멤버 변수에 할당
    BankAccount(int initial_balance, double initial_rate)
        : balance(initial_balance), rate(initial_rate) {}

    // 3) deposit() 멤버 함수: 예금 계좌에 입금
    void deposit(int amount) {
        balance += amount;
    }

    // 3) withdraw() 멤버 함수: 예금 계좌에서 출금
    void withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount;
        }
        else {
            // 잔고보다 많은 금액을 출금하려고 할 때 에러 메시지 출력 (또는 다른 처리)
            std::cout << "Insufficient funds!" << std::endl;
        }
    }
};
