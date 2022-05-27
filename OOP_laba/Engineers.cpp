#include "Engineers.h"

Engineers::Engineers()
{
	this->gender = "male";
	this->age = 18;
	this->name = "Noname";
	hasHigherEducation = true;
	cout << "это Безымянный инженер" << endl;
	salary = 40000;
	qualification = 1;
	Status = "не работает";
}

Engineers::Engineers(string gender, int age, string name, bool education, unsigned int qualification)
{
	if (gender == "male" || gender == "female")
		this->gender = gender;
	else
	{
		cout << "Есть только 2 пола!(male/female. по умолчанию выбрано male)";
		gender = "male";
	}
	this->age = age;
	this->name = name;
	hasHigherEducation = education;
	cout << "это инженер " << name << endl;
	salary = 60000 * (qualification * 0.5);
	this->qualification = qualification;
	Status = "не работает";
}

void Engineers::changeStatus()
{
	if (Status == "не работает")
		Status = "работает";
	else
		Status = "работает";
}

void Engineers::showPersonaInf()
{
	cout << "Вывожу информацию об инженере " << name << endl;
	cout << "Возраст: " << age << endl;
	cout << "Пол: " << gender << endl;
	cout << "Квалификация: " << qualification << endl;
	cout << "ЗП: " << salary << endl;
	cout << "Статус: " << Status << endl;
}

