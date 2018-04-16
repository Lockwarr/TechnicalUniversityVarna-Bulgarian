#include <iostream> 
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void main() {
	int situations;
	int resultCounter = 0;
	int * result;
	int beerCount;
	int differentBeersCount;
	cin >> situations;
	for (int i = 0; i < situations; i++) {
		cin.clear();
		cin.ignore();
		cin >> beerCount;
		cin >> differentBeersCount;
		int * arrayOfBeers = new int[beerCount - 1];
		for (int p = 0; p < differentBeersCount; p++) {
			cin >> arrayOfBeers[p];
		}
		for (int z = 0; z < beerCount - differentBeersCount + 1; z++) {
			if (arrayOfBeers[z] != arrayOfBeers[z + 1]
				&& arrayOfBeers[z] != arrayOfBeers[z + 2]
				&& arrayOfBeers[z + 1] != arrayOfBeers[z + 2]) {
				cout << z + 1 << " " << (z + 2) + 1 << endl;
			}
		}
	}
	system("pause");
}