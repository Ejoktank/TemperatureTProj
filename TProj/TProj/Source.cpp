#include <iostream>
#include "date.h"
#include "temperaure.h"
#include <locale>

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	try
	{
		Date d1(8, 9, 8);
		Date d2(9, 21, 10);
		Date d3(10, 12, 23);

		Temperature t;
		t.Add(d1, -5);
		t.Add(d2, 15);
		t.Add(d3, 8);

		int a = t.GetAverageTemp(true);
		cout << a << "\n";

		t.Show();
	}
	catch (char* s)
	{
		cout << "Error: " << s << "\n";
	}

	system("pause");
}
