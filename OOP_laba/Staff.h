#pragma once
#include <iostream>
#include <string>

using namespace std;
class Staff
{
protected:
	string gender;
	int age;
	string name;
	bool hasHigherEducation;
public:
	Staff();
	Staff(string gender, int age, string name, bool education);	
	virtual void showPersonaInf();
	string GetName();
	string GetGenger();
	int getAge();
	bool HasEducation();
};

