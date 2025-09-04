#include <iostream>
#include "list.h"

List::List() {
	top = 0;
}

bool List::checkisFull() const {
	return top == MAX;
}

bool List::checkisEmpty() const {
	return top == 0;
}

bool List::addItems(const Item& item) {
	if (top < MAX) {
		items[top++] = item;
		return true;
	}
	else {
		return false;
	}
}

void List::showElements() const {
	if (this->checkisEmpty() == true) {
		std::cout << "Empty!" << std::endl;
	}
	else {
		for (int i = 0; i < top; i++) {
			std::cout << i + 1 << "#: " << items[i] << std::endl;
		}
	}
}

void pfunc(Item& Pitems) {
	std::cout << Pitems << std::endl;
}

void List::visit(void(*pf)(Item&)) {
	for (int i = 0; i < top; i++) {
		(*pf)(items[i]);
	}
}