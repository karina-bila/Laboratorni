#include <iostream>
#include <string>
#include <algorithm>

//Створити одновимірний масив з 10 слів різних. Скласти програму:
// - впорядкувати масив в алфавітному порядку;
// -створити таблицю за формою «слово – кількість букв у слові».

using namespace std;

int main()
{
	cout << "=================\n";

	string list[10] = {
		"apple",
		"elephant",
		"guitar",
		"sunshine",
		"bicycle",
		"ocean",
		"happiness",
		"mountain",
		"bookshelf",
		"universe",
	};

	int size = sizeof(list) / sizeof(list[0]);

	for (int i = 0; i < size; ++i) {
		cout << i + 1 << " " << list[i] << "\n";
	}

	sort(list, list + size);

	cout << "=================\n";

	for (int i = 0; i < size; ++i) {
		cout << i + 1 << " " << list[i] << " - " << list[i].length() << "\n";
	}
}

