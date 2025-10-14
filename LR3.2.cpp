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

    double x, a, c, F1, F2;

    cout << "Введіть значення x: ";
    cin >> x;
    cout << "Введіть значення a: ";
    cin >> a;
    cout << "Введіть значення c: ";
    cin >> c;

    //"Повна" форма — через логічні вирази
    F1 = (-a * pow(x, 2)) * (c < 0 && a != 0)
        + ((a - x) / (c * x)) * (c > 0 && a == 0)
        + (x / c) * !((c < 0 && a != 0) || (c > 0 && a == 0));

    //"Скорочена" форма — через тернарний оператор
    F2 = (c < 0 && a != 0) ? -a * pow(x, 2) :
          (c > 0 && a == 0) ? (a - x) / (c * x) :
                              x / c;

    cout << fixed << setprecision(3);
    cout << "\nРезультати обчислення:\n";
    cout << "1) Повна форма (через логіку):   F = " << F1 << endl;
    cout << "2) Скорочена форма (тернарна):   F = " << F2 << endl;

    return 0;
}
