#include <iostream>

using namespace std;
void reverse(int * masiv, int count) {
	int counterRev = 0;
	int temp;
	for (int i = 0; i < count / 2; i++) {
		temp = *(masiv+i);
		*(masiv+i) = *(masiv+(count-1)-i);
		*(masiv+(count-1)-i) = temp;
		counterRev++;

	}
}
void print(int * masiv, int count) {
	for (int i = 0; i < count; i++) {
		cout << masiv[i] << "\t";
	}
}
void main()

{
	int count, nachStoinost;
	cin >> count;
	int * chetni = new int[count];
	cout << "Nachalna stoinost: ";
	cin >> nachStoinost;
	for (int i = 0; i < count; i++) {

		while (nachStoinost % 2 != 0) {
			cin >> nachStoinost;
		}
		chetni[i] = nachStoinost;
		nachStoinost += 2;
	}
	cout << "before" << endl;
	print(chetni, count);
	reverse(chetni, count);
	cout << endl;
	cout << "after" << endl;
	print(chetni, count);
	cout << endl;
	system("pause");
}