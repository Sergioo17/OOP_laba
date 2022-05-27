#pragma once
#include <iostream>
using namespace std;
class Administration //Администрация
{
private:
	int NumberOfDocuments;

public:
	Administration();
	void ShowNumberOfDocuments();
	void AddDocuments(int DocsToAdd);
	void RemoveDocuments(int NumOfDocs);
};

