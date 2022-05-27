#include "Staff.h"
using namespace std;

Staff::Staff()
{	
	this->gender = "male";
	this->age = 18;
	this->name = "Noname";
	hasHigherEducation = false;
	cout << "Безымянный создан" << endl;	
}

Staff::Staff(string gender, int age, string name, bool education)
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
	cout << "Человек " << name << " создан" << endl;
}

void Staff::showPersonaInf()
{
	cout << "Вывожу информацию о " << name << endl;
	cout << "Возраст: " << age << endl;
	cout << "Пол: " << gender << endl;
	if (hasHigherEducation) cout << "Имеет высшее образование" << endl;
	else cout << "Не имеет высшего образования" << endl;
}

string Staff::GetName()
{
	return name;
}

string Staff::GetGenger()
{
	return gender;
}

int Staff::getAge()
{
	return age;
}

bool Staff::HasEducation()
{
	return hasHigherEducation;
}



