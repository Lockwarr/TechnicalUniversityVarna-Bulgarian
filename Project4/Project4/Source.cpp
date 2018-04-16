#include <iostream>
using namespace std;
int FibFunc(int n) {
	if (n == 1) {
		return 0;
	}
	else if (n == 2) {
		return 1;
	}
	else if(n>2){
		return FibFunc(n - 1) + FibFunc(n - 2);
	}
}
void main() {
	int p ;
	cin >> p;
	for (int i = 1; i < p+1; i++) {
		cout << FibFunc(i)<<"\t";
	}
	system("pause");
}