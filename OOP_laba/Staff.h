#pragma once
using namespace std;
class Staff
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

