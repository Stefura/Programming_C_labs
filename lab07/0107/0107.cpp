#include <iostream>

using namespace std;

int counter;

int combin(int n, int k)
{
    if ((n == k) || (k == 0)) { counter++; return 1; }
    counter += 2;
    return combin(n - 1, k) + combin(n - 1, k - 1);
}
char* argv[];
int main()
{
    int argc;

    int n = 10, k = 3, c;
    counter = 0;
    c = combin(n, k);
    cout << "Answer:" << endl;
    cout << "C(" << n << "," << k << ")=" << c << ", counter=" << counter <<endl;
    return 0;
}