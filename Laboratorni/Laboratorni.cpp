﻿#include <iostream>
#include <cmath>
#include <windows.h>
#include <string>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a = 0.0; // Початок відрізку
	double b = 5.0; // Кінець відрізку
	int k; // Кількість точок
	cout << "Введіть натуральне число: k=";
	cin >> k;
	double h = (b - a) / k;

	for (int i = 0; i <= k; i++) {
		double xi = a + i * h;
		double y = sin(pow(xi, 2) + 4);
		cout << "x[" << i << "] = " << xi << ", y[" << i << "] = " << y << endl;
	}

	return 0;
}