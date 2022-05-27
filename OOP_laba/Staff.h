#pragma once
#include <iostream>
#include <string>

using namespace std;
class Staff
{
protected:
	string gender;
	int age;
	int salary;
	int qualification;
	string name;
	bool hasHigherEducation;
public:
	Staff();
	Staff(string gender, int age, string name, bool education, unsigned int qualification);
	virtual void showPersonaInf();
	string GetName();
	string GetGenger();
	int getAge();
	bool HasEducation();
	void virtual changeSalary(int number);
	void virtual upQualification();
};

