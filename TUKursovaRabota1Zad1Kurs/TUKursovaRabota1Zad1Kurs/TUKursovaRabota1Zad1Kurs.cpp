// TUKursovaRabota1Zad1Kurs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

double** Option1(int NumberOfStudents){
	double** students=new double*[25];
	double FakNomer, specialnost, grupa, SrUspeh;
	
	for (int rows = 0; rows < NumberOfStudents; rows++) {
		students[rows] = new double[4];
		for (int cols = 0; cols < 4; cols++) {
			switch (cols) {
			case 0: cout << "Enter Facultat number of " << rows + 1 << " student: "; cin >> FakNomer; students[rows][cols] = FakNomer; break;
			case 1: cout << "Enter Specialty of " << rows + 1 << " student: "; cin >> specialnost;
				while (true) {
					
					if (specialnost == 52 || specialnost == 61) {
						students[rows][cols] = specialnost; break;
					}
					else {
						cout << "Wrong Input! Enter Specialty[52 or 61] of " << rows + 1 << " student: ";
						cin >> specialnost;
					}
				}
					 break;	
			case 2: cout << "Enter Group of " << rows +1<< " student: "; cin >> grupa; 
				while (true) {
					if (grupa == 1 || grupa == 2 || grupa == 3 || grupa == 4) {
						students[rows][cols] = (int)grupa; break;
						
					}
					else {
						cout << "Wrong input! Enter Group[1-4] of " << rows + 1 << " student: ";
						cin >> grupa;
					}
				}
				break;
				
			case 3: cout << "Enter Average Success of " << rows +1<< " student: ";cin >> SrUspeh;
				while (SrUspeh < 2 || SrUspeh>6) {
						cout << "Wrong input! Enter Average Success[2-6] of " << rows + 1 << " student: ";
						cin >> SrUspeh;
					}
				students[rows][cols] = SrUspeh; break;
			}
		}
	}
/*	
for (int i = 0; i < NumberOfStudents; i++) {
		for (int cols = 0; cols < 4; cols++) {
			printf("\t%d", students[i][cols]);
		}
		printf("\n");
	}
*/
	return students;
	
}

void Option2(double** students, int NumberOfStudents) {
	double** studentsE = new double*[13];
	double** studentsAUIT = new double*[13];
	int rowE = 0;
	int rowAUIT = 0;

	for (int row = 0; row < NumberOfStudents; row++) {
		if (students[row][1] == 52) {
			studentsE[rowE] = new double[4];

		}
		else {
			studentsAUIT[rowAUIT] = new double[4];

		}
		for (int col = 0; col < 4; col++) {
			if (students[row][1] == 52) {
				studentsE[rowE][col] = students[row][col];
			}
			else {
				studentsAUIT[rowAUIT][col] = students[row][col];
			}
		}
		if (students[row][1] == 52) {
			rowE++;
		}
		else {
			rowAUIT++;
		}

	}

	cout << "Students of specialty E(code52): " << endl;
	for (int i = 0; i < rowE; i++) {
		for (int cols = 0; cols < 4; cols++) {
			switch (cols) {
			case 0: cout << "   Fakulteten nomer: " << (int)studentsE[i][cols];
				break;
			case 1: cout << "   Specialnost: E"; break;
			case 2: cout << "   Grupa Nomer: " << (int)studentsE[i][cols]; break;
			case 3: cout << "   Sreden Uspeh: "; printf("%.2f", studentsE[i][cols]); break;
			}

		}
		printf("\n");
	}
	cout << "Students of specialty AUIT(code61): " << endl;
	for (int i = 0; i < rowAUIT; i++) {
		for (int cols = 0; cols < 4; cols++) {
			switch (cols) {
			case 0: cout << "   Fakulteten nomer: " << (int)studentsAUIT[i][cols];
				break;
			case 1: cout << "   Specialnost: AUIT"; break;
			case 2: cout << "   Grupa Nomer: " << (int)studentsAUIT[i][cols]; break;
			case 3: cout << "   Sreden Uspeh: "; printf("%.2f", studentsAUIT[i][cols]); break;
			}

		}
		printf("\n");
	}
}

