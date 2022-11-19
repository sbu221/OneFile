#include <iostream>

using namespace std;

class Student
{
public: // Публичные данные
	string name;

	Student() {} // Пустой конструктор

	Student(int id, string n, int age) // Конструктор с параметрами
	{
		_id = id;
		name = n;
		_age = age;
	}

	~Student() {} // Пустой деструктор

	void Print() // Вывод всей информации
	{
		cout << endl;
		cout << "Id: " << _id << endl;
		cout << "Имя: " << name << endl;
		cout << "Возраст: " << _age << endl;
	}

	int GetAge() // Геттер для возраста
	{
		return _age;
	}

	void SetAge(int age) // Сеттер для возраста
	{
		_age = age;
	}

private: // Приватные данные
	int _id{};
	int _age{};
};

int main()
{
	setlocale(0, "");

	const int size = 10;
	Student students[size]; // Массив из студентов

	for (int i = 0; i < size; i++)
		students[i] = Student(i, "Name", rand() % 70);

	for (int i = 0; i < size; i++)
		students[i].Print();
}