// Zad6TUVARNA.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int number;
	int counterChetni = 0;
		int counterNechetni = 0;
		double sum = 0;
		double proizvedenie = 1;
	int numberCount=0;
   
	while (cin>>number) {
		
		while (number > 99 || number < 0){
			
			cout << "WRONG NUMBER! Number should be between 0-99" << endl;
			cin >> number;
		}
		
		if (number % 2 == 0) {
			counterChetni++;
		}
		else {
			counterNechetni++;
		}
		proizvedenie *= number;
		sum += number;
		numberCount++;
	
	
	}
	cout << "proizvedenieto: " << proizvedenie << endl;
	cout << "sumata: " << sum <<endl;
	sum = sum / (double)numberCount;
	cout << "sredno aritmetichno: " << sum << endl;
	cout << "broi nechetni: " << counterNechetni << endl;
	cout << "broi chetni: " << counterChetni << endl;
}

