#include "Administration.h"

Administration::Administration()
{
	NumberOfDocuments = 0;
}

void Administration::ShowNumberOfDocuments()
{
	cout << "Количество документов: " << NumberOfDocuments << endl;
}

void Administration::AddDocuments(int DocsToAdd)
{
	NumberOfDocuments += DocsToAdd;
	cout << "Добавлено " << DocsToAdd << " документов, теперь их " << NumberOfDocuments << endl;
}

void Administration::RemoveDocuments(int DocsToRemove)
{
	if (NumberOfDocuments < DocsToRemove)
	{
		cout << "Вы пытались убрать " << DocsToRemove << " документов. Нельзя убрать больше, чем есть" << "\n";
	}
	else
	{
		NumberOfDocuments -= DocsToRemove;
		cout << "Убрано " << DocsToRemove << " документов, теперь их " << NumberOfDocuments << "\n";
	}
}
