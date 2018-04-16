#include <iostream>
using namespace std;
double stepen(double x, int n) {
	if (n > 0) {
		return x*(stepen(x,n-1));
	}
	else if (n == 0) {
		return 1;
	}
	else if(n<0) {
		return 1 / stepen(x, -n);
	}
}
void main() {
	double x;
	int n;
	cin >> x >> n;
	cout << stepen(x, n);
	system("pause");
}