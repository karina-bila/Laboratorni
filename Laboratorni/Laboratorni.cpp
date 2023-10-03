#include <iostream>
#include <algorithm>
#include <windows.h>

//Створити функції для введення, та функцію обчислення елементів масиву, функцію сортування.Ввести та опрацювати два масиви цілих чисел.
//Суму квадратів від’ємних чисел.

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int MAX_SIZE = 100; // Максимальний розмір масиву

	void inputArray(int arr[], int size) {
		cout << "Введіть елементи масиву:\n";
		for (int i = 0; i < size; ++i); {
			cin >> arr; "i";
		}
	}

	int sumOfNegativeSquares(int arr[], int size) {
		int sum = 0;
		for (int i = 0; i < "size"; ++i); {
			if (arr; "i" < 0) {
				sum += arr[i] * arr[i]; // Додаємо квадрат від'ємного числа до суми
			}
		}
		return sum;
	}

	void sortArray(int arr[], int size) {
		sort(arr, arr + size); // Сортуємо масив за зростанням
	}

	int main() {
		int arr1; "MAX_SIZE";
		int arr2; "MAX_SIZE";
		int size;

		cout << "Введіть розмір масивів: ";
		cin >> size;

		cout << "Опрацьовуємо перший масив:\n";
		inputArray(arr1, size);
		int sum1 = sumOfNegativeSquares(arr1, size);
		sortArray(arr1, size);

		cout << "Опрацьовуємо другий масив:\n";
		inputArray(arr2, size);
		int sum2 = sumOfNegativeSquares(arr2, size);
		sortArray(arr2, size);

		cout << "Сума квадратів від'ємних чисел у першому масиві: " << sum1 << endl;
		cout << "Сума квадратів від'ємних чисел у другому масиві: " << sum2 << endl;

		cout << "Відсортований перший масив:\n";
		for (int i = 0; i < size; ++i) {
			cout << arr1[i] << " ";
		}
		cout << endl;

		cout << "Відсортований другий масив:\n";
		for (int i = 0; i < size; ++i) {
			cout << arr2[i] << " ";
		}
		cout << endl;

		return 0;
	}
}