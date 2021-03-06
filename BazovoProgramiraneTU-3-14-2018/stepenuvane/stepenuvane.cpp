
#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;
double NStepenuvane(double N, double stepen) {
	if (stepen <= 0) {
		return 1;
	}
	return N*NStepenuvane(N, --stepen);

}
void AlgorithmOddOrEven(double &N, double stepen) {
	double chisloZaStepen = N;
	if ((int)N % 2 == 1.00) {
		for (double i = 1; i < stepen - 1; i++) {
			N = chisloZaStepen*N;
		}
		N*chisloZaStepen;
	}
	else {
		for (int i = 1; i < stepen / 2; i++) {
			N = N*chisloZaStepen;
		}
		N*N;
	}
}
void main()
{
	clock_t t;
	double N, stepen;
	t = clock();
	cin >> N;
	cout << "vuvedet stepen: ";
	cin >> stepen;
	double stepenuvansot = N;
	NStepenuvane(N, stepen);

	NStepenuvane(N, stepen);
	t = clock() - t;
	cout << "It took me " << t << " clicks!" << endl;
	AlgorithmOddOrEven;
	t = clock() - t;
	cout << "It took me " << t << " clicks!" << endl;

	pow(N, stepen);
	t = clock() - t;
	cout << "It took me " << t << " clicks!" << endl;
}

