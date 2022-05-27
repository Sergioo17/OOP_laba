#include "Staff.h"
using namespace std;

Staff::Staff()
{	
	this->gender = "male";
	this->age = 18;
	this->name = "Noname";
	hasHigherEducation = false;
	cout << "���������� ������" << endl;	
	salary = 0;
}

Staff::Staff(string gender, int age, string name, bool education)
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
	cout << "������� " << name << " ������" << endl;
	salary = 0;
}

void Staff::showPersonaInf()
{
	cout << "������ ���������� � " << name << endl;
	cout << "�������: " << age << endl;
	cout << "���: " << gender << endl;
	if (hasHigherEducation) cout << "����� ������ �����������" << endl;
	else cout << "�� ����� ������� �����������" << endl;
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

void Staff::changeSalary(int number)
{
	if (salary-number<0)
	{
		salary += number;
		cout << "�� ������� ���� ����, ������ ������� ������ ��� " << salary << " ���/�����" << endl;
	}
	else
	{
		salary += number;
		cout << "�� ������� �� �������� �� " << number << " ������, ������ �� �������� " << salary << " ���/�����" << endl;
	}		
}