void Option3(double** students, int NumberOfStudents) {
	int FakNomer, specialnost, grupa,command;
	
	cout << "Type 1 to search for student." << endl << "Type 2 to exit." << endl; cin >> command;
	while (true) {
		int AreThereAnyStudents = 0;
		if (NumberOfStudents == 0) { cout << "There are 0 students. !"; break; }
		if (command == 2) { break; }
		cout << " Enter FakNomer: "; cin >> FakNomer;
		cout << "Enter specialty: "; cin >> specialnost;
		cout << "Enter group: "; cin >> grupa;
		for (int i = 0; i < NumberOfStudents; i++) {
				if (students[i][0]==FakNomer) {
					if(students[i][1]==specialnost){
						if (students[i][2] == grupa) {
							cout << "There is such a student! His Grade is: "; printf("%.2f", students[i][3]); cout << endl; AreThereAnyStudents++;
							cout << "Type 1 to search for another student. Type 2 to exit!" << endl;
							cin >> command;
							break; break;
						}
					}
				}					
		}
		if (AreThereAnyStudents == 0) {
			cout << "There are no such students! Type 1 if u want to search for another student. Type 2 if u want to exit!" << endl;
			cin >> command;
		}
	}
}

void Option4(double** students, int NumberOfStudents) {
	int group;
	int numOfStudentsWithHighGrade = 1;
	int command = 0;
	while (true) {
		if (command == 1) { break; }
		int isThereAnyStudents = 0;
		cout << "Enter any group[1-4] to look for students with grade > 5.50!" << endl; cin >> group;
		for (int i = 0; i < NumberOfStudents; i++) {
			if (group == students[i][2]) {
				if (students[i][3] >= 5.50) {
					if (students[i][1] == 52) {
						cout << "Student number " << numOfStudentsWithHighGrade << " with a grade over 5.50:" << endl;
						cout << "FakNomer: " << students[i][0] << " Specialty: E" << " Group: " << students[i][2] << " Grade: "; printf("%.2f", students[i][3]); cout << endl;
						isThereAnyStudents++;
						numOfStudentsWithHighGrade++;
					}
					else {
						cout << "Student number " << numOfStudentsWithHighGrade << " with a grade over 5.50:" << endl;
						cout << "FakNomer: " << students[i][0] << " Specialty: AUIT" << " Group: " << students[i][2] << " Grade: "; printf("%.2f", students[i][3]); cout << endl;
						isThereAnyStudents++;
						numOfStudentsWithHighGrade++;
					}
					
				}
			}
		}
		if (isThereAnyStudents == 0) {
			cout << "There are no students from this group with grade > 5.50!" << " If u want to exit , type 1!If u want to look for another , type any other number!" << endl;
			cin >> command;
		}
		else {
			cout << "Type 1 if u want to exit! Type any other number to look for students!" << endl;
			cin >> command;
		}
		
	}
}
int main()
{

	int A = 1, B = 2, C = 3, G = 4;
	int switcher, N;
	int NumberStudents = 0;
	double** students = 0;
	do {

		cout << "Choose action!" << endl;
		cout << "Press 1 to import data for N students into two-dimensional array." << endl;
		cout << "Press 2 to create two new arrays for students of Specialties E and AUIT and show the result." << endl;
		cout << "Press 3 to see if there is a student with chosen Facultat number,specialty and group." << endl;
		cout << "Press 4 to see all students from selected group with grade > 5.50 ." << endl;
		cout << "Press 5 to exit ." << endl;
		cin >> switcher;
		while (switcher < 1 || switcher >5) 
			{
				cout << "Invalid option" << endl;
				cout << "Please pick an option between 1-5" << endl;
				cin >> switcher;	
			}
		switch (switcher) {
		case 1: {
			cout << "Please input Number of students:";
			cin >> N;
			NumberStudents = N;
			 students = Option1(N);
			break;
		}
		case 2: {
			Option2(students,NumberStudents);
			break;
		}
		case 3:
			Option3(students, NumberStudents);
			break; 
		case 4: 
			Option4(students, NumberStudents);
			break;
		}
	} while (switcher != 5);

	
    return 0;
}

