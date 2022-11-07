// Account.h

#include <iostream>
#ifndef Account_h
#define Account_h

class Account {
	private:
		double _balance;

	public:
		Account(double balance);

		int getBalance();

		void balance_deposit(double deposit);

		void balance_withdraw(double withdraw);

		void print();
};

#endif // Account_h
