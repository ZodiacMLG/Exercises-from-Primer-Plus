#pragma once

class Golf {
private:
	enum moreC { Len = 40 };
	char fullname[Len];
	int handicap;
public:
	Golf(const char* name, int hc);
	Golf();
	void handicapAdd(int hc);
	void showgolf();
};