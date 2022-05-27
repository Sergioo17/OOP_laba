#include <iostream>
#include "Administration.h"
#include "Staff.h"
#include "Engineers.h"
#include "Workers.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	Staff staff1;
	staff1.showPersonaInf();
	staff1.upQualification();
	cout << endl;

	Staff staff2("female", 20, "Inna", true, 2);
	staff2.showPersonaInf();
	cout << endl;

	Administration admin("female", 24, "Valeria", true, 4);
	admin.showPersonaInf();
	admin.changeSalary(1000);
	admin.changeStatus();
	admin.upQualification();
	cout << endl;

	Engineers eng("male", 19, "Sergey", false, 30);
	eng.showPersonaInf();
	eng.upQualification();
	cout << endl;

	Workers work("male", 25, "Ivan", false, 5);
	work.showPersonaInf();

	return 0;
}
