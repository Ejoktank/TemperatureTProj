#pragma once
#include <vector> 
#include "date.h"

using namespace std;

class Temperature 
{
	bool FirstAdd = true;
	vector<pair<Date, double>> calendar; // ������ ��� � ���������� 
	Date lastDate; //��������� ����������� ��������
public:
	Temperature() {}
	Temperature (vector<pair<Date, double> > c); // �����������
	double GetAverageTemp(bool b); // ������� ��������
	void Show();
	void Add (Date d, double temp); // ��������� ����� ������ � ������
};