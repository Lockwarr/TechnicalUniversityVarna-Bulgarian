#include <iostream>
#include <string>
#include <locale>

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
void search_record(student *[], int);
void print_record(student *[], int);
int search_name_max(student *[], int);

void add_record(student gr[], int *num) {
	int br;
	cout << "Колко записа искате да добавите?" << endl;
	cin >> br;
	for (int j = *num; j<*num + br; j++) {
		cout << "Въведете данните на студент номер: " << j + 1 << endl;
		cout << "Въведи име: " << endl;
		cin.ignore();
		getline(cin, gr[j].ime);
		cout << "Въведи фамилия: " << endl;
		getline(cin, gr[j].familia);
		cout << "Въведи ФН: " << endl;
		cin >> gr[j].fn;
		cout << "Въведи успех: " << endl;
		cin >> gr[j].uspeh;
		pgr[j] = &gr[j];
	}
	*num += br;
}

int search_name_max(student *pgr[], int num) {
	int index = 0;
	float max = pgr[0]->uspeh;
	for (int i = 0; i<num; i++) {
		if (pgr[i]->uspeh>max) {
			max = pgr[i]->uspeh; index = i;
		}
	}
	return index;
}

void print_record(student *pgr[], int i) {
	cout << "\nИме: " << pgr[i]->ime << endl;
	cout << "Фамилия: " << pgr[i]->familia << endl;
	cout << "ФН: " << pgr[i]->fn << endl;
	cout << "Успех: " << pgr[i]->uspeh << endl;
}

void search_record(student *pqr[], int num) {
	bool flag = false;
	long int tfn;
	cout << "Въведете търсения ФН: " << endl;
	cin >> tfn;
	for (int i = 0; i<num; i++) {
		if (tfn == pgr[i]->fn) { print_record(pgr, i); flag = true; }
	}
	if (!flag)cout << endl << "Няма такъв студент." << endl;
}

void main() {
	setlocale(LC_ALL, "bulgarian");
	student gr[N];
	int choice;
	int num = 0;
	do {
		cout << "________________________________________________________________________________" << endl;
		cout << "Меню" << endl;
		cout << "1. Добавяне на нов запис" << endl;
		cout << "2. Търсене на студент по ФН" << endl;
		cout << "3. Извеждане на данните на студент с най-висок успех" << endl;
		cout << "4. Извеждане на данните на всички студенти" << endl;
		cout << "Въведете вашия избор" << endl;
		cout << "________________________________________________________________________________" << endl;
		cin >> choice;
		switch (choice) {
		case 1: add_record(gr, &num); break;
		case 2: search_record(pgr, num); break;
		case 3: cout << "Студентът с най-висок успех е: ";
			print_record(pgr, search_name_max(pgr, num)); break;
		case 4: for (int i = 0; i<num; i++) {
			print_record(pgr, i);
		} break;
		}
	} while (choice != 5);
}