#include <iostream>

using namespace std;

int main()
{
   setlocale(LC_CTYPE, "ukr");
    int n;
   double a, sum = 0;
    cout << "n ������� ���� ����� 4 � ����� 10 (4<n<10):" << endl;
    cin >> n;
    if (4 < n && n < 10) {
        cout << "Enter " << n << " elements:" << endl;
        for (int i = 0; i < n; i++)
       {
            cout << "a" << i + 1 << "= ";
           cin >> a;
            sum += a;
        }
        cout << "sum = " << abs(sum) << endl;
    }
    else
    {
        cout << "n �� ������� � ������� �����" << endl;
    }
    return 0;
}
