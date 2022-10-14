// class_main.cxx
#include <iostream>
#include "Account.h"

int main() {
	double balance_input;
	double deposit_input;
	double withdraw_input;

	std::cout << "Enter your balance: ";
	std::cin >> balance_input; // User enters balance amount
	std::cout << "How much do you wish to deposit: ";
	std::cin >> deposit_input; // User enters deposit amount
	std::cout << "How much do you wish to withdraw: ";
	std::cin >> withdraw_input; // User enters withdraw amount
	
	Account balance{balance_input, deposit_input, withdraw_input};
	balance.deposit();
	balance.withdraw();
	balance.print();
}
