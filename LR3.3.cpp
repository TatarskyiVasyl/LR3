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

    if (x <= -8 - R)
        // горизонтальна лінія зліва
        y = 0;
    else if (x > -8 - R && x <= -8 + R)
        // верхня півокруга з центром у (-8, 0)
        y = sqrt(R * R - pow(x + 8, 2));
    else if (x > -8 + R && x <= 0)
        // пряма лінія, що з'єднує (-8+R, -R) і (0, 2)
        y = ((2 - (-R)) / (0 - (-8 + R))) * (x - (-8 + R)) + (-R);
    else if (x > 0 && x <= 2)
        // лінія від (0,0) до (2,2)
        y = x;
    else if (x > 2 && x <= 6)
        // відрізок на осі X
        y = 0;
    else if (x > 6 && x <= 8)
        // парабола y = (x - 6)^2
        y = pow(x - 6, 2);
    else
        // за межами графіка
        y = 0;

    cout << "y = " << y << endl;

    return 0;
}
