#include "date.h"

Date::Date(int m, int d, int h)
{
	int MounthDay[13] = {-1, 31,28,31,30,31,30,31,31,30,31,30,31};
	if (m < 1 || m > 12)
	{
		throw "Invalid mounth\0";
	}
	if (d < 1 || d > MounthDay[m])              
	{
		throw "Invalid day\0";
	}
	if (h < 1 || h > 24)
	{
		throw "Invalid hour\0";
	}
	month = m;
	day = d;
	hour = h;
}

string Date::getDate()
{
	string s = "";
	s += to_string(day);
	s += ".";
	s += to_string(month);
	s += " ";
	s += to_string(hour); 
	s += "h";
	return s; //"MM.DD HHh"
}

bool Date::IsDay()
{
	if (hour >= 4 && hour <= 21)
		return true;
	else
		return false;
}

bool Date::operator<(const Date& d)
{
	int s1 = month * 10000 + day * 100 + hour;
	int s2 = d.month * 10000 + d.day * 100 + d.hour;

	if (s1 < s2)
		return true;
	return false;
}
bool Date::operator>(const Date& d)
{
	int s1 = month * 10000 + day * 100 + hour;
	int s2 = d.month * 10000 + d.day * 100 + d.hour;

	if (s1 > s2)
		return true;
	return false;
}
bool Date::operator==(const Date& d)
{
	int s1 = month * 10000 + day * 100 + hour;
	int s2 = d.month * 10000 + d.day * 100 + d.hour;

	if (s1 == s2)
		return true;
	return false;
}
bool Date::operator<=(const Date& d)
{
	int s1 = month * 10000 + day * 100 + hour;
	int s2 = d.month * 10000 + d.day * 100 + d.hour;

	if (s1 <= s2)
		return true;
	return false;
}
bool Date::operator>=(const Date& d)
{
	int s1 = month * 10000 + day * 100 + hour;
	int s2 = d.month * 10000 + d.day * 100 + d.hour;

	if (s1 >= s2)
		return true;
	return false;
}

void Date::Show()
{
	cout << getDate();
}

