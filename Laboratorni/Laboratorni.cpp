#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	int s = 0, i;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	for (i = 5; i <= 50; i++)
	{
		s += pow(i, 3);
	}
	cout << "s=" << s << endl;

	return 0;
}
