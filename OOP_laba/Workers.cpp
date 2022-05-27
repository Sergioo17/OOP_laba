#include "Workers.h"

Workers::Workers()
{
	this->gender = "male";
	this->age = 18;
	this->name = "Noname";
	hasHigherEducation = false;
	cout << "это Безымянный рабочий" << endl;
	salary = 30000;
	qualification = 1;
	Status = "не работает";
}

Workers::Workers(string gender, int age, string name, bool education, unsigned int qualification)
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
	cout << "это рабочий " << name << endl;
	salary = 20000 * (qualification * 0.5);
	this->qualification = qualification;
	Status = "работает";
}

void Workers::changeStatus()
{
	if (Status == "не работает")
		Status = "работает";
	else
		Status = "работает";
}

void Workers::showPersonaInf()
{
	cout << "Вывожу информацию о рабочем " << name << endl;
	cout << "Возраст: " << age << endl;
	cout << "Пол: " << gender << endl;
	cout << "Квалификация: " << qualification << endl;
	cout << "ЗП: " << salary << endl;
	cout << "Статус: " << Status << endl;
}
