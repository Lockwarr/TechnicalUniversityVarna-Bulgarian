#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
#define N 30

struct student
{
	string ime;
	string familia;
	long int fn;
	float uspeh;
}*pgr[N];

void add_record(student[], int *);
void sortName(student *[], int);
void sortSurName(student *[], int);
void sortFN (student *[], int);
void sortGrade(student *[], int);
void sortName(student * arr[], int size) {
	for (int pass = 1; pass < size; pass++)
	{
			for (int j = 0; j < size - pass; j++)
			{
				if (arr[j]->ime < arr[j + 1]->ime)
				{
					swap(arr[j]->ime, arr[j + 1]->ime);
				}
			}
	}
}
void sortSurName(student * arr[], int size) {
	for (int pass = 1; pass < size; pass++)
	{
		for (int j = 0; j < size - pass; j++)
		{
			if (arr[j]->familia < arr[j + 1]->familia)
			{
				swap(arr[j]->familia, arr[j + 1]->familia);
			}
		}
	}
}
void sortGrade(student * arr[], int size) {
	for (int pass = 1; pass < size; pass++)
	{
		for (int j = 0; j < size - pass; j++)
		{
			if (arr[j]->uspeh < arr[j + 1]->uspeh)
			{
				swap(arr[j]->uspeh, arr[j + 1]->uspeh);
			}
		}
	}
}
void sortFN(student * arr[], int size) {
	for (int pass = 1; pass < size; pass++)
	{
		for (int j = 0; j < size - pass; j++)
		{
			if (arr[j]->fn < arr[j + 1]->fn)
			{
				swap(arr[j]->fn, arr[j + 1]->fn);
			}
		}
	}
}
void add_record(student gr[], int *num) {
	int br;
	cout << "Kolko zapisa iskate da dobavite ?" << endl;
	cin >> br;
	for (int j = *num; j<*num + br; j++) {
		cout << "Vyvedete danni za student nomer: " << j + 1 << endl;
		cout << "Vyvedi ime: " << endl;
		cin.ignore();
		getline(cin, gr[j].ime);
		cout << "Vyvedi familiq: " << endl;
		getline(cin, gr[j].familia);
		cout << "Vyvedi FN: " << endl;
		cin >> gr[j].fn;
		cout << "Vyvedi uspeh: " << endl;
		cin >> gr[j].uspeh;
		pgr[j] = &gr[j];
	}
	*num += br;
}


void main() {
	student gr[N];
	gr->fn = NULL;
	int choice;
	int num = 0;
	do {
		cout << "________________________________________________________________________________" << endl;
		cout << "Menu" << endl;
		cout << "1. Dobavqne na nov zapis" << endl;
		cout << "2. Sortirane po ime" << endl;
		cout << "3. Sortirane po familiq" << endl;
		cout << "4. Sortirane po FN" << endl;
		cout << "5. Sortirane po Uspeh" << endl;
		cout << "6. Za izkluchvane" << endl;

		cout << "Vyvedete vashiqt izbor" << endl;
		cout << "________________________________________________________________________________" << endl;
		cin >> choice;
		switch (choice) {
		case 1: add_record(gr, &num); break;
		case 2:if (gr->fn == NULL) {
			cout << "There are none students!Press 1 to add some";
			break;
		}
			   else {
				   sortName(pgr, num); break;
			   }
			 
		case 3:if (gr->fn == NULL) {
			cout << "There are none students!Press 1 to add some";
			break;
		}
			   else {
				   cout << "Studentyt s nai visok uspeh e: ";
				   sortSurName(pgr, num); break;
			   }
		case 4:if (gr->fn == NULL) {
			cout << "There are none students!Press 1 to add some";
			break;
		}
			   else {
					   sortFN(pgr, num);
				   }
				   break;
		case 5:if (gr->fn == NULL) {
			cout << "There are none students!Press 1 to add some";
			break;
		}
			   else {
				   sortGrade(pgr,num);
				   break;
			   }
		}
	} while (choice <= 5);
}