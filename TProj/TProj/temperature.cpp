#include "temperaure.h"

Temperature::Temperature(vector<pair<Date, double>> m) // вектор, элементами которого является пара date и double
{
	FirstAdd = false; 
	calendar = m;
	lastDate = calendar[calendar.size()-1].first; // устанавливаем последнюю добавленную дату
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
			calendar.push_back(pair<Date, double>(d, temp)); // добавляет новы элемент в конец вектора
			lastDate = d;
		}
	}
}

double Temperature::GetAverageTemp(bool b) 
{
	double sum = 0;
	int k = 0;
	for (int i = 0; i < calendar.size(); i++)
		if (calendar[i].first.IsDay() == b) // отсивает день или ночь
		{
			sum += calendar[i].second;
			k++;
		}

	return sum / k;
}

void Temperature::Show()
{
	for (int i = 0; i < calendar.size(); i++)
	{
		cout << calendar[i].first.getDate() << " temperature: " << calendar[i].second << ";\n";
	}
}

