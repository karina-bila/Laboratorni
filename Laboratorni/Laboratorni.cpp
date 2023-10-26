#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <windows.h>
#include <random>
#include <cmath>

//Модифікувати свою програму опрацювання структур (лабораторна робота No13-14) таким чином, 
//щоб введені дані були записані у файл "results.txt".

using namespace std;

vector<string> FirstNames = {
  "Emma", "Liam", "Olivia", "Noah", "Ava", "Isabella", "Sophia", "Mia", "Charlotte", "Amelia",
  "Harper", "Evelyn", "Abigail", "Emily", "Ella", "Scarlett", "Grace", "Lily", "Avery", "Sofia"
};

vector<string> LastNames = {
  "Smith", "Johnson", "Williams", "Brown", "Jones", "Garcia", "Miller", "Davis", "Rodriguez", "Martinez",
  "Hernandez", "Lopez", "Gonzalez", "Wilson", "Anderson", "Thomas", "Taylor", "Moore", "Jackson", "Martin"
};

vector<string> Groups = {
  "SOM", "SOF", "SOI", "BCS", "BIS", "BSE", "BSS", "BSP", "BSE", "BSS"
};

struct Student
{
	string first_name;
	string last_name;
	int course{};
	string group;
	int math_mark{};
	int physics_mark{};
	int informatics_mark{};
	int history_mark{};
};

string getRandomFirstName()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(0, FirstNames.size() - 1);
	return FirstNames[dis(gen)];
}

string getRandomLastName()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(0, LastNames.size() - 1);
	return LastNames[dis(gen)];
}

string getRandomGroup()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(0, Groups.size() - 1);
	return Groups[dis(gen)];
}

int getRandomInt(int min, int max)
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(min, max);
	return dis(gen);
}

vector<Student> getStudents(int count) {
	vector<Student> students(count);

	for (int i = 0; i < count; i++)
	{
		students[i].first_name = getRandomFirstName();
		students[i].last_name = getRandomLastName();
		students[i].course = getRandomInt(1, 5);
		students[i].group = getRandomGroup();
		students[i].math_mark = getRandomInt(50, 100);
		students[i].physics_mark = getRandomInt(50, 100);
		students[i].informatics_mark = getRandomInt(50, 100);
		students[i].history_mark = getRandomInt(50, 100);
	}

	return students;
}

vector<Student> printSuccessfulStudents(vector<Student>& students, int successGrade) {
	vector<Student> successfulStudents;

	for (const auto& student : students) {
		int general_mark = (student.math_mark + student.physics_mark + student.informatics_mark + student.history_mark) / 4;
		if (general_mark >= successGrade) {
			cout << "Ім'я: " << student.first_name << endl;
			cout << "Прізвище: " << student.last_name << endl;
			cout << "Курс: " << student.course << endl;
			cout << "Група: " << student.group << endl;
			cout << "Середній бал: " << general_mark << endl;
			cout << "Оцінка з математики: " << student.math_mark << endl;
			cout << "Оцінка з фізики: " << student.physics_mark << endl;
			cout << "Оцінка з інформатики: " << student.informatics_mark << endl;
			cout << "Оцінка з історії: " << student.history_mark << endl;
			cout << endl;

			successfulStudents.push_back(student);
		}
	}

	cout << "Кількість студентів, що мають середній бал більше "
		<< successGrade << ": "
		<< successfulStudents.size()
		<< " з " << students.size() << endl;

	return successfulStudents; // Return the vector of successful students
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int studentsCount;
	cout << "Введіть кількість студентів: ";
	cin >> studentsCount;
	vector<Student> students = getStudents(studentsCount);

	ofstream outputFile("students.txt");

	for (const auto& student : students) {
		outputFile << "Ім'я: " << student.first_name << endl;
		outputFile << "Прізвище: " << student.last_name << endl;
		outputFile << "Курс: " << student.course << endl;
		outputFile << "Група: " << student.group << endl;
		outputFile << "Середній бал: " << (student.math_mark + student.physics_mark + student.informatics_mark + student.history_mark) / 4 << endl;
		outputFile << "Оцінка з математики: " << student.math_mark << endl;
		outputFile << "Оцінка з фізики: " << student.physics_mark << endl;
		outputFile << "Оцінка з інформатики: " << student.informatics_mark << endl;
		outputFile << "Оцінка з історії: " << student.history_mark << endl;
		outputFile << endl;
	}

	outputFile.close();

	int successGrade = 75;
	vector<Student> successfulStudents = printSuccessfulStudents(students, successGrade);

	ofstream outputFile2("successful_students.txt");

	for (const auto& student : successfulStudents) {
		outputFile2 << "Ім'я: " << student.first_name << endl;
		outputFile2 << "Прізвище: " << student.last_name << endl;
		outputFile2 << "Курс: " << student.course << endl;
		outputFile2 << "Група: " << student.group << endl;
		outputFile2 << "Середній бал: " << (student.math_mark + student.physics_mark + student.informatics_mark + student.history_mark) / 4 << endl;
		outputFile2 << "Оцінка з математики: " << student.math_mark << endl;
		outputFile2 << "Оцінка з фізики: " << student.physics_mark << endl;
		outputFile2 << "Оцінка з інформатики: " << student.informatics_mark << endl;
		outputFile2 << "Оцінка з історії: " << student.history_mark << endl;
		outputFile2 << endl;
	}

	outputFile2.close();
}