#include <iostream>
#include <math.h>
#include <conio.h>
#include "lab2_2.h"
using namespace std;

int lab2_2() {
	double x;
	cout << "Enter x" << endl;
	cin >> x;
	cout << 1 / (pow(x, 2) - 2 * x - 10) << endl;
	return 0;
}