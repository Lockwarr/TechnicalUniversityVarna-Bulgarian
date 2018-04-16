#include<iostream>
using namespace std;
void recFac(int i,int p,int sum) {
	sum = i*(i + 1);
	if (i < p) {
		recFac(i + 1, 0, sum);
	}
}
void main() {
	int p = 4 ;
}