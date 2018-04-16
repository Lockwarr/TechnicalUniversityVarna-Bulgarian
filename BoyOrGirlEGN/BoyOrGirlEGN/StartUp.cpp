#include<iostream>
#include<string>
using namespace std;
void SortEGN(string &EGN) {
	for (int i = 0; i < EGN.length() - 1; i++) {
		for (int i = 0; i < EGN.length() - 1; i++) {
			if (EGN[i] < EGN[i + 1]) {
				char temp = EGN[i];
				EGN[i] = EGN[i + 1];
				EGN[i + 1] = temp;
			}
		}
	}
}
void main() {
	string EGN;
	getline(cin, EGN);
	if (EGN.length() == 10) {
		int gender = (int)EGN[8];
		if (gender % 2 == 0) {
			cout << "Male" << endl;
		}
		else {
			cout << "Female" << endl;
		}

	}
	else {
		cout << "ERROR! EGN should be 10 numbers!" << endl;
	}
	cout << endl << "Before Sorting : ";

	for (int i = 0; i < EGN.length(); i++) {
		cout << EGN[i] << "\t";
	}
	SortEGN(EGN);
	cout << endl << "After Sorting : ";
		for (int i = 0; i < EGN.length(); i++) {
			cout << EGN[i] << "\t";
		}
	system("pause");
}
