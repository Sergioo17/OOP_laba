#include "Engineers.h"

Engineers::Engineers()
{
	isWorking = false;
}

void Engineers::ShowStatus()
{
	if (isWorking)
	{
		cout << "�������� ��������" << endl;
	}
	else
	{
		cout << "�������� ��������" << endl;
	}
}

void Engineers::GoDevelop()
{
	if (isWorking)
	{
		cout << "�������� � ��� ��������" << endl;
	}
	else
	{
		isWorking = true;
		cout << "�� ��������� ��������� ��������" << endl;
	}
}

void Engineers::GoRelax()
{
	if (isWorking)
	{
		isWorking = false;
		cout << "�������� ���� ��������" << endl;
	}
	else
	{
		cout << "�������� ��� ��������!" << endl;
	}
}
