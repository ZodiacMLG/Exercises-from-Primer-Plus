#include <iostream>
#include "header.h"

Move::Move(double a, double b) {
	x = a;
	y = b;
}

void Move::showmove() const {
	std::cout << "X: " << x << std::endl
		<< "Y: " << this->y << std::endl;
}

Move Move::add(const Move& m) const {
	double tempX = this->x + m.x;
	double tempY = this->y + m.y;
	Move tempM{tempX, tempY};

	return tempM;
}

void Move::reset(double a, double b) {
	x = a;
	y = b;
}