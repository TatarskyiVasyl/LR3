// Lab_03_3.cpp
// Татарський Василь Петрович
// Лабораторна робота №3.3
// Розгалуження, задане графіком функції
// Варіант 28

#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    double x, y, R;

    cout << "Введіть x, R: ";
    cin >> x >> R;

    // Розгалуження у повній формі
    if (x <= -8 - R)
        y = 0;
    else 
        if (-8 - R < x && x <= -8 + R)
        y = -R + sqrt(R*R - (x + 8)*(x + 8));   // півколо
    else 
            if (-8 + R < x && x <= 2)
        y = 1.0 * x + 2;                            // пряма, через (0;2)
    else 
                if (2 < x && x < 6)
        y = 0;                                      // проміжок по осі X
    else 
                    if (6 <= x && x <= 8)
        y = (x - 6)*(x - 6);                          // парабола
    else
        y = 0;

    cout << "y = " << y << endl;

    return 0;
}
