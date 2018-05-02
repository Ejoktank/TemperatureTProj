#include "date.h"

Date::Date(int m, int d, int h)
{
	int MounthDay[13] = {-1, 31,28,31,30,31,30,31,31,30,31,30,31};
	if (m < 1 && m > 12)
	{
		throw "Invalid mounth";
	}
	if (d < 1 && d > MounthDay[m])
	{
		throw "Invalid day";
	}
	if (h < 1 && h > 24)
	{
		throw "Invalid hour";
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
	return s; //"15.12 10h"
}

bool Date::IsDay()
{
	if (hour >= 4 && hour <= 21)
		return true;
	else
		return false;
}

void Date::Show()
{

}

