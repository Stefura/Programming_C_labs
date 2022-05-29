#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

struct LIBRARY
{
	char nomer[30];
	char FIO[30];
	char nazvanie[40];
	int Year;
	int kolvo;
};

struct STR
{
	LIBRARY* Library;
	STR* next;
};

STR* create(LIBRARY* Library)
{
	STR* root = new STR;
	root->Library = Library;
	root->next = NULL;
	return root;
}

void add(LIBRARY* Library, STR* root)
{
	while (root->next)
		root = root->next;
	root->next = new STR;
	root->next->Library = Library;
	root->next->next = NULL;
}

void printLIBRARY(LIBRARY* Library) //âûâîä íà ýêðàí 
{

	cout << "Nomer => " << Library->nomer << endl;
	cout << "FIO => " << Library->FIO << endl;
	cout << "Nazvanie => " << Library->nazvanie << endl;
	cout << "Year => " << Library->Year << endl;
	cout << "Kolvo => " << Library->kolvo << endl;
	cout << endl;

}
LIBRARY* makeLIBRARY()
{
	cout << "Enter book data:" << endl;
	LIBRARY* Library = new LIBRARY;
	fflush(stdin);
	cout << "Enter book nomer: => ";
	cin.getline(Library->nomer, 30);

	cout << "Enter Author's FIO: => ";
	cin.getline(Library->FIO, 30);

	cout << "Enter book name: => ";
	cin.getline(Library->nazvanie, 40);

	cout << "Enter made year: => ";
	cin >> Library->Year;

	cout << "Enter count of books: => ";
	cin >> Library->kolvo;

	return Library;
}
int choice()
{
	int answer;
	system("cls");
	cout << "Main menu" << endl;
	cout << "1. Add new books to the list" << endl;
	cout << "2. Print LIBRARY at list" << endl;
	cout << "3. Search and delete" << endl;
	cout << "4. Clear all entries" << endl;
	cout << "5. Load" << endl;
	cout << "6. Save" << endl;
	cout << "0. Exit" << endl;
	cout << "Enter your choice: ";
	cin >> answer;
	fflush(stdin);
	if (answer >= 1 && answer <= 5)
		return answer;
	else
		return 0;
}

int main()
{
	STR* root = NULL;
	int ch;
	while (1)
	{
		ch = choice();
		if (ch == 1)
		{
			cout << endl;
			if (root == NULL)
				root = create(makeLIBRARY());
			else
				add(makeLIBRARY(), root);
		}

		else if (ch == 2)
		{
			cout << endl;
			int i = 0;
			int N = 0;

			STR* proot = root;
			while (root)
			{
				N++;
				root = root->next;
			}

			LIBRARY* buf;
			LIBRARY** pLibrary = new LIBRARY * [N];
			root = proot;

			while (root)
			{
				pLibrary[i] = root->Library;
				root = root->next;
				i++;
			}

			root = proot;


			for (i = 0; i < N; i++)
				printLIBRARY(pLibrary[i]);

		}

		else if (ch == 3)
		{
			char qwe[30];
			char qw[30], q[1];
			cout << "Enter nomer of book => " << endl;
			cin.getline(qwe, 30);
			while (root)
			{
				if (!strcmp(qwe, root->Library->nomer))
				{
					{
						printLIBRARY(root->Library);
						cout << "Do you want clear this entries? (y/n) " << endl;
						cin.getline(q, 1);
						if (!strcmp(q, "y"))
						{
							root->Library = NULL;
						}
						root = root->next;
					}
				}
				else if (strcmp(qwe, root->Library->nomer))
					root = root->next;
			}

			cout << endl;
		}

		else if (ch == 5)
		{
			break;
			cout << endl;
		}

	}
	return 0;
}
