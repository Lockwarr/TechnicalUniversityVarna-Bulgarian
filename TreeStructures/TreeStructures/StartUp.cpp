#include<iostream>
using namespace std;
struct elem {
	int key;
	elem *left;
	elem *right;
}*root = NULL;
//incializaciq -> *root = NULL - pri definirane na strukturata;
//obhojdane v prav red 
void preOrder(elem *t) {
	if (t) {
		cout << t->key << "\t";
		preOrder(t->left);
		preOrder(t->right);
	}
}
void inOrder(elem *t) {
	if (t) {
		inOrder(t->left);
		cout << t->key << "\t";
		inOrder(t->right);
	}
}
void postOrder(elem *t) {
	if (t) {
		postOrder(t->left);
		postOrder(t->right);
		cout << t->key << "\t";
	}
}
void add(int n, elem *&t) {
	if (t == NULL) {
		t = new elem;
		t->key = n;
		t->left = t->right = NULL;
	}
	else {
		if (t->key < n) {
			add(n, t->right);
		}
		else if (t->key > n) {
			add(n, t->left);
		}
	}
}
void search(int n, elem *t) {
	if (t) {
		if (t->key == n) {
			cout << "Ima element s tyrsena stoinost \n";
		}
		else {
			if (t->key < n) {
				search(n, t->right);
			}
			else {
				search(n, t->left);
			}
		}
	}
	else {
		cout << "Nqma element";
	}
}
//Da se suzdade podredeno dvoichno dyrvo , da se obhodi dyrvoto v prav vutreshen i obraten red ,
// da se potursi dali ima element sys zadadena ot potrebitelq stoinost
void main() {
	int length;
	cin >> length;
	for (int i = 0; i < length; i++) {

	}
}