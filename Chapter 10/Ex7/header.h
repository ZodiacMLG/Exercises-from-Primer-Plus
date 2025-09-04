#pragma once

class Plorg {
private:
	char name[19];
	int CI;
public:
	Plorg();
	Plorg(const char* name_, int CI = 50);
	void changeCI(int newCI);
	void showPlorg() const;
};