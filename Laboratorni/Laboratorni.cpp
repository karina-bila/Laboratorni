#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	int s, i;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	s = 0;
	for (i = 5; i < 50; pow(i++, 3))
		s += i;
	cout << "s=" << s << endl;
	return 0;
}
