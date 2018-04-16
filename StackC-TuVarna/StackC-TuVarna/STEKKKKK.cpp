#include <iostream>
using namespace std;
struct elem {
	int key;
	elem * next;
} *start = NULL, *p /* pomoshten ukazatel */;
void main() {

}/* 2 variqnta za inicializaciq ,  
   1vi variqtn -  pri definiciq na strukturata ->> *START = NULL

   2ri variqnt - chrez funkciq  - > voint init(elem *st) { st = NULL; } 
*/

// Dobavqne na element v steka  - > 
/*
void push(int element) {
p=start;
start = new elem;
start -> key = element;
start->next = p;
}
*/
void push(int element) {
	p=start;
	start = new elem;
	start -> key = element;
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
