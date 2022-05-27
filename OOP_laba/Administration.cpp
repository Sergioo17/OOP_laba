#include "Administration.h"

Administration::Administration()
{
	NumberOfDocuments = 0;
}

void Administration::ShowNumberOfDocuments()
{
	cout << "���������� ����������: " << NumberOfDocuments << endl;
}

void Administration::AddDocuments(int DocsToAdd)
{
	NumberOfDocuments += DocsToAdd;
	cout << "��������� " << DocsToAdd << " ����������, ������ �� " << NumberOfDocuments << endl;
}

void Administration::RemoveDocuments(int DocsToRemove)
{
	if (NumberOfDocuments < DocsToRemove)
	{
		cout << "�� �������� ������ " << DocsToRemove << " ����������. ������ ������ ������, ��� ����" << "\n";
	}
	else
	{
		NumberOfDocuments -= DocsToRemove;
		cout << "������ " << DocsToRemove << " ����������, ������ �� " << NumberOfDocuments << "\n";
	}
}
