// 3-17-2018Vchas.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include "stdafx.h"
#include <string>

using namespace std;
void vurti(string niz, int length,char *finished) {

	if (length <= niz.length) {
		finished[length] = niz[length];
		length++;
		vurti(niz, length, finished);
	}
	
}
void main()
{
	char *finished = "";
	string niz = "";
	int num = 0;
	cin >> niz;
	vurti(niz, num, finished);
	
}

