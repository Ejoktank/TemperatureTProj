#pragma once
#include <map> 
#include "date.h"

using namespace std;

class Temperature 
{
	map <Date, double > calendar; // ������ ��� � ���������� 
public:
	Temperature (map<Date, double > c); // �����������
	double GetAverageTemp(bool b); // ������� ��������
	void Add (Date d, double temp); // ��������� ����� ������ � ������

};