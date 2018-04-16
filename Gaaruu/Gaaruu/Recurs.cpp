#include <iostream>
using namespace std;
void SplitArrayToNums(int num,int length,int arr[],int counter) {
	if (num) {
		int divider = 1;
		for (int i = 0; i < length-1; i++) {
			divider *= 10;
		}
		arr[counter] = num / divider;
		cout << "arr[" << counter << "] = " << arr[counter]<<", ";
		counter++;
		SplitArrayToNums(num%divider, length-1, arr, counter);
	}
	
	
}
int lengthFunc(int num) {
	int counter = 0;
	while (num) {
		num = num / 10;
		counter++;
	}
	return counter;
}
void main() {
	int num,counter;
	counter = 0;
	cin >> num; 
	int* arr = new int[lengthFunc(num)];
	SplitArrayToNums(num,lengthFunc(num),arr,counter);
	system("pause");
}