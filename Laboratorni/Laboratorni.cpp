#include <iostream>
#include <string>
#include <windows.h>

//Створити функцію обчислення елементів масиву.Ввести та опрацювати два масиви чисел. Знайти суму елементів двох матриць розміром 3*3.

using namespace std;

const int rows = 3;
const int cols = 3;

void SetConsoleEncoding() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}

//функція введення матриці
void InputMatrix(int matrix[rows][cols], string prompt) {
	cout << prompt << " " << rows << "x" << cols << ":\n";
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cin >> matrix[i][j];
		}
	}
}


// функція суми матриць
void SumMatrices(const int matrix1[rows][cols], const int matrix2[rows][cols], int result[rows][cols]) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			result[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
}

// функція виводу матриці
void PrintMatrix(const int matrix[rows][cols]) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	SetConsoleEncoding();

	int matrix1[rows][cols];
	int matrix2[rows][cols];
	int result[rows][cols];

	InputMatrix(matrix1, "Введіть елементи 1-ої матриці");
	InputMatrix(matrix2, "Введіть елементи 2-ої матриці");

	SumMatrices(matrix1, matrix2, result);

	cout << "Результат суми матриць:\n";
	PrintMatrix(result);

	return 0;
}