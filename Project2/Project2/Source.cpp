#include<iostream>
using namespace std;
long Fac(int i) {

	if (i > 0)  return i*Fac(i - 1); 
	else return 1;
}
void main() {
	int num;
	cin >> num;
	cout << "NumFac = " << Fac(num);
	system("pause");
}