#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    int A, B, i, j;
    cout << "������ ������� ����� � ��������:" << endl;
        cout << "ʳ������ ����� = ";
        cin >> A;
        cout << "ʳ������ �������� = ";
        cin >> B;

    int** a = new int* [A];
    cout << "������ �������� ������� :" << endl;
    for (i = 0; i < A; i++)
    {
        a[i] = new int[B];
        for (j = 0; j < B; j++)
        {
            cout << "a[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout << "������� : " << endl;
    for (i = 0; i < A; i++)
    {
        for (j = 0; j < B; j++)
            cout << setw(5) << a[i][j];
        cout << endl;
    }

    for (j = 0; j < B; j++)
    {
        int min;
        for (i = 0; i < A; i++)
        {
            if (i == 0 || min > a[i][j])
                min = a[i][j];
        }
        cout   << "Cj" << j+1 <<" = "<< min << endl;
    }
    for (i = 0; i < A; i++)
        delete[] a[i];
    delete[] a;
}