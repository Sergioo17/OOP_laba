#pragma once
#include <iostream>
#include "Staff.h"
using namespace std;
class Engineers : public Staff //Инженеры
{
private:
	bool isWorking;

public:
	Engineers();
	void ShowStatus();
	void GoDevelop();
	void GoRelax();
};

