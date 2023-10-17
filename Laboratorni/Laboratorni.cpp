#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <random>
#include <cmath>
//Структура містить такі поля: Прізвище і ім’я студента, курс, група, оцінки з 4 предметів.
// Визначити середній бал оцінок кожного студента і відібрати студентів, середній бал яких більше > 75.


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


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int students_count;
	cout << "Введіть кількість студентів: ";
	cin >> students_count;
	vector<Student> students(students_count);

	for (int i = 0; i < students_count; i++)
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

	for (int i = 0; i < students_count; i++)
	{
		int general_mark = (students[i].math_mark + students[i].physics_mark + students[i].informatics_mark + students[i].history_mark) / 4;
		if (general_mark >= 75)
		{
			cout << "Студент #" << i + 1 << endl;
			cout << "Ім'я: " << students[i].first_name << endl;
			cout << "Прізвище: " << students[i].last_name << endl;
			cout << "Курс: " << students[i].course << endl;
			cout << "Група: " << students[i].group << endl;
			cout << "Середній бал: " << general_mark << endl;
			cout << "Оцінка з математики: " << students[i].math_mark << endl;
			cout << "Оцінка з фізики: " << students[i].physics_mark << endl;
			cout << "Оцінка з інформатики: " << students[i].informatics_mark << endl;
			cout << "Оцінка з історії: " << students[i].history_mark << endl;
			cout << endl;
		}
	}
}