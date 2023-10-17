#include <iostream>
#include <Windows.h>
#include <string>

//Створити функції для введення, та функцію обчислення елементів масиву, функцію сортування.Ввести та опрацювати два масиви цілих чисел.
// Суму квадратів від’ємних чисел.

using namespace std;

void printArray(int* arr, int size, string name = "Array")
{
	cout << "Масив " << name << ", розміром " << size << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int* getArray(int n, string name = "Array")
{
	cout << "Ведіть масив " << name << ", розміром " << n << endl;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	system("cls");

	printArray(arr, n, name);

	return arr;
}

void printSummOfNegativeInSquare(int* arr, int size, string name = "Array")
{
	double summ = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			summ += pow(arr[i], 2);
		}
	}

	cout << "Сума квадратів від'ємних елементів масиву " << name << " = " << summ << endl;
}

void sortAndPrintArray(int* arr, int size, string name = "Array")
{
	for (int i = 0; i < size; i++)
	{
		int min = arr[i];
		int min_i = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				min_i = j;
			}
		}
		if (i != min_i)
		{
			int tmp = arr[i];
			arr[i] = arr[min_i];
			arr[min_i] = tmp;
		}
	}

	cout << "Відсортований масив " << name << ", розміром " << size << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string name1 = "1", name2 = "2";
	int n = 5;

	//вводимо два масиви
	int* arr1 = getArray(n, name1);
	int* arr2 = getArray(n, name2);

	//Сума квадратів від'ємних елементів
	printSummOfNegativeInSquare(arr1, n, name1);
	printSummOfNegativeInSquare(arr2, n, name2);

	//Сортуємо і виводимо масиви
	sortAndPrintArray(arr1, n, name1);
	sortAndPrintArray(arr2, n, name2);

	return 0;
}