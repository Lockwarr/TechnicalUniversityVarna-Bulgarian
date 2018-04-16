#include <iostream>
using namespace std;
void recF(int i) 
{
	cout << i + (i+1);
	recF(i + 1);

}
void main () {
	cout << "Fibonacci is : \n";
	recF(0);
}