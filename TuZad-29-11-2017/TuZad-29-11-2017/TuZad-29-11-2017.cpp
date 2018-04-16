// TuZad-29-11-2017.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
const int N = 20;
struct friendd{
	string name;
	string mobileNum;
	string address;
};
void input(friendd fr[], int k) {
	do {
		cout << "How many friend you've got? (Max is 20): ";
		cin >> k;
		if (k > N || k < 1) {
			cout << "invalid input! Try again";
			}
		} while (k > N || k < 1);
		
		for (int i = 0; i < k; i++) {
			cout << endl << "Name: ";
			getline(cin>>ws,fr[i].name);
			cout << endl << "Mobile number: ";
			getline(cin, fr[i].mobileNum);
			cout << endl << "Address: ";
			getline(cin,fr[i].address);
	}
};
void Option1(friendd fr[]) {
	string Number;
	cout << "Enter the number you are looking for: ";
	cin >> Number;
	for (int i = 0; i < N; i++) {
		if (Number == fr[i].mobileNum) {
			cout <<endl << "Here you go!: ";
			cout << "His name ,address and mobile number are: "<<fr[i].name<<" , "<<fr[i].address<<" , "<<fr[i].mobileNum<<" !"<<endl;
			break;
		}
	}
}
void Option2(friendd fr[]) {
	string Number = "0889";
	for (int i = 0; i < N; i++) {
		if (fr[i].mobileNum.substr(0, 4) == Number) {
			cout << fr[i].mobileNum << endl;
		}
	}
}
void main()
{
	int command;
	friendd fr[N];
	input(fr,N);
	do{
	cout << "Press 1 to look for a specific friend info based on his number"<< endl;
	cout << "Press 2 for all friend's numbers starting with 0889" << endl;
	cout << "Press 3 to exit."<<endl;
	cin >> command;
	switch (command) {
	case 1: Option1(fr); break;
	case 2: Option2(fr); break;
		}
	} while (command != 3);
}

