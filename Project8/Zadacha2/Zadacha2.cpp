#include<iostream>
using namespace std;
void printWithoutFirst(int count, int delitel) {
	cout << count << endl;
	if (count > 0) {
		count = count %delitel;
		delitel = delitel / 10;
		if (count != 0) {
			printWithoutFirst(count, delitel);
		}
	}

}
void printWithFirst(int num, int multiplier) {
	cout << num%multiplier << endl;
		multiplier = multiplier * 10;

		if (num%multiplier != num) {
			printWithFirst(num, multiplier);
		}else{
			cout << num%multiplier << endl;
		
	}
}
void main() {
	int delitel = 100000;
	int num;
	cin >> num;
	int num2 = num;
	printWithoutFirst(num, delitel);
	printWithFirst(num2, 10);
	system("pause");
}