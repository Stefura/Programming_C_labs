#include <iostream>
#include <cmath>
#include <locale>

using namespace std;


int main()
{
	setlocale(LC_CTYPE, "ukr");
	int x;
	cout << "������ �� 1 �� 12" << endl;
	cin >> x;
	if (x == 1)
	cout << "ѳ���� � 31 ����" << endl;
	else 
	if (x == 2)
	cout << "����� � 28 ��� � ���������� ���� � 29 ��� � ��������" << endl;
	else
	if (x == 3)
	cout << "�������� � 31 ����" << endl;
	else
	if (x == 4)
	cout << "������ � 30 ���" << endl;
	else
	if (x == 5)
	cout << "������� � 31 ����" << endl;
	else
	if (x == 6)
	cout << "������� � 30 ���" << endl;
	else
	if (x == 7)
	cout << "������ � 31 ����" << endl;
	else
    if (x == 8)
	cout << "������� � 31 ����" << endl;
	else
	if (x == 9)
	cout << "�������� � 30 ���" << endl;
	else
	if (x == 10)
	cout << "������� � 31 ����" << endl;
	else
	if (x == 11)
	cout << "�������� � 30 ���" << endl;
	else
	if (x == 12)
	cout << "������� � 31 ����" << endl;
	else 
	cout << "����� � �� ������� � ������� �� 1 �� 12 =) " << endl;

}
	

