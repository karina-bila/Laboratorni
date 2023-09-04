#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x;
	cout << "Введіть число x: ";
	cin >> x;

	double y;

	if (x < 0) {
		y = pow(sin(x), 2);
	}
	else if (x >= 0) {
		y = log(x + 1);
	}

	cout << "\nФункція y=" << y;

}


