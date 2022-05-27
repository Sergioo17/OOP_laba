#include "Engineers.h"

Engineers::Engineers()
{
	isWorking = false;
}

void Engineers::ShowStatus()
{
	if (isWorking)
	{
		cout << "Инженеры работают" << endl;
	}
	else
	{
		cout << "Инженеры отдыхают" << endl;
	}
}

void Engineers::GoDevelop()
{
	if (isWorking)
	{
		cout << "Инженеры и так работают" << endl;
	}
	else
	{
		isWorking = true;
		cout << "Вы заставили инженеров работать" << endl;
	}
}

void Engineers::GoRelax()
{
	if (isWorking)
	{
		isWorking = false;
		cout << "Инженеры идут отдыхать" << endl;
	}
	else
	{
		cout << "Инженеры уже отдыхают!" << endl;
	}
}
