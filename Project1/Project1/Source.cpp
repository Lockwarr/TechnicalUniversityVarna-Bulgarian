#include<iostream>
using namespace std;

void rec(int i) {
	if (i<5) {
		rec(i+1);
		cout << i<<"\t";
	}
}
void main() {
	cout << "Stoinostite na parametyra I sa : \n";
	rec(1);
	system("pause");
}


