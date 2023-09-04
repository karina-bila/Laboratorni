#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number;
	cout << "Введіть номер маршруту трамвая: ";
	cin >> number;

	string text = "\nТрамвай рухається по маршруту: ";

	switch (number) {
	case 1:
		cout << text << "Муніципальний ринок - Електромережа";
		break;

	case 2:
		cout << text << "Барське шосе - Вишенька";
		break;

	case 3:
		cout << text << "Електромережа - Вишенька";
		break;

	case 4:
		cout << text << "Муніципальний ринок - Барське шосе";
		break;

	case 5:
		cout << text << "Електромережа - Барське шосе";
		break;

	case 6:
		cout << text << "Вишенька - Муніципальний ринок";
		break;

	default: cout << "Такого маршруту не існує!";
	}
}
