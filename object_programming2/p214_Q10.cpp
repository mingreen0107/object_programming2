#include <iostream>
#include <string>

using namespace std;

class BankAccount {
	string number;
	int balance;
	
public:
	void init(string n, int b) {
		number = n;
		balance = b;
	}
	void deposit(int amount) {
		balance += amount;
	}
	void withdraw(int amount) {
		if (balance >= amount) {
			balance -= amount;
		}
		else cout << "Insufficient funds" << endl;
	}
	void printBalance() {
		cout << "balance: " << balance << endl;
	}

	void result() {

	}
};
int main() {
	BankAccount account;

	account.init("3333-23-3477227", 1000);
	account.printBalance();

	account.deposit(500);
	account.printBalance();

	account.withdraw(800);
	account.printBalance();

	return 0;
}