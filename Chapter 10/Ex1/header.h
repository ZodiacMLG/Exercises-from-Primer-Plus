#pragma once

class BANK {
private:
	char name_[20];
	double cash_;
	int accNumber_;
public:
	BANK();
	void show();
	void addMoney(double money);
	void takeMoney(double money);
};