#include <iostream>
#include <cctype>

//	Chapter6_Ex1

//	Write a program that reads keyboard input to the @ symbol and that echoes the input except for digits,
//  converting each uppercase character to lowercase, and vice versa. (Don't forget the cctype family.)

int main() {
	char ch, temp;
	int count_symbol{ 0 };

	std::cin.get(temp);

	while (temp != '\n') {
		if (temp == '@') {
			ch = temp;
			++count_symbol;
		}
		else if (std::isdigit(temp)) {
			std::cin.get(temp);
			continue;
		}
		else if (std::isalpha(temp) && std::isupper(temp)) {
			ch = std::tolower(temp);
		}
		else if (std::isalpha(temp) && std::islower(temp)) {
			ch = std::toupper(temp);
		}
		else {
			ch = temp;
		}
		std::cout << ch;
		std::cin.get(temp);
	}
	std::cout << "\n@: " << count_symbol << std::endl;
	return 0;
}