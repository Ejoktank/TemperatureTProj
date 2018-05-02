#include "temperaure.h"

Temperature::Temperature(vector<pair<Date, double>> m)
{
	calendar = m;
}

void Temperature::Add(Date d, double temp)
{
	if (FirstAdd)
	{
		calendar.push_back(pair<Date, double>(d, temp)); //Добавление даты и температуры в этот день
		lastDate = d; //Предыдущая запись
		FirstAdd = false;
	}
	else
	{
		if (d < lastDate)
			throw "Неверный порядок заполнения\0";
		else
		{
			calendar.push_back(pair<Date, double>(d, temp));
			lastDate = d;
		}
	}
}

double Temperature::GetAverageTemp(bool b)
{
	double sum = 0;
	int k = 0;
	for (int i = 0; i < calendar.size(); i++)
		if (calendar[i].first.IsDay() == b)
		{
			sum += calendar[i].second;
			k++;
		}

	return sum / k;
}

void Temperature::Show()
{
	for each (pair<Date, double> var in calendar)
	{
		cout << var.first.getDate() << " = " << var.second << ";\n";
	}
}

