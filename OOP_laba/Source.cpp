#include <iostream>
#include "Administration.h"
#include "Staff.h"
#include "Engineers.h"
#include "Workers.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	Administration admin;
	admin.ShowNumberOfDocuments();
	admin.AddDocuments(10);
	admin.AddDocuments(1);
	admin.RemoveDocuments(12);
	admin.RemoveDocuments(4);
	cout << endl;

	Staff staff;
	staff.AddExperience(400);
	staff.AddExperience(400);
	staff.AddExperience(400);
	staff.AddExperience(2000);
	staff.AddExperience(2000);
	staff.ShowLevelOfStaff();

	cout << endl << endl;

	Engineers eng;
	eng.GoRelax();
	eng.GoDevelop();
	eng.GoDevelop();
	eng.GoRelax();
	cout << endl;

	Workers work;
	work.ShowStatus();
	work.GoRelax();
	work.MakeWork();

	work.GoRelax(10);
	work.MakeWork();
	work.GoRelax("кафе");




	return 0;
}
