#include <iostream>
#include "lab4_2.h"
using namespace std;

int lab4_2() {
	double summ = 0, avrg = 1;
	unsigned int n = 0;
	cout << "Rozmir Array = ";
	cin >> n;
	double* a = new double[n];
	for (int i = 0; i < n; ++i)
	{
		cout << "Enter a" << i + 1 << " = ";
		cin >> a[i];

		summ = summ + a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		avrg = summ / n;
		if (a[i] <= avrg && a[i] >= 0) {
			a[i] = 0.1;
		}
		else
		{
			a[i] = a[i];
		}
		if (a[i] < 0) {
			a[i] = a[i] + 0.5;
		}

	}
	for (int i = 0; i < n; i++) {
		cout << "(" << a[i] << ")";
	}

	return 0;
}