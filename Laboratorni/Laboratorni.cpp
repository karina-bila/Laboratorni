#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <cctype>
#include <sstream>
#include <vector>

//Створити за допомогою програми Блокнот текстовий файл та заповнити його числовими даними у вигляді матриці.
//Модифікувати свою програму опрацювання двовимірного масиву(лабораторна робота No8).

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream inputFile("matrix.txt");

	vector<vector<int>> matrix1;

	string line;

	while (getline(inputFile, line)) {
		vector<int> row;
		istringstream iss(line);
		int num;
		while (iss >> num) {
			row.push_back(num);
		}
		matrix1.push_back(row);
	}

	inputFile.close();

	cout << "Матриця з файлу 1:" << endl;
	for (const auto& row : matrix1) {
		for (int num : row) {
			cout << num << " ";
		}
		cout << endl;
	}

	ifstream inputFile2("matrix2.txt");

	vector<vector<int>> matrix2;

	string line2;

	while (getline(inputFile2, line2)) {
		vector<int> row;
		istringstream iss(line2);
		int num;
		while (iss >> num) {
			row.push_back(num);
		}
		matrix2.push_back(row);
	}

	inputFile2.close();

	cout << "Матриця з файлу 2:" << endl;
	for (const auto& row : matrix2) {
		for (int num : row) {
			cout << num << " ";
		}
		cout << endl;
	}

	if (matrix1.size() != matrix2.size() || matrix1[0].size() != matrix2[0].size()) {
		cout << "Матриці мають різні розміри і не можуть бути додані." << endl;
		return 1;
	}

	vector<vector<int>> sumMatrix(matrix1.size(), vector<int>(matrix1[0].size(), 0));

	for (size_t i = 0; i < matrix1.size(); ++i) {
		for (size_t j = 0; j < matrix1[0].size(); ++j) {
			sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}

	cout << "Сума матриць:" << endl;
	for (const auto& row : sumMatrix) {
		for (int num : row) {
			cout << num << " ";
		}
		cout << endl;
	}
}