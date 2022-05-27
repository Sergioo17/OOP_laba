#include "Administration.h"

Administration::Administration()
{
	this->gender = "male";
	this->age = 18;
	this->name = "Noname";
	hasHigherEducation = true;
	cout << "��� ���������� �������������" << endl;
	salary = 40000;
	qualification = 1;
	Status = "�� ��������";
}

Administration::Administration(string gender, int age, string name, bool education, unsigned int qualification)
{
	if (gender == "male" || gender == "female")
		this->gender = gender;
	else
	{
		cout << "���� ������ 2 ����!(male/female. �� ��������� ������� male)";
		gender = "male";
	}
	this->age = age;
	this->name = name;
	hasHigherEducation = education;
	cout << "��� ������������� " << name << endl;
	salary = 40000* (qualification*0.5);
	this->qualification = qualification;
	Status = "�� ��������";
}

void Administration::changeStatus()
{
	if (Status == "�� ��������")
		Status = "��������";
	else
		Status = "��������";
}

void Administration::showPersonaInf()
{
	cout << "������ ���������� �� �������������� " << name << endl;
	cout << "�������: " << age << endl;
	cout << "���: " << gender << endl;
	cout << "������������: " << qualification << endl;
	cout << "��: " << salary << endl;
	cout << "������: " << Status << endl;

}
