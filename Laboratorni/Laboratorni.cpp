#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <cctype>

//За допомогою текстового редактора Блокнот створити текстовий файл chusla.txt у вашій робочій папці, в якому записати 10 цілих чисел.
//Потрібно скласти програму, яка зчитує ці дані та обчислює вказані величини: 
//Добуток чисел, кратних 3.

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream inputFile("chusla.txt");

	if (!inputFile) {
		cerr << "Помилка при відкривані файлу." << std::endl;
		return 1;
	}

	string digit;
	int sum = 1;

	while (getline(inputFile, digit)) {
		int num = stoi(digit);

		if (num % 3 == 0) {
			sum = sum * num;
		}
	}

	inputFile.close();

	cout << "Добуток чисел кратних 3:  " << sum << endl;
}
