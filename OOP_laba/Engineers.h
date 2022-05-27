#pragma once
#include <iostream>
#include "Staff.h"
using namespace std;
class Engineers : public Staff //Инженеры
{
private:
	string Status;
public:
	Engineers();
	Engineers(string gender, int age, string name, bool education, unsigned int qualification);	
	void changeStatus();
	void showPersonaInf();
};

