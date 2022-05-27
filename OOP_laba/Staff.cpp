#include "Staff.h"

void Staff::CheckLevel()
{
	if (exp > 500)
	{
		LevelOfStaff += exp / 500;
		cout << "Работник повышен на " << exp / 500 << " уровень" << endl;
		exp = exp % 500;
	}
}

Staff::Staff()
{
	cout << "Рабочий создан" << endl;
	cout << "Уровень рабочего: " << 0 << endl;
	StaffType = 'w';
	StaffCreated = true;
	LevelOfStaff = 0;
	exp = 0;
}

Staff::Staff(char typeOfStaff)
{
	if (typeOfStaff == 'w')
	{
		cout << "Рабочий создан" << endl;
		cout << "Уровень рабочего: " << 0 << endl;
		StaffType = typeOfStaff;
		StaffCreated = true;
		LevelOfStaff = 0;
		exp = 0;
	}
	else if (typeOfStaff == 'e')
	{
		cout << "Инженер создан" << endl;
		cout << "Уровень инженера: " << 0 << endl;
		StaffType = typeOfStaff;
		StaffCreated = true;
		LevelOfStaff = 0;
		exp = 0;
	}
	else cout << "Нет таких работников";
}

void Staff::ShowLevelOfStaff()
{
	if (StaffType == 'w')
		cout << "Уровень работника: " << LevelOfStaff << endl;
	if (StaffType == 'e')
		cout << "Уровень инженера: " << LevelOfStaff << endl;
}



void Staff::RemoveStaff()
{
	if (StaffCreated)
		StaffCreated = false;
	else
		cout << "Работника и так нет" << endl;
}

int Staff::AddExperience(int ExpToAdd)
{
	exp += ExpToAdd;
	cout << "Добавлено " << ExpToAdd << " опыта" << endl;
	CheckLevel();
	return 0;
}


