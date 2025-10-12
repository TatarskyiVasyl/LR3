// Lab_03_2.cpp
// Татарський Василь Петрович
// Лабораторна робота №3.2
// Розгалуження, задане формулою: функція з параметрами
// Варіант 22

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    double a, b, c, x;  // вхідні дані
    double F;           // результат

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;

    // --- Спосіб 1: розгалуження у скороченій формі ---
    if (x + 5 < 0 && c == 0)
        F = (1 / (a * x)) - b;

    if (x + 5 > 0 && c != 0)
        F = (x - a) / x;

    if (!((x + 5 < 0 && c == 0) || (x + 5 > 0 && c != 0)))
        F = (10 * x) / (c - 4);

    cout << "\n1) F = " << F << endl;

    // --- Спосіб 2: розгалуження у повній формі ---
    if (x + 5 < 0 && c == 0)
        F = (1 / (a * x)) - b;
    else if (x + 5 > 0 && c != 0)
        F = (x - a) / x;
    else
        F = (10 * x) / (c - 4);

    cout << "2) F = " << F << endl;

    return 0;
}