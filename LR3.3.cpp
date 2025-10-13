#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    double R, x, y;
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    if (x <= -8)
        y = 0;
    else if (x > -8 && x <= -R)
        y = (R / (8 - R)) * (x + 8);
    else if (x > -R && x < R)
        y = -sqrt(R * R - x * x);
    else if (x >= R && x <= 5)
        y = ((3 - R) / (5 - R)) * (x - R) + R;
    else // x > 5
        y = 3;

    cout << "y = " << y << endl;
    return 0;
}