#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    int NxM[10][10], i, j, m, n, sum;
    cout << "������ ������� ����� � ��������:" << endl;
    cout << "ʳ������ �������� =";
    cin >> n;
    cout << "ʳ������ ����� = ";
    cin >> m;
    srand((unsigned)time(NULL));
    for (j = 0; j < m; j++) {
        for (i = 0; i < n; i++) {
            NxM[i][j] = 2 * rand() / RAND_MAX;
        }
    }
    cout << "������� : " << endl;
    for (j = 0; j < m; j++)
    {
        for (i = 0; i < n; i++)
            cout << setw(5) << NxM[i][j];
        cout << endl;

    }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += NxM[i][j];
        }
        if (sum > 1)
        {
            cout << "�� ������� j" << i + 1 << " ��������� �������� " << sum << ";" << endl;
        }
        else
            cout << "�� ������� j" << i + 1 << " �� ��������� ��������" << endl;
    }
}