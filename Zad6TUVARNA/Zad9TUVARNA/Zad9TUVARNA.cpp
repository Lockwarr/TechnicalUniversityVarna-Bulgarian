// Zad9TUVARNA.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int chislo;
	int sum = 0;
	cin >> chislo;
	for(int i=0;i<10;i++) {
		int num = chislo % 10;
		chislo = chislo / 10;
		sum += num;
	}
	cout << sum << endl;
    return 0;
}

