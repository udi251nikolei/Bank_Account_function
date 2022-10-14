// class_main.cxx
#include <iostream>
#include "Account.h"

int main() {
	double balance_input;
	double deposit_input;
	double withdraw_input;

	std::cout << "Enter your balance: ";
	std::cin >> balance_input; // User enters balance amount
	Account account{balance_input};
	
	std::cout << "How much do you wish to deposit: ";
	std::cin >> deposit_input; // User enters deposit amount
	std::cout << "How much do you wish to withdraw: ";
	std::cin >> withdraw_input; // User enters withdraw amount
	account.deposit(deposit_input);
	account.withdraw(withdraw_input);
	account.print();
}
