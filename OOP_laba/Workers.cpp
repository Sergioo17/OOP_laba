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
		cout << "������� ��� ��������!" << endl;
	}
	else
	{
		isWorking = true;
		cout << "�� ��������� ������� ��������" << endl;
	}
}

void Workers::GoRelax()
{
	if (isWorking)
	{
		isWorking = false;
		cout << "������� ���� ��������" << endl;
	}
	else
	{
		cout << "������� ��� ��������!" << endl;
	}
}

void Workers::GoRelax(int time)
{
	if (isWorking)
	{
		isWorking = false;
		cout << "������� ���� �������� �� " << time << " �����" << endl;
	}
	else
	{
		cout << "������� ��� ��������!" << endl;
	}
}

void Workers::GoRelax(string place)
{
	if (isWorking)
	{
		isWorking = false;
		cout << "������� ���� �������� � " << place << endl;
	}
	else
	{
		cout << "������� ��� ��������!" << endl;
	}
}
