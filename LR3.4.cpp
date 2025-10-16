// Lab_03_4.cpp
// Татарський Василь Петрович
// Лабораторна робота №3.4
// Розгалуження, задане плоскою фігурою
// Варіант 28

#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x; // вхідний аргумент
	double R; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((y * y <= R * R - x * x) && (x >= 0) 
		|| (y >= -x && y <= R && x <= 0) 
		|| (y <= x && y >= -R && x <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}