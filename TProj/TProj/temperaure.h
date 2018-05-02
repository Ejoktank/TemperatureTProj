#pragma once
#include <map> 
#include "date.h"

using namespace std;

class Temperature 
{
	map <Date, double > calendar; // массив дат и температур 
public:
	Temperature (map<Date, double > c); // конструктор
	double GetAverageTemp(bool b); // среднее значение
	void Add (Date d, double temp); // добавляет новую запись в массив

};