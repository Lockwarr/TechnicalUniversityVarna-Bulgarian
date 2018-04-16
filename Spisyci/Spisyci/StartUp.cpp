#include<iostream>
using namespace std;
struct elem {
	int key;
	elem *next;
}*start = NULL;
/*
void InicializaciqNaStart(elem *start) {
	start = NULL;
}
*/

/* DOBAVQNE na eLEMeNT -->>>>*/
void add_Begining(int n) {
	elem *p = start;
	start = new elem;
	start->key = n;
	start->next = p;
}
void add_Mid(int n, int k) {
	elem *p = start, *q;
	while (p->key != k) {
		p = p->next;
		q = new elem;
		q->key = n;
		q->next = p->next;
		p->next = q;
	}

}
void add_End(int n) {
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
}
/*IZKLIUCHVaNE na Elemenet ->>>>*/
int delete_Beginning(int &n) {
	elem *p = start;
	if (start) {
		n = start->key;
		start = start->next;
		delete p;
		return 1;
	}
	else {
		return 0;
	}
}
int delete_End(int &n) {
	elem *p = start;
	elem *q = start;
	if (start) {
		if (p->next) {
			while (p->next) {
				q = p;
				p = p->next;
			}
			q->next = NULL;
		}
		else {
			start = NULL;
		}
		n = p->key;
		delete p;
		return 1;

	}
	else {
		return 0;

	}
}
void print_list() {
	elem *p = start;
	if (p) {

		cout << "Elements: ";
		while (p) {
			cout << p->key << "\t";
			p = p->next;
		}
		cout << endl;
	}
	else {
		cout << "No elements";
	}
}
int search_elem(int n) {
	elem *p = start;
	if (start) {
		while (p->key != n && p->next)
			p = p->next;
		if (p->key == n) {
			return 1;
		}
		else {
			return 0;
		}
	}
	else {
		return 0;
	}
}
void delete_DuplicatesWithoutTheFirstOne() {

	elem *current = start;
	while (current->next) {
		elem *prev = current;
		elem *checker = current->next;
		while (checker->next) {
			if (current->key == checker->key) {
				prev->next = checker->next;
				delete checker;
				checker = prev->next;
			}
			else {
				prev = prev->next;
				checker = checker->next;
			}
		}	if (current->key == checker->key) {
			prev->next = checker->next;
			delete checker;
			checker = prev->next;
		}
		else {
			prev = prev->next;
			checker = checker->next;
		}
		if (current->next) {
			current = current->next;
		}
	}
}

void main() {
	int length;
	cout << "Enter how many nums to input!: ";
	cin >> length;
	for (int i = 0; i < length; i++) {
		elem *newelem = new elem;
		cin >> newelem->key;
		add_End(newelem->key);
	}
	cout << "Elems before deleting duplicates: " << endl;
	print_list();
	delete_DuplicatesWithoutTheFirstOne();
	cout << "Elems after deleting duplicates: " << endl;
	print_list();
	system("pause");
}