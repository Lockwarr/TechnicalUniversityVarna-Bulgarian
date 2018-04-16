#include <iostream> 
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void main() {
	int numbersCount;
	cin >> numbersCount;
	int * numbersArr = new int[numbersCount];
	int * numbersArrDeliteli = new int[numbersCount];
	for (int i = 0; i < numbersCount; i++) {
		cin >> numbersArr[i];
	}
	for (int i = 0; i < numbersCount; i++) {
		for (int z = 1; z <= numbersArr[i]; z++) {
			if (numbersArr[i] % z == 0) {
				numbersArrDeliteli[i]++;
			}
		}
	}
	for (int z = 0; z < numbersCount - 1; z++) {
		for (int i = 0; i < numbersCount - 1; i++) {
			if (numbersArrDeliteli[i + 1] < numbersArrDeliteli[i]) {
				int temp1 = numbersArrDeliteli[i];
				int temp2 = numbersArr[i];
				numbersArrDeliteli[i] = numbersArrDeliteli[i + 1];
				numbersArrDeliteli[i + 1] = temp1;
				numbersArr[i] = numbersArr[i + 1];
				numbersArr[i + 1] = temp2;
			}
		}
	}
	for (int i = 0; i < numbersCount; i++) {
		cout << numbersArr[i] << endl;
	}

	system("pause");
}