#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

double findSum(int x, int k)
{
	double summ = 0;
	for (int i = k; i <= x; i++)
	{
		summ += (pow(2, k) * sin(x + k)) / (pow(x + 1, k));
	}
	return summ;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x = 7, k = 1;

	cout << "x = " << x << endl;
	cout << "k = " << k << endl;
	double summ = findSum(x, k);

	cout << "Сумма = " << summ << endl;

}