#include <iostream>
using namespace std;
void Multipl(int &num,int &proizvedenie,int delitel) {
	int numToBeMultipl = num%delitel;
	proizvedenie = proizvedenie*numToBeMultipl;
	num = num / 10;
	if (num > 0) {
		Multipl(num, proizvedenie, delitel);
	}
}
void main() {
	int num,proizvedenie;
	proizvedenie = 1;
	cin >> num;
	Multipl(num, proizvedenie,10);
	cout << proizvedenie;
	system("pause");

}