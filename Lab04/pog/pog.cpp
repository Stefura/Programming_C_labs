#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    int M, N, i, j,max=0;
    cout << "������ ������� ����� � ��������:" << endl;
    cout << "ʳ������ ����� = ";
    cin >> M;
    cout << "ʳ������ �������� = ";
    cin >> N;

    int** B = new int* [M];
    cout << "������ �������� ������� :" << endl;
    for (i = 0; i < M; i++)
    {
        B[i] = new int[N];
        for (j = 0; j < N; j++)
        {
            cin >> B[i][j];
        }
        cout << endl;
    }

    cout << "������� : " << endl;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
            cout << B[i][j];
        cout << endl;
    }
  
   for (int i = 0; i <=M ; i++)
    {
     
    }
    for (int i = 0; i <= M i++)
    {
       cout<< B[i];
    }
    cout << max;
}