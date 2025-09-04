#include <iostream>
#include "header.h"

BANK::BANK() {
	std::cout << "Constructor started.\n";
	const char temp[20] = "None";
	for (int i = 0; i < 20; i++) {
		name_[i] = temp[i];
	}
	cash_ = 0;
	accNumber_ = 0;
	std::cout << "Constructor ended.\n";
}

void BANK::show() {
	std::cout << "Name: " << name_ << std::endl
		<< "Cash: " << cash_ << std::endl
		<< "Deposit number: " << accNumber_ << std::endl;
}

void BANK::addMoney(double money) {
	if (money >= 0) {
		cash_ += money;
	}
	else {
		std::cout << "ERROR! Negative number!\n";
	}
}

void BANK::takeMoney(double money) {
	if (money <= cash_) {
		cash_ -= money;
	}
	else {
		std::cout << "ERROR! Value more than deposit!\n";
	}
}