#include <iostream>
#include<string>
using namespace std;

struct articules {
	string name;
	double price;
	string proizvoditel;
};

void AddNewItem(articules *products, int &count) {
	cout << "Enter name of product: ";
	cin >> (products + count)->name;
	cout << endl << "Enter price of product: ";
	cin >> (products + count)->price;
	cout << endl << "Enter proizvoditel of product: ";
	cin >> (products + count)->proizvoditel;
	count++;
}
void SearchForProducts(articules *products, int &count, double Price) {
	int x = 1;
	for (int i = 0; i < count; i++) {
		if ((products+i)->price == Price) {
			cout << "There is " << x << " matching type : " << endl;
			cout << (products + i)->name << endl;
			cout << (products + i)->price << endl;
			cout << (products + i)->proizvoditel << endl;
			x++;
		}

	}
}
void SortByProizvoditel(articules *products, int &count) {
	for (int p = 0; p < count; p++) {
		for (int i = 0; i < count-1; i++) {
			if ((products + i)->proizvoditel > (products + i + 1)->proizvoditel) {
				string temp;
				temp = (products + i)->proizvoditel;
				(products + i)->proizvoditel = (products + i + 1)->proizvoditel;
				(products + i + 1)->proizvoditel = temp;
				double temp1;
				temp1 = (products + i)->price;
				(products + i)->price = (products + i + 1)->price;
				(products + i + 1)->price = temp1;
				string temp2;
				temp2 = (products + i)->name;
				(products + i)->name = (products + i + 1)->name;
				(products + i + 1)->name = temp2;
			}
		}
	}
}
void main() {
	int command, count;
	articules  Products[20];
	count = 0;
	do {
		cout << "Menu:" << endl;
		cout << "Press 1 for adding a new product!" << endl;
		cout << "Press 2 to look for specified price of product!" << endl;
		cout << "Press 3 to sort!" << endl;
		cout << "Enter Your choice!: ";
		cin >> command;
		switch (command) {
		case 1:
			AddNewItem(Products, count);
			break;
		case 2:
			double price;
			cout << "Enter the price you are looking for!: ";
			cin >> price;
			SearchForProducts(Products, count, price);
			break;
		case 3:
			SortByProizvoditel(Products, count);
			for (int i = 0; i < count; i++) {
				cout << (Products + i)->name << endl;
				cout << (Products + i)->price << endl;
				cout << (Products + i)->proizvoditel << endl;
			}
			break;
		}
	} while (command > 0 && command < 4);
	system("pause");
}