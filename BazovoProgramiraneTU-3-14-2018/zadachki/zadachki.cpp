// zadachki.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std; 
void Nsum(int &N,int &sum,int counter) {
	while(N>0){
		sum += counter + 1;
		N--;
		Nsum(N, sum,counter+1);
	}
}
void main()
{
	int N;
	int sum = 0;
	cin>> N;
	Nsum(N, sum,0);
	cout << sum;
}

