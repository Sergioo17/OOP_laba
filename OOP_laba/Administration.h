#pragma once
#include <iostream>
#include "Staff.h"
using namespace std;

class Administration : public Staff
{
private:
	int NumberOfDocuments;

public:
	Administration();
	void ShowNumberOfDocuments();
	void AddDocuments(int DocsToAdd);
	void RemoveDocuments(int NumOfDocs);
};

