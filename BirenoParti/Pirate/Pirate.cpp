#include <iostream> 
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void main() {
	int width, height, friendsCount;
	cin >> width >> height >> friendsCount;
	string * Map[5][5];
	for (int i = 0; i < height; i++) {
		for (int p = 0; p < width; p++) {
			cin >> Map[i][p];
		}
	}
	for (int i = 0; i < height; i++) {
		for (int p = 0; p < width; p++) {
			cout << Map[i][p];
		}
	}
}