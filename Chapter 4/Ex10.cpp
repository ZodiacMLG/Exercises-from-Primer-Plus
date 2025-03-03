#include <iostream>
#include <array>

//	Chapter4_Ex10
//	Write a program that requests the user to enter three times for the 40-yd dash (or 40-meter, if you prefer)
//  and then displays the times and the average. 
//  Use an array object to hold the data. 
//  (Use a built-in array if array is not available.)



int main() {
	const int Size = 3;
	std::array<double, Size> ai;
	double averageTime;

	std::cout << "Enter #1 for 40-meter: ";
	std::cin >> ai[0];
	std::cout << "Enter #2 for 40-meter: ";
	std::cin >> ai[1];
	std::cout << "Enter #3 for 40-meter: ";
	std::cin >> ai[2];

	averageTime = (ai[0] + ai[1] + ai[2]) / Size;

	std::cout << "Time#1: " << ai[0] << ", average time: " << averageTime << std::endl;
	std::cout << "Time#2: " << ai[1] << ", average time: " << averageTime << std::endl;
	std::cout << "Time#3: " << ai[2] << ", average time: " << averageTime << std::endl;

	return 0;
}