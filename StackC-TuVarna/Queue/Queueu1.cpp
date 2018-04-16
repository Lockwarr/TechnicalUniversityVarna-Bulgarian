#include<iostream>
using namespace std;
struct elem {
	int key;
	elem *next;
}*first = NULL, *last = NULL,*p;
void push(int n);
void main() {
	
}
void push(int n) {
	p = last;
	last = new elem;
	last->key = n;
	last->next = NULL;
	if (p != NULL) {
		p->next = last;
	}
	if (first == NULL) {
		first = last;
	}
}
int pop(int &n) {
	if (first) {
		n = first->key;
		p = first;
		first = first->next;
	}
	if (first == NULL) {
		last = NULL;

		delete p;
		return 1;
	}
	else {
		return 0;
	}
}
