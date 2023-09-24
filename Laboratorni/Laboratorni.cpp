#include <cmath>
#include <iostream>
#include <random>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;

//генерація рандомного одновимірного масиву
vector<int> generateRandomArray(int size) {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(1, 100);

	vector<int> randomArray(size);
	for (int i = 0; i < size; ++i) {
		randomArray[i] = dis(gen);
	}

	return randomArray;
}

//пошук найбільшого та найменшого числа
void findMinMaxDifference(int arr[], int size) {
	if (size <= 0) {
		cout << "Масив порожній." << endl;
		return;
	}

	int minElement = arr[0];
	int maxElement = arr[0];

	for (int i = 1; i < size; ++i) {
		if (arr[i] < minElement) {
			minElement = arr[i];
		}
		if (arr[i] > maxElement) {
			maxElement = arr[i];
		}
	}

	int difference = maxElement - minElement;

	cout << "Найбільший елемент: " << maxElement << endl;
	cout << "Найменший елемент: " << minElement << endl;
	cout << "Різниця між найбільшим і найменшим елементами: " << difference
		<< endl;
}

// Екстремальне сортування масиву
void extremeSort(int arr[], int size) {
	for (int i = 0; i < size / 2; ++i) {
		int minIndex = i;
		int maxIndex = i;
		for (int j = i; j < size - i; ++j) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
			if (arr[j] > arr[maxIndex]) {
				maxIndex = j;
			}
		}

		swap(arr[i], arr[minIndex]);

		// Обміняти мінімальний елемент з першим у невідсортованій частині
		if (maxIndex == i) {
			maxIndex = minIndex;
		}

		// Змінити максимальний індекс, якщо максимальний елемент знаходиться спочатку
		swap(arr[size - 1 - i], arr[maxIndex]);
	}
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size;
	cout << "Введіть розмір масиву: ";
	cin >> size;

	vector<int> generatedArray = generateRandomArray(size);

	cout << "Згенерований масив: ";
	for (int i = 0; i < size; ++i) {
		cout << generatedArray[i] << " ";
	}
	cout << endl;

	findMinMaxDifference(&generatedArray[0], size);

	extremeSort(&generatedArray[0], size);

	cout << "Відсортований масив: ";
	for (int i = 0; i < size; ++i) {
		cout << generatedArray[i] << " ";
	}
	cout << endl;

	return 0;
}