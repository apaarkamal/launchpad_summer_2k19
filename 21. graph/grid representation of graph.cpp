#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int grid[n + 1][n + 1];
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			grid[i][j] = 0;
		}
	}
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		grid[x][y] = 1;
		grid[y][x] = 1; // undirected graph
	}



	return 0;
}