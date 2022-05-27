#include "Workers.h"

Workers::Workers()
{
	isWorking = false;
}

void Workers::ShowStatus()
{
}

void Workers::MakeWork()
{
	if (isWorking)
	{
		cout << "Рабочие уже работают!" << endl;
	}
	else
	{
		isWorking = true;
		cout << "Вы заставили рабочих работать" << endl;
	}
}

void Workers::GoRelax()
{
	if (isWorking)
	{
		isWorking = false;
		cout << "Рабочик идут отдыхать" << endl;
	}
	else
	{
		cout << "Рабочие уже отдыхают!" << endl;
	}
}

void Workers::GoRelax(int time)
{
	if (isWorking)
	{
		isWorking = false;
		cout << "Рабочие идут отдыхать на " << time << " минут" << endl;
	}
	else
	{
		cout << "Рабочие уже отдыхают!" << endl;
	}
}

void Workers::GoRelax(string place)
{
	if (isWorking)
	{
		isWorking = false;
		cout << "Рабочие идут отдыхать в " << place << endl;
	}
	else
	{
		cout << "Рабочие уже отдыхают!" << endl;
	}
}
