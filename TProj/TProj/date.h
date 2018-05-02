#pragma once
#include <string>
#include <iostream>

using namespace std;

class Date 
{
	int hour, day, month;

public:
	Date() {}
	Date(int m, int d, int h);
	string getDate();
	bool IsDay();
	void Show();

	bool operator<(const Date & s);
	bool operator>(const Date & s);
	bool operator==(const Date & s);
	bool operator>=(const Date & s);
	bool operator<=(const Date & s);
};
