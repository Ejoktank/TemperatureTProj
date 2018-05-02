#pragma once
#include <string>
#include <iostream>

using namespace std;

class Date 
{
	int hour, day, month;

public:

	Date(int m, int d, int h);
	string getDate();
	bool IsDay();
	void Show()
};
