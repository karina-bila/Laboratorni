#include <iostream>
#include <string>
#include <windows.h>

//Шляхом вирізання та склеювання отримати зі слова „астрономія” 3 іменники в однині. Визначити довжину стриманих слів.

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string word = "астрономія";

	string word1 = word.substr(0, 1) + word.substr(2, 1) + word.substr(6, 2);
	string word2 = word.substr(0, 8);
	string word3 = word.substr(1, 2) + word.substr(4, 1) + word.substr(3, 2) + word.substr(5, 1) + word.substr(0, 1);

	cout << "Іменник 1: " << word1 << ", довжина: " << word1.length() << "\n";
	cout << "Іменник 2: " << word2 << ", довжина: " << word2.length() << "\n";
	cout << "Іменник 3: " << word3 << ", довжина: " << word3.length() << "\n";

	return 0;
}
