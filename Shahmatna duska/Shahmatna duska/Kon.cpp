#include <iostream>
using namespace std;
const int N = 8,MAXN=N*N;
int h[N][N] = { 0 };
int dx[] = { 2,1,-1,-2,-2,-1,1,2 };
int dy[] = { 1,2,2,1,-1,-2,-2,-1 };
void print() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << h[i][j] << "\t";
		}
		cout << endl;
	}
}
void NextMove(int x, int y, int i) {
	h[x][y] = i;
	if (i == MAXN) {
		print(); return;
	}
	for (int k = 0; k < N; k++) {
		int nx = x + dx[k];
		int ny = y + dy[k];
		if (nx < N && nx >= 0 && ny < N && ny >= 0 && h[nx][ny] == 0) {
			NextMove(nx, ny, i + 1);
		}

	}
	h[x][y] = 0;

}
void main() {
	NextMove(0, 7, 1);
	
	system("pause");
}
	