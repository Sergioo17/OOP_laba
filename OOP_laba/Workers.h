#pragma once
#include <iostream>
#include "Staff.h"
using namespace std;
class Workers : public Staff //Рабочие
{
private:
	bool isWorking;
public:
	Workers();
	void ShowStatus();
	void MakeWork();
	void GoRelax();
	void GoRelax(int time);
	void GoRelax(string place);
};

