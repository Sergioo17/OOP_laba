#pragma once
#include <iostream>
using namespace std;
class Administration //�������������
{
private:
	int NumberOfDocuments;

public:
	Administration();
	void ShowNumberOfDocuments();
	void AddDocuments(int DocsToAdd);
	void RemoveDocuments(int NumOfDocs);
};

