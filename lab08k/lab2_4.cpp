#include <iostream>
#include <math.h>
#include <conio.h>
#include "lab2_4.h"
using namespace std;
int lab2_4() {
	double a, x, c, F;
	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter x" << endl;
	cin >> x;
	cout << "Enter c" << endl;
	cin >> c;
	if (c < 0 && a != 0)
		F = (-a * pow(x, 2));
	else if (c > 0 && a == 0)
		F = ((x - a) / c * x);
	else
		F = x / c;

	cout << "Result = " << F << endl;
	return 0;
}