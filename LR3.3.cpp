// Lab_03_3.cpp
// Татарський Василь Петрович
// Лабораторна робота №3.3
// Розгалуження, задане графіком функції
// Варіант 28

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

    double x; // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення виразу

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // розгалуження в повній формі 
    if (x <= -8 - R)
        y = -R;
    else
        if (-8 - R <= x && x <= -8 + R)
            y = -R + sqrt(R * R - (x + 8) * (x + 8));
        else
            if (-8 + R <= x && x <= 2)
                y = (((x + 8 - R) * (R + 2)) / (10 - R)) - R;
            else
                if (2 <= x && x <= 6)
                    y = 0;
                else
                    y = (x - 6) * (x - 6);

    cout << endl;
    cout << "y = " << y << endl;
    cin.get();
    return 0;
}
