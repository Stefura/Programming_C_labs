#include <iostream>
#include <math.h>
#include "lab3.h"
using namespace std;

int lab3() {
	double a, b;
	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter b" << endl;
	cin >> b;
	double* pa = &a;
	double* pb = &b;
	if (a > b)
		cout << "a = " << *pa * 2;
	else
		cout << "b = " << *pb / 2;

	return 0;
}