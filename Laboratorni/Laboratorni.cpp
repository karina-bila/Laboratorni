#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

const int rows = 3;
const int cols = 3;

void SetConsoleEncoding() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}

double getB(double x) {
	//b = корінь з x
	return sqrt(x);
}

double getA(double b, double c) {
	//a = корінь кубічний з b+c по модулю
	return pow(abs(b + c), 1.0 / 3);
}

double getY(double a, double b) {
	//y = a * sin^2(b) + b * cos^2(a)
	return a * pow(sin(b), 2) + b * pow(cos(a), 2);
}

int getValue(string name) {
	int value;
	cout << "Введіть " << name << ": ";
	cin >> value;
	return value;
}

int main() {
	SetConsoleEncoding();

	int x = getValue("x");
	int c = getValue("c");

	double b = getB(x);
	double a = getA(b, c);
	double y = getY(a, b);

	cout << "b = " << b << endl;
	cout << "a = " << a << endl;
	cout << "y = " << y << endl;

	return 0;
}