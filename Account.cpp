// Account.cpp

#include <iostream>
#include "Account.h"

Account::Account(double balance) :
	_balance{balance} {}

int Account::getBalance() {return _balance;};

void Account::balance_deposit(double deposit) {
			 _balance += deposit;};

void Account::balance_withdraw(double withdraw) {
			_balance -= withdraw;
			if (getBalance() < 0) 
				{throw std::invalid_argument{"Not enough money on your balance to withdraw your amaount.\n"};
				};
};

void Account::print() {std::cout << "Your current balance is " << getBalance() << ".\n";};
