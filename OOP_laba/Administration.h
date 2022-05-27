#pragma once
#include <iostream>
#include "Staff.h"
using namespace std;

class Administration : public Staff
{
private:
	string Status;
public:
	Administration();
	Administration(string gender, int age, string name, bool education, unsigned int qualification);
	void changeStatus();
	void showPersonaInf();
	
};

