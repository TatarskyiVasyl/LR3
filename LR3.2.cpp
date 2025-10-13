// Lab_03_2.cpp
// Татарський Василь Петрович
// Лабораторна робота №3.2
// Розгалуження, задане формулою: функція з параметрами
// Варіант 28

#include <iostream>
#include <cmath>
#include <iomanip>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, a, c, F;

    cout << "Введіть значення x: ";
    cin >> x;
    cout << "Введіть значення a: ";
    cin >> a;
    cout << "Введіть значення c: ";
    cin >> c;

    if (c < 0 && a != 0)
        F = -a * pow(x, 2);
    else if (c > 0 && a == 0)
        F = (a - x) / (c * x);
    else
        F = x / c;

    cout << fixed << setprecision(3);
    cout << "F = " << F << endl;

    return 0;
} 
