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
	cout << endl;

	Staff staff2("female", 20, "Inna", true);
	staff2.showPersonaInf();
	return 0;
}
