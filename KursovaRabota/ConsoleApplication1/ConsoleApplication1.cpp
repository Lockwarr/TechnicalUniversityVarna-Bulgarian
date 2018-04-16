#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
struct student {
	string name;
	string surname;
	int FakNom;
	double SrUspeh;
};
void AddStud(student studs[], int studCount) {
	cout << "Enter first name: ";
	cin >> studs[studCount].name;
	cout << endl << "Enter surname: ";
	cin >> studs[studCount].surname;
	cout << endl << "Enter Facultat Number: ";
	cin >> studs[studCount].FakNom;
	cout << endl << "Enter Average Grade: ";
	cin >> studs[studCount].SrUspeh;

}
void LookForStud(student *studs,int FN) {
	for (int i = 0; i < sizeof(studs)/4; i++) {
		if (FN == studs[i].FakNom) {
			cout << "THERE IS SUCH STUDENT!"<<endl;
		}
		else {
			cout << "There is no such student! " << endl;
		}
	}
}
void StudWithHighestGrade(student *studs, int studCount) {
	double srUsp = studs[0].SrUspeh;
	int studentsNum = 0;
	for (int i = 0; i < studCount; i++) {
		if (studs[i].SrUspeh < studs[i + 1].SrUspeh) {
			srUsp = studs[i+1].SrUspeh;
			studentsNum = i + 1;
			cout << "Student with highest grade is: "
				<< studs[studentsNum].name << endl;
		}
		else if (studs[i].SrUspeh == studs[studentsNum].SrUspeh) {
			cout << "Student with highest grade is: "
				<< studs[i].name << endl;
			studentsNum = i;
		}
	}

}
void AllStuds(student *studs,int studCount) {
	for (int i = 0; i <studCount; i++) {
		cout << "Student number " << i << " is :";
		cout << studs[i].name << " "
			<< studs[i].surname << " "
			<< studs[i].FakNom << " "
			<< studs[i].SrUspeh << endl;
	}
}
void main()
{
	int studCount= 0;
	int allStudCount;
	cout << "how many students are there?: ";
	cin >> allStudCount;
	student *students= new student[allStudCount];
	int command;
	do  {
		cout << "Press 1 to add student " << endl;
		cout << "Press 2 to look for student's FN " << endl;
		cout << "Press 3 to see student with highest Grade " << endl;
		cout << "Press 4 to see all students " << endl;

			cout<<"Press 5 for exit" <<endl;
		cin >> command;
		switch (command) {
		case 1:
			AddStud(students,studCount);
			studCount++;
			break;
		case 2:
			cout << "Enter Facultat Number you are looking for: ";
			int Num;
			cin >> Num;
			LookForStud(students, Num);
			break;
		case 3:
			StudWithHighestGrade(students, studCount);
			break;
		case 4:
			AllStuds(students, studCount);
			break;
		}

	}
	while (command != 5);
}

