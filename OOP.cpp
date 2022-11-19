#include <iostream>

using namespace std;

class Student
{
public:
	string name;

	Student() {}

	Student(int id, string n, int age)
	{
		_id = id;
		name = n;
		_age = age;
	}

	void Print()
	{
		cout << endl;
		cout << "Id: " << _id << endl;
		cout << "Имя: " << name << endl;
		cout << "Возраст: " << _age << endl;
	}

	int GetAge()
	{
		return _age;
	}

	void SetAge(int age)
	{
		_age = age;
	}

private:
	int _id{};
	int _age{};
};

int main()
{
	setlocale(0, "");

	const int size = 10;
	Student students[size];

	for (int i = 0; i < size; i++)
		students[i] = Student(i, "Name", rand() % 70);

	for (int i = 0; i < size; i++)
		students[i].Print();
}