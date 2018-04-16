#include <iostream>
using namespace std;
struct elem {
	int key;
	elem *next;
	elem *prev;
}*start = NULL;
//inicializaciq
//chrez funkciq (...) 
// ili chrez tova gore (*start = NULL;)
//vkliuchvane na element
//a) v nachaloto na spisyka
void add_beginning(int n) {
	elem *p = start;
	start = new elem;
	start->key = n;
	start->next = p;
	start->prev = NULL;
	if (p) {
		p->prev = start;
	}
}
void add_mid(int n, int k) {
	elem *p = start, *q;
	while (p->key != k) {
		p = p->next;
	}
	q = new elem;
	q->next = p->next;
	p->next->prev = q;
	p->next = q;
	q->prev = p;
}
void add_end(int n) {
	elem *p = start, *q;
	q = new elem;
	q->key = n;
	q->next = NULL;
	if (start) {
		while (p->next) {
			p = p->next;
		}
		p->next = q;
	}
	else {
		start = q;
	}
	q->prev = p;
}
int delete_beginning(int &n) {
	elem *p = start;
	if (start) {
		n = start->key;
		if (start->next) {
			start = start->next;
			start->prev = NULL;
		}
		else {
			start = NULL;
		}
		delete p;
		return 1;
	}
	else {
		return 0;
	}
}
int delete_end(int &n) {
	elem *p = start;
	if (start) {
		while (p->next) {
			p = p->next;
		}
		n = p->key;
		if (p->prev) {
			p->prev->next = NULL;
		}
		else {
			start = NULL;
		}
		delete p;
		return 1;
	}
	else {
		return 0;
	}
}
int delete_Any(int n) {
	elem *p = start;
	if (start) {
		while ((p->key != n) && (p->next != NULL)) {
			p = p->next;
		}
		if (p->key == n) {
			if (p->prev) {
				p->prev->next = p->next;
				if (p->next) {
					p->next->prev = p->prev;
				}
			}
			else {
				if (p->next) {
					p->next->prev = NULL;
					start = p->next;
				}
				else {
					start = NULL;
				}
			}

		}
		delete p;
		return 1;
	}
	else {
		return 0;
	}
}
void main() {
	int m;
		do {
			cin >> m;
			if (m > 0) {
				add_beginning(m);
			}while (m >= 0);
			delete_beginning(m);

		}
}