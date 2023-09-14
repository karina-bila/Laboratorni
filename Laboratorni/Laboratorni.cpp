#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a0 = 1, a1 = 2;

	cout << "a0 = " << a0 << "\n";
	cout << "a1 = " << a1 << "\n";

	for (int i = 2; i <= 12; i++) {
		int a2 = a1 - a0;
		a0 = a1;
		a1 = a2;
		cout << "a" << i << " = " << a2 << "\n";
	}
}