#include <iostream>
#include <math.h>
#include "lab1_2.h"
using namespace std;
int lab1_2() {
	setlocale(LC_CTYPE, "ukr");
	double dyim, dovs, num1;
	cout << "Enter dyim" << endl;
	cin >> num1;
	dyim = 0.0254; /*1 dyim eto 0.0254 metra*/
	dovs = num1 * dyim;
	cout << dovs << " meters" << endl;
	return 0;
}