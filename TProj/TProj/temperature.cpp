#include "temperaure.h"

Temperature::Temperature(vector<pair<Date, double>> m) // ������, ���������� �������� �������� ���� date � double
{
	FirstAdd = false; 
	calendar = m;
	lastDate = calendar[calendar.size()-1].first; // ������������� ��������� ����������� ����
}

void Temperature::Add(Date d, double temp)
{
	if (FirstAdd)
	{
		calendar.push_back(pair<Date, double>(d, temp)); //���������� ���� � ����������� � ���� ����
		lastDate = d; //���������� ������
		FirstAdd = false;
	}
	else
	{
		if (d < lastDate)
			throw "�������� ������� ����������\0";
		else
		{
			calendar.push_back(pair<Date, double>(d, temp)); // ��������� ���� ������� � ����� �������
			lastDate = d;
		}
	}
}

double Temperature::GetAverageTemp(bool b) 
{
	double sum = 0;
	int k = 0;
	for (int i = 0; i < calendar.size(); i++)
		if (calendar[i].first.IsDay() == b) // �������� ���� ��� ����
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

