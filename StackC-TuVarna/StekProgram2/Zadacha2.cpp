/*programa da se realizira dinamichna stek S ot celi chisla, koito da se preobrazvua v dva drugi steka P i Q,
sydurjashi syuotvetno polojitelnite i otricatelnite stoinosti na S ,
Sydurjanieto na dvata steka da se izvede na ekrana*/

#include <iostream>
using namespace std;
struct elem {
	int key;
	elem * next;
} *p, *s = NULL, *ps = NULL, *qs = NULL;
void push(int n, elem *&start);
int pop(int &n, elem *&start);

void main() {
	int num;
	cout << "Vuvedete stoinost : ";
	cin >> num;
	while (num != 0) {
		push(num, s);
		cin >> num;
	}
	while (pop(num, s)) {
		if (num > 0) {
			push(num, ps);
		}
		else {
			push(num, qs);
		}
	}
	cout << endl;
	cout << " Stek P: ";
	while (pop(num, ps))
		cout << num << "\t";
	cout << endl;
	cout << "Stek Q: ";
	while (pop(num, qs)) {
		cout << num << "\t";
	}
	cout << endl;
	system("pause");

}
void push(int n, elem *&start) {
	p = start;
	start = new elem;
	start->key = n;
	start->next = p;
}
int pop(int &n, elem *&start) {
	if (start) {
		p = start;
		n = start->key;
		start = start->next;
		delete p;
		return 1;
	}
	else {
		return 0;
	}
}
