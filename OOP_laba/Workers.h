#pragma once
#include <iostream>
#include "Staff.h"
using namespace std;

class Workers : public Staff //Рабочие
{
private:
	string Status;
public:
	Workers();
	Workers(string gender, int age, string name, bool education, unsigned int qualification);
	void changeStatus();
	void showPersonaInf();
	
};

