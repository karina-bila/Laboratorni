#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a, b, x, y, h;
	int k;
	a = 0;
	b = 5;
	cout << "Введіть кількість точок k=";
	cin >> k;
	h = (b - a) / k;
	x = a;
	cout << "x           y" << endl;
	while (x <= b)
	{
		y = sin(pow(x, 2) + 4);
		x += h; //x=x+h

		cout << x << "     " << y << endl;

	}

}
