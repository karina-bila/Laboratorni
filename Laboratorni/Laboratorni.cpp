#include <iostream>
#include <string>
#include <windows.h>

//Знайти суму елементів двох матриць розміром 3×3.

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int rows = 3;
	const int cols = 3;

	int matrix1[rows][cols];
	int matrix2[rows][cols];
	int result[rows][cols];


	//Вводимо 1-шу матрицю
	cout << "Введіть елементи 1-ої матриці " << rows << "x" << cols << ":\n";
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cin >> matrix1[i][j];
		}
	}

	//Вводимо 2-гу матрицю
	cout << "Введіть елементи 2-ої матриці " << rows << "x" << cols << ":\n";
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cin >> matrix2[i][j];
		}
	}

	//Сума матриць
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			result[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}

	cout << "Результат суми матриць:\n";
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}