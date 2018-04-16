/*
Da se napishe  programa za vyvejdane na poredica ot celi polojitelni chisla i neinoto izvejdane vurhy ekrana v obraten red
za krai na poredicata ot klavieturata se vuvejda 0 
*/
#include <iostream>
using namespace std;

struct elem {
	int key;
	elem * next;
} *start = NULL, *p /* pomoshten ukazatel */;
void push(int element) {
	p = start;
	start = new elem;
	start->key = element;
	start->next = p;
}
int pop(int &element) {
	if (start) {
		p = start;
		element = start->key;
		start = start->next;
		delete p;
		return 1;
	}
	else {
		return 0;
	}
}
void main() {
	int n;
	cout << " Num to add in stack : ";
	cin >> n;
	while (n !=0) {
		cout << " Num to add in stack : ";
		if (n > 0) {
			push(n);
		}
		cin >> n;
	}
	cout << endl;
	while (pop(n)) {
		cout << n << "\t";
	}
	cout << endl;
	system("pause");
}
