#include <iostream>
#include <array>
//	Chapter5_Ex2
//	Redo Listing 5.4 using a type array object instead of a built-in array and type long double instead of long long. 
//  Find the value of 100!

const int ArSize = 101;

int main() {
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	//std::cout.precision(1);
	std::array<long double, ArSize> afactorials;
	//long long factorials[ArSize];
	afactorials[1] = afactorials[0] = 1LL;
	for (int i = 2; i < ArSize; i++)
	{
		afactorials[i] = i * afactorials[i - 1];
	}
	for (int i = 0; i < ArSize; i++)
	{
		std::cout << i << "! = " << afactorials[i] << std::endl;
	}

	return 0;
}