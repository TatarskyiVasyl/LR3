// Lab_03_1.cpp
// Татарський Василь Петрович
// Лабораторна робота №3.1
// Розгалуження, задане формулою: функція однієї змінної
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

    double x;    // вхідний параметр
    double A;    // функціонально-стала частина (x^2 / (2.1 + sin|x|))
    double B;    // функціонально-змінна частина
    double y1;   // результат способом 1 (скорочена форма)
    double y2;   // результат способом 2 (повна форма)

    cout << "x = ";
    if (!(cin >> x)) {
        cerr << "Невірне введення.\n";
        return 1;
    }

    // Обчислення A
    A = pow(x, 2) / (2.1 + sin(fabs(x))); // x^2 / (2.1 + sin|x|)

    // ---------------------------
    // Спосіб 1: скорочена форма (окремі if)
    B = 0.0;
    if (x <= -5.0)
    {
        // ctg(e^x) = 1 / tan(e^x)
        B = 1.0 / tan(exp(x));
    }
    if (x > -5.0 && x < 0.0)
    {
        B = 2.0 - pow(x, 3.0) / (fabs(x) + 1.0);
    }
    if (x >= 0.0)
    {
        B = log(sqrt(fabs(x))) - pow(x, 2) / 2.0;
    }

    y1 = A + B;

    cout << fixed << setprecision(8);
    cout << "1) y = " << y1 << endl;

    // ---------------------------
    // Спосіб 2: повна форма (if ... else if ... else)
    if (x <= -5.0)
    {
        B = 1.0 / tan(exp(x));
    }
    else if (x < 0.0)
    {
        B = 2.0 - pow(x, 3.0) / (fabs(x) + 1.0);
    }
    else
    {
        B = log(sqrt(fabs(x))) - pow(x, 2) / 2.0;
    }

    y2 = A + B;

    cout << "2) y = " << y2 << endl;

    // ---------------------------
    // Перевірка збігу результатів
    if (fabs(y1 - y2) < 1e-9)
    {
        cout << "Результати збігаються (різниця < 1e-9)." << endl;
    }
    else
    {
        cout << "Результати різняться: y1 - y2 = " << (y1 - y2) << endl;
    }

    return 0;
}
