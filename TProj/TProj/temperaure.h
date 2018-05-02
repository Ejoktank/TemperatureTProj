#pragma once
#include <vector> 
#include "date.h"

using namespace std;

class Temperature 
{
	bool FirstAdd;
	vector<pair<Date, double>> calendar; // массив дат и температур 
	Date lastDate; //Последнее добавленное значение
public:
	Temperature() {FirstAdd = true;} 
	Temperature (vector<pair<Date, double> > c); // конструктор
	double GetAverageTemp(bool b); // среднее значение
	void Show();
	void Add (Date d, double temp); // добавляет новую запись в массив
};