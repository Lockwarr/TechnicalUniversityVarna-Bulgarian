
#include <iostream>
#include <string>

using namespace std;
void vurti(string &niz, int length,int num) {
	if (num <= length/2) {
		swap(niz[num], niz[niz.length() - num -1]);
		num++;
		vurti(niz, length,num);
	}

}
void OneToN(int N,int counter) {
	if (counter <= N) {
		cout << counter<<" ";
		counter++;
		OneToN(N, counter);
	}
}
void NToOne(int N, int One) {
	if (One <= N) {
		cout << N<<" ";
		N--;
		NToOne(N, One);
	}
}

void main()
{
	string finished = "";
	string niz = "";
	int num = 0;
	int z,n,sum,p;
	
	int choice;
	do {
		cout << "________________________________________________________________________________" << endl;
		cout << "Menu" << endl;
		cout << "1. NizReverse" << endl;
		cout << "2. OneToN" << endl;
		cout << "3. NToOne" << endl;
		cout << "4. SumNums" << endl;
		cout << "Vyvedete vashiqt izbor" << endl;
		cout << "________________________________________________________________________________" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "VuvediNiz: ";
			cin >> niz;
			cout << endl;
			n = niz.length();
			vurti(niz, n, num);
			cout << niz << endl;
			break;
		case 2:
			cin >> z;
			OneToN(z, 1);
			break;
		case 3:
			cin >> z;
			NToOne(z, 1);
			break;
		}
	} while (choice <= 4);



		system("pause");

	}
