#pragma once
#include <vector> 
#include "date.h"

using namespace std;

class Temperature 
{
	bool FirstAdd;
	vector<pair<Date, double>> calendar; // ������ ��� � ���������� 
	Date lastDate; //��������� ����������� ��������
public:
	Temperature() {FirstAdd = true;} 
	Temperature (vector<pair<Date, double> > c); // �����������
	double GetAverageTemp(bool b); // ������� ��������
	void Show();
	void Add (Date d, double temp); // ��������� ����� ������ � ������
};