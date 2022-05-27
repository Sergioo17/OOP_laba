#pragma once
#include "Administration.h"
using namespace std;
class Staff : public Administration //кадры
{
private:
	bool StaffCreated;
	int LevelOfStaff;
	int NumberOfStaff;
	int exp;
	char StaffType;
	void CheckLevel();
public:
	Staff();
	Staff(char typeOfStaff);
	void ShowLevelOfStaff();
	void RemoveStaff();
	int AddExperience(int ExpToAdd);

};

