#include <iostream>
#include <cmath>
#include "lab4_1.h"
using namespace std;
int lab4_1() {
	float A[30], B[30];
	double Rez;
	cout << "array A :";
	for (int i = 0; i < 30; i++) {
		A[i] = 30 - ((float)rand() / RAND_MAX) * 60;
		cout << (A[i]) << endl;
	}
	cout << "array B :";
	for (int i = 0; i < 30; i++) {
		B[i] = 30 - ((float)rand() / RAND_MAX) * 60;
		cout << (B[i]) << endl;
	}
	Rez = 1;
	for (int i = 1; i <= 30; i++) {
		Rez = Rez * (A[i] + B[31 - i]);
	}
	cout << "Result = " << Rez << endl;
	return 0;
}