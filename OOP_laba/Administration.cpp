#include "Administration.h"

Administration::Administration()
{
	this->gender = "male";
	this->age = 18;
	this->name = "Noname";
	hasHigherEducation = true;
	cout << "это Безымянный администратор" << endl;
	salary = 40000;
	qualification = 1;
	Status = "не работает";
}

Administration::Administration(string gender, int age, string name, bool education, unsigned int qualification)
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
	cout << "это Администратор " << name << endl;
	salary = 40000* (qualification*0.5);
	this->qualification = qualification;
	Status = "не работает";
}

void Administration::changeStatus()
{
	if (Status == "не работает")
		Status = "работает";
	else
		Status = "работает";
}

void Administration::showPersonaInf()
{
	cout << "Вывожу информацию об администраторе " << name << endl;
	cout << "Возраст: " << age << endl;
	cout << "Пол: " << gender << endl;
	cout << "Квалификация: " << qualification << endl;
	cout << "ЗП: " << salary << endl;
	cout << "Статус: " << Status << endl;

}
