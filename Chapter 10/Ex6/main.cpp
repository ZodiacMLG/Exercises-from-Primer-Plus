#include <iostream>
#include "header.h"

//	Chapter10_Ex6

//	Create member function definitions and a program that exercises the class.


int main() {
	Move move{10, 10};
	Move move2 = move.add(move);

	move.showmove();
	move.reset();
	move.showmove();

	move2.showmove();

	return 0;
}