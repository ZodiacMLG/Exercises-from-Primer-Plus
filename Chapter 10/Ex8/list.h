#pragma once

typedef int Item;

void pfunc(Item& Pitems);

class List {
private:
	enum { MAX = 10 };
	Item items[MAX];
	int top;

public:
	List();
	bool addItems(const Item& item);
	bool checkisFull()const;
	bool checkisEmpty()const;
	void showElements()const;

	void visit(void(*pf)(Item&));
};