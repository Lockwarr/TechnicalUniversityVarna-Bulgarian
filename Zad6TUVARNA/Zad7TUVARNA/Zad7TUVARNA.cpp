// Zad7TUVARNA.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int counter = 0;
	int broiVintervala = 0;
	int intervalMin, intervalMax, ocenka;
	cout << "vuvedi min interval i Max interval! Ot -> "; cin >> intervalMin; cout << "do ->"; cin >> intervalMax;
	int Max = 0;
	int Min = 100;
	while (true) {
	cin >> ocenka;
	while (ocenka > 100) {
		cout << "ocenkata trqbva da e ot 0 do 100! Opitai pak! " << endl;
		cin >> ocenka;
	}
	if (ocenka < 0) {
		break;
	}
	if (Max < ocenka) {
		Max = ocenka;
	}
	else if (Min > ocenka) {
		Min = ocenka;
	}
	if (ocenka >= intervalMin && ocenka <= intervalMax) {
		broiVintervala++;
	}
	counter++;

}
	cout << "broi chisla v intervala: " << broiVintervala<<endl;
	cout << "broi vuvedeeni ocenki: "<<counter<<endl;
	cout << "Max: " << Max<<endl;
	cout << "Min: " << Min;
    return 0;
}

