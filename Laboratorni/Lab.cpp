#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, y;
    cout << "Введіть число x: ";
    cin >> x;

    y = ((2 * pow(x, 2) - pow(sin(x), 2)) / (cos(2 * x) + pow(x, 2)))
        - ((x + 1) / (log(x)));
    cout << "Результат y=" << y;

    return 0;
}
