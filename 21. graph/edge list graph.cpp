#include<bits/stdc++.h>
using namespace std;

int main() {
	// edges list graph unweighted
	int no_edges;
	cin >> no_edges;
	vector<pair<int, int>> edges;
	for (int i = 0; i < no_edges; i++) {
		int x, y;
		cin >> x >> y;
		edges.push_back({x, y});
	}

	// edge list graph weighted
	vector<tuple<int, int, int>> edge;
	for (int i = 0; i < no_edges; i++) {
		int x, y, w;
		cin >> x >> y >> w;
		edges.push_back({x, y, w});
	}

	return 0;
}