#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double f, a = -1, b = -4, c = 6.3;

    f = ((sqrt(a / b - a) / (pow(b, 2) + a * b)) - fabs(b + 2));
    cout << "Результат f=" << f;

    return 0;
}
