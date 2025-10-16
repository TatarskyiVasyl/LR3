// Lab_03_2.cpp
// Татарський Василь Петрович
// Лабораторна робота №3.2
// Розгалуження, задане формулою: функція з параметрами
// Варіант 28

#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a;  // вхідний параметр
    double c;  // вхідний параметр
    double x;  // вхідний аргумент
    double F;  // результат обчислення
    cout << "a = "; cin >> a;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;

    cout << endl;

    // спосіб 1: розгалуження в скороченій формі
    if (c < 0 && a != 0)
        F = -a * pow(x, 2);
    if (c > 0 && a == 0)
        F = (a - x) / (c * x);
    if (!(c < 0 && a != 0) && !(c > 0 && a == 0))
        F = x / c;

    cout << "1) F = " << F << endl;

    // спосіб 2: розгалуження в повній формі
    if (c < 0 && a != 0)
        F = -a * pow(x, 2);
    else
        if (c > 0 && a == 0)
            F = (a - x) / (c * x);
        else
            F = x / c;

    cout << "2) F = " << F << endl;

    cin.get();
    return 0;
}
