#include "Staff.h"

void Staff::CheckLevel()
{
	if (exp > 500)
	{
		LevelOfStaff += exp / 500;
		cout << "�������� ������� �� " << exp / 500 << " �������" << endl;
		exp = exp % 500;
	}
}

Staff::Staff()
{
	cout << "������� ������" << endl;
	cout << "������� ��������: " << 0 << endl;
	StaffType = 'w';
	StaffCreated = true;
	LevelOfStaff = 0;
	exp = 0;
}

Staff::Staff(char typeOfStaff)
{
	if (typeOfStaff == 'w')
	{
		cout << "������� ������" << endl;
		cout << "������� ��������: " << 0 << endl;
		StaffType = typeOfStaff;
		StaffCreated = true;
		LevelOfStaff = 0;
		exp = 0;
	}
	else if (typeOfStaff == 'e')
	{
		cout << "������� ������" << endl;
		cout << "������� ��������: " << 0 << endl;
		StaffType = typeOfStaff;
		StaffCreated = true;
		LevelOfStaff = 0;
		exp = 0;
	}
	else cout << "��� ����� ����������";
}

void Staff::ShowLevelOfStaff()
{
	if (StaffType == 'w')
		cout << "������� ���������: " << LevelOfStaff << endl;
	if (StaffType == 'e')
		cout << "������� ��������: " << LevelOfStaff << endl;
}



void Staff::RemoveStaff()
{
	if (StaffCreated)
		StaffCreated = false;
	else
		cout << "��������� � ��� ���" << endl;
}

int Staff::AddExperience(int ExpToAdd)
{
	exp += ExpToAdd;
	cout << "��������� " << ExpToAdd << " �����" << endl;
	CheckLevel();
	return 0;
}


