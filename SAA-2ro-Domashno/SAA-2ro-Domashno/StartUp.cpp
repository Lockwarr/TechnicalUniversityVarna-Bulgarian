#include <iostream>
using namespace std;

struct element
{
	int key;
	element *next;
}*Left = NULL, *Right = NULL, *Left_h = NULL, *Right_h = NULL, *way;

void pushLeft(int n, element *&Left, element *&Right)
{
	way = Left;
	Left = new element;
	Left->key = n;
	Left->next = way;
	if (Right == NULL)
	{
		Right = Left;
	}
}

void pushRight(int n, element *&Left, element *&Right)
{
	way = Right;
	Right = new element;
	Right->key = n;
	Right->next = NULL;
	if (Left == NULL)
		Left = Right;
	else
		way->next = Right;
}

int popLeft(int &n, element *&Left, element *&Right)
{
	if (Left)
	{
		n = Left->key;
		way = Left;
		Left = Left->next;
		if (Left == NULL)
			Right = NULL;
		delete way;
		return 1;
	}
	else
		return 0;
}

void main()
{
	int elem = 0;
	int choice;
		cout << "Choose option to push in the deque?" << endl;
		cout << "1 - Left to right" << endl;
		cout << "2 - Right to left" << endl;
		cin >> choice;
		if (choice = 1)
		{
			cout << "Push elements until you enter 0" << endl;
			do
			{
				cout << "Element: ";
				cin >> elem;
				if (elem != 0)
				{
					pushLeft(elem, Left, Right);
					pushLeft(elem, Left_h, Right_h);
				}
			} while (elem != 0);
		}
		else
		{
			cout << "Push elements until you enter 0" << endl;
			do
			{
				cout << "Element: ";
				cin >> elem;
				if (elem != 0)
				{
					pushRight(elem, Left, Right);
					pushRight(elem, Left_h, Right_h);
				}
			} while (elem != 0);
		}

		cout << endl;

		int searched = 0;
		cout << "The element you are looking for: ";
		cin >> searched;
		bool flag = true;

		while (popLeft(elem, Left_h, Right_h))
		{
			if (searched == elem)
			{
				flag = false;
				cout << "The element you are looking for is in the deque!" << endl;
				break;
			}
		}

		if (flag)
		{
			cout << "The element you are looking for is not in the deque!" << endl;
			pushLeft(searched, Left, Right);
			cout << "Your element was add to the left side of the deque!" << endl;
		}
	system("pause");
}