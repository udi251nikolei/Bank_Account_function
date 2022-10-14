// Account.h
#include <iostream>
#ifdef Account_h
#define Account_h

class Account {
	public:
		Account() = default;
		Account(double balance) :
			_balance{balance} {}

		double _balance;

		void deposit(double deposit) {
			_balance += deposit;
		}

		void withdraw(double withdraw) {
			_balance -= withdraw;
		}

		void print() {if (_balance < 0) {throw std::invalid_argument{"Withdraw amount is more than what is currently in the account.\n"};}; else std::cout << "Your current balance is " << _balance << ".\n";}
};
#endif // Account_h
